#include "LiveDirectorBPLibrary.h"
#include "Math/UnrealMathUtility.h"
#include "Internationalization/Internationalization.h"
#include "LevelSequenceActor.h"
#include "LevelSequencePlayer.h"
#include "MoviePipelineQueue.h"
#include "MoviePipelineQueueEngineSubsystem.h"
#include "Engine/StaticMeshActor.h"
#include "Components/LightComponent.h"
#include "Camera/CameraActor.h"
#include "Sound/SoundWaveProcedural.h"
//#if WITH_EDITOR
//#include "Editor/EditorEngine.h"
//#else
#include "Engine/World.h"
//#endif
#include "EngineUtils.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "IAssetTools.h"
#include "MovieScene.h"
#include "UObject/SavePackage.h"
#include "Tracks/MovieSceneAudioTrack.h"
#include "Tracks/MovieSceneCinematicShotTrack.h"
#include "Tracks/MovieSceneCameraCutTrack.h"
#include "MetaHumanMovieSceneMediaTrack.h"
#include "Sections/MovieSceneCameraCutSection.h"
#include "MetaHumanAudioTrack.h"
#include "Speech2FaceComponent.h"
#include "GameplayTagsComponent.h"
#include "LiveDirectorDataTableComponent.h"
#include "CinematicMovementComponent.h"
#include "GameplayTagsHelperLibrary.h"
#include "CinematicRendererBPLibrary.h"
#include "GenericPlatform/GenericPlatformProcess.h"
#include "UObject/ConstructorHelpers.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFileManager.h"
#include "ThirdPersonCharacter.h"
#include "unnu_tts/cxx-api.h"

static std::atomic_flag bIsPlayerStopped = ATOMIC_FLAG_INIT;
static std::atomic_flag bIsProcessing = ATOMIC_FLAG_INIT;

void ULiveDirectorBPLibrary::RenderMovieSceneQueue(const FString DependenciesDirectory, const FString OutputDirectory,
    const FIntPoint Resolution, const FFrameRate GlobalFrameRate)
{
	FString TtsModelsDirectory = FPaths::Combine(DependenciesDirectory, TEXT("tts"));
    FString MaleSpeakerModelDirectory = FPaths::Combine(TtsModelsDirectory, TEXT("male"));
    FString FemaleSpeakerModelDirectory = FPaths::Combine(TtsModelsDirectory, TEXT("female"));
    FString FemaleSpeakerModelPath = FPaths::Combine(FemaleSpeakerModelDirectory, TEXT("model.onnx"));
    FString MaleSpeakerModelPath = FPaths::Combine(MaleSpeakerModelDirectory, TEXT("model.onnx"));

    ut_add_speaker(TCHAR_TO_ANSI(*MaleSpeakerModelDirectory), 0, 0, "male");
    ut_add_speaker(TCHAR_TO_ANSI(*FemaleSpeakerModelDirectory), 0, 1, "female");

    unnufm::PiperTTS TtsVoices;

	// the 4 default voices, we can add more later if needed
	TtsVoices.setVoice("manny", 0, true); // male, robotic voice
	TtsVoices.setVoice("tar", 0, false); // male, human voice
	TtsVoices.setVoice("quinn", 1, true); // female, robotic voice
	TtsVoices.setVoice("ava", 1, false); // female, human voice

    IFileManager& FileManager = IFileManager::Get();

	FString ScriptsDirectory = FPaths::Combine(DependenciesDirectory, TEXT("scripts"));
    // 1. Find all .txt files in the directory
    // Parameters: Output Array, Search Pattern (e.g., "C:/MyFolder/*.txt"), Files?, Directories?
    FString SearchPattern = FPaths::Combine(ScriptsDirectory, TEXT("*.json"));
    TArray<FString> FileNames;
    FileManager.FindFiles(FileNames, *SearchPattern, true, false);
    unnufm::ProductionWrangler wrangler(TtsVoices);
    for (const FString& FileName : FileNames)
    {
        FString FullPath = FPaths::Combine(ScriptsDirectory, FileName);
        FString FileContent;

        // 2. Load the content of each found file
        if (FFileHelper::LoadFileToString(FileContent, *FullPath))
        {
            UE_LOG(LogTemp, Warning, TEXT("Loaded File %s: %s"), *FileName, *FileContent);
			std::string script_str = TCHAR_TO_UTF8(*FileContent);

            nlohmann::json j = nlohmann::json::parse(script_str);

            unnufm::Storyboard story = unnufm::ScriptParser::toStoryboard(j);
			for (const unnufm::scene_t& scene : story.scenes)
            {
				wrangler.perform(scene);
                ULiveDirectorBPLibrary::CreateAndRenderMovie(GEngine->GetWorld(), OutputDirectory, Resolution, GlobalFrameRate);
                if(!bIsProcessing.test_and_set()) {
					bIsProcessing.clear();
                    UE_LOG(LogTemp, Log, TEXT("Player stopped, moving to next skit..."));
				}
            }
        }
    }


//#if WITH_EDITOR
//    if (!IsRunningCommandlet() && GIsEditor)
//    {
//        ULiveDirectorBPLibrary::CreateAndRenderMovie(GEditor->GetEditorWorldContext(true).World(), OutputDirectory, Resolution, GlobalFrameRate);
//    } else {
//        ULiveDirectorBPLibrary::CreateAndRenderMovie(GEngine->GetWorld(), OutputDirectory, Resolution, GlobalFrameRate);
//    }
//#else
	
//#endif
}

// Example function to load text
//bool ULiveDirectorBPLibrary::LoadScriptFromFile(FString FilePath, FString* FileContent)
//{
    // Standard path points to your project's Content folder
    // FString FullPath = FPaths::  FPaths::ProjectContentDir() + FileName;
    
//    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
//
//    if (PlatformFile.FileExists(*FilePath))
//    {
//        return FFileHelper::LoadFileToString(FileContent,*FilePath);
//    }
//    return false;
//   
//}

void ULiveDirectorBPLibrary::ReadAllTextFiles(const FString& DirectoryPath)
{
    TArray<FString> FileNames;
    IFileManager& FileManager = IFileManager::Get();

    // 1. Find all .txt files in the directory
    // Parameters: Output Array, Search Pattern (e.g., "C:/MyFolder/*.txt"), Files?, Directories?
    FString SearchPattern = FPaths::Combine(DirectoryPath, TEXT("*.script.json"));
        FileManager.FindFiles(FileNames, *SearchPattern, true, false);

    for (const FString& FileName : FileNames)
    {
        FString FullPath = FPaths::Combine(DirectoryPath, FileName);
        FString FileContent;

        // 2. Load the content of each found file
        if (FFileHelper::LoadFileToString(FileContent, *FullPath))
        {
            UE_LOG(LogTemp, Warning, TEXT("Loaded File %s: %s"), *FileName, *FileContent);
        }
    }
}

