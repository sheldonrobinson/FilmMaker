// Copyright Epic Games, Inc. All Rights Reserved.




#include "CinematicRendererBPLibrary.h"
#include "CinematicRenderer.h"
#include "Misc/DateTime.h"
#include "Math/UnrealMathUtility.h"
#include "MoviePipelineQueue.h"
#include "MoviePipelineExecutor.h"
#if WITH_EDITOR
#include "MoviePipelinePIEExecutor.h"
#else
#include "MoviePipelineInProcessExecutor.h"
#endif

#include "MoviePipelineOutputSetting.h"
#include "MoviePipelineMP4EncoderCommon.h"
#include "MoviePipelineMP4EncoderOutput.h"
#include "MoviePipelineQueueEngineSubsystem.h"
#include "Misc/Paths.h"
#include "Engine/World.h"


FCinematicRendererVariableBitrateEstimate UCinematicRendererBPLibrary::EstimateVideoBitrateRange(const FIntPoint& Resolution, const FFrameRate& FrameRate, ECinematicRendererPlaybackQuality PlaybackQuality) {
    // --- 1) Base BPP from "quality preset"
    // These are typical starting points; adjust to your environment.
    // Medium ~0.10 is a common rule-of-thumb; Low ~0.07. [1](https://streamshark.io/blog/bpp-calculator-for-live-stream-bitrate/)[2](https://www.omnicalculator.com/other/streaming-bitrate)
    float qualityFactor = 0.10f;
    switch (PlaybackQuality) {
        case ECinematicRendererPlaybackQuality::Low:    qualityFactor = 0.0595f; break;
        case ECinematicRendererPlaybackQuality::Medium: qualityFactor = 0.10f; break;
        case ECinematicRendererPlaybackQuality::High:   qualityFactor = 0.175f; break; // higher quality / more bits
    }

    // --- 5) Sanity clamps on inputs
    int width = FMath::Max(1, Resolution.X);
    int height = FMath::Max(1, Resolution.Y);
    double framerate = FMath::Clamp(FrameRate.AsDecimal(), 1.0, 240.0);

    // --- 6) Compute
    const double pixelsPerSecond = static_cast<double>(width) * height * framerate;
    const double bitrateBps = pixelsPerSecond * qualityFactor;

    // Convert to kbps
    double kbps = bitrateBps / 1000.0;

    // --- 7) Provide a suggested VBR range around target
    // (If you’re using CBR, you can just take kbps.)
    double minKbps = kbps * 0.80;
    double maxKbps = kbps * 1.25;

    // --- 8) Optional clamps to keep results reasonable for tiny/huge resolutions
    // You can remove these if you want pure math output.
	FCinematicRendererVariableBitrateEstimate estimate(
        FMath::Clamp(kbps,    50.0, 200000.0),
        FMath::Clamp(minKbps, 50.0, 200000.0),
        FMath::Clamp(maxKbps, 50.0, 200000.0));

    return estimate;
}

