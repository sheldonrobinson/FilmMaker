// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CinematicRendererBPLibrary.h"

#ifdef CINEMATICRENDERER_CinematicRendererBPLibrary_generated_h
#error "CinematicRendererBPLibrary.generated.h already included, missing '#pragma once' in CinematicRendererBPLibrary.h"
#endif
#define CINEMATICRENDERER_CinematicRendererBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
enum class ECinematicRendererPlaybackQuality : uint8;
enum class EMoviePipelineMP4EncodeProfile : uint8;
struct FCinematicRendererVariableBitrateEstimate;
struct FFrameRate;
struct FSoftObjectPath;

// ********** Begin ScriptStruct FCinematicRendererVariableBitrateEstimate *************************
struct Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics;
#define FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics; \
	CINEMATICRENDERER_API static class UScriptStruct* StaticStruct();


struct FCinematicRendererVariableBitrateEstimate;
// ********** End ScriptStruct FCinematicRendererVariableBitrateEstimate ***************************

// ********** Begin Class UCinematicRendererBPLibrary **********************************************
#define FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEstimateVideoBitrateRange); \
	DECLARE_FUNCTION(execRenderCinematicByParametersWithLevelSequenceInternal); \
	DECLARE_FUNCTION(execRenderCinematicByParametersInternal); \
	DECLARE_FUNCTION(execRenderCinematicByParameters);


struct Z_Construct_UClass_UCinematicRendererBPLibrary_Statics;
CINEMATICRENDERER_API UClass* Z_Construct_UClass_UCinematicRendererBPLibrary_NoRegister();

#define FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCinematicRendererBPLibrary(); \
	friend struct ::Z_Construct_UClass_UCinematicRendererBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEMATICRENDERER_API UClass* ::Z_Construct_UClass_UCinematicRendererBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UCinematicRendererBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CinematicRenderer"), Z_Construct_UClass_UCinematicRendererBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UCinematicRendererBPLibrary)


#define FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCinematicRendererBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCinematicRendererBPLibrary(UCinematicRendererBPLibrary&&) = delete; \
	UCinematicRendererBPLibrary(const UCinematicRendererBPLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinematicRendererBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinematicRendererBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCinematicRendererBPLibrary) \
	NO_API virtual ~UCinematicRendererBPLibrary();


#define FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h_64_PROLOG
#define FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h_67_INCLASS_NO_PURE_DECLS \
	FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCinematicRendererBPLibrary;

// ********** End Class UCinematicRendererBPLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h

// ********** Begin Enum ECinematicRendererPlaybackQuality *****************************************
#define FOREACH_ENUM_ECINEMATICRENDERERPLAYBACKQUALITY(op) \
	op(ECinematicRendererPlaybackQuality::Low) \
	op(ECinematicRendererPlaybackQuality::Medium) \
	op(ECinematicRendererPlaybackQuality::High) 

enum class ECinematicRendererPlaybackQuality : uint8;
template<> struct TIsUEnumClass<ECinematicRendererPlaybackQuality> { enum { Value = true }; };
template<> CINEMATICRENDERER_NON_ATTRIBUTED_API UEnum* StaticEnum<ECinematicRendererPlaybackQuality>();
// ********** End Enum ECinematicRendererPlaybackQuality *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