void ULiveDirectorBPLibrary::CreateAndRenderMovie(
        UObject* WorldContextObject, const FString& OutputDirectory,
        const FIntPoint& Resolution, const FFrameRate& GlobalFrameRate)
{
	bIsProcessing.test_and_set();
	unnufm::skit_t skit;
    while(unnufm::SkitGrabber::grab(skit))
    {
        UE_LOG(LogTemp, Log, TEXT("Successfully grabbed skit: %s"), *FString(skit.sceneID.c_str()));
        // Convert skit.takes to TArray and store in a member variable for processing in TickComponent
        ULevelSequencePlayer* Player = PerformSkit(skit, Resolution, GlobalFrameRate);

        if (Player) {
            TFunction<bool()> IsPlayingFunction = [&]()->bool
                {
					if (!Player) return false;
                    return bIsPlayerStopped.test_and_set();
                };
            FGenericPlatformProcess::ConditionalSleep(IsPlayingFunction, 0.5f);
        }
        bIsPlayerStopped.clear();
    }
	bIsProcessing.clear();
}


// Convert normalized float samples (-1.0 to 1.0) to little-endian PCM16 bytes
std::vector<uint8_t> ULiveDirectorBPLibrary::convertToPCM16LE(const std::vector<float>& samples) {
    std::vector<uint8_t> pcmBytes;
    pcmBytes.reserve(samples.size() * 2); // 2 bytes per sample

    for (float sample : samples) {
        // Clamp to [-1.0, 1.0]
        // if (sample > 1.0f) sample = 1.0f;
        // else if (sample < -1.0f) sample = -1.0f;

        // Scale to 16-bit signed range
        int16_t pcmValue = static_cast<int16_t>(std::lround(FMath::Clamp(sample, -1.0f, 1.0f) * 32767.0f));

        // Store in little-endian order (LSB first, then MSB)
        pcmBytes.push_back(static_cast<uint8_t>(pcmValue & 0xFF));       // Low byte
        pcmBytes.push_back(static_cast<uint8_t>((pcmValue >> 8) & 0xFF)); // High byte
    }

    return pcmBytes;
}

USoundWaveProcedural* ULiveDirectorBPLibrary::CreateSoundWaveFromPCMData(const TArray<uint8_t>& PCMData, int SampleRate, float delay, float pause)
{
    int Channels = 1;
    if (PCMData.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to decode OGG audio"));
        return nullptr;
    }

    // Total samples across all channels
    int32 TotalSamples = PCMData.Num() / sizeof(int16);
	// TArray<uint8> PCMDataDelay;
    // TArray<uint8> PCMDataPause;
    int32 DelaySamples = 0;
	int32 PauseSamples = 0;
    TArray<uint8> FinalPCMData;
    if(delay > 0.0f) {
        DelaySamples = FMath::RoundToInt(delay * SampleRate) * Channels;
        // PCMDataDelay.Init(0, DelaySamples * sizeof(int16)); // Add silence for delay
		FinalPCMData.AddZeroed(DelaySamples * sizeof(int16));
        TotalSamples += DelaySamples;
	}
	FinalPCMData.Append(PCMData);
    if (pause > 0.0f) {
        PauseSamples = FMath::RoundToInt(pause * SampleRate) * Channels;
		// PCMDataPause.Init(0, PauseSamples * sizeof(int16)); // Add silence for pause
        FinalPCMData.AddZeroed(PauseSamples * sizeof(int16));
        TotalSamples += PauseSamples;
    }
	
    USoundWaveProcedural* SoundWave = NewObject<USoundWaveProcedural>();
    SoundWave->NumChannels = 1;
    SoundWave->Duration = ((float)TotalSamples) / (SampleRate);
	SoundWave->SetSampleRate(SampleRate);
    SoundWave->SoundGroup = SOUNDGROUP_Voice;
    SoundWave->bLooping = false;

    // Queue PCM16 audio data
    SoundWave->QueueAudio((uint8*)FinalPCMData.GetData(), FinalPCMData.Num() * sizeof(short));

    return SoundWave;
}

TArray<FLiveDirectorTimelineRegion> ULiveDirectorBPLibrary::ConvertSectionsToRegions(TArray<FLiveDirectorTimelineSection> Sections)
{
    // Step 1: Convert actions into events
    TArray<FLiveDirectorTimelineEvent> Events;
    for (const FLiveDirectorTimelineSection& act : Sections) {
        if (act.StartTime < act.EndTime) { // Ignore invalid or zero-length actions
            FLiveDirectorTimelineEvent StartEvent;
            StartEvent.Name = act.Name;
            StartEvent.Time = act.StartTime;
            StartEvent.IsStart = true;
            FLiveDirectorTimelineEvent EndEvent;
            EndEvent.Name = act.Name;
            EndEvent.Time = act.EndTime;
            EndEvent.IsStart = false;
            Events.Add(StartEvent);
            Events.Add(EndEvent);
        }
    }
    // Step 2: Sort events by time, with starts before ends at the same time
    Events.Sort();

    TArray<FString> ActiveSections;
    TArray<FLiveDirectorTimelineRegion> Regions;
    for (size_t i = 0, n = Events.Num(); i < n; ++i) {
        float CurrentTime = Events[i].Time;

        // Apply all events at this time
        while (i < n && Events[i].Time == CurrentTime) {
            if (Events[i].IsStart) {
                ActiveSections.Add(Events[i].Name);
            }
            else {
                ActiveSections.Remove(Events[i].Name);
            }
            ++i;
        }
        --i; // Adjust because for loop will increment

        // If there is a next event, create a region
        if (i + 1 < n) {
            float nextTime = Events[i + 1].Time;
            if (!ActiveSections.IsEmpty()  && CurrentTime < nextTime)
            {
                FLiveDirectorTimelineRegion Region;
                Region.StartTime = CurrentTime;
                Region.EndTime = nextTime;
                Region.ActiveSections.Insert(ActiveSections,0);
                Regions.Add(Region);
            }
        }
    }
    return Regions;
}


FGuid ULiveDirectorBPLibrary::FindExistingBindingForActor(ULevelSequence* LevelSequence, AActor* Actor)
{
    if (!LevelSequence || !Actor) {
        UE_LOG(LogTemp, Error, TEXT("Creating new Guid. No existing LevelSequence or Actor provided."));
        return FGuid();
    }

    if (!LevelSequence->MovieScene) {
        UE_LOG(LogTemp, Error, TEXT("Creating new Guid. No existing MovieScene in LevelSequence."));
        return FGuid();
    }
    // Loop through all possessables
    for (int32 i = 0; i < LevelSequence->MovieScene->GetPossessableCount(); i++)
    {
        const FMovieScenePossessable& Possessable = LevelSequence->MovieScene->GetPossessable(i);

        // Check if this possessable is bound to our actor
        TArray<UObject*, TInlineAllocator<1>> BoundObjects;
        LevelSequence->LocateBoundObjects(Possessable.GetGuid(), Actor->GetWorld(), BoundObjects);

        for (UObject* BoundObj : BoundObjects)
        {
            if (BoundObj == Actor)
            {
                return Possessable.GetGuid(); // Found existing binding
            }
        }
    }

    return FGuid(); // Not found
}

