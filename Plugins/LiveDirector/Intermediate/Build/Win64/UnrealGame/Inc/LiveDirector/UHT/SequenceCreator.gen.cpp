// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceCreator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSequenceCreator() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_USequenceCreator();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_USequenceCreator_NoRegister();
LIVEDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveDirectorSceneCuts();
LIVEDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveDirectorTimeline();
LIVEDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent();
LIVEDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion();
LIVEDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveDirectorTimelineSection();
UPackage* Z_Construct_UPackage__Script_LiveDirector();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLiveDirectorTimelineSection **************************************
struct Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLiveDirectorTimelineSection); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLiveDirectorTimelineSection); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure to represent an action with start and end times\n" },
#endif
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to represent an action with start and end times" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "LiveDirectorTimelineSection" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "LiveDirectorTimelineSection" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "Category", "LiveDirectorTimelineSection" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLiveDirectorTimelineSection constinit property declarations ******
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLiveDirectorTimelineSection constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveDirectorTimelineSection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineSection;
class UScriptStruct* FLiveDirectorTimelineSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveDirectorTimelineSection, (UObject*)Z_Construct_UPackage__Script_LiveDirector(), TEXT("LiveDirectorTimelineSection"));
	}
	return Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineSection.OuterSingleton;
	}

// ********** Begin ScriptStruct FLiveDirectorTimelineSection Property Definitions *****************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorTimelineSection, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorTimelineSection, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorTimelineSection, EndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::NewProp_EndTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLiveDirectorTimelineSection Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
	nullptr,
	&NewStructOps,
	"LiveDirectorTimelineSection",
	Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::PropPointers),
	sizeof(FLiveDirectorTimelineSection),
	alignof(FLiveDirectorTimelineSection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveDirectorTimelineSection()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineSection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineSection.InnerSingleton, Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineSection.InnerSingleton);
}
// ********** End ScriptStruct FLiveDirectorTimelineSection ****************************************

// ********** Begin ScriptStruct FLiveDirectorTimeline *********************************************
struct Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLiveDirectorTimeline); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLiveDirectorTimeline); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure to represent an action with start and end times\n" },
#endif
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to represent an action with start and end times" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
		{ "Category", "LiveDirectorTimeline" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "LiveDirectorTimeline" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLiveDirectorTimeline constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLiveDirectorTimeline constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveDirectorTimeline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLiveDirectorTimeline;
class UScriptStruct* FLiveDirectorTimeline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveDirectorTimeline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLiveDirectorTimeline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveDirectorTimeline, (UObject*)Z_Construct_UPackage__Script_LiveDirector(), TEXT("LiveDirectorTimeline"));
	}
	return Z_Registration_Info_UScriptStruct_FLiveDirectorTimeline.OuterSingleton;
	}

// ********** Begin ScriptStruct FLiveDirectorTimeline Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveDirectorTimelineSection, METADATA_PARAMS(0, nullptr) }; // 547159005
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorTimeline, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) }; // 547159005
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorTimeline, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::NewProp_Sections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLiveDirectorTimeline Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
	nullptr,
	&NewStructOps,
	"LiveDirectorTimeline",
	Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::PropPointers),
	sizeof(FLiveDirectorTimeline),
	alignof(FLiveDirectorTimeline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveDirectorTimeline()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveDirectorTimeline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLiveDirectorTimeline.InnerSingleton, Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLiveDirectorTimeline.InnerSingleton);
}
// ********** End ScriptStruct FLiveDirectorTimeline ***********************************************

// ********** Begin ScriptStruct FLiveDirectorTimelineEvent ****************************************
struct Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLiveDirectorTimelineEvent); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLiveDirectorTimelineEvent); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure to represent a time event (start or end of an action)\n" },
#endif
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to represent a time event (start or end of an action)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "LiveDirectorTimelineEvent" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsStart_MetaData[] = {
		{ "Category", "LiveDirectorTimelineEvent" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "LiveDirectorTimelineEvent" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLiveDirectorTimelineEvent constinit property declarations ********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static void NewProp_IsStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStart;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLiveDirectorTimelineEvent constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveDirectorTimelineEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineEvent;
class UScriptStruct* FLiveDirectorTimelineEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent, (UObject*)Z_Construct_UPackage__Script_LiveDirector(), TEXT("LiveDirectorTimelineEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineEvent.OuterSingleton;
	}

// ********** Begin ScriptStruct FLiveDirectorTimelineEvent Property Definitions *******************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorTimelineEvent, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
void Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::NewProp_IsStart_SetBit(void* Obj)
{
	((FLiveDirectorTimelineEvent*)Obj)->IsStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::NewProp_IsStart = { "IsStart", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveDirectorTimelineEvent), &Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::NewProp_IsStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsStart_MetaData), NewProp_IsStart_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorTimelineEvent, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::NewProp_IsStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLiveDirectorTimelineEvent Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
	nullptr,
	&NewStructOps,
	"LiveDirectorTimelineEvent",
	Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::PropPointers),
	sizeof(FLiveDirectorTimelineEvent),
	alignof(FLiveDirectorTimelineEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineEvent.InnerSingleton, Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineEvent.InnerSingleton);
}
// ********** End ScriptStruct FLiveDirectorTimelineEvent ******************************************

