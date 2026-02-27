#pragma once
#include "Engine/DataTable.h"
#include "AssetMappingRow.generated.h"

USTRUCT(BlueprintType)
struct FAssetMappingRow : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Type; // "Camera", "FX", "Prop", "Light"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UObject> Asset; // Can be StaticMesh, NiagaraSystem, CameraActor, etc.
};
