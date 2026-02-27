// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveDirectorBPLibrary.h"

#ifdef LIVEDIRECTOR_LiveDirectorBPLibrary_generated_h
#error "LiveDirectorBPLibrary.generated.h already included, missing '#pragma once' in LiveDirectorBPLibrary.h"
#endif
#define LIVEDIRECTOR_LiveDirectorBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FFrameRate;

// ********** Begin ScriptStruct FLiveDirectorTimelineSection **************************************
struct Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics;
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLiveDirectorTimelineSection;
// ********** End ScriptStruct FLiveDirectorTimelineSection ****************************************

// ********** Begin ScriptStruct FActorData ********************************************************
struct Z_Construct_UScriptStruct_FActorData_Statics;
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FActorData;
// ********** End ScriptStruct FActorData **********************************************************

// ********** Begin ScriptStruct FLiveDirectorTimeline *********************************************
struct Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics;
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLiveDirectorTimeline;
// ********** End ScriptStruct FLiveDirectorTimeline ***********************************************

// ********** Begin ScriptStruct FLiveDirectorTimelineEvent ****************************************
struct Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics;
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLiveDirectorTimelineEvent;
// ********** End ScriptStruct FLiveDirectorTimelineEvent ******************************************

// ********** Begin ScriptStruct FLiveDirectorTimelineRegion ***************************************
struct Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics;
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLiveDirectorTimelineRegion;
// ********** End ScriptStruct FLiveDirectorTimelineRegion *****************************************

// ********** Begin ScriptStruct FLiveDirectorSceneCuts ********************************************
struct Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics;
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLiveDirectorSceneCuts;
// ********** End ScriptStruct FLiveDirectorSceneCuts **********************************************

// ********** Begin Class ULiveDirectorBPLibrary ***************************************************
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRenderMovieSceneQueue); \
	DECLARE_FUNCTION(execCreateAndRenderMovie);


struct Z_Construct_UClass_ULiveDirectorBPLibrary_Statics;
LIVEDIRECTOR_API UClass* Z_Construct_UClass_ULiveDirectorBPLibrary_NoRegister();

#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveDirectorBPLibrary(); \
	friend struct ::Z_Construct_UClass_ULiveDirectorBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVEDIRECTOR_API UClass* ::Z_Construct_UClass_ULiveDirectorBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveDirectorBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveDirector"), Z_Construct_UClass_ULiveDirectorBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULiveDirectorBPLibrary)


#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveDirectorBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveDirectorBPLibrary(ULiveDirectorBPLibrary&&) = delete; \
	ULiveDirectorBPLibrary(const ULiveDirectorBPLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveDirectorBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveDirectorBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveDirectorBPLibrary) \
	NO_API virtual ~ULiveDirectorBPLibrary();


#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_98_PROLOG
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_101_INCLASS_NO_PURE_DECLS \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveDirectorBPLibrary;

// ********** End Class ULiveDirectorBPLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