// ********** Begin ScriptStruct FLiveDirectorTimelineRegion ***************************************
struct Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLiveDirectorTimelineRegion); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLiveDirectorTimelineRegion); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure to represent a non-overlapping region with active actions\n" },
#endif
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to represent a non-overlapping region with active actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "LiveDirectorTimelineRegion" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "Category", "LiveDirectorTimelineRegion" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSections_MetaData[] = {
		{ "Category", "LiveDirectorTimelineRegion" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLiveDirectorTimelineRegion constinit property declarations *******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLiveDirectorTimelineRegion constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveDirectorTimelineRegion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineRegion;
class UScriptStruct* FLiveDirectorTimelineRegion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineRegion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineRegion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion, (UObject*)Z_Construct_UPackage__Script_LiveDirector(), TEXT("LiveDirectorTimelineRegion"));
	}
	return Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineRegion.OuterSingleton;
	}

// ********** Begin ScriptStruct FLiveDirectorTimelineRegion Property Definitions ******************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorTimelineRegion, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorTimelineRegion, EndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::NewProp_ActiveSections_Inner = { "ActiveSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::NewProp_ActiveSections = { "ActiveSections", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorTimelineRegion, ActiveSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSections_MetaData), NewProp_ActiveSections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::NewProp_ActiveSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::NewProp_ActiveSections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLiveDirectorTimelineRegion Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
	nullptr,
	&NewStructOps,
	"LiveDirectorTimelineRegion",
	Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::PropPointers),
	sizeof(FLiveDirectorTimelineRegion),
	alignof(FLiveDirectorTimelineRegion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineRegion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineRegion.InnerSingleton, Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineRegion.InnerSingleton);
}
// ********** End ScriptStruct FLiveDirectorTimelineRegion *****************************************

// ********** Begin ScriptStruct FLiveDirectorSceneCuts ********************************************
struct Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLiveDirectorSceneCuts); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLiveDirectorSceneCuts); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneID_MetaData[] = {
		{ "Category", "LiveDirectorSceneCuts" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "LiveDirectorSceneCuts" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "LiveDirectorSceneCuts" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLiveDirectorSceneCuts constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SceneID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLiveDirectorSceneCuts constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveDirectorSceneCuts>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLiveDirectorSceneCuts;
class UScriptStruct* FLiveDirectorSceneCuts::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveDirectorSceneCuts.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLiveDirectorSceneCuts.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveDirectorSceneCuts, (UObject*)Z_Construct_UPackage__Script_LiveDirector(), TEXT("LiveDirectorSceneCuts"));
	}
	return Z_Registration_Info_UScriptStruct_FLiveDirectorSceneCuts.OuterSingleton;
	}

// ********** Begin ScriptStruct FLiveDirectorSceneCuts Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::NewProp_SceneID = { "SceneID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorSceneCuts, SceneID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneID_MetaData), NewProp_SceneID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorSceneCuts, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorSceneCuts, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::NewProp_SceneID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLiveDirectorSceneCuts Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
	nullptr,
	&NewStructOps,
	"LiveDirectorSceneCuts",
	Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::PropPointers),
	sizeof(FLiveDirectorSceneCuts),
	alignof(FLiveDirectorSceneCuts),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveDirectorSceneCuts()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveDirectorSceneCuts.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLiveDirectorSceneCuts.InnerSingleton, Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLiveDirectorSceneCuts.InnerSingleton);
}
// ********** End ScriptStruct FLiveDirectorSceneCuts **********************************************

