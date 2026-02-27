#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "LiveDirectorDataTableComponent.generated.h"

USTRUCT(BlueprintType)
struct FLiveDirectoryDataRow : public FTableRowBase
{
    GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnLocation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator SpawnOrientation;

};


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class LIVEDIRECTOR_API ULiveDirectorDataTableComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    ULiveDirectorDataTableComponent();

    // DataTable asset
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DataTable")
    UDataTable* DataTable;

    // Row name in the DataTable
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="DataTable")
    FName RowName;

protected:
    virtual void BeginPlay() override;

private:
    void ApplyDataToActor();
};