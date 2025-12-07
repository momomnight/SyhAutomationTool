// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleConfig_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleConfig;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleConfig()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleConfig.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleConfig",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF00001CD,
				0xE1A12850,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleConfig.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleConfig.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleConfig(Z_Construct_UPackage__Script_SimpleConfig, TEXT("/Script/SimpleConfig"), Z_Registration_Info_UPackage__Script_SimpleConfig, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF00001CD, 0xE1A12850));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
