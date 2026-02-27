// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTagsHelperLibrary.h"

#ifdef LIVEDIRECTOR_GameplayTagsHelperLibrary_generated_h
#error "GameplayTagsHelperLibrary.generated.h already included, missing '#pragma once' in GameplayTagsHelperLibrary.h"
#endif
#define LIVEDIRECTOR_GameplayTagsHelperLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;
struct FGameplayTag;
struct FGameplayTagQuery;

// ********** Begin Class UGameplayTagsHelperLibrary ***********************************************
#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllActorsOfClassMatchingTagQuery); \
	DECLARE_FUNCTION(execGetAllActorsMatchingTagQuery); \
	DECLARE_FUNCTION(execGetAllActorsOfClassWithGameplayTag); \
	DECLARE_FUNCTION(execGetAllActorsWithGameplayTag);


struct Z_Construct_UClass_UGameplayTagsHelperLibrary_Statics;
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UGameplayTagsHelperLibrary_NoRegister();

#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTagsHelperLibrary(); \
	friend struct ::Z_Construct_UClass_UGameplayTagsHelperLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVEDIRECTOR_API UClass* ::Z_Construct_UClass_UGameplayTagsHelperLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayTagsHelperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveDirector"), Z_Construct_UClass_UGameplayTagsHelperLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGameplayTagsHelperLibrary)


#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsHelperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayTagsHelperLibrary(UGameplayTagsHelperLibrary&&) = delete; \
	UGameplayTagsHelperLibrary(const UGameplayTagsHelperLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsHelperLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsHelperLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsHelperLibrary) \
	NO_API virtual ~UGameplayTagsHelperLibrary();


#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h_8_PROLOG
#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayTagsHelperLibrary;

// ********** End Class UGameplayTagsHelperLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_GameplayTagsHelperLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
