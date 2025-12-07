// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../SimpleZIP/Public/ZIPType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZIPType() {}
// Cross Module References
	SIMPLEZIP_API UEnum* Z_Construct_UEnum_SimpleZIP_EZipType();
	SIMPLEZIP_API UFunction* Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackCompleteFunction__DelegateSignature();
	SIMPLEZIP_API UFunction* Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SimpleZIP();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZipType;
	static UEnum* EZipType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EZipType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EZipType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleZIP_EZipType, (UObject*)Z_Construct_UPackage__Script_SimpleZIP(), TEXT("EZipType"));
		}
		return Z_Registration_Info_UEnum_EZipType.OuterSingleton;
	}
	template<> SIMPLEZIP_API UEnum* StaticEnum<EZipType>()
	{
		return EZipType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleZIP_EZipType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleZIP_EZipType_Statics::Enumerators[] = {
		{ "EZipType::E_ZIP", (int64)EZipType::E_ZIP },
		{ "EZipType::E_UNZIP", (int64)EZipType::E_UNZIP },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleZIP_EZipType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_UNZIP.Name", "EZipType::E_UNZIP" },
		{ "E_ZIP.Name", "EZipType::E_ZIP" },
		{ "ModuleRelativePath", "Public/ZIPType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleZIP_EZipType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleZIP,
		nullptr,
		"EZipType",
		"EZipType",
		Z_Construct_UEnum_SimpleZIP_EZipType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleZIP_EZipType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleZIP_EZipType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleZIP_EZipType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleZIP_EZipType()
	{
		if (!Z_Registration_Info_UEnum_EZipType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZipType.InnerSingleton, Z_Construct_UEnum_SimpleZIP_EZipType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EZipType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics
	{
		struct _Script_SimpleZIP_eventOnZipFileCallbackFunction_Parms
		{
			EZipType InType;
			int32 InTotal;
			int32 InProgress;
			FString InFileName;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InTotal;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleZIP_eventOnZipFileCallbackFunction_Parms, InType), Z_Construct_UEnum_SimpleZIP_EZipType, METADATA_PARAMS(0, nullptr) }; // 2210636106
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InTotal = { "InTotal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleZIP_eventOnZipFileCallbackFunction_Parms, InTotal), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InProgress = { "InProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleZIP_eventOnZipFileCallbackFunction_Parms, InProgress), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleZIP_eventOnZipFileCallbackFunction_Parms, InFileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InFileName_MetaData), Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InFileName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::NewProp_InFileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZIPType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleZIP, nullptr, "OnZipFileCallbackFunction__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::_Script_SimpleZIP_eventOnZipFileCallbackFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::_Script_SimpleZIP_eventOnZipFileCallbackFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnZipFileCallbackFunction_DelegateWrapper(const FScriptDelegate& OnZipFileCallbackFunction, EZipType InType, int32 InTotal, int32 InProgress, const FString& InFileName)
{
	struct _Script_SimpleZIP_eventOnZipFileCallbackFunction_Parms
	{
		EZipType InType;
		int32 InTotal;
		int32 InProgress;
		FString InFileName;
	};
	_Script_SimpleZIP_eventOnZipFileCallbackFunction_Parms Parms;
	Parms.InType=InType;
	Parms.InTotal=InTotal;
	Parms.InProgress=InProgress;
	Parms.InFileName=InFileName;
	OnZipFileCallbackFunction.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackCompleteFunction__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackCompleteFunction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZIPType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackCompleteFunction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleZIP, nullptr, "OnZipFileCallbackCompleteFunction__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackCompleteFunction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackCompleteFunction__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackCompleteFunction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackCompleteFunction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnZipFileCallbackCompleteFunction_DelegateWrapper(const FScriptDelegate& OnZipFileCallbackCompleteFunction)
{
	OnZipFileCallbackCompleteFunction.ProcessDelegate<UObject>(NULL);
}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleZIP_Source_SimpleZIP_Public_ZIPType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleZIP_Source_SimpleZIP_Public_ZIPType_h_Statics::EnumInfo[] = {
		{ EZipType_StaticEnum, TEXT("EZipType"), &Z_Registration_Info_UEnum_EZipType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2210636106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleZIP_Source_SimpleZIP_Public_ZIPType_h_3344128740(TEXT("/Script/SimpleZIP"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleZIP_Source_SimpleZIP_Public_ZIPType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleZIP_Source_SimpleZIP_Public_ZIPType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
