// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicRendererBPLibrary.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCinematicRendererBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
CINEMATICRENDERER_API UClass* Z_Construct_UClass_UCinematicRendererBPLibrary();
CINEMATICRENDERER_API UClass* Z_Construct_UClass_UCinematicRendererBPLibrary_NoRegister();
CINEMATICRENDERER_API UEnum* Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile();
CINEMATICRENDERER_API UEnum* Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality();
CINEMATICRENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_CinematicRenderer();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECinematicRendererPlaybackQuality *****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECinematicRendererPlaybackQuality;
static UEnum* ECinematicRendererPlaybackQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECinematicRendererPlaybackQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECinematicRendererPlaybackQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality, (UObject*)Z_Construct_UPackage__Script_CinematicRenderer(), TEXT("ECinematicRendererPlaybackQuality"));
	}
	return Z_Registration_Info_UEnum_ECinematicRendererPlaybackQuality.OuterSingleton;
}
template<> CINEMATICRENDERER_NON_ATTRIBUTED_API UEnum* StaticEnum<ECinematicRendererPlaybackQuality>()
{
	return ECinematicRendererPlaybackQuality_StaticEnum();
}
struct Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Supported playback quality levels for cinematic rendering.\n */" },
#endif
		{ "High.DisplayName", "High" },
		{ "High.Name", "ECinematicRendererPlaybackQuality::High" },
		{ "Low.DisplayName", "Low" },
		{ "Low.Name", "ECinematicRendererPlaybackQuality::Low" },
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "ECinematicRendererPlaybackQuality::Medium" },
		{ "ModuleRelativePath", "Public/CinematicRendererBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Supported playback quality levels for cinematic rendering." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECinematicRendererPlaybackQuality::Low", (int64)ECinematicRendererPlaybackQuality::Low },
		{ "ECinematicRendererPlaybackQuality::Medium", (int64)ECinematicRendererPlaybackQuality::Medium },
		{ "ECinematicRendererPlaybackQuality::High", (int64)ECinematicRendererPlaybackQuality::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CinematicRenderer,
	nullptr,
	"ECinematicRendererPlaybackQuality",
	"ECinematicRendererPlaybackQuality",
	Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality()
{
	if (!Z_Registration_Info_UEnum_ECinematicRendererPlaybackQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECinematicRendererPlaybackQuality.InnerSingleton, Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECinematicRendererPlaybackQuality.InnerSingleton;
}
// ********** End Enum ECinematicRendererPlaybackQuality *******************************************

// ********** Begin Enum ECinematicRendererEncoderProfile ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECinematicRendererEncoderProfile;
static UEnum* ECinematicRendererEncoderProfile_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECinematicRendererEncoderProfile.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECinematicRendererEncoderProfile.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile, (UObject*)Z_Construct_UPackage__Script_CinematicRenderer(), TEXT("ECinematicRendererEncoderProfile"));
	}
	return Z_Registration_Info_UEnum_ECinematicRendererEncoderProfile.OuterSingleton;
}
template<> CINEMATICRENDERER_NON_ATTRIBUTED_API UEnum* StaticEnum<ECinematicRendererEncoderProfile>()
{
	return ECinematicRendererEncoderProfile_StaticEnum();
}
struct Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Baseline.DisplayName", "Baseline" },
		{ "Baseline.Name", "ECinematicRendererEncoderProfile::Baseline" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Supported playback quality levels for cinematic rendering.\n */" },
#endif
		{ "High.DisplayName", "High" },
		{ "High.Name", "ECinematicRendererEncoderProfile::High" },
		{ "Main.DisplayName", "Main" },
		{ "Main.Name", "ECinematicRendererEncoderProfile::Main" },
		{ "ModuleRelativePath", "Public/CinematicRendererBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Supported playback quality levels for cinematic rendering." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECinematicRendererEncoderProfile::Baseline", (int64)ECinematicRendererEncoderProfile::Baseline },
		{ "ECinematicRendererEncoderProfile::Main", (int64)ECinematicRendererEncoderProfile::Main },
		{ "ECinematicRendererEncoderProfile::High", (int64)ECinematicRendererEncoderProfile::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CinematicRenderer,
	nullptr,
	"ECinematicRendererEncoderProfile",
	"ECinematicRendererEncoderProfile",
	Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile()
{
	if (!Z_Registration_Info_UEnum_ECinematicRendererEncoderProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECinematicRendererEncoderProfile.InnerSingleton, Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECinematicRendererEncoderProfile.InnerSingleton;
}
// ********** End Enum ECinematicRendererEncoderProfile ********************************************

// ********** Begin ScriptStruct FCinematicRendererVariableBitrateEstimate *************************
struct Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCinematicRendererVariableBitrateEstimate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCinematicRendererVariableBitrateEstimate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct providing bitrate in kbps given playback quality.\n */" },
#endif
		{ "ModuleRelativePath", "Public/CinematicRendererBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct providing bitrate in kbps given playback quality." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "CinematicRendererVariableBitrateEstimate" },
		{ "ModuleRelativePath", "Public/CinematicRendererBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "CinematicRendererVariableBitrateEstimate" },
		{ "ModuleRelativePath", "Public/CinematicRendererBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "CinematicRendererVariableBitrateEstimate" },
		{ "ModuleRelativePath", "Public/CinematicRendererBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCinematicRendererVariableBitrateEstimate constinit property declarations 
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Target;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Min;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCinematicRendererVariableBitrateEstimate constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCinematicRendererVariableBitrateEstimate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCinematicRendererVariableBitrateEstimate;
class UScriptStruct* FCinematicRendererVariableBitrateEstimate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCinematicRendererVariableBitrateEstimate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCinematicRendererVariableBitrateEstimate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate, (UObject*)Z_Construct_UPackage__Script_CinematicRenderer(), TEXT("CinematicRendererVariableBitrateEstimate"));
	}
	return Z_Registration_Info_UScriptStruct_FCinematicRendererVariableBitrateEstimate.OuterSingleton;
	}

// ********** Begin ScriptStruct FCinematicRendererVariableBitrateEstimate Property Definitions ****
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCinematicRendererVariableBitrateEstimate, Target), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCinematicRendererVariableBitrateEstimate, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCinematicRendererVariableBitrateEstimate, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCinematicRendererVariableBitrateEstimate Property Definitions ******
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CinematicRenderer,
	nullptr,
	&NewStructOps,
	"CinematicRendererVariableBitrateEstimate",
	Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::PropPointers),
	sizeof(FCinematicRendererVariableBitrateEstimate),
	alignof(FCinematicRendererVariableBitrateEstimate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate()
{
	if (!Z_Registration_Info_UScriptStruct_FCinematicRendererVariableBitrateEstimate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCinematicRendererVariableBitrateEstimate.InnerSingleton, Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCinematicRendererVariableBitrateEstimate.InnerSingleton);
}
// ********** End ScriptStruct FCinematicRendererVariableBitrateEstimate ***************************

// ********** Begin Class UCinematicRendererBPLibrary Function EstimateVideoBitrateRange ***********
struct Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct CinematicRendererBPLibrary_eventEstimateVideoBitrateRange_Parms
	{
		FIntPoint Resolution;
		FFrameRate FrameRate;
		ECinematicRendererPlaybackQuality PlaybackQuality;
		FCinematicRendererVariableBitrateEstimate ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_PlaybackQuality", "High" },
		{ "ModuleRelativePath", "Public/CinematicRendererBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EstimateVideoBitrateRange constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackQuality;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EstimateVideoBitrateRange constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EstimateVideoBitrateRange Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventEstimateVideoBitrateRange_Parms, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventEstimateVideoBitrateRange_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::NewProp_PlaybackQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::NewProp_PlaybackQuality = { "PlaybackQuality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventEstimateVideoBitrateRange_Parms, PlaybackQuality), Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality, METADATA_PARAMS(0, nullptr) }; // 3295560536
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventEstimateVideoBitrateRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate, METADATA_PARAMS(0, nullptr) }; // 4110012610
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::NewProp_PlaybackQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::NewProp_PlaybackQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::PropPointers) < 2048);
// ********** End Function EstimateVideoBitrateRange Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicRendererBPLibrary, nullptr, "EstimateVideoBitrateRange", 	Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::CinematicRendererBPLibrary_eventEstimateVideoBitrateRange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::CinematicRendererBPLibrary_eventEstimateVideoBitrateRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicRendererBPLibrary::execEstimateVideoBitrateRange)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Resolution);
	P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_FrameRate);
	P_GET_ENUM(ECinematicRendererPlaybackQuality,Z_Param_PlaybackQuality);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCinematicRendererVariableBitrateEstimate*)Z_Param__Result=UCinematicRendererBPLibrary::EstimateVideoBitrateRange(Z_Param_Out_Resolution,Z_Param_Out_FrameRate,ECinematicRendererPlaybackQuality(Z_Param_PlaybackQuality));
	P_NATIVE_END;
}
// ********** End Class UCinematicRendererBPLibrary Function EstimateVideoBitrateRange *************