void ULiveDirectorBPLibrary::StageArrangement(ULevelStreamingDynamic* Level, const unnufm::skit_t& Skit)
{
    FString LevelMap(Skit.location.c_str());
    FString LevelStage(Skit.stage.c_str());

    FString Section = FString::Printf(TEXT("StageSettings.%s.%s"), *LevelMap, *LevelStage);

    std::set<std::string> SkitActorsPltString = unnufm::ScriptParser::getActorsInSkit(Skit);
    TArray<FString> SkitActors;
    for (std::string myactor : SkitActorsPltString)
    {
        FString Pawn(myactor.c_str());
        FName ActorName(Pawn);

        FString SpawnPose = FString::Printf(TEXT("Pose_%s"), *Pawn);
        FString SpawnLocation = FString::Printf(TEXT("Location_%s"), *Pawn);
        FString SpawnOrientation = FString::Printf(TEXT("Orientation_%s"), *Pawn);
        FString Location;
        FString Orientation;
        FString PawnPose;
        FVector PawnLocation;
        FRotator PawnOrientation;
        bool bFound = false;
        bFound = GConfig->GetString(*Section, *SpawnLocation, Location, GGameIni);
        if (bFound)
        {

            TArray<FString> Parts;
            Location.ParseIntoArray(Parts, TEXT(","), true);
            // Validate that the string contains only digits before converting
            if (Parts[0].IsNumeric() && Parts[1].IsNumeric() && Parts[2].IsNumeric())
            {
                // SpawnLocation.X = FString::AtoIInt.Parts[0];
                // Method 1: Using FString::Atoi
                // int32 Number1 = FCString::Atoi(*MyString);

                // Method 2: Using LexFromString (safer for parsing)
                int32 PosX = 0;
                LexFromString(PosX, *Parts[0]);
                int32 PosY = 0;
                LexFromString(PosY, *Parts[1]);
                int32 PosZ = 0;
                LexFromString(PosZ, *Parts[2]);
                PawnLocation = FVector(PosX, PosY, PosZ);
            }

        }
        bFound = GConfig->GetString(*Section, *SpawnOrientation, Orientation, GGameIni);
        if (bFound)
        {
            TArray<FString> Parts;
            Orientation.ParseIntoArray(Parts, TEXT(","), true);
            // Validate that the string contains only digits before converting
            if (Parts[0].IsNumeric() && Parts[1].IsNumeric() && Parts[2].IsNumeric())
            {
                // SpawnLocation.X = FString::AtoIInt.Parts[0];
                // Method 1: Using FString::Atoi
                // int32 Number1 = FCString::Atoi(*MyString);

                // Method 2: Using LexFromString (safer for parsing)
                float Pitch = 0;
                LexFromString(Pitch, *Parts[0]);
                float Yaw = 0;
                LexFromString(Yaw, *Parts[1]);
                float Roll = 0;
                LexFromString(Roll, *Parts[2]);
                PawnOrientation = FRotator(Pitch, Yaw, Roll);
            }
        }

        FActorSpawnParameters SpawnParams;
        // SpawnParams.Owner = FoundActor; // Optional: set owner
        SpawnParams.Name = FName(Pawn);

        // SpawnParams.Instigator = GetInstigator(); // Optional
        SpawnParams.SpawnCollisionHandlingOverride =
            ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		if (Pawn.Equals("Manny") || Pawn.Equals("Quinn"))
		{
			// Spawn the actor
			AThirdPersonCharacter* SpawnedActor = Level->GetWorld()->SpawnActor<AThirdPersonCharacter>(
				AThirdPersonCharacter::StaticClass(),
				PawnLocation,
				PawnOrientation,
				SpawnParams
			);

			FString PawnMesh = Pawn.Equals("Manny") ? TEXT("/Game/Characters/Mannequins/Meshes/SKM_Manny_Simple.SKM_Manny_Simple") 
								 : TEXT("/Game/Characters/Mannequins/Meshes/SKM_Quinn_Simple.SKM_Quinn_Simple"); 
			// Load a skeletal mesh at construction time (optional)
			static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(*PawnMesh);
			if (MeshAsset.Succeeded())
			{
				SpawnedActor->ChangeSkeletalMesh(MeshAsset.Object);
			}
			            // Try to get our specific component type
            UCinematicMovementComponent* CinematicMovement = SpawnedActor->GetCinematicMovement();
            if (CinematicMovement)
            {
                bFound = GConfig->GetString(*Section, *SpawnPose, PawnPose, GGameIni);
                if (bFound)
                {
                    CinematicMovement->ApplyIdlePose(PawnPose);

                }
                else {
                    FString DefaultPose = TEXT("Stand");
                    CinematicMovement->ApplyIdlePose(DefaultPose);
                }
            }
		}

		if (Pawn.Equals("Ava") || Pawn.Equals("Tar"))
		{
			FString PawnClass = Pawn.Equals("Ava") ? TEXT("/Game/MetaHumans/Ava/BP_Ava.BP_Ava_C") : TEXT("/Game/MetaHumans/Tar/BP_Tar.BP_Tar_C");
			// Find the Blueprint class at compile time
			static ConstructorHelpers::FClassFinder<ACharacter> MetahumanBPClass(*PawnClass);
			
			if (MetahumanBPClass.Succeeded())
			{
        		// Spawn the actor
				ACharacter* SpawnedActor = Level->GetWorld()->SpawnActor<ACharacter>(
                    MetahumanBPClass.Class,
					PawnLocation,
					PawnOrientation,
					SpawnParams
				);
				
				 UCinematicMovementComponent* CinematicMovement = SpawnedActor->FindComponentByClass<UCinematicMovementComponent>();
				 if (CinematicMovement)
				{
					bFound = GConfig->GetString(*Section, *SpawnPose, PawnPose, GGameIni);
					if (bFound)
					{
                        CinematicMovement->ApplyIdlePose(PawnPose);

                    }
                    else {
						FString DefaultPose = TEXT("Stand");
                        CinematicMovement->ApplyIdlePose(DefaultPose);
                    }
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to find BP_MyMetahuman! Check the path."));
			}

		}

    }
}

FLiveDirectorTimeline ULiveDirectorBPLibrary::ScheduleTakeTracks(ULevelSequence* Sequence, const FString& GameMapStageTag, const unnufm::take_t& Take)
{
    FLiveDirectorTimeline Timeline;
    if (Take.timing == unnu_scene_timing::TIMING_SEQUENTIAL) {
        // UMovieScene* MovieScene = Sequence->GetMovieScene();
        float FrameStart = 0.0f;
        for (const unnufm::performance_t& Performance : Take.performances)
        {
            FString ActorName(Performance.line.speaker.c_str()); // Use this to determine which MetaHuman to use (via
            if (!Performance.line.actions.empty()) {
                for (
//#if WITH_EDITOR
//                    TActorIterator<AActor> It(GEditor->GetEditorWorldContext(true).World());
//#else
					TActorIterator<AActor> It(GEngine->GetWorld());
//#endif

                    It; 
                    ++It) {
                    AActor* FoundActor = *It;
                    if (!FoundActor) continue;
                    if (FoundActor->GetName() == ActorName) {
                        // Try to get our specific component type
                        UCinematicMovementComponent* CinematicMovement = FoundActor->FindComponentByClass <UCinematicMovementComponent>();
                        if (CinematicMovement)
                        {
                            // Schedule cinematic movement track for this performance
                            for (const unnufm::action_t& action : Performance.line.actions) {
                                if (!action.target.empty()) {
                                    FString GestureName(action.gesture.c_str());
                                    FString SpawnLocation(ActorName);
                                    SpawnLocation += FString(TEXT("_Stage_Entry_"));
                                    SpawnLocation += FString(action.target.c_str());
                                    ULiveDirectorDataTableComponent* LiveDirectorDataTable = FoundActor->FindComponentByClass<ULiveDirectorDataTableComponent>();
                                    if (LiveDirectorDataTable)
                                    {
                                        if (LiveDirectorDataTable->DataTable) 
                                        {
                                            const FLiveDirectoryDataRow* Row = LiveDirectorDataTable->DataTable->FindRow<FLiveDirectoryDataRow>(FName(SpawnLocation), TEXT("DataTableComponent Lookup"));

                                                if (Row) {
                                                    // Add keyframes to the transform track based on Transform and action.movement
                                                    switch (action.motion) {
                                                    case unnu_motion::MOTION_NONE:
                                                        break;
                                                    case unnu_motion::MOTION_STAND:
                                                    {
														FString Pose = TEXT("Stand");
                                                        CinematicMovement->ApplyIdlePose(Pose);
                                                    }
                                                        break;
                                                    case unnu_motion::MOTION_SIT:
                                                    {
                                                        FString Pose = TEXT("Sit");
                                                        CinematicMovement->ApplyIdlePose(Pose);
                                                    }
                                                        break;
                                                    case unnu_motion::MOTION_LIE:
                                                    {
                                                        FString Pose = TEXT("Lie");
                                                        CinematicMovement->ApplyIdlePose(Pose);
                                                    }
                                                        break;
                                                    case unnu_motion::MOTION_WALK:
                                                    {
                                                        FString Pose = TEXT("Stand");
                                                        CinematicMovement->ApplyIdlePose(Pose);
                                                    }
                                                        break;
                                                    case unnu_motion::MOTION_JOG:
                                                    {
                                                        FString Pose = TEXT("Stand");
                                                        CinematicMovement->ApplyIdlePose(Pose);
                                                    }
                                                        break;
                                                    case unnu_motion::MOTION_RUN:
                                                    {
                                                        FString Pose = TEXT("Stand");
                                                        CinematicMovement->ApplyIdlePose(Pose);
                                                    }
                                                        break;
                                                    }
                                                
                                            }
                                        }
                                    }
                                }
                            }
                        }

                    }
                }
            }
            if (!Performance.audio.chunk.samples.empty()) {
                for (
//#if WITH_EDITOR
//                    TActorIterator<AActor> It(GEditor->GetEditorWorldContext(true).World());
//#else
                    TActorIterator<AActor> It(GEngine->GetWorld());
//#endif                
                    It; ++It) {
                    AActor* FoundActor = *It;
                    if (!FoundActor) continue;
                    if (FoundActor->GetName() == ActorName) {
                        // Try to get our specific component type
                        USpeech2FaceComponent* Speech2Face = FoundActor->FindComponentByClass<USpeech2FaceComponent>();
                        if (Speech2Face)
                        {
                            // Schedule speech to face track for this performance
                            std::vector<uint8> data = convertToPCM16LE(Performance.audio.chunk.samples);
                            TArray<uint8> PCMData;
                            PCMData.Append(data.data(), data.size());
                            USoundWave* SoundWave = ULiveDirectorBPLibrary::CreateSoundWaveFromPCMData(PCMData, Performance.audio.chunk.sample_rate, FrameStart + Performance.line.delay, Performance.line.pause);
                            if (SoundWave) {
                                FLiveDirectorTimelineSection SpeakingEvent;
                                SpeakingEvent.Name = ActorName;
                                SpeakingEvent.StartTime = FrameStart + Performance.line.delay;
                                SpeakingEvent.EndTime = SoundWave->Duration - SpeakingEvent.StartTime - Performance.line.pause;
                                Timeline.Duration = FMath::Max(Timeline.Duration, SpeakingEvent.EndTime);
                                Timeline.Sections.Add(SpeakingEvent);
                                FrameStart += SoundWave->Duration;
                                Speech2Face->AddAudioSpeech(SoundWave);
                            }
                            else {
                                FrameStart += (Performance.line.delay + Performance.line.pause);
                                UE_LOG(LogTemp, Warning, TEXT("Failed to create SoundWave for performance audio"));
                            }

                        }
                    }
                }

            }
        }
    }
    else if (Take.timing == unnu_scene_timing::TIMING_SIMULTANEOUS)
    {
        // UMovieScene* MovieScene = Sequence->GetMovieScene();
        for (const unnufm::performance_t& Performance : Take.performances)
        {
            FString ActorName(Performance.line.speaker.c_str()); // Use this to determine which MetaHuman to use (via
            if (!Performance.line.actions.empty()) {
                for (
//#if WITH_EDITOR
//                    TActorIterator<AActor> It(GEditor->GetEditorWorldContext(true).World());
//#else
                    TActorIterator<AActor> It(GEngine->GetWorld());
//#endif      
                    
                    It; ++It) {
                    AActor* FoundActor = *It;
                    if (!FoundActor) continue;
                    if (FoundActor->GetName() == ActorName) {
                        // Try to get our specific component type
                        UCinematicMovementComponent* CinematicMovement = FoundActor->FindComponentByClass<UCinematicMovementComponent>();
                        if (CinematicMovement)
                        {
                            // Schedule cinematic movement track for this performance
                            for (const unnufm::action_t& action : Performance.line.actions)
                            {
                                if (!action.target.empty()) {
                                    FString GestureName(action.gesture.c_str());
                                    FString SpawnLocation(ActorName);
                                    SpawnLocation += (TEXT("_Stage_Entry_"));
                                    SpawnLocation += FString(action.target.c_str());
                                    ULiveDirectorDataTableComponent* LiveDirectorDataTable = FoundActor->FindComponentByClass<ULiveDirectorDataTableComponent>();
                                    if (LiveDirectorDataTable)
                                    {
                                        if (LiveDirectorDataTable->DataTable)
                                        {
                                            const FLiveDirectoryDataRow* Row = LiveDirectorDataTable->DataTable->FindRow<FLiveDirectoryDataRow>(FName(SpawnLocation), TEXT("DataTableComponent Lookup"));

                                            if (Row) {
                                                // Add keyframes to the transform track based on Transform and action.movement
                                                switch (action.motion) {
                                                case unnu_motion::MOTION_NONE:
                                                    break;
                                                case unnu_motion::MOTION_STAND:
                                                {
                                                    FString Pose = TEXT("Stand");
                                                    CinematicMovement->ApplyIdlePose(Pose);
                                                }
                                                break;
                                                case unnu_motion::MOTION_SIT:
                                                {
                                                    FString Pose = TEXT("Sit");
                                                    CinematicMovement->ApplyIdlePose(Pose);
                                                }
                                                break;
                                                case unnu_motion::MOTION_LIE:
                                                {
                                                    FString Pose = TEXT("Lie");
                                                    CinematicMovement->ApplyIdlePose(Pose);
                                                }
                                                break;
                                                case unnu_motion::MOTION_WALK:
                                                {
                                                    FString Pose = TEXT("Stand");
                                                    CinematicMovement->ApplyIdlePose(Pose);
                                                }
                                                break;
                                                case unnu_motion::MOTION_JOG:
                                                {
                                                    FString Pose = TEXT("Stand");
                                                    CinematicMovement->ApplyIdlePose(Pose);
                                                }
                                                break;
                                                case unnu_motion::MOTION_RUN:
                                                {
                                                    FString Pose = TEXT("Stand");
                                                    CinematicMovement->ApplyIdlePose(Pose);
                                                }
                                                break;
                                                }

                                            }
                                        }
                                    }
                                }
                            }
                        }

                    }
                }
            }
            if (!Performance.audio.chunk.samples.empty()) {
                for (
//#if WITH_EDITOR
//                    TActorIterator<AActor> It(GEditor->GetEditorWorldContext(true).World());
//#else
                    TActorIterator<AActor> It(GEngine->GetWorld());
//#endif
                    
                    It; ++It) {
                    AActor* FoundActor = *It;
                    if (!FoundActor) continue;
                    if (FoundActor->GetName() == ActorName) {
                        // Try to get our specific component type
                        USpeech2FaceComponent* Speech2Face = FoundActor->FindComponentByClass<USpeech2FaceComponent>();
                        if (Speech2Face)
                        {
                            // Schedule speech to face track for this performance
                            std::vector<uint8> data = convertToPCM16LE(Performance.audio.chunk.samples);
                            TArray<uint8> PCMData;
                            PCMData.Append(data.data(), data.size());
                            USoundWave* SoundWave = ULiveDirectorBPLibrary::CreateSoundWaveFromPCMData(PCMData, Performance.audio.chunk.sample_rate, Performance.line.delay, Performance.line.pause);
                            if (SoundWave) {
                                FLiveDirectorTimelineSection SpeakingEvent;
                                SpeakingEvent.Name = ActorName;
                                SpeakingEvent.StartTime = Performance.line.delay;
                                SpeakingEvent.EndTime = SoundWave->Duration - SpeakingEvent.StartTime - Performance.line.pause;
                                Timeline.Duration = FMath::Max(Timeline.Duration, SpeakingEvent.EndTime);
                                Timeline.Sections.Add(SpeakingEvent);
                                Speech2Face->AddAudioSpeech(SoundWave);
                            }
                            else {
                                UE_LOG(LogTemp, Warning, TEXT("Failed to create SoundWave for performance audio"));
                            }
                        }

                    }
                }

            }
        }
    }
    else if (Take.timing == unnu_scene_timing::TIMING_OVERLAP)
    {
        // UMovieScene* MovieScene = Sequence->GetMovieScene();
        int seqnum = 0;

        for (const unnufm::performance_t& Performance : Take.performances)
        {
            FString ActorName(Performance.line.speaker.c_str()); // Use this to determine which MetaHuman to use (via
            if (!Performance.line.actions.empty()) {
                for (
//#if WITH_EDITOR
//                    TActorIterator<AActor> It(GEditor->GetEditorWorldContext(true).World());
//#else
                    TActorIterator<AActor> It(GEngine->GetWorld());
//#endif                       
                    It; ++It) {
                    AActor* FoundActor = *It;
                    if (!FoundActor) continue;
                    if (FoundActor->GetName() == ActorName) {
                        // Try to get our specific component type
                        UCinematicMovementComponent* CinematicMovement = FoundActor->FindComponentByClass<UCinematicMovementComponent>();
                        if (CinematicMovement)
                        {
                            // Schedule cinematic movement track for this performance
                            for (const unnufm::action_t& action : Performance.line.actions) {
                                if (!action.target.empty()) {
                                    FString GestureName(action.gesture.c_str());
                                    FString SpawnLocation(ActorName);
                                    SpawnLocation += (TEXT("_Stage_Entry_"));
                                    SpawnLocation += FString(action.target.c_str());
                                    ULiveDirectorDataTableComponent* LiveDirectorDataTable = FoundActor->FindComponentByClass<ULiveDirectorDataTableComponent>();
                                    if (LiveDirectorDataTable)
                                    {
                                        if (LiveDirectorDataTable->DataTable)
                                        {
                                            const FLiveDirectoryDataRow* Row = LiveDirectorDataTable->DataTable->FindRow<FLiveDirectoryDataRow>(FName(SpawnLocation), TEXT("DataTableComponent Lookup"));

                                            if (Row) {
                                                // Add keyframes to the transform track based on Transform and action.movement
                                                switch (action.motion) {
                                                case unnu_motion::MOTION_NONE:
                                                    break;
                                                case unnu_motion::MOTION_STAND:
                                                {
                                                    FString Pose = TEXT("Stand");
                                                    CinematicMovement->ApplyIdlePose(Pose);
                                                }
                                                break;
                                                case unnu_motion::MOTION_SIT:
                                                {
                                                    FString Pose = TEXT("Sit");
                                                    CinematicMovement->ApplyIdlePose(Pose);
                                                }
                                                break;
                                                case unnu_motion::MOTION_LIE:
                                                {
                                                    FString Pose = TEXT("Lie");
                                                    CinematicMovement->ApplyIdlePose(Pose);
                                                }
                                                break;
                                                case unnu_motion::MOTION_WALK:
                                                {
                                                    FString Pose = TEXT("Stand");
                                                    CinematicMovement->ApplyIdlePose(Pose);
                                                }
                                                break;
                                                case unnu_motion::MOTION_JOG:
                                                {
                                                    FString Pose = TEXT("Stand");
                                                    CinematicMovement->ApplyIdlePose(Pose);
                                                }
                                                break;
                                                case unnu_motion::MOTION_RUN:
                                                {
                                                    FString Pose = TEXT("Stand");
                                                    CinematicMovement->ApplyIdlePose(Pose);
                                                }
                                                break;
                                                }

                                            }
                                        }
                                    }
                                }
                            }
                        }

                    }
                }
            }
            if (!Performance.audio.chunk.samples.empty()) {
                for (
//#if WITH_EDITOR
//                    TActorIterator<AActor> It(GEditor->GetEditorWorldContext(true).World());
//#else
                    TActorIterator<AActor> It(GEngine->GetWorld());
//#endif
                    
                    It; ++It) {
                    AActor* FoundActor = *It;
                    if (!FoundActor) continue;
                    if (FoundActor->GetName() == ActorName) {
                        // Try to get our specific component type
                        USpeech2FaceComponent* Speech2Face = FoundActor->FindComponentByClass<USpeech2FaceComponent>();
                        if (Speech2Face)
                        {
                            // Schedule speech to face track for this performance
                            std::vector<uint8> data = convertToPCM16LE(Performance.audio.chunk.samples);
                            TArray<uint8> PCMData;
                            PCMData.Append(data.data(), data.size());
                            USoundWave* SoundWave = ULiveDirectorBPLibrary::CreateSoundWaveFromPCMData(PCMData, Performance.audio.chunk.sample_rate, (seqnum * Take.stagger) + Performance.line.delay, Performance.line.pause);
                            
                            if (SoundWave) {
                                FLiveDirectorTimelineSection SpeakingEvent;
                                SpeakingEvent.Name = ActorName;
                                SpeakingEvent.StartTime = (seqnum * Take.stagger) + Performance.line.delay;
                                SpeakingEvent.EndTime = SoundWave->Duration - SpeakingEvent.StartTime - Performance.line.pause;
                                Timeline.Duration = FMath::Max(Timeline.Duration, SpeakingEvent.EndTime);
                                Timeline.Sections.Add(SpeakingEvent);
                                Speech2Face->AddAudioSpeech(SoundWave);
                                seqnum++;
                            }
                            else {
                                UE_LOG(LogTemp, Warning, TEXT("Failed to create SoundWave for performance audio"));
                            }
                        }

                    }
                }

            }
        }
    }
    TArray<FLiveDirectorTimelineRegion> Partition = ULiveDirectorBPLibrary::ConvertSectionsToRegions(Timeline.Sections);
    float CameraFrameStart = 0.0f;
    int32 idx = 0;
    std::ostringstream oss;
    TArray<FLiveDirectorTimelineSection> CameraCutSections;
    for (const unnufm::camera_cue_t& CameraCue : Take.shots)
    {
        if (CameraCue.transition > 0.0f) {
            FLiveDirectorTimelineSection TransitionSection;
            oss << "T.";
            oss << std::setw(3) << std::setfill('0') << idx;
            TransitionSection.Name = FString(oss.str().c_str());
            idx++;
            TransitionSection.StartTime = CameraFrameStart;
            CameraFrameStart += CameraCue.transition;
            TransitionSection.EndTime = CameraFrameStart;
            CameraCutSections.Add(TransitionSection);
            oss.clear();
           
        }
        oss << "S.";
        oss << std::setw(3) << std::setfill('0') << idx;
        idx++;
        FLiveDirectorTimelineSection Section;
        Section.Name = FString(oss.str().c_str());
        Section.StartTime = CameraFrameStart;
        CameraFrameStart += CameraCue.duration;
        Section.EndTime = CameraFrameStart;
        CameraCutSections.Add(Section);
        oss.clear();
       
    }
    idx = 0;
    int32 ShotCount = CameraCutSections.Num();
    FFrameNumber LastSectionStart;
    FFrameNumber LastSectionEnd;
    // Get the MovieScene
    UMovieScene* MovieScene = Sequence->GetMovieScene();
    // Get frame rate for time-to-frame conversion
    FFrameRate FrameRate = MovieScene->GetDisplayRate();
    for (const unnufm::camera_cue_t& CameraCue : Take.shots)
    {
        FGameplayTagContainer NeededTags;
        NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName(GameMapStageTag)));
        if (CameraCue.angle == unnu_camera_shot_angle::CAMERA_ANGLE_DEFAULT || CameraCue.size == unnu_camera_shot_size::CAMERA_SIZE_DEFAULT)
        {
            // Use default camera - one should always be in scene
            NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.Default"), true));
        } else {
            switch (CameraCue.angle)
            {
                case unnu_camera_shot_angle::CAMERA_ANGLE_EYE_LEVEL:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.EyeLevel"), false)); break;
                case unnu_camera_shot_angle::CAMERA_ANGLE_SHOULDER_LEVEL:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.ShoulderLevel"), false)); break;
                case unnu_camera_shot_angle::CAMERA_ANGLE_HIP_LEVEL:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.HipLevel"), false)); break;
                case unnu_camera_shot_angle::CAMERA_ANGLE_KNEE_LEVEL:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.KneeLevel"), false)); break;
                case unnu_camera_shot_angle::CAMERA_ANGLE_GROUND_LEVEL:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.GroundLevel"), false)); break;
                case unnu_camera_shot_angle::CAMERA_ANGLE_OVERHEAD:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.Overhead"), false)); break;
                case unnu_camera_shot_angle::CAMERA_ANGLE_HIGH:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.High"), false)); break;
                case unnu_camera_shot_angle::CAMERA_ANGLE_LOW:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.Low"), false)); break;
                case unnu_camera_shot_angle::CAMERA_ANGLE_DEFAULT: //Never called
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.Default"), false)); break;
            }

            switch (CameraCue.size)
            {
                case unnu_camera_shot_size::CAMERA_SIZE_WIDE:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.Wide"), false)); break;
                case unnu_camera_shot_size::CAMERA_SIZE_MEDIUM_WIDE:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.MedimWide"), false)); break;
                case unnu_camera_shot_size::CAMERA_SIZE_MEDIUM:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.Medium"), false)); break;
                case unnu_camera_shot_size::CAMERA_SIZE_COWBOY:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.Cowboy"), false)); break;
                case unnu_camera_shot_size::CAMERA_SIZE_FULL:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.Full"), false)); break;
                case unnu_camera_shot_size::CAMERA_SIZE_EXTREME_WIDE:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.ExtremeWide"), false)); break;
                case unnu_camera_shot_size::CAMERA_SIZE_CLOSE_UP:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.CloseUp"), false)); break;
                case unnu_camera_shot_size::CAMERA_SIZE_EXTREME_CLOSE_UP:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.ExtremeCloseUp"), false)); break;
                case unnu_camera_shot_size::CAMERA_SIZE_MEDIUM_CLOSE_UP:
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.MediumCoseUp"), false)); break;
                case unnu_camera_shot_size::CAMERA_SIZE_DEFAULT: // Never called
                    NeededTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Camera.Default"), false)); break;
            }
        }

        FGameplayTagQuery TagQuery = FGameplayTagQuery::BuildQuery(
            FGameplayTagQueryExpression()
            .AllTagsMatch()
            .AddTags(NeededTags));

        TArray<AActor*> OutActors;
        UGameplayTagsHelperLibrary::GetAllActorsOfClassMatchingTagQuery(
//#if WITH_EDITOR
//            GEditor->GetEditorWorldContext(true).World(),
//#else
            GEngine->GetWorld(),
//#endif
            
            
            ACameraActor::StaticClass(), TagQuery, OutActors);

        if (OutActors.IsEmpty())
        {
            // Find any camera in the scene
            UGameplayTagsHelperLibrary::GetAllActorsOfClassWithGameplayTag(
//#if WITH_EDITOR
//                GEditor->GetEditorWorldContext(true).World(),
//#else
                GEngine->GetWorld(),
//#endif
                ACameraActor::StaticClass(), FGameplayTag::RequestGameplayTag(FName(GameMapStageTag)), true, OutActors);
        }
     

        if (!OutActors.IsEmpty())
        {
            ACameraActor* Camera = nullptr;
            for (AActor* Actor : OutActors)
            {
                Camera = Cast<ACameraActor>(Actor);
                if (Camera)
                    break; // Found it
            }

            FGuid CameraGuid = FindExistingBindingForActor(Sequence, Camera);

            if (!CameraGuid.IsValid())
            {
                // Create new binding only if it doesn't exist
                // Bind the CineCameraActor to the sequence
                CameraGuid = MovieScene->AddPossessable(Camera->GetFName().ToString(), ACameraActor::StaticClass());
                Sequence->BindPossessableObject(CameraGuid, *Camera, 
//#if WITH_EDITOR
//                    GEditor->GetEditorWorldContext(true).World()
//#else
                    GEngine->GetWorld()
//#endif
                );
            }
            // Find the existing Camera Cut Track
            UMovieSceneCameraCutTrack* CameraCutTrack = Cast<UMovieSceneCameraCutTrack>(Sequence->MovieScene->GetCameraCutTrack());
            if (CameraCutTrack)
            {
                
                if (idx < ShotCount && CameraCutSections[idx].Name.StartsWith("T"))
                {
                    FFrameNumber TransitionFrames = (CameraCue.transition * FrameRate).RoundToFrame();
                    if ((LastSectionEnd - TransitionFrames) > LastSectionStart)
                    {
                        // Add a Camera Cut Section
                        UMovieSceneCameraCutSection* TransitionCutSection = CameraCutTrack->AddNewCameraCut(FMovieSceneObjectBindingID(CameraGuid), LastSectionEnd - TransitionFrames);
                        if (TransitionCutSection)
                        {
                            TransitionCutSection->SetEndFrame(LastSectionEnd);
                        }
                    }else {
                        // Add a Camera Cut Section
                        UMovieSceneCameraCutSection* TransitionCutSection = CameraCutTrack->AddNewCameraCut(FMovieSceneObjectBindingID(CameraGuid), LastSectionStart);
                        LastSectionEnd = LastSectionStart + TransitionFrames;
                        if (TransitionCutSection)
                        {
                            TransitionCutSection->SetEndFrame(LastSectionEnd);
                        }
                    }
                    idx++;
                }
                idx++;

                // Add a Camera Cut Section
                LastSectionStart = LastSectionEnd;
                UMovieSceneCameraCutSection* CameraCutSection = CameraCutTrack->AddNewCameraCut(FMovieSceneObjectBindingID(CameraGuid), LastSectionEnd);
                if (CameraCutSection)
                {
                    FFrameNumber NumberOfFrames = (CameraCue.duration * FrameRate).RoundToFrame();
                    LastSectionEnd = LastSectionStart + NumberOfFrames;
                    CameraCutSection->SetEndFrame(LastSectionEnd);
                }
                if (idx + 1 < ShotCount && CameraCutSections[idx + 1].Name.StartsWith("T")) {
                    idx++;
                    float Duration = CameraCutSections[idx].EndTime - CameraCutSections[idx].StartTime;
                    FFrameNumber TransitionFrames = (Duration * FrameRate).RoundToFrame();
                    LastSectionStart = LastSectionEnd;
                    LastSectionEnd = LastSectionStart + TransitionFrames;
                    // Add a Camera Cut Section
                    UMovieSceneCameraCutSection* TransitionCutSection = CameraCutTrack->AddNewCameraCut(FMovieSceneObjectBindingID(CameraGuid), LastSectionStart);
                    if (TransitionCutSection)
                    {
                        TransitionCutSection->SetEndFrame(LastSectionEnd);
                    }
                    
                }
            }
            
        }
    }
    return Timeline;
}


