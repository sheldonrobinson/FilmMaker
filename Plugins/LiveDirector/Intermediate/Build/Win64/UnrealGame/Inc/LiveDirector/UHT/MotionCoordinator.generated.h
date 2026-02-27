// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionCoordinator.h"

#ifdef LIVEDIRECTOR_MotionCoordinator_generated_h
#error "MotionCoordinator.generated.h already included, missing '#pragma once' in MotionCoordinator.h"
#endif
#define LIVEDIRECTOR_MotionCoordinator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EIdleStyle : uint8;
enum class ELocomotionStyle : uint8;

// ********** Begin Class UCinematicMovementComponent **********************************************
#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateFacialBlend); \
	DECLARE_FUNCTION(execUpdateManner); \
	DECLARE_FUNCTION(execSwitchToCinematicIdle); \
	DECLARE_FUNCTION(execMoveWithAvoidance); \
	DECLARE_FUNCTION(execMoveAlongPath); \
	DECLARE_FUNCTION(execMoveSmart); \
	DECLARE_FUNCTION(execMoveTo);


struct Z_Construct_UClass_UCinematicMovementComponent_Statics;
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UCinematicMovementComponent_NoRegister();

#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCinematicMovementComponent(); \
	friend struct ::Z_Construct_UClass_UCinematicMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVEDIRECTOR_API UClass* ::Z_Construct_UClass_UCinematicMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCinematicMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveDirector"), Z_Construct_UClass_UCinematicMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UCinematicMovementComponent)


#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCinematicMovementComponent(UCinematicMovementComponent&&) = delete; \
	UCinematicMovementComponent(const UCinematicMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinematicMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinematicMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCinematicMovementComponent) \
	NO_API virtual ~UCinematicMovementComponent();


#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h_29_PROLOG
#define FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h_32_INCLASS_NO_PURE_DECLS \
	FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCinematicMovementComponent;

// ********** End Class UCinematicMovementComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h

// ********** Begin Enum ELocomotionStyle **********************************************************
#define FOREACH_ENUM_ELOCOMOTIONSTYLE(op) \
	op(ELocomotionStyle::Walk) \
	op(ELocomotionStyle::Jog) \
	op(ELocomotionStyle::Run) 

enum class ELocomotionStyle : uint8;
template<> struct TIsUEnumClass<ELocomotionStyle> { enum { Value = true }; };
template<> LIVEDIRECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocomotionStyle>();
// ********** End Enum ELocomotionStyle ************************************************************

// ********** Begin Enum EIdleStyle ****************************************************************
#define FOREACH_ENUM_EIDLESTYLE(op) \
	op(EIdleStyle::Stand) \
	op(EIdleStyle::Sit) \
	op(EIdleStyle::Lie) 

enum class EIdleStyle : uint8;
template<> struct TIsUEnumClass<EIdleStyle> { enum { Value = true }; };
template<> LIVEDIRECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EIdleStyle>();
// ********** End Enum EIdleStyle ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
