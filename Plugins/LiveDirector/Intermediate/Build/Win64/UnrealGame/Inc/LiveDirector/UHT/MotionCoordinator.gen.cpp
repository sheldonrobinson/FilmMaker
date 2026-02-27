// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCoordinator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMotionCoordinator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UCinematicMovementComponent();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_UCinematicMovementComponent_NoRegister();
LIVEDIRECTOR_API UEnum* Z_Construct_UEnum_LiveDirector_EIdleStyle();
LIVEDIRECTOR_API UEnum* Z_Construct_UEnum_LiveDirector_ELocomotionStyle();
POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveDirector();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELocomotionStyle **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocomotionStyle;
static UEnum* ELocomotionStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocomotionStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocomotionStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveDirector_ELocomotionStyle, (UObject*)Z_Construct_UPackage__Script_LiveDirector(), TEXT("ELocomotionStyle"));
	}
	return Z_Registration_Info_UEnum_ELocomotionStyle.OuterSingleton;
}
template<> LIVEDIRECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocomotionStyle>()
{
	return ELocomotionStyle_StaticEnum();
}
struct Z_Construct_UEnum_LiveDirector_ELocomotionStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Jog.DisplayName", "Jog" },
		{ "Jog.Name", "ELocomotionStyle::Jog" },
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
		{ "Run.DisplayName", "Run" },
		{ "Run.Name", "ELocomotionStyle::Run" },
		{ "Walk.DisplayName", "Walk" },
		{ "Walk.Name", "ELocomotionStyle::Walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocomotionStyle::Walk", (int64)ELocomotionStyle::Walk },
		{ "ELocomotionStyle::Jog", (int64)ELocomotionStyle::Jog },
		{ "ELocomotionStyle::Run", (int64)ELocomotionStyle::Run },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LiveDirector_ELocomotionStyle_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveDirector_ELocomotionStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LiveDirector,
	nullptr,
	"ELocomotionStyle",
	"ELocomotionStyle",
	Z_Construct_UEnum_LiveDirector_ELocomotionStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LiveDirector_ELocomotionStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LiveDirector_ELocomotionStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LiveDirector_ELocomotionStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LiveDirector_ELocomotionStyle()
{
	if (!Z_Registration_Info_UEnum_ELocomotionStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocomotionStyle.InnerSingleton, Z_Construct_UEnum_LiveDirector_ELocomotionStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocomotionStyle.InnerSingleton;
}
// ********** End Enum ELocomotionStyle ************************************************************

// ********** Begin Enum EIdleStyle ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIdleStyle;
static UEnum* EIdleStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIdleStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIdleStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveDirector_EIdleStyle, (UObject*)Z_Construct_UPackage__Script_LiveDirector(), TEXT("EIdleStyle"));
	}
	return Z_Registration_Info_UEnum_EIdleStyle.OuterSingleton;
}
template<> LIVEDIRECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EIdleStyle>()
{
	return EIdleStyle_StaticEnum();
}
struct Z_Construct_UEnum_LiveDirector_EIdleStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Lie.DisplayName", "Lie" },
		{ "Lie.Name", "EIdleStyle::Lie" },
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
		{ "Sit.DisplayName", "Sit" },
		{ "Sit.Name", "EIdleStyle::Sit" },
		{ "Stand.DisplayName", "Stand" },
		{ "Stand.Name", "EIdleStyle::Stand" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIdleStyle::Stand", (int64)EIdleStyle::Stand },
		{ "EIdleStyle::Sit", (int64)EIdleStyle::Sit },
		{ "EIdleStyle::Lie", (int64)EIdleStyle::Lie },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LiveDirector_EIdleStyle_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveDirector_EIdleStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LiveDirector,
	nullptr,
	"EIdleStyle",
	"EIdleStyle",
	Z_Construct_UEnum_LiveDirector_EIdleStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LiveDirector_EIdleStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LiveDirector_EIdleStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LiveDirector_EIdleStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LiveDirector_EIdleStyle()
{
	if (!Z_Registration_Info_UEnum_EIdleStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIdleStyle.InnerSingleton, Z_Construct_UEnum_LiveDirector_EIdleStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIdleStyle.InnerSingleton;
}
// ********** End Enum EIdleStyle ******************************************************************

// ********** Begin Class UCinematicMovementComponent Function MoveAlongPath ***********************
struct Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics
{
	struct CinematicMovementComponent_eventMoveAlongPath_Parms
	{
		TArray<FVector> Waypoints;
		ELocomotionStyle Style;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MoveAlongPath constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Waypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Style_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Style;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MoveAlongPath constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MoveAlongPath Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicMovementComponent_eventMoveAlongPath_Parms, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Waypoints_MetaData), NewProp_Waypoints_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::NewProp_Style_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicMovementComponent_eventMoveAlongPath_Parms, Style), Z_Construct_UEnum_LiveDirector_ELocomotionStyle, METADATA_PARAMS(0, nullptr) }; // 2937960648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::NewProp_Waypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::NewProp_Waypoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::NewProp_Style_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::NewProp_Style,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::PropPointers) < 2048);
// ********** End Function MoveAlongPath Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicMovementComponent, nullptr, "MoveAlongPath", 	Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::CinematicMovementComponent_eventMoveAlongPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::CinematicMovementComponent_eventMoveAlongPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicMovementComponent::execMoveAlongPath)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Waypoints);
	P_GET_ENUM(ELocomotionStyle,Z_Param_Style);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveAlongPath(Z_Param_Out_Waypoints,ELocomotionStyle(Z_Param_Style));
	P_NATIVE_END;
}
// ********** End Class UCinematicMovementComponent Function MoveAlongPath *************************

