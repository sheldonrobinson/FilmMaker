#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsHelperLibrary.generated.h"

UCLASS()
class LIVEDIRECTOR_API UGameplayTagsHelperLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category="Gameplay Tags", meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsWithGameplayTag(const UObject* WorldContextObject, FGameplayTag Tag, bool bExactMatch, TArray<AActor*>& OutActors);

    UFUNCTION(BlueprintCallable, Category="Gameplay Tags", meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsOfClassWithGameplayTag(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FGameplayTag Tag, bool bExactMatch, TArray<AActor*>& OutActors);

    UFUNCTION(BlueprintCallable, Category="Gameplay Tags", meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsMatchingTagQuery(const UObject* WorldContextObject, const FGameplayTagQuery& TagQuery, TArray<AActor*>& OutActors);

    UFUNCTION(BlueprintCallable, Category="Gameplay Tags", meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsOfClassMatchingTagQuery(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FGameplayTagQuery& TagQuery, TArray<AActor*>& OutActors);
};
