// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTagsComponent.h"

#ifdef LIVEDIRECTOR_GameplayTagsComponent_generated_h
#error "GameplayTagsComponent.generated.h already included, missing '#pragma once' in GameplayTagsComponent.h"
#endif
#define LIVEDIRECTOR_GameplayTagsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;

// ********** Begin Class UGameplayTagsComponent ***************************************************
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasGameplayTag); \
	DECLARE_FUNCTION(execRemoveGameplayTag); \
	DECLARE_FUNCTION(execAddGameplayTag);


struct Z_Construct_UClass_UGameplayTagsComponent_Statics;
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UGameplayTagsComponent_NoRegister();

#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTagsComponent(); \
	friend struct ::Z_Construct_UClass_UGameplayTagsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVEDIRECTOR_API UClass* ::Z_Construct_UClass_UGameplayTagsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayTagsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveDirector"), Z_Construct_UClass_UGameplayTagsComponent_NoRegister) \
	DECLARE_SERIALIZER(UGameplayTagsComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTagsComponent*>(this); }


#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayTagsComponent(UGameplayTagsComponent&&) = delete; \
	UGameplayTagsComponent(const UGameplayTagsComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameplayTagsComponent) \
	NO_API virtual ~UGameplayTagsComponent();


#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h_12_PROLOG
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayTagsComponent;

// ********** End Class UGameplayTagsComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
