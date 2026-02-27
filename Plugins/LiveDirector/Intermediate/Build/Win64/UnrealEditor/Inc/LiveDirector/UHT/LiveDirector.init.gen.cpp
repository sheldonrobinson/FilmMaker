// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveDirector_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LiveDirector;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LiveDirector()
	{
		if (!Z_Registration_Info_UPackage__Script_LiveDirector.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/LiveDirector",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000040,
			0x56CC4F77,
			0x8887F895,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LiveDirector.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_LiveDirector.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LiveDirector(Z_Construct_UPackage__Script_LiveDirector, TEXT("/Script/LiveDirector"), Z_Registration_Info_UPackage__Script_LiveDirector, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x56CC4F77, 0x8887F895));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
