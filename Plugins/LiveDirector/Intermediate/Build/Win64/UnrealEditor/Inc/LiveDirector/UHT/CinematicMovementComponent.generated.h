// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CinematicMovementComponent.h"

#ifdef LIVEDIRECTOR_CinematicMovementComponent_generated_h
#error "CinematicMovementComponent.generated.h already included, missing '#pragma once' in CinematicMovementComponent.h"
#endif
#define LIVEDIRECTOR_CinematicMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCinematicMovementComponent **********************************************
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyIdlePose);


struct Z_Construct_UClass_UCinematicMovementComponent_Statics;
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UCinematicMovementComponent_NoRegister();

#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCinematicMovementComponent(); \
	friend struct ::Z_Construct_UClass_UCinematicMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVEDIRECTOR_API UClass* ::Z_Construct_UClass_UCinematicMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCinematicMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveDirector"), Z_Construct_UClass_UCinematicMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UCinematicMovementComponent)


#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCinematicMovementComponent(UCinematicMovementComponent&&) = delete; \
	UCinematicMovementComponent(const UCinematicMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinematicMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinematicMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCinematicMovementComponent) \
	NO_API virtual ~UCinematicMovementComponent();


#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h_15_PROLOG
#define FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCinematicMovementComponent;

// ********** End Class UCinematicMovementComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_CinematicMovementComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