// ********** Begin Class UCinematicRendererBPLibrary Function RenderCinematicByParameters *********
struct Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct CinematicRendererBPLibrary_eventRenderCinematicByParameters_Parms
	{
		FString SequencePath;
		FString MapPath;
		FIntPoint Resolution;
		FFrameRate FrameRate;
		ECinematicRendererPlaybackQuality PlaybackQuality;
		ECinematicRendererEncoderProfile EncodeProfile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "CPP_Default_EncodeProfile", "High" },
		{ "CPP_Default_PlaybackQuality", "High" },
		{ "ModuleRelativePath", "Public/CinematicRendererBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RenderCinematicByParameters constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_SequencePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackQuality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncodeProfile_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodeProfile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RenderCinematicByParameters constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RenderCinematicByParameters Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_SequencePath = { "SequencePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParameters_Parms, SequencePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePath_MetaData), NewProp_SequencePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_MapPath = { "MapPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParameters_Parms, MapPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapPath_MetaData), NewProp_MapPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParameters_Parms, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParameters_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_PlaybackQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_PlaybackQuality = { "PlaybackQuality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParameters_Parms, PlaybackQuality), Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality, METADATA_PARAMS(0, nullptr) }; // 3295560536
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_EncodeProfile_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_EncodeProfile = { "EncodeProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParameters_Parms, EncodeProfile), Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile, METADATA_PARAMS(0, nullptr) }; // 3727421975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_SequencePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_MapPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_PlaybackQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_PlaybackQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_EncodeProfile_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::NewProp_EncodeProfile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::PropPointers) < 2048);
// ********** End Function RenderCinematicByParameters Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicRendererBPLibrary, nullptr, "RenderCinematicByParameters", 	Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::CinematicRendererBPLibrary_eventRenderCinematicByParameters_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::CinematicRendererBPLibrary_eventRenderCinematicByParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicRendererBPLibrary::execRenderCinematicByParameters)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SequencePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_MapPath);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Resolution);
	P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_FrameRate);
	P_GET_ENUM(ECinematicRendererPlaybackQuality,Z_Param_PlaybackQuality);
	P_GET_ENUM(ECinematicRendererEncoderProfile,Z_Param_EncodeProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCinematicRendererBPLibrary::RenderCinematicByParameters(Z_Param_SequencePath,Z_Param_MapPath,Z_Param_Out_Resolution,Z_Param_Out_FrameRate,ECinematicRendererPlaybackQuality(Z_Param_PlaybackQuality),ECinematicRendererEncoderProfile(Z_Param_EncodeProfile));
	P_NATIVE_END;
}
// ********** End Class UCinematicRendererBPLibrary Function RenderCinematicByParameters ***********

