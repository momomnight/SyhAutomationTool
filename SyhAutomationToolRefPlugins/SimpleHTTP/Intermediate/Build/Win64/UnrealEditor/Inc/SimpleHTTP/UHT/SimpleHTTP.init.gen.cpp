// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleHTTP_init() {}
	SIMPLEHTTP_API UFunction* Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature();
	SIMPLEHTTP_API UFunction* Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature();
	SIMPLEHTTP_API UFunction* Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature();
	SIMPLEHTTP_API UFunction* Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleHTTP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleHTTP()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleHTTP.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleHTTP",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x47745E04,
				0xE346A08F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleHTTP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleHTTP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleHTTP(Z_Construct_UPackage__Script_SimpleHTTP, TEXT("/Script/SimpleHTTP"), Z_Registration_Info_UPackage__Script_SimpleHTTP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x47745E04, 0xE346A08F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
