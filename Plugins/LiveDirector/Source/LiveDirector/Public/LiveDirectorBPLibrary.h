#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Sound/SoundWaveProcedural.h"
#include "LevelSequence.h"
#include "LevelSequencePlayer.h"
#include "Engine/LevelStreamingDynamic.h"
#include "Containers/Map.h"
#include "unnu_fm/cxx-api.h"
#include "LiveDirectorBPLibrary.generated.h"

// Structure to represent an action with start and end times
USTRUCT(BlueprintType)
struct LIVEDIRECTOR_API FLiveDirectorTimelineSection {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString Name;
    UPROPERTY(BlueprintReadOnly)
    float StartTime;
    UPROPERTY(BlueprintReadOnly)
    float EndTime;
};

USTRUCT(BlueprintType)
struct LIVEDIRECTOR_API FActorData : public FTableRowBase {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Health;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMesh* Mesh;
};

// Structure to represent an action with start and end times
USTRUCT(BlueprintType)
struct LIVEDIRECTOR_API FLiveDirectorTimeline {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    TArray< FLiveDirectorTimelineSection> Sections;
    UPROPERTY(BlueprintReadOnly)
    float Duration;
};

// Structure to represent a time event (start or end of an action)
USTRUCT(BlueprintType)
struct LIVEDIRECTOR_API FLiveDirectorTimelineEvent {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    float Time;
    UPROPERTY(BlueprintReadOnly)
    bool IsStart;
    UPROPERTY(BlueprintReadOnly)
    FString Name;
    // Custom less-than operator for sorting
    bool operator<(const FLiveDirectorTimelineEvent& Other) const
    {
       if (Time != Other.Time) return Time < Other.Time;
       return IsStart > Other.IsStart;
    }
};

// Structure to represent a non-overlapping region with active actions
USTRUCT(BlueprintType)
struct LIVEDIRECTOR_API FLiveDirectorTimelineRegion {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    float StartTime;
    UPROPERTY(BlueprintReadOnly)
    float EndTime;
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> ActiveSections;
};

USTRUCT(BlueprintType)
struct LIVEDIRECTOR_API FLiveDirectorSceneCuts
{
    GENERATED_BODY()
    
    UPROPERTY(BlueprintReadOnly)
    FString SceneID;
    UPROPERTY(BlueprintReadOnly)
    float StartTime;
    UPROPERTY(BlueprintReadOnly)
    float Duration;
};

/**
 * Blueprint-callable helper for creating and rendering sequences with full cinematic control
 */
UCLASS(BlueprintType)
class LIVEDIRECTOR_API ULiveDirectorBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /**
     * Creates an advanced multi-camera Level Sequence and sends it to the Movie Render Queue
     */
    UFUNCTION(BlueprintCallable, Category = "LiveDirector|Tools", meta = (WorldContext = "WorldContextObject"))
    static void CreateAndRenderMovie(
        UObject* WorldContextObject, const FString& OutputDirectory,
        const FIntPoint& Resolution, const FFrameRate& GlobalFrameRate);

    //UFUNCTION(BlueprintCallable, Category = "LiveDirector|Tools")
    //static void RenderMovieSceneQueue(const FString OutputDirectory,
    //    const FIntPoint Resolution, const FFrameRate GlobalFrameRate);
    /*
	* Render all movie scenes in the Movie Render Queue to the specified output directory with the given resolution and frame rate.
    */
    UFUNCTION(BlueprintCallable, Category = "LiveDirector|Tools")
    static void RenderMovieSceneQueue(const FString DependenciesDirectory, const FString OutputDirectory,
        const FIntPoint Resolution, const FFrameRate GlobalFrameRate);

private:
	static std::vector<uint8_t> convertToPCM16LE(const std::vector<float>& samples);
	static USoundWaveProcedural* CreateSoundWaveFromPCMData(const TArray<uint8_t>& PCMData, int SampleRate, float delay, float pause);
	static TArray<FLiveDirectorTimelineRegion> ConvertSectionsToRegions(TArray<FLiveDirectorTimelineSection> Sections);
    static void StageArrangement(ULevelStreamingDynamic* Level, const unnufm::skit_t& Skit);
	static FGuid FindExistingBindingForActor(ULevelSequence* LevelSequence, AActor* Actor);
	static FLiveDirectorTimeline ScheduleTakeTracks(ULevelSequence* Sequence, const FString& GameMapStageTag, const unnufm::take_t& Take);
	static ULevelSequencePlayer* PerformSkit(unnufm::skit_t& Skit, const FIntPoint& Resolution, const FFrameRate& GlobalFrameRate);
	static ULevelStreamingDynamic* GetOrLoadLevel(const FString& LevelMap, const FString& LevelStage, bool bOutSucccess);
	static void OnSequencerPlayerStop();
	
    static void OnSequencerPlayerPlay();

    static void ReadAllTextFiles(const FString& DirectoryPath);

    static std::atomic_flag bIsPlayerStopped = ATOMIC_FLAG_INIT;
    // static bool LoadScriptFromFile(const FString& FilePath, FString* FileContent);
	
	// Cache of loaded streaming levels
    // static TMap<FString, ULevelStreamingDynamic*> CachedLevels;

	
};