// ********** Begin Class UCinematicRendererBPLibrary Function RenderCinematicByParametersInternal *
struct Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct CinematicRendererBPLibrary_eventRenderCinematicByParametersInternal_Parms
	{
		FSoftObjectPath SequencePath;
		FSoftObjectPath MapPath;
		FIntPoint Resolution;
		FFrameRate FrameRate;
		ECinematicRendererPlaybackQuality PlaybackQuality;
		ECinematicRendererEncoderProfile EncodeProfile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "CPP_Default_EncodeProfile", "High" },
		{ "CPP_Default_PlaybackQuality", "High" },
		{ "ModuleRelativePath", "Public/CinematicRendererBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RenderCinematicByParametersInternal constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackQuality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncodeProfile_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodeProfile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RenderCinematicByParametersInternal constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RenderCinematicByParametersInternal Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_SequencePath = { "SequencePath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParametersInternal_Parms, SequencePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePath_MetaData), NewProp_SequencePath_MetaData) }; // 2425717601
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_MapPath = { "MapPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParametersInternal_Parms, MapPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapPath_MetaData), NewProp_MapPath_MetaData) }; // 2425717601
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParametersInternal_Parms, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParametersInternal_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_PlaybackQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_PlaybackQuality = { "PlaybackQuality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParametersInternal_Parms, PlaybackQuality), Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality, METADATA_PARAMS(0, nullptr) }; // 3295560536
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_EncodeProfile_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_EncodeProfile = { "EncodeProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParametersInternal_Parms, EncodeProfile), Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile, METADATA_PARAMS(0, nullptr) }; // 3727421975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_SequencePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_MapPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_PlaybackQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_PlaybackQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_EncodeProfile_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::NewProp_EncodeProfile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::PropPointers) < 2048);
// ********** End Function RenderCinematicByParametersInternal Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicRendererBPLibrary, nullptr, "RenderCinematicByParametersInternal", 	Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::CinematicRendererBPLibrary_eventRenderCinematicByParametersInternal_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::CinematicRendererBPLibrary_eventRenderCinematicByParametersInternal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicRendererBPLibrary::execRenderCinematicByParametersInternal)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_SequencePath);
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_MapPath);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Resolution);
	P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_FrameRate);
	P_GET_ENUM(ECinematicRendererPlaybackQuality,Z_Param_PlaybackQuality);
	P_GET_ENUM(ECinematicRendererEncoderProfile,Z_Param_EncodeProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCinematicRendererBPLibrary::RenderCinematicByParametersInternal(Z_Param_Out_SequencePath,Z_Param_Out_MapPath,Z_Param_Out_Resolution,Z_Param_Out_FrameRate,ECinematicRendererPlaybackQuality(Z_Param_PlaybackQuality),ECinematicRendererEncoderProfile(Z_Param_EncodeProfile));
	P_NATIVE_END;
}
// ********** End Class UCinematicRendererBPLibrary Function RenderCinematicByParametersInternal ***

