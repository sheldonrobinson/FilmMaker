// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "CinematicMovementComponent.h"
#include "Speech2FaceComponent.h"
#include "GameplayTagsComponent.h"
#include "CharacterTrajectoryComponent.h"
#include "ThirdPersonCharacter.generated.h"

class UCameraComponent;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 *  A simple player-controllable third person character
 *  Implements a controllable orbiting camera
 */
UCLASS()
class AThirdPersonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCinematicMovementComponent* CinematicMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USpeech2FaceComponent* Speech2Face;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UGameplayTagsComponent* GameplayTags;

	// The component that predicts movement (Essential for Motion Matching)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Motion Matching")
	UCharacterTrajectoryComponent* CharacterTrajectory;
	
protected:

public:

	/** Constructor */
	AThirdPersonCharacter();	


	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	FORCEINLINE class UCinematicMovementComponent* GetCinematicMovement() const { return CinematicMovement; }

	FORCEINLINE class USpeech2FaceComponent* GetSpeech2Face() const { return Speech2Face; }

	FORCEINLINE class UGameplayTagsComponent* GetGameplayTags() const { return GameplayTags; }

	void ChangeSkeletalMesh(USkeletalMesh* NewMesh);
};

