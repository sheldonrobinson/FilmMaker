// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetMappingRow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAssetMappingRow() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
LIVEDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetMappingRow();
UPackage* Z_Construct_UPackage__Script_LiveDirector();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAssetMappingRow **************************************************
struct Z_Construct_UScriptStruct_FAssetMappingRow_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAssetMappingRow); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAssetMappingRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AssetMappingRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "AssetMappingRow" },
		{ "ModuleRelativePath", "Public/AssetMappingRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Category", "AssetMappingRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \"Camera\", \"FX\", \"Prop\", \"Light\"\n" },
#endif
		{ "ModuleRelativePath", "Public/AssetMappingRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\"Camera\", \"FX\", \"Prop\", \"Light\"" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAssetMappingRow constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAssetMappingRow constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetMappingRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAssetMappingRow_Statics
static_assert(std::is_polymorphic<FAssetMappingRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAssetMappingRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAssetMappingRow;
class UScriptStruct* FAssetMappingRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetMappingRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAssetMappingRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetMappingRow, (UObject*)Z_Construct_UPackage__Script_LiveDirector(), TEXT("AssetMappingRow"));
	}
	return Z_Registration_Info_UScriptStruct_FAssetMappingRow.OuterSingleton;
	}

// ********** Begin ScriptStruct FAssetMappingRow Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetMappingRow_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetMappingRow, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAssetMappingRow_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetMappingRow, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetMappingRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMappingRow_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMappingRow_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMappingRow_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAssetMappingRow Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetMappingRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveDirector,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AssetMappingRow",
	Z_Construct_UScriptStruct_FAssetMappingRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMappingRow_Statics::PropPointers),
	sizeof(FAssetMappingRow),
	alignof(FAssetMappingRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMappingRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetMappingRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetMappingRow()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetMappingRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAssetMappingRow.InnerSingleton, Z_Construct_UScriptStruct_FAssetMappingRow_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAssetMappingRow.InnerSingleton);
}
// ********** End ScriptStruct FAssetMappingRow ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_AssetMappingRow_h__Script_LiveDirector_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetMappingRow::StaticStruct, Z_Construct_UScriptStruct_FAssetMappingRow_Statics::NewStructOps, TEXT("AssetMappingRow"),&Z_Registration_Info_UScriptStruct_FAssetMappingRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetMappingRow), 341039080U) },
	};
}; // Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_AssetMappingRow_h__Script_LiveDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_AssetMappingRow_h__Script_LiveDirector_1784917389{
	TEXT("/Script/LiveDirector"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_AssetMappingRow_h__Script_LiveDirector_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VlogDemo_Plugins_LiveDirector_Source_LiveDirector_Public_AssetMappingRow_h__Script_LiveDirector_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