ULevelSequencePlayer* ULiveDirectorBPLibrary::PerformSkit(unnufm::skit_t& Skit, const FIntPoint& Resolution, const FFrameRate& GlobalFrameRate)
{

    bool bOutSucccess = false;
    FString SceneID(Skit.sceneID.c_str());
    FString SceneMap(Skit.location.c_str());
    FString SceneStage(Skit.stage.c_str());
    FString GameMapName = FString(TEXT("/Game/Maps/"));
    GameMapName += SceneMap;
    FString SpawnLocation = FString(TEXT("Spawn_Map_"));
    SpawnLocation += SceneStage;

    FString GameMapStageTag = FString(TEXT("Map.Stage."));
    GameMapStageTag += SceneStage;

    // FString LevelMap = FString::Printf(TEXT("/Game/Scenes/%s"), *SceneID);
    ULevelStreamingDynamic* Level = GetOrLoadLevel(GameMapName, SpawnLocation, bOutSucccess);
    if (!bOutSucccess || !Level) return nullptr;
        StageArrangement(Level, Skit);
        // Prevent streaming levels from loading
        // 1. Create a Level Sequence asset in memory

        FString PackageName = FString(TEXT("/Game/GeneratedSequence/"));
        PackageName += SceneID;
        UPackage* Package = CreatePackage(*PackageName);
        ULevelSequence* NewSequence = NewObject<ULevelSequence>(Package, ULevelSequence::StaticClass(), FName(SceneID), RF_Public | RF_Standalone | RF_Transient);
        if (!NewSequence)
        {
            UE_LOG(LogTemp, Error, TEXT("Unable to create Level Sequence"));
            return nullptr;;
        }

        NewSequence->Initialize();
        // TObjectPtr<UMovieScene> MovieScene = NewSequence->MovieScene;
        if (!NewSequence->MovieScene)
        {
            UE_LOG(LogTemp, Error, TEXT("Level Sequence has no MovieScene"));
            return nullptr;
        }

        if (UMovieSceneCameraCutTrack* CameraCutTrack = Cast<UMovieSceneCameraCutTrack>(NewSequence->MovieScene->AddCameraCutTrack(UMovieSceneCameraCutTrack::StaticClass())))
        {
            CameraCutTrack->bCanBlend = true;
            CameraCutTrack->SetIsAutoManagingSections(true);
        }
        for (unnufm::take_t& Take : Skit.takes) {
            // Handle timing and staggering based on Take.timing and Take.
            ScheduleTakeTracks(NewSequence, GameMapStageTag, Take);
        }
        // 5. Save the asset
        FAssetRegistryModule::AssetCreated(NewSequence);
        Package->MarkPackageDirty();
        FString FilePath = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());
        FSavePackageArgs SavePackageArgs;
        SavePackageArgs.SaveFlags = SAVE_Async;
        SavePackageArgs.TopLevelFlags = EObjectFlags::RF_Standalone | EObjectFlags::RF_Transient | EObjectFlags::RF_Public;
        UPackage::SavePackage(Package, NewSequence, *FilePath, SavePackageArgs);

        // 6. Spawn Level Sequence Actor and assign sequence
        ALevelSequenceActor* SequenceActor;
        FMovieSceneSequencePlaybackSettings SequencePlaybackSettings;
        SequencePlaybackSettings.bAutoPlay = true;
        SequencePlaybackSettings.bDisableMovementInput = true;
        SequencePlaybackSettings.bHideHud = true;
        SequencePlaybackSettings.bHidePlayer = true;
        ULevelSequencePlayer* SequencePlayer = ULevelSequencePlayer::CreateLevelSequencePlayer(
//#if WITH_EDITOR
//            GEditor->GetEditorWorldContext(true).World(),
//#else
            GEngine->GetWorld(),
//#endif
            NewSequence, FMovieSceneSequencePlaybackSettings(), SequenceActor);
        

    // Bind to component overlap event
    FScriptDelegate OnStopDelegate;
    // Bind it to our UFUNCTION
    OnStopDelegate.BindUFunction(ULiveDirectorBPLibrary::StaticClass()->GetDefaultObject(), FName("OnSequencerPlayerStop"));
    SequencePlayer->OnFinished.Add(OnStopDelegate);
    SequencePlayer->OnStop.Add(OnStopDelegate);

    // Bind to component overlap event
    FScriptDelegate OnPlayDelegate;
    // Bind it to our UFUNCTION
    OnPlayDelegate.BindUFunction(ULiveDirectorBPLibrary::StaticClass()->GetDefaultObject(), FName("OnSequencerPlayerPlay"));
    SequencePlayer->OnPlay.Add(OnPlayDelegate);
    // 7. Add to Movie Render Queue
    UCinematicRendererBPLibrary::RenderCinematicByParametersWithLevelSequenceInternal(NewSequence, FSoftObjectPath(GameMapName), Resolution, GlobalFrameRate);
    return SequencePlayer;
}

