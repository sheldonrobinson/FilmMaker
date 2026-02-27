// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveDirectorDataTableComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLiveDirectorDataTableComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_ULiveDirectorDataTableComponent();
LIVEDIRECTOR_API UClass* Z_Construct_UClass_ULiveDirectorDataTableComponent_NoRegister();
LIVEDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveDirectoryDataRow();
UPackage* Z_Construct_UPackage__Script_LiveDirector();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLiveDirectoryDataRow *********************************************
struct Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLiveDirectoryDataRow); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLiveDirectoryDataRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveDirectorDataTableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "LiveDirectoryDataRow" },
		{ "ModuleRelativePath", "Public/LiveDirectorDataTableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOrientation_MetaData[] = {
		{ "Category", "LiveDirectoryDataRow" },
		{ "ModuleRelativePath", "Public/LiveDirectorDataTableComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLiveDirectoryDataRow constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnOrientation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLiveDirectoryDataRow constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveDirectoryDataRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics
static_assert(std::is_polymorphic<FLiveDirectoryDataRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLiveDirectoryDataRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLiveDirectoryDataRow;
class UScriptStruct* FLiveDirectoryDataRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveDirectoryDataRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLiveDirectoryDataRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveDirectoryDataRow, (UObject*)Z_Construct_UPackage__Script_LiveDirector(), TEXT("LiveDirectoryDataRow"));
	}
	return Z_Registration_Info_UScriptStruct_FLiveDirectoryDataRow.OuterSingleton;
	}

// ********** Begin ScriptStruct FLiveDirectoryDataRow Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectoryDataRow, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::NewProp_SpawnOrientation = { "SpawnOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveDirectoryDataRow, SpawnOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOrientation_MetaData), NewProp_SpawnOrientation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::NewProp_SpawnOrientation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLiveDirectoryDataRow Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"LiveDirectoryDataRow",
	Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::PropPointers),
	sizeof(FLiveDirectoryDataRow),
	alignof(FLiveDirectoryDataRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveDirectoryDataRow()
{
	if (!Z_Registration_Info_UScriptStruct_FLiveDirectoryDataRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLiveDirectoryDataRow.InnerSingleton, Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLiveDirectoryDataRow.InnerSingleton);
}
// ********** End ScriptStruct FLiveDirectoryDataRow ***********************************************

// ********** Begin Class ULiveDirectorDataTableComponent ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULiveDirectorDataTableComponent;
UClass* ULiveDirectorDataTableComponent::GetPrivateStaticClass()
{
	using TClass = ULiveDirectorDataTableComponent;
	if (!Z_Registration_Info_UClass_ULiveDirectorDataTableComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LiveDirectorDataTableComponent"),
			Z_Registration_Info_UClass_ULiveDirectorDataTableComponent.InnerSingleton,
			StaticRegisterNativesULiveDirectorDataTableComponent,
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
	return Z_Registration_Info_UClass_ULiveDirectorDataTableComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_ULiveDirectorDataTableComponent_NoRegister()
{
	return ULiveDirectorDataTableComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LiveDirectorDataTableComponent.h" },
		{ "ModuleRelativePath", "Public/LiveDirectorDataTableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "Category", "DataTable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DataTable asset\n" },
#endif
		{ "ModuleRelativePath", "Public/LiveDirectorDataTableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataTable asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "Category", "DataTable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Row name in the DataTable\n" },
#endif
		{ "ModuleRelativePath", "Public/LiveDirectorDataTableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Row name in the DataTable" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ULiveDirectorDataTableComponent constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULiveDirectorDataTableComponent constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveDirectorDataTableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics

// ********** Begin Class ULiveDirectorDataTableComponent Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveDirectorDataTableComponent, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveDirectorDataTableComponent, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::NewProp_RowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::PropPointers) < 2048);
// ********** End Class ULiveDirectorDataTableComponent Property Definitions ***********************
UObject* (*const Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::ClassParams = {
	&ULiveDirectorDataTableComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::Class_MetaDataParams)
};
void ULiveDirectorDataTableComponent::StaticRegisterNativesULiveDirectorDataTableComponent()
{
}
UClass* Z_Construct_UClass_ULiveDirectorDataTableComponent()
{
	if (!Z_Registration_Info_UClass_ULiveDirectorDataTableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveDirectorDataTableComponent.OuterSingleton, Z_Construct_UClass_ULiveDirectorDataTableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveDirectorDataTableComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULiveDirectorDataTableComponent);
ULiveDirectorDataTableComponent::~ULiveDirectorDataTableComponent() {}
// ********** End Class ULiveDirectorDataTableComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h__Script_LiveDirector_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveDirectoryDataRow::StaticStruct, Z_Construct_UScriptStruct_FLiveDirectoryDataRow_Statics::NewStructOps, TEXT("LiveDirectoryDataRow"),&Z_Registration_Info_UScriptStruct_FLiveDirectoryDataRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveDirectoryDataRow), 2233621536U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveDirectorDataTableComponent, ULiveDirectorDataTableComponent::StaticClass, TEXT("ULiveDirectorDataTableComponent"), &Z_Registration_Info_UClass_ULiveDirectorDataTableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveDirectorDataTableComponent), 1551676096U) },
	};
}; // Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h__Script_LiveDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h__Script_LiveDirector_3748315484{
	TEXT("/Script/LiveDirector"),
	Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h__Script_LiveDirector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h__Script_LiveDirector_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h__Script_LiveDirector_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FilmMaker_Plugins_LiveDirector_Source_LiveDirector_Public_LiveDirectorDataTableComponent_h__Script_LiveDirector_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