void UCinematicRendererBPLibrary::RenderCinematicByParametersInternal(const FSoftObjectPath& SequencePath, const FSoftObjectPath& MapPath, const FIntPoint& Resolution, const FFrameRate& FrameRate, ECinematicRendererPlaybackQuality PlaybackQuality, ECinematicRendererEncoderProfile EncodeProfile) {

    // const FName LevelName = FName(*FPackageName::ObjectPathToPackageName(SequencePath.ToString()));
    // UGameplayStatics::OpenLevel(WorldContextObject, LevelName, bAbsolute, Options);
    // Get the Movie Render Queue subsystem
    
    UMoviePipelineQueueEngineSubsystem* QueueSubsystem = (UMoviePipelineQueueEngineSubsystem*)GEngine->GetEngineSubsystem<UMoviePipelineQueueEngineSubsystem>();

    // Create a new queue and job
    UMoviePipelineQueue* Queue = (UMoviePipelineQueue*)QueueSubsystem->GetQueue();
    Queue->DeleteAllJobs(); // Clear old jobs

    UMoviePipelineExecutorJob* Job = (UMoviePipelineExecutorJob*)Queue->AllocateNewJob(UMoviePipelineExecutorJob::StaticClass());
    // Get current UTC time
    FDateTime Now = FDateTime::UtcNow();

    // Convert to ISO 8601 string (e.g., "2026-02-11T15:42:30Z")
    FString IsoTimestamp = Now.ToString(TEXT("%Y%m%dT%H%M%S"));
    // Convert FString to const TCHAR*
    // const TCHAR* MyTChar = *IsoTimestamp;
    FString JobName = FString::Printf(TEXT("CinematicRender-%s"), *IsoTimestamp);

    Job->JobName = JobName; // TEXT("Cinematic-Render-MP4");
    Job->Map = MapPath; // Change to your map
    Job->Sequence = SequencePath; // Change to your sequence

    // Config
    UMoviePipelinePrimaryConfig* Config = NewObject<UMoviePipelinePrimaryConfig>(Job);
    Job->SetConfiguration(Config);

    // Apply settings
    if (UMoviePipelineMP4EncoderOutput* MP4Output = (UMoviePipelineMP4EncoderOutput*)Job->GetConfiguration()->FindOrAddSettingByClass(UMoviePipelineMP4EncoderOutput::StaticClass()))
    {
        // Add MP4 encoder output setting
        FCinematicRendererVariableBitrateEstimate estimate = UCinematicRendererBPLibrary::EstimateVideoBitrateRange(Resolution, FrameRate, PlaybackQuality);
        MP4Output->bIncludeAudio = true; // Include audio in MP4
        MP4Output->AverageBitrateInMbps = FMath::Clamp(estimate.Target / 1000, 0.1, 50.0); // in Mbps
        MP4Output->MaxBitrateInMbps = FMath::Clamp(estimate.Max / 1000.0, 0.1, 50.0); // in Mbps
        // MP4Output->EncodingProfile = (uint8) EncodeProfile;
    }

    // Output settings
    if (UMoviePipelineOutputSetting* OutputSettings = (UMoviePipelineOutputSetting*)Job->GetConfiguration()->FindOrAddSettingByClass(UMoviePipelineOutputSetting::StaticClass()))
    {
        // Add basic output settings (resolution, frame rate, etc.)
        OutputSettings->OutputResolution = Resolution;
        OutputSettings->OutputFrameRate = FrameRate;
        OutputSettings->bUseCustomFrameRate = true;
        OutputSettings->OutputDirectory.Path = FPaths::ProjectSavedDir() / TEXT("MovieRenders");
        OutputSettings->FileNameFormat = TEXT("{sequence_name}");
    }

#if WITH_EDITOR
    // Create an executor to run the queue
    UMoviePipelinePIEExecutor* Executor = (UMoviePipelinePIEExecutor*)NewObject<UMoviePipelinePIEExecutor>();
    QueueSubsystem->RenderQueueWithExecutorInstance(Executor);
#else
    // Executor
    MoviePipelineInProcessExecutor* Executor = NewObject<MoviePipelineInProcessExecutor>();
    QueueSubsystem->RenderQueueWithExecutorInstance(Executor);
#endif
}

