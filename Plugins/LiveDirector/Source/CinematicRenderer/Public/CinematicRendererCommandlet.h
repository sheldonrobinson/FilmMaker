#pragma once

#include "Commandlets/Commandlet.h"
#include "CinematicRendererCommandlet.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class  UCinematicRendererCommandlet : public UCommandlet
{
    GENERATED_BODY()

public:
    virtual int32 Main(const FString& Params) override;

    UFUNCTION(BlueprintCallable)
	static  int32 ProcessJSON(const FString& Json);
    
};