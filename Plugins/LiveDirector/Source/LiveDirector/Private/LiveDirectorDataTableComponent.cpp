#include "LiveDirectorDataTableComponent.h"
#include "GameFramework/Actor.h"

ULiveDirectorDataTableComponent::ULiveDirectorDataTableComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void ULiveDirectorDataTableComponent::BeginPlay()
{
    Super::BeginPlay();
    ApplyDataToActor();
}

void ULiveDirectorDataTableComponent::ApplyDataToActor()
{
    if (!DataTable)
    {
        UE_LOG(LogTemp, Warning, TEXT("[%s] No DataTable assigned."), *GetOwner()->GetName());
        return;
    }

    const FLiveDirectoryDataRow* Row = DataTable->FindRow<FLiveDirectoryDataRow>(RowName, TEXT("DataTableComponent Lookup"));
    if (!Row)
    {
        UE_LOG(LogTemp, Warning, TEXT("[%s] Row '%s' not found."), *GetOwner()->GetName(), *RowName.ToString());
        return;
    }

    AActor* Owner = GetOwner();
    if (!Owner) return;

    // Example: Apply values to Actor properties if they exist
    // You can extend this to match your Actor's variables
    Owner->SetActorLocation(Row->SpawnLocation);
    Owner->SetActorRotation(Row->SpawnOrientation);


    UE_LOG(LogTemp, Log, TEXT("[%s] Applied DataTable row '%s'"), *Owner->GetName(), *RowName.ToString());
}