void UCinematicRendererBPLibrary::RenderCinematicByParametersWithLevelSequenceInternal(class ULevelSequence* Sequence, const FSoftObjectPath& MapPath, const FIntPoint& Resolution, const FFrameRate& FrameRate, ECinematicRendererPlaybackQuality PlaybackQuality, ECinematicRendererEncoderProfile EncodeProfile) {
    if(!Sequence) {
        UE_LOG(LogTemp, Error, TEXT("RenderCinematicSmartInternalBySequence: Invalid Sequence provided."));
        return;
	}
    // Get the Movie Render Queue subsystem
    UMoviePipelineQueueEngineSubsystem* QueueSubsystem = (UMoviePipelineQueueEngineSubsystem*)GEngine->GetEngineSubsystem<UMoviePipelineQueueEngineSubsystem>();

    // Create a new queue and job
    UMoviePipelineQueue* Queue = (UMoviePipelineQueue*)QueueSubsystem->GetQueue();
    Queue->DeleteAllJobs(); // Clear old jobs

    UMoviePipelineExecutorJob* Job = (UMoviePipelineExecutorJob*)Queue->AllocateNewJob(UMoviePipelineExecutorJob::StaticClass());
    // Get current UTC time
    FDateTime Now = FDateTime::UtcNow();

    // Convert to ISO 8601 string (e.g., "2026-02-11T15:42:30Z")
    FString IsoTimestamp = Now.ToString(TEXT("%Y%m%dT%H%M%S"));
    // Convert FString to const TCHAR*
    // const TCHAR* MyTChar = *IsoTimestamp;

    FString JobName = FString::Printf(TEXT("CinematicRender-%s"), *IsoTimestamp);
    Job->JobName = JobName; // TEXT("Cinematic-Render-MP4");
    Job->Map = MapPath; // Change to your map
    Job->SetSequence(Sequence); // Change to your sequence

    // Config
    UMoviePipelinePrimaryConfig* Config = NewObject<UMoviePipelinePrimaryConfig>(Job);
    Job->SetConfiguration(Config);

    // Apply settings
    if (UMoviePipelineMP4EncoderOutput* MP4Output = (UMoviePipelineMP4EncoderOutput*)Job->GetConfiguration()->FindOrAddSettingByClass(UMoviePipelineMP4EncoderOutput::StaticClass()))
    {
        // Add MP4 encoder output setting
        FCinematicRendererVariableBitrateEstimate estimate = UCinematicRendererBPLibrary::EstimateVideoBitrateRange(Resolution, FrameRate, PlaybackQuality);
        MP4Output->bIncludeAudio = true; // Include audio in MP4
        MP4Output->AverageBitrateInMbps = FMath::Clamp(estimate.Target / 1000, 0.1, 50.0); // in Mbps
        MP4Output->MaxBitrateInMbps = FMath::Clamp(estimate.Max / 1000.0, 0.1, 50.0); // in Mbps
        // MP4Output->EncodingProfile = (uint8) EncodeProfile;
    }

    // Output settings
    if (UMoviePipelineOutputSetting* OutputSettings = (UMoviePipelineOutputSetting*)Job->GetConfiguration()->FindOrAddSettingByClass(UMoviePipelineOutputSetting::StaticClass()))
    {
        // Add basic output settings (resolution, frame rate, etc.)
        OutputSettings->OutputResolution = Resolution;
        OutputSettings->OutputFrameRate = FrameRate;
        OutputSettings->bUseCustomFrameRate = true;
        OutputSettings->OutputDirectory.Path = FPaths::ProjectSavedDir() / TEXT("MovieRenders");
        OutputSettings->FileNameFormat = TEXT("{sequence_name}");
    }
#if WITH_EDITOR
    // Create an executor to run the queue
    UMoviePipelinePIEExecutor* Executor = (UMoviePipelinePIEExecutor*)NewObject<UMoviePipelinePIEExecutor>();
    QueueSubsystem->RenderQueueWithExecutorInstance(Executor);
#else
    // Executor
    MoviePipelineInProcessExecutor* Executor = NewObject<MoviePipelineInProcessExecutor>();
    QueueSubsystem->RenderQueueWithExecutorInstance(Executor);
#endif
}

void UCinematicRendererBPLibrary::RenderCinematicByParameters(const FString& SequencePath, const FString& MapPath, const FIntPoint& Resolution,const FFrameRate& FrameRate, ECinematicRendererPlaybackQuality PlaybackQuality, ECinematicRendererEncoderProfile EncodeProfile)
{
	UCinematicRendererBPLibrary::RenderCinematicByParametersInternal(FSoftObjectPath(MapPath), FSoftObjectPath(SequencePath), Resolution, FrameRate, PlaybackQuality, EncodeProfile);
}
