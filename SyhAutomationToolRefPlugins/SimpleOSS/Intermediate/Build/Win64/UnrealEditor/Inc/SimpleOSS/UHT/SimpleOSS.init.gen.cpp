// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleOSS_init() {}
	SIMPLEOSS_API UFunction* Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature();
	SIMPLEOSS_API UFunction* Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature();
	SIMPLEOSS_API UFunction* Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature();
	SIMPLEOSS_API UFunction* Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleOSS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleOSS()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleOSS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleOSS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x71E56BED,
				0x22D5350E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleOSS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleOSS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleOSS(Z_Construct_UPackage__Script_SimpleOSS, TEXT("/Script/SimpleOSS"), Z_Registration_Info_UPackage__Script_SimpleOSS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x71E56BED, 0x22D5350E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