// ********** Begin Class USequenceCreator Function ConvertSectionsToRegions ***********************
struct Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics
{
	struct SequenceCreator_eventConvertSectionsToRegions_Parms
	{
		TArray<FLiveDirectorTimelineSection> Sections;
		TArray<FLiveDirectorTimelineRegion> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveDirector|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UFUNCTION(BlueprintCallable)\n// void SwitchLevel(const FString& LevelMap, const FString& LevelStage, const FString& SceneID);\n" },
#endif
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\nvoid SwitchLevel(const FString& LevelMap, const FString& LevelStage, const FString& SceneID);" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertSectionsToRegions constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertSectionsToRegions constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertSectionsToRegions Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveDirectorTimelineSection, METADATA_PARAMS(0, nullptr) }; // 547159005
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequenceCreator_eventConvertSectionsToRegions_Parms, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 547159005
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion, METADATA_PARAMS(0, nullptr) }; // 1293599015
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequenceCreator_eventConvertSectionsToRegions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1293599015
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::NewProp_Sections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::PropPointers) < 2048);
// ********** End Function ConvertSectionsToRegions Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USequenceCreator, nullptr, "ConvertSectionsToRegions", 	Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::SequenceCreator_eventConvertSectionsToRegions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::SequenceCreator_eventConvertSectionsToRegions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequenceCreator::execConvertSectionsToRegions)
{
	P_GET_TARRAY(FLiveDirectorTimelineSection,Z_Param_Sections);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FLiveDirectorTimelineRegion>*)Z_Param__Result=USequenceCreator::ConvertSectionsToRegions(Z_Param_Sections);
	P_NATIVE_END;
}
// ********** End Class USequenceCreator Function ConvertSectionsToRegions *************************

// ********** Begin Class USequenceCreator Function OnSequencerPlayerPlay **************************
struct Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnSequencerPlayerPlay constinit property declarations *****************
// ********** End Function OnSequencerPlayerPlay constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USequenceCreator, nullptr, "OnSequencerPlayerPlay", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerPlay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequenceCreator::execOnSequencerPlayerPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSequencerPlayerPlay();
	P_NATIVE_END;
}
// ********** End Class USequenceCreator Function OnSequencerPlayerPlay ****************************

// ********** Begin Class USequenceCreator Function OnSequencerPlayerStop **************************
struct Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnSequencerPlayerStop constinit property declarations *****************
// ********** End Function OnSequencerPlayerStop constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerStop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USequenceCreator, nullptr, "OnSequencerPlayerStop", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerStop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequenceCreator::execOnSequencerPlayerStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSequencerPlayerStop();
	P_NATIVE_END;
}
// ********** End Class USequenceCreator Function OnSequencerPlayerStop ****************************

