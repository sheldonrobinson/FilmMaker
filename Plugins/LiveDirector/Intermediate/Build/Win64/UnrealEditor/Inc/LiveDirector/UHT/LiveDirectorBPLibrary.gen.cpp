// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveDirectorBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLiveDirectorBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_ULiveDirectorBPLibrary();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_ULiveDirectorBPLibrary_NoRegister();
LIVEDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FActorData();
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
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to represent an action with start and end times" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "LiveDirectorTimelineSection" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "LiveDirectorTimelineSection" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "Category", "LiveDirectorTimelineSection" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
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
	EStructFlags(0x00000201),
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

// ********** Begin ScriptStruct FActorData ********************************************************
struct Z_Construct_UScriptStruct_FActorData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FActorData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FActorData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ActorData" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "ActorData" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "ActorData" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FActorData constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FActorData constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FActorData_Statics
static_assert(std::is_polymorphic<FActorData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FActorData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorData;
class UScriptStruct* FActorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorData, (UObject*)Z_Construct_UPackage__Script_LiveDirector(), TEXT("ActorData"));
	}
	return Z_Registration_Info_UScriptStruct_FActorData.OuterSingleton;
	}

// ********** Begin ScriptStruct FActorData Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActorData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorData_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorData, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorData, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorData_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorData_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FActorData Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ActorData",
	Z_Construct_UScriptStruct_FActorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorData_Statics::PropPointers),
	sizeof(FActorData),
	alignof(FActorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorData()
{
	if (!Z_Registration_Info_UScriptStruct_FActorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorData.InnerSingleton, Z_Construct_UScriptStruct_FActorData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FActorData.InnerSingleton);
}
// ********** End ScriptStruct FActorData **********************************************************

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
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to represent an action with start and end times" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
		{ "Category", "LiveDirectorTimeline" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "LiveDirectorTimeline" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveDirectorTimelineSection, METADATA_PARAMS(0, nullptr) }; // 3566998846
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectorTimeline, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) }; // 3566998846
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
	EStructFlags(0x00000201),
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
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to represent a time event (start or end of an action)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "LiveDirectorTimelineEvent" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsStart_MetaData[] = {
		{ "Category", "LiveDirectorTimelineEvent" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "LiveDirectorTimelineEvent" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
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
	EStructFlags(0x00000201),
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
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to represent a non-overlapping region with active actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "LiveDirectorTimelineRegion" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "Category", "LiveDirectorTimelineRegion" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSections_MetaData[] = {
		{ "Category", "LiveDirectorTimelineRegion" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
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
	EStructFlags(0x00000201),
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
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneID_MetaData[] = {
		{ "Category", "LiveDirectorSceneCuts" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "LiveDirectorSceneCuts" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "LiveDirectorSceneCuts" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
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
	EStructFlags(0x00000201),
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

// ********** Begin Class ULiveDirectorBPLibrary Function CreateAndRenderMovie *********************
struct Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct LiveDirectorBPLibrary_eventCreateAndRenderMovie_Parms
	{
		UObject* WorldContextObject;
		FString OutputDirectory;
		FIntPoint Resolution;
		FFrameRate GlobalFrameRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveDirector|Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Creates an advanced multi-camera Level Sequence and sends it to the Movie Render Queue\n     */" },
#endif
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an advanced multi-camera Level Sequence and sends it to the Movie Render Queue" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalFrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateAndRenderMovie constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputDirectory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalFrameRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateAndRenderMovie constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateAndRenderMovie Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveDirectorBPLibrary_eventCreateAndRenderMovie_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveDirectorBPLibrary_eventCreateAndRenderMovie_Parms, OutputDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputDirectory_MetaData), NewProp_OutputDirectory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveDirectorBPLibrary_eventCreateAndRenderMovie_Parms, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::NewProp_GlobalFrameRate = { "GlobalFrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveDirectorBPLibrary_eventCreateAndRenderMovie_Parms, GlobalFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalFrameRate_MetaData), NewProp_GlobalFrameRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::NewProp_OutputDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::NewProp_GlobalFrameRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::PropPointers) < 2048);
// ********** End Function CreateAndRenderMovie Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULiveDirectorBPLibrary, nullptr, "CreateAndRenderMovie", 	Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::LiveDirectorBPLibrary_eventCreateAndRenderMovie_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::LiveDirectorBPLibrary_eventCreateAndRenderMovie_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveDirectorBPLibrary::execCreateAndRenderMovie)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputDirectory);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Resolution);
	P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_GlobalFrameRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULiveDirectorBPLibrary::CreateAndRenderMovie(Z_Param_WorldContextObject,Z_Param_OutputDirectory,Z_Param_Out_Resolution,Z_Param_Out_GlobalFrameRate);
	P_NATIVE_END;
}
// ********** End Class ULiveDirectorBPLibrary Function CreateAndRenderMovie ***********************

// ********** Begin Class ULiveDirectorBPLibrary Function RenderMovieSceneQueue ********************
struct Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct LiveDirectorBPLibrary_eventRenderMovieSceneQueue_Parms
	{
		FString DependenciesDirectory;
		FString OutputDirectory;
		FIntPoint Resolution;
		FFrameRate GlobalFrameRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveDirector|Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Render all movie scenes in the Movie Render Queue to the specified output directory with the given resolution and frame rate.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Render all movie scenes in the Movie Render Queue to the specified output directory with the given resolution and frame rate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependenciesDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalFrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RenderMovieSceneQueue constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependenciesDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputDirectory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalFrameRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RenderMovieSceneQueue constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RenderMovieSceneQueue Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::NewProp_DependenciesDirectory = { "DependenciesDirectory", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveDirectorBPLibrary_eventRenderMovieSceneQueue_Parms, DependenciesDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependenciesDirectory_MetaData), NewProp_DependenciesDirectory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveDirectorBPLibrary_eventRenderMovieSceneQueue_Parms, OutputDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputDirectory_MetaData), NewProp_OutputDirectory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveDirectorBPLibrary_eventRenderMovieSceneQueue_Parms, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::NewProp_GlobalFrameRate = { "GlobalFrameRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveDirectorBPLibrary_eventRenderMovieSceneQueue_Parms, GlobalFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalFrameRate_MetaData), NewProp_GlobalFrameRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::NewProp_DependenciesDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::NewProp_OutputDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::NewProp_GlobalFrameRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::PropPointers) < 2048);
// ********** End Function RenderMovieSceneQueue Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULiveDirectorBPLibrary, nullptr, "RenderMovieSceneQueue", 	Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::LiveDirectorBPLibrary_eventRenderMovieSceneQueue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::LiveDirectorBPLibrary_eventRenderMovieSceneQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveDirectorBPLibrary::execRenderMovieSceneQueue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DependenciesDirectory);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputDirectory);
	P_GET_STRUCT(FIntPoint,Z_Param_Resolution);
	P_GET_STRUCT(FFrameRate,Z_Param_GlobalFrameRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULiveDirectorBPLibrary::RenderMovieSceneQueue(Z_Param_DependenciesDirectory,Z_Param_OutputDirectory,Z_Param_Resolution,Z_Param_GlobalFrameRate);
	P_NATIVE_END;
}
// ********** End Class ULiveDirectorBPLibrary Function RenderMovieSceneQueue **********************

// ********** Begin Class ULiveDirectorBPLibrary ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULiveDirectorBPLibrary;
UClass* ULiveDirectorBPLibrary::GetPrivateStaticClass()
{
	using TClass = ULiveDirectorBPLibrary;
	if (!Z_Registration_Info_UClass_ULiveDirectorBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LiveDirectorBPLibrary"),
			Z_Registration_Info_UClass_ULiveDirectorBPLibrary.InnerSingleton,
			StaticRegisterNativesULiveDirectorBPLibrary,
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
	return Z_Registration_Info_UClass_ULiveDirectorBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_ULiveDirectorBPLibrary_NoRegister()
{
	return ULiveDirectorBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULiveDirectorBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint-callable helper for creating and rendering sequences with full cinematic control\n */" },
#endif
		{ "IncludePath", "LiveDirectorBPLibrary.h" },
		{ "ModuleRelativePath", "Public/LiveDirectorBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint-callable helper for creating and rendering sequences with full cinematic control" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ULiveDirectorBPLibrary constinit property declarations *******************
// ********** End Class ULiveDirectorBPLibrary constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateAndRenderMovie"), .Pointer = &ULiveDirectorBPLibrary::execCreateAndRenderMovie },
		{ .NameUTF8 = UTF8TEXT("RenderMovieSceneQueue"), .Pointer = &ULiveDirectorBPLibrary::execRenderMovieSceneQueue },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveDirectorBPLibrary_CreateAndRenderMovie, "CreateAndRenderMovie" }, // 825599811
		{ &Z_Construct_UFunction_ULiveDirectorBPLibrary_RenderMovieSceneQueue, "RenderMovieSceneQueue" }, // 3784983715
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveDirectorBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULiveDirectorBPLibrary_Statics
UObject* (*const Z_Construct_UClass_ULiveDirectorBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveDirectorBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveDirectorBPLibrary_Statics::ClassParams = {
	&ULiveDirectorBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveDirectorBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveDirectorBPLibrary_Statics::Class_MetaDataParams)
};
void ULiveDirectorBPLibrary::StaticRegisterNativesULiveDirectorBPLibrary()
{
	UClass* Class = ULiveDirectorBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULiveDirectorBPLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULiveDirectorBPLibrary()
{
	if (!Z_Registration_Info_UClass_ULiveDirectorBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveDirectorBPLibrary.OuterSingleton, Z_Construct_UClass_ULiveDirectorBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveDirectorBPLibrary.OuterSingleton;
}
ULiveDirectorBPLibrary::ULiveDirectorBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULiveDirectorBPLibrary);
ULiveDirectorBPLibrary::~ULiveDirectorBPLibrary() {}
// ********** End Class ULiveDirectorBPLibrary *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h__Script_LiveDirector_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveDirectorTimelineSection::StaticStruct, Z_Construct_UScriptStruct_FLiveDirectorTimelineSection_Statics::NewStructOps, TEXT("LiveDirectorTimelineSection"),&Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveDirectorTimelineSection), 3566998846U) },
		{ FActorData::StaticStruct, Z_Construct_UScriptStruct_FActorData_Statics::NewStructOps, TEXT("ActorData"),&Z_Registration_Info_UScriptStruct_FActorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorData), 3104037409U) },
		{ FLiveDirectorTimeline::StaticStruct, Z_Construct_UScriptStruct_FLiveDirectorTimeline_Statics::NewStructOps, TEXT("LiveDirectorTimeline"),&Z_Registration_Info_UScriptStruct_FLiveDirectorTimeline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveDirectorTimeline), 810137268U) },
		{ FLiveDirectorTimelineEvent::StaticStruct, Z_Construct_UScriptStruct_FLiveDirectorTimelineEvent_Statics::NewStructOps, TEXT("LiveDirectorTimelineEvent"),&Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveDirectorTimelineEvent), 769145223U) },
		{ FLiveDirectorTimelineRegion::StaticStruct, Z_Construct_UScriptStruct_FLiveDirectorTimelineRegion_Statics::NewStructOps, TEXT("LiveDirectorTimelineRegion"),&Z_Registration_Info_UScriptStruct_FLiveDirectorTimelineRegion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveDirectorTimelineRegion), 2625756321U) },
		{ FLiveDirectorSceneCuts::StaticStruct, Z_Construct_UScriptStruct_FLiveDirectorSceneCuts_Statics::NewStructOps, TEXT("LiveDirectorSceneCuts"),&Z_Registration_Info_UScriptStruct_FLiveDirectorSceneCuts, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveDirectorSceneCuts), 3783683583U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveDirectorBPLibrary, ULiveDirectorBPLibrary::StaticClass, TEXT("ULiveDirectorBPLibrary"), &Z_Registration_Info_UClass_ULiveDirectorBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveDirectorBPLibrary), 3314644710U) },
	};
}; // Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h__Script_LiveDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h__Script_LiveDirector_926234453{
	TEXT("/Script/LiveDirector"),
	Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h__Script_LiveDirector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h__Script_LiveDirector_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h__Script_LiveDirector_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorBPLibrary_h__Script_LiveDirector_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
