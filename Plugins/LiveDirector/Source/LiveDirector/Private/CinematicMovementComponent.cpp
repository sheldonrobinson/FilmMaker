#include "CinematicMovementComponent.h"
#include "PoseSearch/PoseSearchDatabase.h"
#include "PoseSearch/PoseSearchLibrary.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimSingleNodeInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "CharacterTrajectoryComponent.h"
#include "PoseSearch/PoseSearchContext.h"
#include "MotionWarpingComponent.h"
#include "NavigationSystem.h"
#include "NavigationData.h"
#include "CineCameraActor.h"
#include "GameFramework/Character.h"

UCinematicMovementComponent::UCinematicMovementComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    // bFollowingPath = false;
}

void UCinematicMovementComponent::BeginPlay()
{
    Super::BeginPlay();
    // Cache the trajectory component from the owner
    TrajectoryComponent = GetOwner()->FindComponentByClass<UCharacterTrajectoryComponent>();
}

void UCinematicMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UCinematicMovementComponent::SetPoseDB(UPoseSearchDatabase* NewDB)
{
    if (!NewDB) return;

    AActor* Owner = GetOwner();
    if (!Owner) return;

    if (USkeletalMeshComponent* SkelMesh = Owner->FindComponentByClass<USkeletalMeshComponent>())
    {
        if (UAnimInstance* AnimInst = SkelMesh->GetAnimInstance())
        {
            static FName SetPoseSearchDatabase(TEXT("SetPoseSearchDatabase"));
            if (AnimInst->GetClass()->FindFunctionByName(SetPoseSearchDatabase))
            {
                struct { UPoseSearchDatabase* DB; } Params;
                Params.DB = NewDB;
                AnimInst->ProcessEvent(AnimInst->FindFunction(SetPoseSearchDatabase), &Params);
            }
        }
    }
}

void UCinematicMovementComponent::SetWarpTarget(FName TargetName, const FVector& Location, const FRotator& Rotation)
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    if (UMotionWarpingComponent* MW = Owner->FindComponentByClass<UMotionWarpingComponent>())
    {
        MW->AddOrUpdateWarpTargetFromLocationAndRotation(TargetName, Location, Rotation);
    }
}

void UCinematicMovementComponent::ApplyIdlePose(FString& PoseStyle)
{
    AActor* Owner = GetOwner();
    if (!Owner) return;
	if (!AnimationsDB) return;
    if (USkeletalMeshComponent* TargetMesh = Owner->FindComponentByClass<USkeletalMeshComponent>())
    {
		FPoseSearchEvent PoseSearchEvent;
		FFloatInterval PoseJumpThresholdTime(0.1f, 0.5f); // Example thresholds for pose jumping
		FString PoseStyleString = FString::Printf(TEXT("Anim.%s.Idle"), *PoseStyle);
       
		PoseSearchEvent.EventTag = FGameplayTag::RequestGameplayTag(FName(PoseStyle)); // Tag to search for, e.g., "Idle"
        UE::PoseSearch::FSearchContext SearchContext(0.05f, PoseJumpThresholdTime, PoseSearchEvent);
		UE::PoseSearch::FSearchResults SearchResults;
        AnimationsDB->Search(SearchContext, SearchResults);
        UE::PoseSearch::FSearchResult BestResult = SearchResults.GetBestResult();
        if(BestResult.IsValid())
        {
            // Example: Play the animation from the best pose
            if (UAnimSequence* Anim = Cast<UAnimSequence>(
                AnimationsDB->GetAnimationAsset(BestResult.PoseIdx)))
            {
                if (UAnimSingleNodeInstance* SingleNode = TargetMesh->GetSingleNodeInstance())
                {
                    SingleNode->SetAnimationAsset(Anim);
                    SingleNode->SetPosition(BestResult.GetAssetTime(), false); // Jump to the matched frame
                    // SingleNode->SetPlaying(false); // Freeze on that pose
                }
            }
        }
    }


}

