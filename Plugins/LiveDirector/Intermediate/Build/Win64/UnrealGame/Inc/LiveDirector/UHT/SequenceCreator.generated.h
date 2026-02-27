// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequenceCreator.h"

#ifdef LIVEDIRECTOR_SequenceCreator_generated_h
#error "SequenceCreator.generated.h already included, missing '#pragma once' in SequenceCreator.h"
#endif
#define LIVEDIRECTOR_SequenceCreator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiveDirectorTimelineRegion;
struct FLiveDirectorTimelineSection;

// ********** Begin ScriptStruct FLiveDirectorTimelineSection **************************************
struct Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics;
#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics; \
	LIVEDIRECTOR_API static class UScriptStruct* StaticStruct();


struct FLiveDirectorTimelineSection;
// ********** End ScriptStruct FLiveDirectorTimelineSection ****************************************

// ********** Begin ScriptStruct FLiveDirectorTimeline *********************************************
struct Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics;
#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics; \
	LIVEDIRECTOR_API static class UScriptStruct* StaticStruct();


struct FLiveDirectorTimeline;
// ********** End ScriptStruct FLiveDirectorTimeline ***********************************************

// ********** Begin ScriptStruct FLiveDirectorTimelineEvent ****************************************
struct Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics;
#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics; \
	LIVEDIRECTOR_API static class UScriptStruct* StaticStruct();


struct FLiveDirectorTimelineEvent;
// ********** End ScriptStruct FLiveDirectorTimelineEvent ******************************************

// ********** Begin ScriptStruct FLiveDirectorTimelineRegion ***************************************
struct Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics;
#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics; \
	LIVEDIRECTOR_API static class UScriptStruct* StaticStruct();


struct FLiveDirectorTimelineRegion;
// ********** End ScriptStruct FLiveDirectorTimelineRegion *****************************************

// ********** Begin ScriptStruct FLiveDirectorSceneCuts ********************************************
struct Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics;
#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics; \
	LIVEDIRECTOR_API static class UScriptStruct* StaticStruct();


struct FLiveDirectorSceneCuts;
// ********** End ScriptStruct FLiveDirectorSceneCuts **********************************************

// ********** Begin Class USequenceCreator *********************************************************
#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSequencerPlayerPlay); \
	DECLARE_FUNCTION(execOnSequencerPlayerStop); \
	DECLARE_FUNCTION(execConvertSectionsToRegions);


struct Z_Construct_UClass_USequenceCreator_Statics;
LIVEDIRECTOR_API UClass* Z_Construct_UClass_USequenceCreator_NoRegister();

#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequenceCreator(); \
	friend struct ::Z_Construct_UClass_USequenceCreator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVEDIRECTOR_API UClass* ::Z_Construct_UClass_USequenceCreator_NoRegister(); \
public: \
	DECLARE_CLASS2(USequenceCreator, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveDirector"), Z_Construct_UClass_USequenceCreator_NoRegister) \
	DECLARE_SERIALIZER(USequenceCreator)


#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_94_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequenceCreator(USequenceCreator&&) = delete; \
	USequenceCreator(const USequenceCreator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequenceCreator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceCreator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USequenceCreator) \
	NO_API virtual ~USequenceCreator();


#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_91_PROLOG
#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_94_INCLASS_NO_PURE_DECLS \
	FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequenceCreator;

// ********** End Class USequenceCreator ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
