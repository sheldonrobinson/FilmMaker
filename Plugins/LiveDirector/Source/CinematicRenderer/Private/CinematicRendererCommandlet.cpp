#include "CinematicRendererCommandlet.h"
#include "CinematicRendererBPLibrary.h"
#include "LevelSequence.h"
#include "Misc/Paths.h"
#include "MoviePipelineQueue.h"
#include "MoviePipelineExecutor.h"
#include "MoviePipelineNewProcessExecutor.h"
#include "MoviePipelineOutputSetting.h"
#include "MoviePipelineMP4EncoderCommon.h"
#include "MoviePipelineMP4EncoderOutput.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"

int32 UCinematicRendererCommandlet::Main(const FString& Params)
{
	FString JsonPath;
	if (!FParse::Value(FCommandLine::Get(), TEXT("JobFile="), JsonPath))
	{
		UE_LOG(LogTemp, Error, TEXT("Usage: -JobFile=Path/To/RenderJobs.json"));
		return 1;
	}

	FString JsonContent;
	if (!FFileHelper::LoadFileToString(JsonContent, *JsonPath))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load job file: %s"), *JsonPath);
		return 1;
	}

	TSharedPtr<FJsonObject> RootObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonContent);

	if (!FJsonSerializer::Deserialize(Reader, RootObject) || !RootObject.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid JSON format."));
		return 1;
	}

	const TArray<TSharedPtr<FJsonValue>>* JobsArray;
	if (!RootObject->TryGetArrayField(TEXT("Jobs"), JobsArray))
	{
		UE_LOG(LogTemp, Error, TEXT("No 'Jobs' array found in JSON."));
		return 1;
	}

	// Create queue
	UMoviePipelineQueue* Queue = NewObject<UMoviePipelineQueue>();

	for (const TSharedPtr<FJsonValue>& JobValue : *JobsArray)
	{
		TSharedPtr<FJsonObject> JobObj = JobValue->AsObject();
		if (!JobObj.IsValid()) continue;

		FString MapPath = JobObj->GetStringField(TEXT("Map"));
		FString SequencePath = JobObj->GetStringField(TEXT("Sequence"));
		FString OutputDir = JobObj->GetStringField(TEXT("OutputDir"));

		int32 ResX, ResY, FrameRate, Quality, Profile, BitRate;
		if (!JobObj->TryGetNumberField(TEXT("ResX"), ResX)) {
			ResX = 1920;
		}
		if (!JobObj->TryGetNumberField(TEXT("ResY"), ResY)) {
			ResY = 1080;
		}
		if (!JobObj->TryGetNumberField(TEXT("FrameRate"), FrameRate)) {
			FrameRate = 24;
		}
		if (!JobObj->TryGetNumberField(TEXT("Quality"), Quality)) {
			Quality = 2;
		}
		if (!JobObj->TryGetNumberField(TEXT("Profile"), Profile)) {
			Profile = 2;
		}
		if (!JobObj->TryGetNumberField(TEXT("BitRate"), BitRate)) {
			BitRate = 20;
		}
		bool bIncludeAudio = true;
		if (JobObj->TryGetBoolField(TEXT("IncludeAudio"), bIncludeAudio)) {
			bIncludeAudio = true;
		}

		// Create job
		UMoviePipelineExecutorJob* Job = Queue->AllocateNewJob(UMoviePipelineExecutorJob::StaticClass());
		Job->JobName = FPaths::GetBaseFilename(SequencePath);
		Job->Map = FSoftObjectPath(MapPath);
		Job->Sequence = FSoftObjectPath(SequencePath);

		// Config
		UMoviePipelinePrimaryConfig* Config = NewObject<UMoviePipelinePrimaryConfig>(Job);
		Job->SetConfiguration(Config);
		const FIntPoint Resolution(ResX, ResY);
		const FFrameRate Fps(FrameRate, 1);
		// Output settings
		if (UMoviePipelineMP4EncoderOutput* MP4Output = (UMoviePipelineMP4EncoderOutput*)Job->GetConfiguration()->FindOrAddSettingByClass(UMoviePipelineMP4EncoderOutput::StaticClass()))
		{
			
			// MP4 Output
			MP4Output->bIncludeAudio = bIncludeAudio;
			ECinematicRendererPlaybackQuality PlaybackQuality = ECinematicRendererPlaybackQuality::High;
			switch (Quality) {
			case 0:
				PlaybackQuality = ECinematicRendererPlaybackQuality::Low;
				break;
			case 1:
				PlaybackQuality = ECinematicRendererPlaybackQuality::Medium;
				break;
			case 2:
				PlaybackQuality = ECinematicRendererPlaybackQuality::High;
				break;
			default:
				PlaybackQuality = ECinematicRendererPlaybackQuality::High;
				break;
			}
			EMoviePipelineMP4EncodeProfile EncodeProfile = EMoviePipelineMP4EncodeProfile::High;
			switch (Profile) {
			case 0:
				EncodeProfile = EMoviePipelineMP4EncodeProfile::Baseline;
				break;
			case 1:
				EncodeProfile = EMoviePipelineMP4EncodeProfile::Main;
				break;
			case 2:
				EncodeProfile = EMoviePipelineMP4EncodeProfile::High;
				break;
			default:
				EncodeProfile = EMoviePipelineMP4EncodeProfile::High;
				break;
			}
			// Add MP4 encoder output setting
			FCinematicRendererVariableBitrateEstimate estimate = UCinematicRendererBPLibrary::EstimateVideoBitrateRange(Resolution, Fps, PlaybackQuality);
			MP4Output->bIncludeAudio = true; // Include audio in MP4
			MP4Output->AverageBitrateInMbps = BitRate; // in Mbps
			MP4Output->MaxBitrateInMbps = FMath::Clamp(estimate.Max / 1000.0, 0.1, 50.0); // in Mbps
			MP4Output->EncodingProfile = EncodeProfile;
		}
		// Output settings
		if (UMoviePipelineOutputSetting* OutputSetting = (UMoviePipelineOutputSetting*)Job->GetConfiguration()->FindOrAddSettingByClass(UMoviePipelineOutputSetting::StaticClass()))
		{
			OutputSetting->OutputResolution = Resolution;
			OutputSetting->OutputFrameRate = Fps;
			OutputSetting->bUseCustomFrameRate = true;
			OutputSetting->OutputDirectory.Path = OutputDir;
			OutputSetting->FileNameFormat = TEXT("{sequence_name}");
		}
	}

	// Executor
	UMoviePipelineNewProcessExecutor* Executor = NewObject<UMoviePipelineNewProcessExecutor>();
	Executor->OnExecutorFinished().AddLambda([](UMoviePipelineExecutorBase* Exec, bool bSuccess)
	{
		UE_LOG(LogTemp, Display, TEXT("All batch renders finished. Success: %s"), bSuccess ? TEXT("Yes") : TEXT("No"));
		FPlatformMisc::RequestExit(false);
	});

	Executor->Execute(Queue);

	return 0;
}