// ********** Begin Class UCinematicRendererBPLibrary Function RenderCinematicByParametersWithLevelSequenceInternal 
struct Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct CinematicRendererBPLibrary_eventRenderCinematicByParametersWithLevelSequenceInternal_Parms
	{
		ULevelSequence* Sequence;
		FSoftObjectPath MapPath;
		FIntPoint Resolution;
		FFrameRate FrameRate;
		ECinematicRendererPlaybackQuality PlaybackQuality;
		ECinematicRendererEncoderProfile EncodeProfile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "CPP_Default_EncodeProfile", "High" },
		{ "CPP_Default_PlaybackQuality", "High" },
		{ "ModuleRelativePath", "Public/CinematicRendererBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RenderCinematicByParametersWithLevelSequenceInternal constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackQuality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncodeProfile_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodeProfile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RenderCinematicByParametersWithLevelSequenceInternal constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RenderCinematicByParametersWithLevelSequenceInternal Property Definitions 
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParametersWithLevelSequenceInternal_Parms, Sequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_MapPath = { "MapPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParametersWithLevelSequenceInternal_Parms, MapPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapPath_MetaData), NewProp_MapPath_MetaData) }; // 2425717601
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParametersWithLevelSequenceInternal_Parms, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParametersWithLevelSequenceInternal_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_PlaybackQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_PlaybackQuality = { "PlaybackQuality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParametersWithLevelSequenceInternal_Parms, PlaybackQuality), Z_Construct_UEnum_CinematicRenderer_ECinematicRendererPlaybackQuality, METADATA_PARAMS(0, nullptr) }; // 3295560536
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_EncodeProfile_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_EncodeProfile = { "EncodeProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CinematicRendererBPLibrary_eventRenderCinematicByParametersWithLevelSequenceInternal_Parms, EncodeProfile), Z_Construct_UEnum_CinematicRenderer_ECinematicRendererEncoderProfile, METADATA_PARAMS(0, nullptr) }; // 3727421975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_MapPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_PlaybackQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_PlaybackQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_EncodeProfile_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::NewProp_EncodeProfile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::PropPointers) < 2048);
// ********** End Function RenderCinematicByParametersWithLevelSequenceInternal Property Definitions 
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCinematicRendererBPLibrary, nullptr, "RenderCinematicByParametersWithLevelSequenceInternal", 	Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::CinematicRendererBPLibrary_eventRenderCinematicByParametersWithLevelSequenceInternal_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::CinematicRendererBPLibrary_eventRenderCinematicByParametersWithLevelSequenceInternal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCinematicRendererBPLibrary::execRenderCinematicByParametersWithLevelSequenceInternal)
{
	P_GET_OBJECT(ULevelSequence,Z_Param_Sequence);
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_MapPath);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Resolution);
	P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_FrameRate);
	P_GET_ENUM(ECinematicRendererPlaybackQuality,Z_Param_PlaybackQuality);
	P_GET_ENUM(ECinematicRendererEncoderProfile,Z_Param_EncodeProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCinematicRendererBPLibrary::RenderCinematicByParametersWithLevelSequenceInternal(Z_Param_Sequence,Z_Param_Out_MapPath,Z_Param_Out_Resolution,Z_Param_Out_FrameRate,ECinematicRendererPlaybackQuality(Z_Param_PlaybackQuality),ECinematicRendererEncoderProfile(Z_Param_EncodeProfile));
	P_NATIVE_END;
}
// ********** End Class UCinematicRendererBPLibrary Function RenderCinematicByParametersWithLevelSequenceInternal 

// ********** Begin Class UCinematicRendererBPLibrary **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCinematicRendererBPLibrary;
UClass* UCinematicRendererBPLibrary::GetPrivateStaticClass()
{
	using TClass = UCinematicRendererBPLibrary;
	if (!Z_Registration_Info_UClass_UCinematicRendererBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CinematicRendererBPLibrary"),
			Z_Registration_Info_UClass_UCinematicRendererBPLibrary.InnerSingleton,
			StaticRegisterNativesUCinematicRendererBPLibrary,
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
	return Z_Registration_Info_UClass_UCinematicRendererBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UCinematicRendererBPLibrary_NoRegister()
{
	return UCinematicRendererBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCinematicRendererBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "CinematicRendererBPLibrary.h" },
		{ "ModuleRelativePath", "Public/CinematicRendererBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UCinematicRendererBPLibrary constinit property declarations **************
// ********** End Class UCinematicRendererBPLibrary constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EstimateVideoBitrateRange"), .Pointer = &UCinematicRendererBPLibrary::execEstimateVideoBitrateRange },
		{ .NameUTF8 = UTF8TEXT("RenderCinematicByParameters"), .Pointer = &UCinematicRendererBPLibrary::execRenderCinematicByParameters },
		{ .NameUTF8 = UTF8TEXT("RenderCinematicByParametersInternal"), .Pointer = &UCinematicRendererBPLibrary::execRenderCinematicByParametersInternal },
		{ .NameUTF8 = UTF8TEXT("RenderCinematicByParametersWithLevelSequenceInternal"), .Pointer = &UCinematicRendererBPLibrary::execRenderCinematicByParametersWithLevelSequenceInternal },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCinematicRendererBPLibrary_EstimateVideoBitrateRange, "EstimateVideoBitrateRange" }, // 138848238
		{ &Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParameters, "RenderCinematicByParameters" }, // 731588736
		{ &Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersInternal, "RenderCinematicByParametersInternal" }, // 405265696
		{ &Z_Construct_UFunction_UCinematicRendererBPLibrary_RenderCinematicByParametersWithLevelSequenceInternal, "RenderCinematicByParametersWithLevelSequenceInternal" }, // 49854809
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCinematicRendererBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCinematicRendererBPLibrary_Statics
UObject* (*const Z_Construct_UClass_UCinematicRendererBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CinematicRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicRendererBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCinematicRendererBPLibrary_Statics::ClassParams = {
	&UCinematicRendererBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicRendererBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCinematicRendererBPLibrary_Statics::Class_MetaDataParams)
};
void UCinematicRendererBPLibrary::StaticRegisterNativesUCinematicRendererBPLibrary()
{
	UClass* Class = UCinematicRendererBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCinematicRendererBPLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCinematicRendererBPLibrary()
{
	if (!Z_Registration_Info_UClass_UCinematicRendererBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCinematicRendererBPLibrary.OuterSingleton, Z_Construct_UClass_UCinematicRendererBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCinematicRendererBPLibrary.OuterSingleton;
}
UCinematicRendererBPLibrary::UCinematicRendererBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCinematicRendererBPLibrary);
UCinematicRendererBPLibrary::~UCinematicRendererBPLibrary() {}
// ********** End Class UCinematicRendererBPLibrary ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h__Script_CinematicRenderer_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECinematicRendererPlaybackQuality_StaticEnum, TEXT("ECinematicRendererPlaybackQuality"), &Z_Registration_Info_UEnum_ECinematicRendererPlaybackQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3295560536U) },
		{ ECinematicRendererEncoderProfile_StaticEnum, TEXT("ECinematicRendererEncoderProfile"), &Z_Registration_Info_UEnum_ECinematicRendererEncoderProfile, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3727421975U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCinematicRendererVariableBitrateEstimate::StaticStruct, Z_Construct_UScriptStruct_FCinematicRendererVariableBitrateEstimate_Statics::NewStructOps, TEXT("CinematicRendererVariableBitrateEstimate"),&Z_Registration_Info_UScriptStruct_FCinematicRendererVariableBitrateEstimate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCinematicRendererVariableBitrateEstimate), 4110012610U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCinematicRendererBPLibrary, UCinematicRendererBPLibrary::StaticClass, TEXT("UCinematicRendererBPLibrary"), &Z_Registration_Info_UClass_UCinematicRendererBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCinematicRendererBPLibrary), 2567515747U) },
	};
}; // Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h__Script_CinematicRenderer_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h__Script_CinematicRenderer_1298104019{
	TEXT("/Script/CinematicRenderer"),
	Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h__Script_CinematicRenderer_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h__Script_CinematicRenderer_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h__Script_CinematicRenderer_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h__Script_CinematicRenderer_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h__Script_CinematicRenderer_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_CinematicRenderer_Public_CinematicRendererBPLibrary_h__Script_CinematicRenderer_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
