// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CinematicRendererCommandlet.h"

#ifdef CINEMATICRENDERER_CinematicRendererCommandlet_generated_h
#error "CinematicRendererCommandlet.generated.h already included, missing '#pragma once' in CinematicRendererCommandlet.h"
#endif
#define CINEMATICRENDERER_CinematicRendererCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCinematicRendererCommandlet *********************************************
#define FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessJSON);


struct Z_Construct_UClass_UCinematicRendererCommandlet_Statics;
CINEMATICRENDERER_API UClass* Z_Construct_UClass_UCinematicRendererCommandlet_NoRegister();

#define FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCinematicRendererCommandlet(); \
	friend struct ::Z_Construct_UClass_UCinematicRendererCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEMATICRENDERER_API UClass* ::Z_Construct_UClass_UCinematicRendererCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCinematicRendererCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CinematicRenderer"), Z_Construct_UClass_UCinematicRendererCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UCinematicRendererCommandlet)


#define FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CINEMATICRENDERER_API UCinematicRendererCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCinematicRendererCommandlet(UCinematicRendererCommandlet&&) = delete; \
	UCinematicRendererCommandlet(const UCinematicRendererCommandlet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CINEMATICRENDERER_API, UCinematicRendererCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinematicRendererCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCinematicRendererCommandlet) \
	CINEMATICRENDERER_API virtual ~UCinematicRendererCommandlet();


#define FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h_6_PROLOG
#define FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h_9_INCLASS_NO_PURE_DECLS \
	FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCinematicRendererCommandlet;

// ********** End Class UCinematicRendererCommandlet ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VlogDemo_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