// ********** Begin Class UCinematicMovementComponent Function MoveSmart ***************************
struct Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics
{
	struct CinematicMovementComponent_eventMoveSmart_Parms
	{
		FVector Destination;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MoveSmart constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MoveSmart constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MoveSmart Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicMovementComponent_eventMoveSmart_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics::NewProp_Destination,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics::PropPointers) < 2048);
// ********** End Function MoveSmart Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicMovementComponent, nullptr, "MoveSmart", 	Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics::CinematicMovementComponent_eventMoveSmart_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics::CinematicMovementComponent_eventMoveSmart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicMovementComponent::execMoveSmart)
{
	P_GET_STRUCT(FVector,Z_Param_Destination);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveSmart(Z_Param_Destination);
	P_NATIVE_END;
}
// ********** End Class UCinematicMovementComponent Function MoveSmart *****************************

// ********** Begin Class UCinematicMovementComponent Function MoveTo ******************************
struct Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics
{
	struct CinematicMovementComponent_eventMoveTo_Parms
	{
		FVector Destination;
		ELocomotionStyle Style;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement API\n" },
#endif
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement API" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MoveTo constinit property declarations ********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Style_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Style;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MoveTo constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MoveTo Property Definitions *******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicMovementComponent_eventMoveTo_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::NewProp_Style_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicMovementComponent_eventMoveTo_Parms, Style), Z_Construct_UEnum_LiveDirector_ELocomotionStyle, METADATA_PARAMS(0, nullptr) }; // 2937960648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::NewProp_Style_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::NewProp_Style,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::PropPointers) < 2048);
// ********** End Function MoveTo Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicMovementComponent, nullptr, "MoveTo", 	Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::CinematicMovementComponent_eventMoveTo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::CinematicMovementComponent_eventMoveTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicMovementComponent_MoveTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicMovementComponent_MoveTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicMovementComponent::execMoveTo)
{
	P_GET_STRUCT(FVector,Z_Param_Destination);
	P_GET_ENUM(ELocomotionStyle,Z_Param_Style);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveTo(Z_Param_Destination,ELocomotionStyle(Z_Param_Style));
	P_NATIVE_END;
}
// ********** End Class UCinematicMovementComponent Function MoveTo ********************************

// ********** Begin Class UCinematicMovementComponent Function MoveWithAvoidance *******************
struct Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics
{
	struct CinematicMovementComponent_eventMoveWithAvoidance_Parms
	{
		FVector Destination;
		ELocomotionStyle Style;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MoveWithAvoidance constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Style_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Style;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MoveWithAvoidance constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MoveWithAvoidance Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicMovementComponent_eventMoveWithAvoidance_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::NewProp_Style_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicMovementComponent_eventMoveWithAvoidance_Parms, Style), Z_Construct_UEnum_LiveDirector_ELocomotionStyle, METADATA_PARAMS(0, nullptr) }; // 2937960648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::NewProp_Style_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::NewProp_Style,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::PropPointers) < 2048);
// ********** End Function MoveWithAvoidance Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicMovementComponent, nullptr, "MoveWithAvoidance", 	Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::CinematicMovementComponent_eventMoveWithAvoidance_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::CinematicMovementComponent_eventMoveWithAvoidance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicMovementComponent::execMoveWithAvoidance)
{
	P_GET_STRUCT(FVector,Z_Param_Destination);
	P_GET_ENUM(ELocomotionStyle,Z_Param_Style);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveWithAvoidance(Z_Param_Destination,ELocomotionStyle(Z_Param_Style));
	P_NATIVE_END;
}
// ********** End Class UCinematicMovementComponent Function MoveWithAvoidance *********************

// ********** Begin Class UCinematicMovementComponent Function SwitchToCinematicIdle ***************
struct Z_Construct_UFunction_UCinematicMovementComponent_SwitchToCinematicIdle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SwitchToCinematicIdle constinit property declarations *****************
// ********** End Function SwitchToCinematicIdle constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicMovementComponent_SwitchToCinematicIdle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicMovementComponent, nullptr, "SwitchToCinematicIdle", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_SwitchToCinematicIdle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicMovementComponent_SwitchToCinematicIdle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCinematicMovementComponent_SwitchToCinematicIdle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicMovementComponent_SwitchToCinematicIdle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicMovementComponent::execSwitchToCinematicIdle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToCinematicIdle();
	P_NATIVE_END;
}
// ********** End Class UCinematicMovementComponent Function SwitchToCinematicIdle *****************

// ********** Begin Class UCinematicMovementComponent Function UpdateFacialBlend *******************
struct Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics
{
	struct CinematicMovementComponent_eventUpdateFacialBlend_Parms
	{
		ELocomotionStyle Style;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Facial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Facial Animation\n" },
#endif
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Facial Animation" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateFacialBlend constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Style_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Style;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateFacialBlend constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateFacialBlend Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::NewProp_Style_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicMovementComponent_eventUpdateFacialBlend_Parms, Style), Z_Construct_UEnum_LiveDirector_ELocomotionStyle, METADATA_PARAMS(0, nullptr) }; // 2937960648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::NewProp_Style_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::NewProp_Style,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::PropPointers) < 2048);
// ********** End Function UpdateFacialBlend Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicMovementComponent, nullptr, "UpdateFacialBlend", 	Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::CinematicMovementComponent_eventUpdateFacialBlend_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::CinematicMovementComponent_eventUpdateFacialBlend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicMovementComponent::execUpdateFacialBlend)
{
	P_GET_ENUM(ELocomotionStyle,Z_Param_Style);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFacialBlend(ELocomotionStyle(Z_Param_Style));
	P_NATIVE_END;
}
// ********** End Class UCinematicMovementComponent Function UpdateFacialBlend *********************

// ********** Begin Class UCinematicMovementComponent Function UpdateManner ************************
struct Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics
{
	struct CinematicMovementComponent_eventUpdateManner_Parms
	{
		FRotator Orientation;
		EIdleStyle Style;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Facial Animation\n" },
#endif
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Facial Animation" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateManner constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Style_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Style;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateManner constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateManner Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicMovementComponent_eventUpdateManner_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::NewProp_Style_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicMovementComponent_eventUpdateManner_Parms, Style), Z_Construct_UEnum_LiveDirector_EIdleStyle, METADATA_PARAMS(0, nullptr) }; // 1977865790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::NewProp_Style_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::NewProp_Style,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::PropPointers) < 2048);
// ********** End Function UpdateManner Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicMovementComponent, nullptr, "UpdateManner", 	Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::CinematicMovementComponent_eventUpdateManner_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::CinematicMovementComponent_eventUpdateManner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicMovementComponent::execUpdateManner)
{
	P_GET_STRUCT(FRotator,Z_Param_Orientation);
	P_GET_ENUM(EIdleStyle,Z_Param_Style);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateManner(Z_Param_Orientation,EIdleStyle(Z_Param_Style));
	P_NATIVE_END;
}
// ********** End Class UCinematicMovementComponent Function UpdateManner **************************

// ********** Begin Class UCinematicMovementComponent **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCinematicMovementComponent;
UClass* UCinematicMovementComponent::GetPrivateStaticClass()
{
	using TClass = UCinematicMovementComponent;
	if (!Z_Registration_Info_UClass_UCinematicMovementComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CinematicMovementComponent"),
			Z_Registration_Info_UClass_UCinematicMovementComponent.InnerSingleton,
			StaticRegisterNativesUCinematicMovementComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCinematicMovementComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCinematicMovementComponent_NoRegister()
{
	return UCinematicMovementComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCinematicMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Adds a patrol component with Sequencer integration for MoveTo, Talking, and Gestures.\n*/" },
#endif
		{ "IncludePath", "MotionCoordinator.h" },
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a patrol component with Sequencer integration for MoveTo, Talking, and Gestures." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkDB_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PoseSearch Databases\n" },
#endif
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PoseSearch Databases" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JogDB_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunDB_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandDB_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Animation\")\n// UPoseSearchDatabase* CinematicIdleDB;\n" },
#endif
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Animation\")\nUPoseSearchDatabase* CinematicIdleDB;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SitDB_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LieDB_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MotionCoordinator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCinematicMovementComponent constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkDB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JogDB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunDB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StandDB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SitDB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LieDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCinematicMovementComponent constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("MoveAlongPath"), .Pointer = &UCinematicMovementComponent::execMoveAlongPath },
		{ .NameUTF8 = UTF8TEXT("MoveSmart"), .Pointer = &UCinematicMovementComponent::execMoveSmart },
		{ .NameUTF8 = UTF8TEXT("MoveTo"), .Pointer = &UCinematicMovementComponent::execMoveTo },
		{ .NameUTF8 = UTF8TEXT("MoveWithAvoidance"), .Pointer = &UCinematicMovementComponent::execMoveWithAvoidance },
		{ .NameUTF8 = UTF8TEXT("SwitchToCinematicIdle"), .Pointer = &UCinematicMovementComponent::execSwitchToCinematicIdle },
		{ .NameUTF8 = UTF8TEXT("UpdateFacialBlend"), .Pointer = &UCinematicMovementComponent::execUpdateFacialBlend },
		{ .NameUTF8 = UTF8TEXT("UpdateManner"), .Pointer = &UCinematicMovementComponent::execUpdateManner },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCinematicMovementComponent_MoveAlongPath, "MoveAlongPath" }, // 2756628169
		{ &Z_Construct_UFunction_UCinematicMovementComponent_MoveSmart, "MoveSmart" }, // 2341471215
		{ &Z_Construct_UFunction_UCinematicMovementComponent_MoveTo, "MoveTo" }, // 3382558354
		{ &Z_Construct_UFunction_UCinematicMovementComponent_MoveWithAvoidance, "MoveWithAvoidance" }, // 2756561265
		{ &Z_Construct_UFunction_UCinematicMovementComponent_SwitchToCinematicIdle, "SwitchToCinematicIdle" }, // 4245078257
		{ &Z_Construct_UFunction_UCinematicMovementComponent_UpdateFacialBlend, "UpdateFacialBlend" }, // 1734814020
		{ &Z_Construct_UFunction_UCinematicMovementComponent_UpdateManner, "UpdateManner" }, // 1009593383
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCinematicMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCinematicMovementComponent_Statics

// ********** Begin Class UCinematicMovementComponent Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_WalkDB = { "WalkDB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCinematicMovementComponent, WalkDB), Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkDB_MetaData), NewProp_WalkDB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_JogDB = { "JogDB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCinematicMovementComponent, JogDB), Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JogDB_MetaData), NewProp_JogDB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_RunDB = { "RunDB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCinematicMovementComponent, RunDB), Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunDB_MetaData), NewProp_RunDB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_StandDB = { "StandDB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCinematicMovementComponent, StandDB), Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandDB_MetaData), NewProp_StandDB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_SitDB = { "SitDB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCinematicMovementComponent, SitDB), Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SitDB_MetaData), NewProp_SitDB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_LieDB = { "LieDB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCinematicMovementComponent, LieDB), Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LieDB_MetaData), NewProp_LieDB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCinematicMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_WalkDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_JogDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_RunDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_StandDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_SitDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicMovementComponent_Statics::NewProp_LieDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicMovementComponent_Statics::PropPointers) < 2048);
// ********** End Class UCinematicMovementComponent Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UCinematicMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCinematicMovementComponent_Statics::ClassParams = {
	&UCinematicMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCinematicMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCinematicMovementComponent_Statics::Class_MetaDataParams)
};
void UCinematicMovementComponent::StaticRegisterNativesUCinematicMovementComponent()
{
	UClass* Class = UCinematicMovementComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCinematicMovementComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCinematicMovementComponent()
{
	if (!Z_Registration_Info_UClass_UCinematicMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCinematicMovementComponent.OuterSingleton, Z_Construct_UClass_UCinematicMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCinematicMovementComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCinematicMovementComponent);
UCinematicMovementComponent::~UCinematicMovementComponent() {}
// ********** End Class UCinematicMovementComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h__Script_LiveDirector_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocomotionStyle_StaticEnum, TEXT("ELocomotionStyle"), &Z_Registration_Info_UEnum_ELocomotionStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2937960648U) },
		{ EIdleStyle_StaticEnum, TEXT("EIdleStyle"), &Z_Registration_Info_UEnum_EIdleStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1977865790U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCinematicMovementComponent, UCinematicMovementComponent::StaticClass, TEXT("UCinematicMovementComponent"), &Z_Registration_Info_UClass_UCinematicMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCinematicMovementComponent), 1514600988U) },
	};
}; // Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h__Script_LiveDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h__Script_LiveDirector_2810858929{
	TEXT("/Script/LiveDirector"),
	Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h__Script_LiveDirector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h__Script_LiveDirector_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h__Script_LiveDirector_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_MotionCoordinator_h__Script_LiveDirector_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
