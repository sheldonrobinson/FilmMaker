#include "GameplayTagsComponent.h"
#include "GameFramework/Actor.h"

UGameplayTagsComponent::UGameplayTagsComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UGameplayTagsComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UGameplayTagsComponent::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
    TagContainer = OwnedTags;
}

void UGameplayTagsComponent::AddGameplayTag(FGameplayTag Tag)
{
    if (!Tag.IsValid()) return;

    OwnedTags.AddTag(Tag);
}

void UGameplayTagsComponent::RemoveGameplayTag(FGameplayTag Tag)
{
    if (!Tag.IsValid()) return;

    OwnedTags.RemoveTag(Tag);
}

bool UGameplayTagsComponent::HasGameplayTag(FGameplayTag Tag, bool bExactMatch) const
{
    if (!Tag.IsValid()) return false;

    FGameplayTagContainer Tags;
    GetOwnedGameplayTags(Tags);

    return bExactMatch ? Tags.HasTagExact(Tag) : Tags.HasTag(Tag);
}
