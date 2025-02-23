// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobuf_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleProtobuf;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleProtobuf()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleProtobuf.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleProtobuf",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC35B093E,
				0x058F50C0,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleProtobuf.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleProtobuf.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleProtobuf(Z_Construct_UPackage__Script_SimpleProtobuf, TEXT("/Script/SimpleProtobuf"), Z_Registration_Info_UPackage__Script_SimpleProtobuf, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC35B093E, 0x058F50C0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