void ULiveDirectorBPLibrary::OnSequencerPlayerStop()
{
    UE_LOG(LogTemp, Log, TEXT("Sequence Player Stopped"));
    // Handle any cleanup or actions needed when the sequence player stops
	bIsPlayerStopped.clear();
}

void ULiveDirectorBPLibrary::OnSequencerPlayerStop()
{
    UE_LOG(LogTemp, Log, TEXT("Sequence Player Started"));
    // Handle any cleanup or actions needed when the sequence player stops
    bIsPlayerStopped.test_and_set();
}

ULevelStreamingDynamic* ULiveDirectorBPLibrary::GetOrLoadLevel(const FString& LevelMap, const FString& LevelStage, bool bOutSucccess)
{
    UWorld* World =
//#if WITH_EDITOR
//        GEditor->GetEditorWorldContext(true).World();
//#else
        GEngine->GetWorld();
//#endif
    if (!World)
    {
        bOutSucccess = false;
        return nullptr;
    }
    FString Section = FString(TEXT("StageSettings."));
    Section += LevelMap;
    Section += TEXT(".");
    Section += LevelStage;
    // if (ULiveDirectorBPLibrary::CachedLevels.Contains(Section))
    // {
    //    bOutSucccess = true;
    //    return CachedLevels[Section];
    // }

    
    FVector SpawnLocation(0,0,0);
    FRotator SpawnOrientation(0,0,0);
    FString Location;
    FString Orientation;
    bool bFound = false;
    bFound = GConfig->GetString(*Section, TEXT("Location"), Location, GGameIni);
    if (bFound)
    {
        TArray<FString> Parts;
        Location.ParseIntoArray(Parts, TEXT(","), true);
        // Validate that the string contains only digits before converting
        if (Parts[0].IsNumeric() && Parts[1].IsNumeric() && Parts[2].IsNumeric())
        {
            // SpawnLocation.X = FString::AtoIInt.Parts[0];
            // Method 1: Using FString::Atoi
            // int32 Number1 = FCString::Atoi(*MyString);

            // Method 2: Using LexFromString (safer for parsing)
            int32 PosX = 0;
            LexFromString(PosX, *Parts[0]);
            int32 PosY = 0;
            LexFromString(PosY, *Parts[1]);
            int32 PosZ = 0;
            LexFromString(PosZ, *Parts[2]);
            SpawnLocation = FVector(PosX, PosY, PosZ);
        }
        
    }
    bFound = GConfig->GetString(*Section, TEXT("Orientation"), Orientation, GGameIni);
    if (bFound)
    {
        TArray<FString> Parts;
        Orientation.ParseIntoArray(Parts, TEXT(","), true);
        // Validate that the string contains only digits before converting
        if (Parts[0].IsNumeric() && Parts[1].IsNumeric() && Parts[2].IsNumeric())
        {
            // SpawnLocation.X = FString::AtoIInt.Parts[0];
            // Method 1: Using FString::Atoi
            // int32 Number1 = FCString::Atoi(*MyString);

            // Method 2: Using LexFromString (safer for parsing)
            float Pitch = 0;
            LexFromString(Pitch, *Parts[0]);
            float Yaw = 0;
            LexFromString(Yaw, *Parts[1]);
            float Roll = 0;
            LexFromString(Roll, *Parts[2]);
            SpawnOrientation = FRotator(Pitch, Yaw, Roll);
        }
    }
	    
    ULevelStreamingDynamic* StreamingLevel = ULevelStreamingDynamic::LoadLevelInstance(
//#if WITH_EDITOR
//        GEditor->GetEditorWorldContext(true).World(),
//#else
        GEngine->GetWorld(),
//#endif
        LevelMap,
        SpawnLocation,
        SpawnOrientation,
        /* OutSuccess */ bOutSucccess,
        TEXT(""),
        nullptr,
		/*bLoadAsTempPackage=*/ true
    );

    if (StreamingLevel)
    {
        StreamingLevel->SetShouldBeVisible(false);
        StreamingLevel->SetShouldBeLoaded(true);
        // CachedLevels.Add(Section, StreamingLevel);
        UE_LOG(LogTemp, Log, TEXT("Cached level: %s >> %s"), *LevelMap, *LevelStage);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load level for caching: %s"), *LevelMap);
    }

    return StreamingLevel;
}
