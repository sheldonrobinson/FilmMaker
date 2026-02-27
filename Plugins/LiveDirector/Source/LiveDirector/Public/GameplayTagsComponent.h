#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagsComponent.generated.h"

/**
 * Actor Component that manages Gameplay Tags and integrates with GAS.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class LIVEDIRECTOR_API UGameplayTagsComponent 
    : public UActorComponent, public IGameplayTagAssetInterface
{
    GENERATED_BODY()

public:
    UGameplayTagsComponent();

protected:
    virtual void BeginPlay() override;

public:
    /** Local tag container (used if no ASC is present) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Gameplay Tags")
    FGameplayTagContainer OwnedTags;

    /** IGameplayTagAssetInterface implementation */
    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;

    /** Adds a tag (replicated if ASC exists) */
    UFUNCTION(BlueprintCallable, Category="Gameplay Tags")
    void AddGameplayTag(FGameplayTag Tag);

    /** Removes a tag (replicated if ASC exists) */
    UFUNCTION(BlueprintCallable, Category="Gameplay Tags")
    void RemoveGameplayTag(FGameplayTag Tag);

    /** Checks if the actor has a tag */
    UFUNCTION(BlueprintCallable, Category="Gameplay Tags")
    bool HasGameplayTag(FGameplayTag Tag, bool bExactMatch = true) const;
};