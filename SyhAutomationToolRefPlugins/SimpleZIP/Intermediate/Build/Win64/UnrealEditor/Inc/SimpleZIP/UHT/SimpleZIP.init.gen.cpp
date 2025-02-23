// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleZIP_init() {}
	SIMPLEZIP_API UFunction* Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackCompleteFunction__DelegateSignature();
	SIMPLEZIP_API UFunction* Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleZIP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleZIP()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleZIP.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackCompleteFunction__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleZIP",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x62936245,
				0x06203983,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleZIP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleZIP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleZIP(Z_Construct_UPackage__Script_SimpleZIP, TEXT("/Script/SimpleZIP"), Z_Registration_Info_UPackage__Script_SimpleZIP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x62936245, 0x06203983));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