// ********** Begin Class USequenceCreator *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USequenceCreator;
UClass* USequenceCreator::GetPrivateStaticClass()
{
	using TClass = USequenceCreator;
	if (!Z_Registration_Info_UClass_USequenceCreator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SequenceCreator"),
			Z_Registration_Info_UClass_USequenceCreator.InnerSingleton,
			StaticRegisterNativesUSequenceCreator,
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
	return Z_Registration_Info_UClass_USequenceCreator.InnerSingleton;
}
UClass* Z_Construct_UClass_USequenceCreator_NoRegister()
{
	return USequenceCreator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USequenceCreator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SequenceCreator.h" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetMappingTable_MetaData[] = {
		{ "Category", "LiveDirector|Assets" },
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scenes_MetaData[] = {
		{ "Category", "SequenceCreator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint Events\n// UPROPERTY(BlueprintAssignable) FOnDialogueStarted OnDialogueStarted;\n// UPROPERTY(BlueprintAssignable) FOnDialogueEnded OnDialogueEnded;\n// UPROPERTY(BlueprintAssignable) FOnSceneChanged OnSceneChanged;\n// UPROPERTY(BlueprintAssignable) FOnCameraChanged OnCameraChanged;\n// UPROPERTY(BlueprintAssignable) FOnLightingChanged OnLightingChanged;\n// UPROPERTY(BlueprintAssignable) FOnFXTriggered OnFXTriggered;\n// UPROPERTY(BlueprintAssignable) FOnPropSpawned OnPropSpawned;\n" },
#endif
		{ "ModuleRelativePath", "Public/SequenceCreator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Events\nUPROPERTY(BlueprintAssignable) FOnDialogueStarted OnDialogueStarted;\nUPROPERTY(BlueprintAssignable) FOnDialogueEnded OnDialogueEnded;\nUPROPERTY(BlueprintAssignable) FOnSceneChanged OnSceneChanged;\nUPROPERTY(BlueprintAssignable) FOnCameraChanged OnCameraChanged;\nUPROPERTY(BlueprintAssignable) FOnLightingChanged OnLightingChanged;\nUPROPERTY(BlueprintAssignable) FOnFXTriggered OnFXTriggered;\nUPROPERTY(BlueprintAssignable) FOnPropSpawned OnPropSpawned;" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USequenceCreator constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetMappingTable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Scenes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Scenes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Scenes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USequenceCreator constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConvertSectionsToRegions"), .Pointer = &USequenceCreator::execConvertSectionsToRegions },
		{ .NameUTF8 = UTF8TEXT("OnSequencerPlayerPlay"), .Pointer = &USequenceCreator::execOnSequencerPlayerPlay },
		{ .NameUTF8 = UTF8TEXT("OnSequencerPlayerStop"), .Pointer = &USequenceCreator::execOnSequencerPlayerStop },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USequenceCreator_ConvertSectionsToRegions, "ConvertSectionsToRegions" }, // 1864857235
		{ &Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerPlay, "OnSequencerPlayerPlay" }, // 4167644152
		{ &Z_Construct_UFunction_USequenceCreator_OnSequencerPlayerStop, "OnSequencerPlayerStop" }, // 635076736
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceCreator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USequenceCreator_Statics

// ********** Begin Class USequenceCreator Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USequenceCreator_Statics::NewProp_AssetMappingTable = { "AssetMappingTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USequenceCreator, AssetMappingTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetMappingTable_MetaData), NewProp_AssetMappingTable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USequenceCreator_Statics::NewProp_Scenes_ValueProp = { "Scenes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USequenceCreator_Statics::NewProp_Scenes_Key_KeyProp = { "Scenes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USequenceCreator_Statics::NewProp_Scenes = { "Scenes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USequenceCreator, Scenes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scenes_MetaData), NewProp_Scenes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequenceCreator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCreator_Statics::NewProp_AssetMappingTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCreator_Statics::NewProp_Scenes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCreator_Statics::NewProp_Scenes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCreator_Statics::NewProp_Scenes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCreator_Statics::PropPointers) < 2048);
// ********** End Class USequenceCreator Property Definitions **************************************
UObject* (*const Z_Construct_UClass_USequenceCreator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCreator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USequenceCreator_Statics::ClassParams = {
	&USequenceCreator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USequenceCreator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCreator_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCreator_Statics::Class_MetaDataParams), Z_Construct_UClass_USequenceCreator_Statics::Class_MetaDataParams)
};
void USequenceCreator::StaticRegisterNativesUSequenceCreator()
{
	UClass* Class = USequenceCreator::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USequenceCreator_Statics::Funcs));
}
UClass* Z_Construct_UClass_USequenceCreator()
{
	if (!Z_Registration_Info_UClass_USequenceCreator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequenceCreator.OuterSingleton, Z_Construct_UClass_USequenceCreator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USequenceCreator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USequenceCreator);
USequenceCreator::~USequenceCreator() {}
// ********** End Class USequenceCreator ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h__Script_LiveDirector_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveDirectorTimelineSection::StaticStruct, Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::NewStructOps, TEXT("LiveDirectorTimelineSection"),&Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveDirectorTimelineSection), 547159005U) },
		{ FLiveDirectorTimeline::StaticStruct, Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::NewStructOps, TEXT("LiveDirectorTimeline"),&Z_Registration_Info_UScriptStruct_FLiveDirectorTimeline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveDirectorTimeline), 4013588612U) },
		{ FLiveDirectorTimelineEvent::StaticStruct, Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::NewStructOps, TEXT("LiveDirectorTimelineEvent"),&Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveDirectorTimelineEvent), 574623337U) },
		{ FLiveDirectorTimelineRegion::StaticStruct, Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::NewStructOps, TEXT("LiveDirectorTimelineRegion"),&Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineRegion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveDirectorTimelineRegion), 1293599015U) },
		{ FLiveDirectorSceneCuts::StaticStruct, Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::NewStructOps, TEXT("LiveDirectorSceneCuts"),&Z_Registration_Info_UScriptStruct_FLiveDirectorSceneCuts, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveDirectorSceneCuts), 1330289018U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USequenceCreator, USequenceCreator::StaticClass, TEXT("USequenceCreator"), &Z_Registration_Info_UClass_USequenceCreator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequenceCreator), 4251500421U) },
	};
}; // Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h__Script_LiveDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h__Script_LiveDirector_4122405470{
	TEXT("/Script/LiveDirector"),
	Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h__Script_LiveDirector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h__Script_LiveDirector_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h__Script_LiveDirector_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_SequenceCreator_h__Script_LiveDirector_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
