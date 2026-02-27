// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveDirectorDataTableComponent.h"

#ifdef LIVEDIRECTOR_LiveDirectorDataTableComponent_generated_h
#error "LiveDirectorDataTableComponent.generated.h already included, missing '#pragma once' in LiveDirectorDataTableComponent.h"
#endif
#define LIVEDIRECTOR_LiveDirectorDataTableComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiveDirectoryDataRow *********************************************
struct Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics;
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics; \
	LIVEDIRECTOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FLiveDirectoryDataRow;
// ********** End ScriptStruct FLiveDirectoryDataRow ***********************************************

// ********** Begin Class ULiveDirectorDataTableComponent ******************************************
struct Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics;
LIVEDIRECTOR_API UClass* Z_Construct_UClass_ULiveDirectorDataTableComponent_NoRegister();

#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveDirectorDataTableComponent(); \
	friend struct ::Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVEDIRECTOR_API UClass* ::Z_Construct_UClass_ULiveDirectorDataTableComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveDirectorDataTableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveDirector"), Z_Construct_UClass_ULiveDirectorDataTableComponent_NoRegister) \
	DECLARE_SERIALIZER(ULiveDirectorDataTableComponent)


#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveDirectorDataTableComponent(ULiveDirectorDataTableComponent&&) = delete; \
	ULiveDirectorDataTableComponent(const ULiveDirectorDataTableComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveDirectorDataTableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveDirectorDataTableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveDirectorDataTableComponent) \
	NO_API virtual ~ULiveDirectorDataTableComponent();


#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h_22_PROLOG
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveDirectorDataTableComponent;

// ********** End Class ULiveDirectorDataTableComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
