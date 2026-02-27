#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PoseSearch/PoseSearchDatabase.h"
#include "PoseSearch/PoseSearchResult.h"
#include "CharacterTrajectoryComponent.h"
#include "CinematicMovementComponent.generated.h"

class ACineCameraActor;

/**
* Adds a patrol component with Sequencer integration for MoveTo, Talking, and Gestures.
*/
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class LIVEDIRECTOR_API UCinematicMovementComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UCinematicMovementComponent();

    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // PoseSearch Databases
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
    UPoseSearchDatabase* AnimationsDB;

    UFUNCTION(BlueprintCallable, Category = "Animation")
    void ApplyIdlePose(FString& PoseStyle);

protected:
    /** The trajectory component must be added to the actor alongside this component */
    UPROPERTY(Transient)
    TObjectPtr<UCharacterTrajectoryComponent> TrajectoryComponent;

    /** Speed threshold to switch from Locomotion back to Idle */
    UPROPERTY(EditAnywhere, Category = "Motion Matching|Settings")
    float IdleThreshold = 10.0f;

private:
    void SetPoseDB(UPoseSearchDatabase* NewDB);
    void SetWarpTarget(FName TargetName, const FVector& Location, const FRotator& Rotation);
    // bool bFollowingPath = false;
};
