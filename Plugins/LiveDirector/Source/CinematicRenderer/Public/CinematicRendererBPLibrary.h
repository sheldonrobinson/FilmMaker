// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelSequence.h"
#include "Misc/FrameRate.h"
// #include "MoviePipelineMP4EncoderCommon.h"
#include "CinematicRendererBPLibrary.generated.h"


/**
 * Supported playback quality levels for cinematic rendering.
 */
UENUM(BlueprintType)
enum class ECinematicRendererPlaybackQuality : uint8
{ 
	Low UMETA(DisplayName="Low"), 
	Medium UMETA(DisplayName="Medium"),
	High UMETA(DisplayName="High")
};

/**
 * Supported playback quality levels for cinematic rendering.
 */
UENUM(BlueprintType)
enum class ECinematicRendererEncoderProfile : uint8
{
	Baseline UMETA(DisplayName = "Baseline"),
	Main UMETA(DisplayName = "Main"),
	High UMETA(DisplayName = "High")
};

/**
 * Struct providing bitrate in kbps given playback quality.
 */
USTRUCT(BlueprintType)
struct FCinematicRendererVariableBitrateEstimate {
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
    double Target;
	UPROPERTY(BlueprintReadOnly)
    double Min;
	UPROPERTY(BlueprintReadOnly)
    double Max;

	FCinematicRendererVariableBitrateEstimate()
		: Target(0.0), Min(0.0), Max(0.0)
	{
	}
	FCinematicRendererVariableBitrateEstimate(double InTarget, double InMin, double InMax)
		: Target(InTarget), Min(InMin), Max(InMax)
	{
	}
};        

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS(BlueprintType)
class CINEMATICRENDERER_API UCinematicRendererBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, CallInEditor)
	static void RenderCinematicByParameters(const FString& SequencePath, const FString& MapPath, const FIntPoint& Resolution, const FFrameRate& FrameRate, ECinematicRendererPlaybackQuality PlaybackQuality = ECinematicRendererPlaybackQuality::High, ECinematicRendererEncoderProfile EncodeProfile = ECinematicRendererEncoderProfile::High);

	UFUNCTION(BlueprintCallable, CallInEditor)
	static void RenderCinematicByParametersInternal(const FSoftObjectPath& SequencePath, const FSoftObjectPath& MapPath, const FIntPoint& Resolution, const FFrameRate& FrameRate, ECinematicRendererPlaybackQuality PlaybackQuality = ECinematicRendererPlaybackQuality::High, ECinematicRendererEncoderProfile EncodeProfile = ECinematicRendererEncoderProfile::High);

	UFUNCTION(BlueprintCallable, CallInEditor)
	static void RenderCinematicByParametersWithLevelSequenceInternal(class ULevelSequence* Sequence, const FSoftObjectPath& MapPath, const FIntPoint& Resolution, const FFrameRate& FrameRate, ECinematicRendererPlaybackQuality PlaybackQuality = ECinematicRendererPlaybackQuality::High, ECinematicRendererEncoderProfile EncodeProfile = ECinematicRendererEncoderProfile::High);


	UFUNCTION(BlueprintCallable)
	static FCinematicRendererVariableBitrateEstimate EstimateVideoBitrateRange(const FIntPoint& Resolution, const FFrameRate& FrameRate, ECinematicRendererPlaybackQuality PlaybackQuality = ECinematicRendererPlaybackQuality::High);
};
