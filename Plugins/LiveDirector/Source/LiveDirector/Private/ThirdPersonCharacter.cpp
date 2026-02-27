// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "LiveDirector.h"

AThirdPersonCharacter::AThirdPersonCharacter()
{
	CinematicMovement = NewObject<UCinematicMovementComponent>();
	GameplayTags = NewObject<UGameplayTagsComponent>();
	Speech2Face = NewObject<USpeech2FaceComponent>();
	// Create the component
	CharacterTrajectory = CreateDefaultSubobject<UCharacterTrajectoryComponent>(TEXT("CharacterTrajectory"));
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->bUsePawnControlRotation = false;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void AThirdPersonCharacter::ChangeSkeletalMesh(USkeletalMesh* NewMesh)
{
	if (NewMesh)
	{
		GetMesh()->SetSkeletalMesh(NewMesh);
	}
}