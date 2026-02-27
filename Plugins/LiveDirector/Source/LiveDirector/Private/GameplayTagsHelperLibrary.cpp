#include "GameplayTagsHelperLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameplayTagsComponent.h"
#include "GameplayTagAssetInterface.h"

static bool ActorMatchesTagQuery(AActor* Actor, const FGameplayTagQuery& TagQuery)
{
    if (!Actor || TagQuery.IsEmpty()) return false;

    if (UGameplayTagsComponent* TagsComp = Actor->FindComponentByClass<UGameplayTagsComponent>())
    {
        FGameplayTagContainer Tags;
        TagsComp->GetOwnedGameplayTags(Tags);
        if (TagQuery.Matches(Tags)) return true;
    }

    if (IGameplayTagAssetInterface* TagInterface = Cast<IGameplayTagAssetInterface>(Actor))
    {
        FGameplayTagContainer Tags;
        TagInterface->GetOwnedGameplayTags(Tags);
        if (TagQuery.Matches(Tags))
            return true;
    }

    return false;
}

void UGameplayTagsHelperLibrary::GetAllActorsWithGameplayTag(const UObject* WorldContextObject, FGameplayTag Tag, bool bExactMatch, TArray<AActor*>& OutActors)
{
    OutActors.Reset();
    if (!WorldContextObject || !Tag.IsValid()) return;

    UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
    TArray<AActor*> AllActors;
    UGameplayStatics::GetAllActorsOfClass(World, AActor::StaticClass(), AllActors);

    for (AActor* Actor : AllActors)
    {
        if (!Actor) continue;

        if (UGameplayTagsComponent* TagsComp = Actor->FindComponentByClass<UGameplayTagsComponent>())
        {
            if (TagsComp->HasGameplayTag(Tag, bExactMatch))
            {
                OutActors.Add(Actor);
                continue;
            }
        }

        if (IGameplayTagAssetInterface* TagInterface = Cast<IGameplayTagAssetInterface>(Actor))
        {
            FGameplayTagContainer Tags;
            TagInterface->GetOwnedGameplayTags(Tags);
            if (bExactMatch ? Tags.HasTagExact(Tag) : Tags.HasTag(Tag))
            {
                OutActors.Add(Actor);
            }
        }
    }
}

void UGameplayTagsHelperLibrary::GetAllActorsOfClassWithGameplayTag(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FGameplayTag Tag, bool bExactMatch, TArray<AActor*>& OutActors)
{
    OutActors.Reset();
    if (!WorldContextObject || !ActorClass || !Tag.IsValid()) return;

    UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
    TArray<AActor*> AllActors;
    UGameplayStatics::GetAllActorsOfClass(World, ActorClass, AllActors);

    for (AActor* Actor : AllActors)
    {
        if (!Actor) continue;

        if (UGameplayTagsComponent* TagsComp = Actor->FindComponentByClass<UGameplayTagsComponent>())
        {
            if (TagsComp->HasGameplayTag(Tag, bExactMatch))
            {
                OutActors.Add(Actor);
                continue;
            }
        }

        if (IGameplayTagAssetInterface* TagInterface = Cast<IGameplayTagAssetInterface>(Actor))
        {
            FGameplayTagContainer Tags;
            TagInterface->GetOwnedGameplayTags(Tags);
            if (bExactMatch ? Tags.HasTagExact(Tag) : Tags.HasTag(Tag))
            {
                OutActors.Add(Actor);
            }
        }
    }
}

void UGameplayTagsHelperLibrary::GetAllActorsMatchingTagQuery(const UObject* WorldContextObject, const FGameplayTagQuery& TagQuery, TArray<AActor*>& OutActors)
{
    OutActors.Reset();
    if (!WorldContextObject || TagQuery.IsEmpty()) return;

    UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
    TArray<AActor*> AllActors;
    UGameplayStatics::GetAllActorsOfClass(World, AActor::StaticClass(), AllActors);

    for (AActor* Actor : AllActors)
    {
        if (ActorMatchesTagQuery(Actor, TagQuery))
        {
            OutActors.Add(Actor);
        }
    }
}

void UGameplayTagsHelperLibrary::GetAllActorsOfClassMatchingTagQuery(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FGameplayTagQuery& TagQuery, TArray<AActor*>& OutActors)
{
    OutActors.Reset();
    if (!WorldContextObject || !ActorClass || TagQuery.IsEmpty()) return;

    UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
    TArray<AActor*> AllActors;
    UGameplayStatics::GetAllActorsOfClass(World, ActorClass, AllActors);

    for (AActor* Actor : AllActors)
    {
        if (ActorMatchesTagQuery(Actor, TagQuery))
        {
            OutActors.Add(Actor);
        }
    }
}