int32 UCinematicRendererCommandlet::ProcessJSON(const FString& Json) {
	TSharedPtr<FJsonObject> RootObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Json);

	if (!FJsonSerializer::Deserialize(Reader, RootObject) || !RootObject.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid JSON format."));
		return 1;
	}

	const TArray<TSharedPtr<FJsonValue>>* JobsArray;
	if (!RootObject->TryGetArrayField(TEXT("Jobs"), JobsArray))
	{
		UE_LOG(LogTemp, Error, TEXT("No 'Jobs' array found in JSON."));
		return 1;
	}

	// Create queue
	UMoviePipelineQueue* Queue = NewObject<UMoviePipelineQueue>();

	for (const TSharedPtr<FJsonValue>& JobValue : *JobsArray)
	{
		TSharedPtr<FJsonObject> JobObj = JobValue->AsObject();
		if (!JobObj.IsValid()) continue;

		FString MapPath = JobObj->GetStringField(TEXT("Map"));
		FString SequencePath = JobObj->GetStringField(TEXT("Sequence"));
		FString OutputDir = JobObj->GetStringField(TEXT("OutputDir"));

		int32 ResX, ResY, FrameRate, Quality, Profile, BitRate;
		if (!JobObj->TryGetNumberField(TEXT("ResX"), ResX)) {
			ResX = 1920;
		}
		if (!JobObj->TryGetNumberField(TEXT("ResY"), ResY)) {
			ResY = 1080;
		}
		if (!JobObj->TryGetNumberField(TEXT("FrameRate"), FrameRate)) {
			FrameRate = 24;
		}
		if (!JobObj->TryGetNumberField(TEXT("Quality"), Quality)) {
			Quality = 2;
		}
		if (!JobObj->TryGetNumberField(TEXT("Profile"), Profile)) {
			Profile = 2;
		}
		if (!JobObj->TryGetNumberField(TEXT("BitRate"), BitRate)) {
			BitRate = 20;
		}
		bool bIncludeAudio = true;
		if (JobObj->TryGetBoolField(TEXT("IncludeAudio"), bIncludeAudio)) {
			bIncludeAudio = true;
		}

		// Create job
		UMoviePipelineExecutorJob* Job = Queue->AllocateNewJob(UMoviePipelineExecutorJob::StaticClass());
		Job->JobName = FPaths::GetBaseFilename(SequencePath);
		Job->Map = FSoftObjectPath(MapPath);
		Job->Sequence = FSoftObjectPath(SequencePath);

		// Config
		UMoviePipelinePrimaryConfig* Config = NewObject<UMoviePipelinePrimaryConfig>(Job);
		Job->SetConfiguration(Config);
		const FIntPoint Resolution(ResX, ResY);
		const FFrameRate Fps(FrameRate, 1);
		// Output settings
		if (UMoviePipelineMP4EncoderOutput* MP4Output = (UMoviePipelineMP4EncoderOutput*)Job->GetConfiguration()->FindOrAddSettingByClass(UMoviePipelineMP4EncoderOutput::StaticClass()))
		{

			// MP4 Output
			MP4Output->bIncludeAudio = bIncludeAudio;
			ECinematicRendererPlaybackQuality PlaybackQuality = ECinematicRendererPlaybackQuality::High;
			switch (Quality) {
			case 0:
				PlaybackQuality = ECinematicRendererPlaybackQuality::Low;
				break;
			case 1:
				PlaybackQuality = ECinematicRendererPlaybackQuality::Medium;
				break;
			case 2:
				PlaybackQuality = ECinematicRendererPlaybackQuality::High;
				break;
			default:
				PlaybackQuality = ECinematicRendererPlaybackQuality::High;
				break;
			}
			EMoviePipelineMP4EncodeProfile EncodeProfile = EMoviePipelineMP4EncodeProfile::High;
			switch (Profile) {
			case 0:
				EncodeProfile = EMoviePipelineMP4EncodeProfile::Baseline;
				break;
			case 1:
				EncodeProfile = EMoviePipelineMP4EncodeProfile::Main;
				break;
			case 2:
				EncodeProfile = EMoviePipelineMP4EncodeProfile::High;
				break;
			default:
				EncodeProfile = EMoviePipelineMP4EncodeProfile::High;
				break;
			}
			// Add MP4 encoder output setting
			FCinematicRendererVariableBitrateEstimate estimate = UCinematicRendererBPLibrary::EstimateVideoBitrateRange(Resolution, Fps, PlaybackQuality);
			MP4Output->bIncludeAudio = true; // Include audio in MP4
			MP4Output->AverageBitrateInMbps = BitRate; // in Mbps
			MP4Output->MaxBitrateInMbps = FMath::Clamp(estimate.Max / 1000.0, 0.1, 50.0); // in Mbps
			MP4Output->EncodingProfile = EncodeProfile;
		}
		// Output settings
		if (UMoviePipelineOutputSetting* OutputSetting = (UMoviePipelineOutputSetting*)Job->GetConfiguration()->FindOrAddSettingByClass(UMoviePipelineOutputSetting::StaticClass()))
		{
			OutputSetting->OutputResolution = Resolution;
			OutputSetting->OutputFrameRate = Fps;
			OutputSetting->bUseCustomFrameRate = true;
			OutputSetting->OutputDirectory.Path = OutputDir;
			OutputSetting->FileNameFormat = TEXT("{sequence_name}");
		}
	}

	// Executor
	UMoviePipelineNewProcessExecutor* Executor = NewObject<UMoviePipelineNewProcessExecutor>();
	Executor->OnExecutorFinished().AddLambda([](UMoviePipelineExecutorBase* Exec, bool bSuccess)
		{
			UE_LOG(LogTemp, Display, TEXT("All batch renders finished. Success: %s"), bSuccess ? TEXT("Yes") : TEXT("No"));
			FPlatformMisc::RequestExit(false);
		});

	Executor->Execute(Queue);

	return 0;
}

