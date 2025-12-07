// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAutomatedToolType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAutomatedToolType() {}
// Cross Module References
	SIMPLEAUTOMATEDTOOLCOMMON_API UEnum* Z_Construct_UEnum_SimpleAutomatedToolCommon_ECommandProtocol();
	SIMPLEAUTOMATEDTOOLCOMMON_API UEnum* Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType();
	SIMPLEAUTOMATEDTOOLCOMMON_API UEnum* Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType();
	SIMPLEAUTOMATEDTOOLCOMMON_API UEnum* Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedCallConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedCompressConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedConfigBase();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedGitConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedHTTPConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedMysqlConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedOSSConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig();
	SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedVSCompileConfig();
	SIMPLEHTTP_API UEnum* Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType();
	UPackage* Z_Construct_UPackage__Script_SimpleAutomatedToolCommon();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommandProtocol;
	static UEnum* ECommandProtocol_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommandProtocol.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommandProtocol.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAutomatedToolCommon_ECommandProtocol, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("ECommandProtocol"));
		}
		return Z_Registration_Info_UEnum_ECommandProtocol.OuterSingleton;
	}
	template<> SIMPLEAUTOMATEDTOOLCOMMON_API UEnum* StaticEnum<ECommandProtocol>()
	{
		return ECommandProtocol_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleAutomatedToolCommon_ECommandProtocol_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleAutomatedToolCommon_ECommandProtocol_Statics::Enumerators[] = {
		{ "ECommandProtocol::CMD_None", (int64)ECommandProtocol::CMD_None },
		{ "ECommandProtocol::CMD_Call", (int64)ECommandProtocol::CMD_Call },
		{ "ECommandProtocol::CMD_Call_Custom_Content", (int64)ECommandProtocol::CMD_Call_Custom_Content },
		{ "ECommandProtocol::CMD_UE_Project_Refresh", (int64)ECommandProtocol::CMD_UE_Project_Refresh },
		{ "ECommandProtocol::CMD_Command_Nesting", (int64)ECommandProtocol::CMD_Command_Nesting },
		{ "ECommandProtocol::CMD_Deployment_Copy", (int64)ECommandProtocol::CMD_Deployment_Copy },
		{ "ECommandProtocol::CMD_Deployment_Delete", (int64)ECommandProtocol::CMD_Deployment_Delete },
		{ "ECommandProtocol::CMD_VS_Compile", (int64)ECommandProtocol::CMD_VS_Compile },
		{ "ECommandProtocol::CMD_Git", (int64)ECommandProtocol::CMD_Git },
		{ "ECommandProtocol::CMD_UE_Packaging", (int64)ECommandProtocol::CMD_UE_Packaging },
		{ "ECommandProtocol::CMD_UE_Plugin_Packaging", (int64)ECommandProtocol::CMD_UE_Plugin_Packaging },
		{ "ECommandProtocol::CMD_Condition_Command", (int64)ECommandProtocol::CMD_Condition_Command },
		{ "ECommandProtocol::CMD_OSS", (int64)ECommandProtocol::CMD_OSS },
		{ "ECommandProtocol::CMD_HTTP", (int64)ECommandProtocol::CMD_HTTP },
		{ "ECommandProtocol::CMD_Compress", (int64)ECommandProtocol::CMD_Compress },
		{ "ECommandProtocol::CMD_Mysql", (int64)ECommandProtocol::CMD_Mysql },
		{ "ECommandProtocol::CMD_Max", (int64)ECommandProtocol::CMD_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleAutomatedToolCommon_ECommandProtocol_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CMD_Call.DisplayName", "Call" },
		{ "CMD_Call.Name", "ECommandProtocol::CMD_Call" },
		{ "CMD_Call_Custom_Content.Comment", "//\xe7\x94\xa8\xe4\xba\x8e\xe5\x91\xbc\xe5\x8f\xab\xe6\x9f\x90\xe4\xba\x9b\xe7\xa8\x8b\xe5\xba\x8f\n" },
		{ "CMD_Call_Custom_Content.DisplayName", "Call Custom Content" },
		{ "CMD_Call_Custom_Content.Name", "ECommandProtocol::CMD_Call_Custom_Content" },
		{ "CMD_Call_Custom_Content.ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe5\x91\xbc\xe5\x8f\xab\xe6\x9f\x90\xe4\xba\x9b\xe7\xa8\x8b\xe5\xba\x8f" },
		{ "CMD_Command_Nesting.DisplayName", "Command Nesting" },
		{ "CMD_Command_Nesting.Name", "ECommandProtocol::CMD_Command_Nesting" },
		{ "CMD_Compress.DisplayName", "Compress" },
		{ "CMD_Compress.Name", "ECommandProtocol::CMD_Compress" },
		{ "CMD_Condition_Command.DisplayName", "Condition Command" },
		{ "CMD_Condition_Command.Name", "ECommandProtocol::CMD_Condition_Command" },
		{ "CMD_Deployment_Copy.DisplayName", "Deployment Copy" },
		{ "CMD_Deployment_Copy.Name", "ECommandProtocol::CMD_Deployment_Copy" },
		{ "CMD_Deployment_Delete.DisplayName", "Deployment Delete" },
		{ "CMD_Deployment_Delete.Name", "ECommandProtocol::CMD_Deployment_Delete" },
		{ "CMD_Git.DisplayName", "Git" },
		{ "CMD_Git.Name", "ECommandProtocol::CMD_Git" },
		{ "CMD_HTTP.DisplayName", "HTTP" },
		{ "CMD_HTTP.Name", "ECommandProtocol::CMD_HTTP" },
		{ "CMD_Max.Comment", "//CMD_HTTP_Server\x09\x09\x09\x09UMETA(DisplayName = \"HTTP Server\"),\n//CMD_Web_Socket\x09\x09\x09\x09UMETA(DisplayName = \"Web Socket\"),\n" },
		{ "CMD_Max.DisplayName", "Max" },
		{ "CMD_Max.Name", "ECommandProtocol::CMD_Max" },
		{ "CMD_Max.ToolTip", "CMD_HTTP_Server                         UMETA(DisplayName = \"HTTP Server\"),\nCMD_Web_Socket                         UMETA(DisplayName = \"Web Socket\")," },
		{ "CMD_Mysql.DisplayName", "Mysql" },
		{ "CMD_Mysql.Name", "ECommandProtocol::CMD_Mysql" },
		{ "CMD_None.DisplayName", "None" },
		{ "CMD_None.Name", "ECommandProtocol::CMD_None" },
		{ "CMD_OSS.DisplayName", "OSS" },
		{ "CMD_OSS.Name", "ECommandProtocol::CMD_OSS" },
		{ "CMD_UE_Packaging.DisplayName", "UE Packaging" },
		{ "CMD_UE_Packaging.Name", "ECommandProtocol::CMD_UE_Packaging" },
		{ "CMD_UE_Plugin_Packaging.DisplayName", "UE Plugin Packaging" },
		{ "CMD_UE_Plugin_Packaging.Name", "ECommandProtocol::CMD_UE_Plugin_Packaging" },
		{ "CMD_UE_Project_Refresh.DisplayName", "UE Project Refresh" },
		{ "CMD_UE_Project_Refresh.Name", "ECommandProtocol::CMD_UE_Project_Refresh" },
		{ "CMD_VS_Compile.DisplayName", "VS Compile" },
		{ "CMD_VS_Compile.Name", "ECommandProtocol::CMD_VS_Compile" },
		{ "Comment", "//\xe5\x91\xbd\xe4\xbb\xa4\xe5\x8d\x8f\xe8\xae\xae\xe6\x9e\x9a\xe4\xb8\xbe\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "\xe5\x91\xbd\xe4\xbb\xa4\xe5\x8d\x8f\xe8\xae\xae\xe6\x9e\x9a\xe4\xb8\xbe" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAutomatedToolCommon_ECommandProtocol_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		nullptr,
		"ECommandProtocol",
		"ECommandProtocol",
		Z_Construct_UEnum_SimpleAutomatedToolCommon_ECommandProtocol_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAutomatedToolCommon_ECommandProtocol_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAutomatedToolCommon_ECommandProtocol_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAutomatedToolCommon_ECommandProtocol_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleAutomatedToolCommon_ECommandProtocol()
	{
		if (!Z_Registration_Info_UEnum_ECommandProtocol.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommandProtocol.InnerSingleton, Z_Construct_UEnum_SimpleAutomatedToolCommon_ECommandProtocol_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommandProtocol.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComparisionType;
	static UEnum* EComparisionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComparisionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComparisionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("EComparisionType"));
		}
		return Z_Registration_Info_UEnum_EComparisionType.OuterSingleton;
	}
	template<> SIMPLEAUTOMATEDTOOLCOMMON_API UEnum* StaticEnum<EComparisionType>()
	{
		return EComparisionType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType_Statics::Enumerators[] = {
		{ "EComparisionType::COMPARISION_None", (int64)EComparisionType::COMPARISION_None },
		{ "EComparisionType::COMPARISION_Sequence", (int64)EComparisionType::COMPARISION_Sequence },
		{ "EComparisionType::COMPARISION_Break", (int64)EComparisionType::COMPARISION_Break },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COMPARISION_Break.Comment", "//\xe6\x9c\x80\xe5\x90\x8e\xe8\xaf\x84\xe4\xbc\xb0\xef\xbc\x8c\xe5\x85\xa8\xe9\x83\xa8\xe6\x88\x90\xe5\x8a\x9f\xe8\xa7\x86\xe4\xb8\xba\xe6\x88\x90\xe5\x8a\x9f\n" },
		{ "COMPARISION_Break.DisplayName", "Select" },
		{ "COMPARISION_Break.Name", "EComparisionType::COMPARISION_Break" },
		{ "COMPARISION_Break.ToolTip", "\xe6\x9c\x80\xe5\x90\x8e\xe8\xaf\x84\xe4\xbc\xb0\xef\xbc\x8c\xe5\x85\xa8\xe9\x83\xa8\xe6\x88\x90\xe5\x8a\x9f\xe8\xa7\x86\xe4\xb8\xba\xe6\x88\x90\xe5\x8a\x9f" },
		{ "COMPARISION_None.DisplayName", "Sequence" },
		{ "COMPARISION_None.Name", "EComparisionType::COMPARISION_None" },
		{ "COMPARISION_Sequence.Comment", "//\xe6\x9c\x80\xe5\x90\x8e\xe8\xaf\x84\xe4\xbc\xb0\xef\xbc\x8c\xe5\x85\xa8\xe9\x83\xa8\xe6\x88\x90\xe5\x8a\x9f\xe8\xa7\x86\xe4\xb8\xba\xe6\x88\x90\xe5\x8a\x9f\n" },
		{ "COMPARISION_Sequence.DisplayName", "Sequence" },
		{ "COMPARISION_Sequence.Name", "EComparisionType::COMPARISION_Sequence" },
		{ "COMPARISION_Sequence.ToolTip", "\xe6\x9c\x80\xe5\x90\x8e\xe8\xaf\x84\xe4\xbc\xb0\xef\xbc\x8c\xe5\x85\xa8\xe9\x83\xa8\xe6\x88\x90\xe5\x8a\x9f\xe8\xa7\x86\xe4\xb8\xba\xe6\x88\x90\xe5\x8a\x9f" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		nullptr,
		"EComparisionType",
		"EComparisionType",
		Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType()
	{
		if (!Z_Registration_Info_UEnum_EComparisionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComparisionType.InnerSingleton, Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComparisionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompressType;
	static UEnum* ECompressType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECompressType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECompressType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("ECompressType"));
		}
		return Z_Registration_Info_UEnum_ECompressType.OuterSingleton;
	}
	template<> SIMPLEAUTOMATEDTOOLCOMMON_API UEnum* StaticEnum<ECompressType>()
	{
		return ECompressType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType_Statics::Enumerators[] = {
		{ "ECompressType::COMPRESS_None", (int64)ECompressType::COMPRESS_None },
		{ "ECompressType::COMPRESS_Zip", (int64)ECompressType::COMPRESS_Zip },
		{ "ECompressType::COMPRESS_RZ", (int64)ECompressType::COMPRESS_RZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COMPRESS_None.DisplayName", "None" },
		{ "COMPRESS_None.Name", "ECompressType::COMPRESS_None" },
		{ "COMPRESS_RZ.DisplayName", "Custom Format RZ" },
		{ "COMPRESS_RZ.Name", "ECompressType::COMPRESS_RZ" },
		{ "COMPRESS_Zip.DisplayName", "Zip" },
		{ "COMPRESS_Zip.Name", "ECompressType::COMPRESS_Zip" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		nullptr,
		"ECompressType",
		"ECompressType",
		Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType()
	{
		if (!Z_Registration_Info_UEnum_ECompressType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompressType.InnerSingleton, Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECompressType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMysqlMethodType;
	static UEnum* EMysqlMethodType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMysqlMethodType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMysqlMethodType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("EMysqlMethodType"));
		}
		return Z_Registration_Info_UEnum_EMysqlMethodType.OuterSingleton;
	}
	template<> SIMPLEAUTOMATEDTOOLCOMMON_API UEnum* StaticEnum<EMysqlMethodType>()
	{
		return EMysqlMethodType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType_Statics::Enumerators[] = {
		{ "EMysqlMethodType::MYSQLMETHOD_None", (int64)EMysqlMethodType::MYSQLMETHOD_None },
		{ "EMysqlMethodType::MYSQLMETHOD_Get", (int64)EMysqlMethodType::MYSQLMETHOD_Get },
		{ "EMysqlMethodType::MYSQLMETHOD_Post", (int64)EMysqlMethodType::MYSQLMETHOD_Post },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "MYSQLMETHOD_Get.DisplayName", "Get" },
		{ "MYSQLMETHOD_Get.Name", "EMysqlMethodType::MYSQLMETHOD_Get" },
		{ "MYSQLMETHOD_None.DisplayName", "None" },
		{ "MYSQLMETHOD_None.Name", "EMysqlMethodType::MYSQLMETHOD_None" },
		{ "MYSQLMETHOD_Post.DisplayName", "Post" },
		{ "MYSQLMETHOD_Post.Name", "EMysqlMethodType::MYSQLMETHOD_Post" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		nullptr,
		"EMysqlMethodType",
		"EMysqlMethodType",
		Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType()
	{
		if (!Z_Registration_Info_UEnum_EMysqlMethodType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMysqlMethodType.InnerSingleton, Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMysqlMethodType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedConfigBase;
class UScriptStruct* FAutomatedConfigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedConfigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedConfigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedConfigBase, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedConfigBase"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedConfigBase.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedConfigBase>()
{
	return FAutomatedConfigBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedConfigBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedConfigBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// FAutomatedConfigBase\xe6\x80\xbb\xe7\x9a\x84\xe5\x9f\xba\xe7\xb1\xbb\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "FAutomatedConfigBase\xe6\x80\xbb\xe7\x9a\x84\xe5\x9f\xba\xe7\xb1\xbb" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedConfigBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedConfigBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedConfigBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		nullptr,
		&NewStructOps,
		"AutomatedConfigBase",
		nullptr,
		0,
		sizeof(FAutomatedConfigBase),
		alignof(FAutomatedConfigBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedConfigBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedConfigBase_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedConfigBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedConfigBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedConfigBase.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedConfigBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedConfigBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedCallConfig>() == std::is_polymorphic<FAutomatedConfigBase>(), "USTRUCT FAutomatedCallConfig cannot be polymorphic unless super FAutomatedConfigBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedCallConfig;
class UScriptStruct* FAutomatedCallConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedCallConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedCallConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedCallConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedCallConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedCallConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedCallConfig>()
{
	return FAutomatedCallConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CallType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CallPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe5\x91\xbc\xe5\x8f\xab\xe6\x8c\x87\xe5\xae\x9a\xe8\x84\x9a\xe6\x9c\xac\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "\xe5\x91\xbc\xe5\x8f\xab\xe6\x8c\x87\xe5\xae\x9a\xe8\x84\x9a\xe6\x9c\xac" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedCallConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_CallType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_CallType = { "CallType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedCallConfig, CallType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_CallType_MetaData), Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_CallType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedCallConfig, Parameters), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_Parameters_MetaData), Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_Parameters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_CallPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_CallPath = { "CallPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedCallConfig, CallPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_CallPath_MetaData), Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_CallPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_CallType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewProp_CallPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedConfigBase,
		&NewStructOps,
		"AutomatedCallConfig",
		Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::PropPointers),
		sizeof(FAutomatedCallConfig),
		alignof(FAutomatedCallConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedCallConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedCallConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedCallConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedCallConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedCallCustomContentConfig>() == std::is_polymorphic<FAutomatedCallConfig>(), "USTRUCT FAutomatedCallCustomContentConfig cannot be polymorphic unless super FAutomatedCallConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedCallCustomContentConfig;
class UScriptStruct* FAutomatedCallCustomContentConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedCallCustomContentConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedCallCustomContentConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedCallCustomContentConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedCallCustomContentConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedCallCustomContentConfig>()
{
	return FAutomatedCallCustomContentConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe8\xbe\x93\xe5\x85\xa5\xe8\x84\x9a\xe6\x9c\xac\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90""bat\xe8\x84\x9a\xe6\x9c\xac\xef\xbc\x8c\xe5\xb9\xb6\xe6\x89\xa7\xe8\xa1\x8c\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe8\x84\x9a\xe6\x9c\xac\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90""bat\xe8\x84\x9a\xe6\x9c\xac\xef\xbc\x8c\xe5\xb9\xb6\xe6\x89\xa7\xe8\xa1\x8c" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedCallCustomContentConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::NewProp_Content_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedCallCustomContentConfig, Content), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::NewProp_Content_MetaData), Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::NewProp_Content_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::NewProp_WaitTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedCallCustomContentConfig, WaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::NewProp_WaitTime_MetaData), Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::NewProp_WaitTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::NewProp_WaitTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedCallConfig,
		&NewStructOps,
		"AutomatedCallCustomContentConfig",
		Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::PropPointers),
		sizeof(FAutomatedCallCustomContentConfig),
		alignof(FAutomatedCallCustomContentConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedCallCustomContentConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedCallCustomContentConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedCallCustomContentConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedUEProjectRefreshConfig>() == std::is_polymorphic<FAutomatedCallConfig>(), "USTRUCT FAutomatedUEProjectRefreshConfig cannot be polymorphic unless super FAutomatedCallConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedUEProjectRefreshConfig;
class UScriptStruct* FAutomatedUEProjectRefreshConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedUEProjectRefreshConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedUEProjectRefreshConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedUEProjectRefreshConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedUEProjectRefreshConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedUEProjectRefreshConfig>()
{
	return FAutomatedUEProjectRefreshConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealBuildToolPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealBuildToolPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectUProjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectUProjectPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedUEProjectRefreshConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::NewProp_UnrealBuildToolPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::NewProp_UnrealBuildToolPath = { "UnrealBuildToolPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedUEProjectRefreshConfig, UnrealBuildToolPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::NewProp_UnrealBuildToolPath_MetaData), Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::NewProp_UnrealBuildToolPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::NewProp_ProjectUProjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::NewProp_ProjectUProjectPath = { "ProjectUProjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedUEProjectRefreshConfig, ProjectUProjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::NewProp_ProjectUProjectPath_MetaData), Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::NewProp_ProjectUProjectPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::NewProp_UnrealBuildToolPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::NewProp_ProjectUProjectPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedCallConfig,
		&NewStructOps,
		"AutomatedUEProjectRefreshConfig",
		Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::PropPointers),
		sizeof(FAutomatedUEProjectRefreshConfig),
		alignof(FAutomatedUEProjectRefreshConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedUEProjectRefreshConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedUEProjectRefreshConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedUEProjectRefreshConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedCommandNestingConfig>() == std::is_polymorphic<FAutomatedConfigBase>(), "USTRUCT FAutomatedCommandNestingConfig cannot be polymorphic unless super FAutomatedConfigBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedCommandNestingConfig;
class UScriptStruct* FAutomatedCommandNestingConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedCommandNestingConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedCommandNestingConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedCommandNestingConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedCommandNestingConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedCommandNestingConfig>()
{
	return FAutomatedCommandNestingConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComparisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisionType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CommandList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedCommandNestingConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_ComparisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_ComparisionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_ComparisionType = { "ComparisionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedCommandNestingConfig, ComparisionType), Z_Construct_UEnum_SimpleAutomatedToolCommon_EComparisionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_ComparisionType_MetaData), Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_ComparisionType_MetaData) }; // 4267479872
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_CommandList_Inner = { "CommandList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_CommandList_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_CommandList = { "CommandList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedCommandNestingConfig, CommandList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_CommandList_MetaData), Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_CommandList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_ComparisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_ComparisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_CommandList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewProp_CommandList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedConfigBase,
		&NewStructOps,
		"AutomatedCommandNestingConfig",
		Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::PropPointers),
		sizeof(FAutomatedCommandNestingConfig),
		alignof(FAutomatedCommandNestingConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedCommandNestingConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedCommandNestingConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedCommandNestingConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedDeploymentCopyConfig>() == std::is_polymorphic<FAutomatedConfigBase>(), "USTRUCT FAutomatedDeploymentCopyConfig cannot be polymorphic unless super FAutomatedConfigBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedDeploymentCopyConfig;
class UScriptStruct* FAutomatedDeploymentCopyConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedDeploymentCopyConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedDeploymentCopyConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedDeploymentCopyConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedDeploymentCopyConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedDeploymentCopyConfig>()
{
	return FAutomatedDeploymentCopyConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteMovedFiles_MetaData[];
#endif
		static void NewProp_bDeleteMovedFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteMovedFiles;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Files;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedDeploymentCopyConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_bDeleteMovedFiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_bDeleteMovedFiles_SetBit(void* Obj)
	{
		((FAutomatedDeploymentCopyConfig*)Obj)->bDeleteMovedFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_bDeleteMovedFiles = { "bDeleteMovedFiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomatedDeploymentCopyConfig), &Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_bDeleteMovedFiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_bDeleteMovedFiles_MetaData), Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_bDeleteMovedFiles_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_Files_ValueProp = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_Files_Key_KeyProp = { "Files_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_Files_MetaData[] = {
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x88\xa0\xe9\x99\xa4Source\xe6\x96\x87\xe4\xbb\xb6\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x88\xa0\xe9\x99\xa4Source\xe6\x96\x87\xe4\xbb\xb6" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedDeploymentCopyConfig, Files), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_Files_MetaData), Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_Files_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_bDeleteMovedFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_Files_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_Files_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewProp_Files,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedConfigBase,
		&NewStructOps,
		"AutomatedDeploymentCopyConfig",
		Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::PropPointers),
		sizeof(FAutomatedDeploymentCopyConfig),
		alignof(FAutomatedDeploymentCopyConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedDeploymentCopyConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedDeploymentCopyConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedDeploymentCopyConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedDeploymentDeleteConfig>() == std::is_polymorphic<FAutomatedConfigBase>(), "USTRUCT FAutomatedDeploymentDeleteConfig cannot be polymorphic unless super FAutomatedConfigBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedDeploymentDeleteConfig;
class UScriptStruct* FAutomatedDeploymentDeleteConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedDeploymentDeleteConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedDeploymentDeleteConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedDeploymentDeleteConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedDeploymentDeleteConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedDeploymentDeleteConfig>()
{
	return FAutomatedDeploymentDeleteConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedDeploymentDeleteConfig>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::NewProp_Files_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedDeploymentDeleteConfig, Files), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::NewProp_Files_MetaData), Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::NewProp_Files_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::NewProp_Files,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedConfigBase,
		&NewStructOps,
		"AutomatedDeploymentDeleteConfig",
		Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::PropPointers),
		sizeof(FAutomatedDeploymentDeleteConfig),
		alignof(FAutomatedDeploymentDeleteConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedDeploymentDeleteConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedDeploymentDeleteConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedDeploymentDeleteConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedVSCompileConfig>() == std::is_polymorphic<FAutomatedCallConfig>(), "USTRUCT FAutomatedVSCompileConfig cannot be polymorphic unless super FAutomatedCallConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedVSCompileConfig;
class UScriptStruct* FAutomatedVSCompileConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedVSCompileConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedVSCompileConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedVSCompileConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedVSCompileConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedVSCompileConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedVSCompileConfig>()
{
	return FAutomatedVSCompileConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildState_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlnProjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlnProjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Project_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Project;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedVSCompileConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_BuildState_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_BuildState = { "BuildState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedVSCompileConfig, BuildState), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_BuildState_MetaData), Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_BuildState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_SlnProjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_SlnProjectPath = { "SlnProjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedVSCompileConfig, SlnProjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_SlnProjectPath_MetaData), Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_SlnProjectPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_Project_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_Project = { "Project", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedVSCompileConfig, Project), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_Project_MetaData), Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_Project_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_BuildState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_SlnProjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewProp_Project,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedCallConfig,
		&NewStructOps,
		"AutomatedVSCompileConfig",
		Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::PropPointers),
		sizeof(FAutomatedVSCompileConfig),
		alignof(FAutomatedVSCompileConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedVSCompileConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedVSCompileConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedVSCompileConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedVSCompileConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedGitConfig>() == std::is_polymorphic<FAutomatedCallConfig>(), "USTRUCT FAutomatedGitConfig cannot be polymorphic unless super FAutomatedCallConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedGitConfig;
class UScriptStruct* FAutomatedGitConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedGitConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedGitConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedGitConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedGitConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedGitConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedGitConfig>()
{
	return FAutomatedGitConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GitCommands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GitCommands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GitCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedGitConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewProp_ProjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewProp_ProjectPath = { "ProjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedGitConfig, ProjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewProp_ProjectPath_MetaData), Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewProp_ProjectPath_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewProp_GitCommands_Inner = { "GitCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewProp_GitCommands_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewProp_GitCommands = { "GitCommands", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedGitConfig, GitCommands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewProp_GitCommands_MetaData), Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewProp_GitCommands_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewProp_ProjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewProp_GitCommands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewProp_GitCommands,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedCallConfig,
		&NewStructOps,
		"AutomatedGitConfig",
		Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::PropPointers),
		sizeof(FAutomatedGitConfig),
		alignof(FAutomatedGitConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedGitConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedGitConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedGitConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedGitConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedUEPackagingConfig>() == std::is_polymorphic<FAutomatedCallConfig>(), "USTRUCT FAutomatedUEPackagingConfig cannot be polymorphic unless super FAutomatedCallConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedUEPackagingConfig;
class UScriptStruct* FAutomatedUEPackagingConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedUEPackagingConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedUEPackagingConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedUEPackagingConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedUEPackagingConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedUEPackagingConfig>()
{
	return FAutomatedUEPackagingConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EngineDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UProjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UProjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildState_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArchiveDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ArchiveDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedUEPackagingConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_EngineDir_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_EngineDir = { "EngineDir", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedUEPackagingConfig, EngineDir), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_EngineDir_MetaData), Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_EngineDir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_UProjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_UProjectPath = { "UProjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedUEPackagingConfig, UProjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_UProjectPath_MetaData), Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_UProjectPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_Platform_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedUEPackagingConfig, Platform), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_Platform_MetaData), Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_Platform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_BuildState_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_BuildState = { "BuildState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedUEPackagingConfig, BuildState), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_BuildState_MetaData), Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_BuildState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_ArchiveDirectory_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_ArchiveDirectory = { "ArchiveDirectory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedUEPackagingConfig, ArchiveDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_ArchiveDirectory_MetaData), Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_ArchiveDirectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_BuildTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_BuildTarget = { "BuildTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedUEPackagingConfig, BuildTarget), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_BuildTarget_MetaData), Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_BuildTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_EngineDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_UProjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_BuildState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_ArchiveDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewProp_BuildTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedCallConfig,
		&NewStructOps,
		"AutomatedUEPackagingConfig",
		Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::PropPointers),
		sizeof(FAutomatedUEPackagingConfig),
		alignof(FAutomatedUEPackagingConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedUEPackagingConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedUEPackagingConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedUEPackagingConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedUEPluginPackagingConfig>() == std::is_polymorphic<FAutomatedCallConfig>(), "USTRUCT FAutomatedUEPluginPackagingConfig cannot be polymorphic unless super FAutomatedCallConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedUEPluginPackagingConfig;
class UScriptStruct* FAutomatedUEPluginPackagingConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedUEPluginPackagingConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedUEPluginPackagingConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedUEPluginPackagingConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedUEPluginPackagingConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedUEPluginPackagingConfig>()
{
	return FAutomatedUEPluginPackagingConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EngineDir;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathOfUPluginToTarget_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathOfUPluginToTarget_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathOfUPluginToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PathOfUPluginToTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedUEPluginPackagingConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_EngineDir_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_EngineDir = { "EngineDir", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedUEPluginPackagingConfig, EngineDir), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_EngineDir_MetaData), Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_EngineDir_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_PathOfUPluginToTarget_ValueProp = { "PathOfUPluginToTarget", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_PathOfUPluginToTarget_Key_KeyProp = { "PathOfUPluginToTarget_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_PathOfUPluginToTarget_MetaData[] = {
		{ "Comment", "//\xe6\x89\xb9\xe9\x87\x8f\xe6\x89\x93\xe5\x8c\x85\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "\xe6\x89\xb9\xe9\x87\x8f\xe6\x89\x93\xe5\x8c\x85" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_PathOfUPluginToTarget = { "PathOfUPluginToTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedUEPluginPackagingConfig, PathOfUPluginToTarget), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_PathOfUPluginToTarget_MetaData), Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_PathOfUPluginToTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_EngineDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_PathOfUPluginToTarget_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_PathOfUPluginToTarget_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewProp_PathOfUPluginToTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedCallConfig,
		&NewStructOps,
		"AutomatedUEPluginPackagingConfig",
		Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::PropPointers),
		sizeof(FAutomatedUEPluginPackagingConfig),
		alignof(FAutomatedUEPluginPackagingConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedUEPluginPackagingConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedUEPluginPackagingConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedUEPluginPackagingConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedConditionCommandConfig>() == std::is_polymorphic<FAutomatedCommandNestingConfig>(), "USTRUCT FAutomatedConditionCommandConfig cannot be polymorphic unless super FAutomatedCommandNestingConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedConditionCommandConfig;
class UScriptStruct* FAutomatedConditionCommandConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedConditionCommandConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedConditionCommandConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedConditionCommandConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedConditionCommandConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedConditionCommandConfig>()
{
	return FAutomatedConditionCommandConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_TrueCommandList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrueCommandList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrueCommandList;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FalseCommandList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalseCommandList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FalseCommandList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedConditionCommandConfig>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_TrueCommandList_Inner = { "TrueCommandList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_TrueCommandList_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_TrueCommandList = { "TrueCommandList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedConditionCommandConfig, TrueCommandList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_TrueCommandList_MetaData), Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_TrueCommandList_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_FalseCommandList_Inner = { "FalseCommandList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_FalseCommandList_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_FalseCommandList = { "FalseCommandList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedConditionCommandConfig, FalseCommandList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_FalseCommandList_MetaData), Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_FalseCommandList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_TrueCommandList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_TrueCommandList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_FalseCommandList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewProp_FalseCommandList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig,
		&NewStructOps,
		"AutomatedConditionCommandConfig",
		Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::PropPointers),
		sizeof(FAutomatedConditionCommandConfig),
		alignof(FAutomatedConditionCommandConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedConditionCommandConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedConditionCommandConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedConditionCommandConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedOSSConfig>() == std::is_polymorphic<FAutomatedConfigBase>(), "USTRUCT FAutomatedOSSConfig cannot be polymorphic unless super FAutomatedConfigBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedOSSConfig;
class UScriptStruct* FAutomatedOSSConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedOSSConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedOSSConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedOSSConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedOSSConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedOSSConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedOSSConfig>()
{
	return FAutomatedOSSConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedOSSConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedOSSConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedOSSConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedOSSConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedOSSConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedConfigBase,
		&NewStructOps,
		"AutomatedOSSConfig",
		nullptr,
		0,
		sizeof(FAutomatedOSSConfig),
		alignof(FAutomatedOSSConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedOSSConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedOSSConfig_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedOSSConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedOSSConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedOSSConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedOSSConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedOSSConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedHTTPConfig>() == std::is_polymorphic<FAutomatedConfigBase>(), "USTRUCT FAutomatedHTTPConfig cannot be polymorphic unless super FAutomatedConfigBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedHTTPConfig;
class UScriptStruct* FAutomatedHTTPConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedHTTPConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedHTTPConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedHTTPConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedHTTPConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedHTTPConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedHTTPConfig>()
{
	return FAutomatedHTTPConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerbType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerbType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VerbType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomMetaData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CustomMetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSync_MetaData[];
#endif
		static void NewProp_bSync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBinaries_MetaData[];
#endif
		static void NewProp_bBinaries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBinaries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentBody_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedHTTPConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_URL_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedHTTPConfig, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_URL_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_VerbType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_VerbType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_VerbType = { "VerbType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedHTTPConfig, VerbType), Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_VerbType_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_VerbType_MetaData) }; // 10049799
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_CustomMetaData_ValueProp = { "CustomMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_CustomMetaData_Key_KeyProp = { "CustomMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_CustomMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_CustomMetaData = { "CustomMetaData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedHTTPConfig, CustomMetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_CustomMetaData_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_CustomMetaData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bSync_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bSync_SetBit(void* Obj)
	{
		((FAutomatedHTTPConfig*)Obj)->bSync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bSync = { "bSync", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomatedHTTPConfig), &Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bSync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bSync_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bSync_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bBinaries_MetaData[] = {
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x90\x8c\xe6\xad\xa5\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4\xe5\x90\x8c\xe6\xad\xa5\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x90\x8c\xe6\xad\xa5\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4\xe5\x90\x8c\xe6\xad\xa5" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bBinaries_SetBit(void* Obj)
	{
		((FAutomatedHTTPConfig*)Obj)->bBinaries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bBinaries = { "bBinaries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomatedHTTPConfig), &Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bBinaries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bBinaries_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bBinaries_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_ContentBody_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_ContentBody = { "ContentBody", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedHTTPConfig, ContentBody), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_ContentBody_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_ContentBody_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_Timeout_MetaData[] = {
		{ "Comment", "//Json-string, Binaries-Path\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "Json-string, Binaries-Path" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedHTTPConfig, Timeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_Timeout_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_Timeout_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_SavePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedHTTPConfig, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_SavePath_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_SavePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_VerbType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_VerbType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_CustomMetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_CustomMetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_CustomMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_bBinaries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_ContentBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewProp_SavePath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedConfigBase,
		&NewStructOps,
		"AutomatedHTTPConfig",
		Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::PropPointers),
		sizeof(FAutomatedHTTPConfig),
		alignof(FAutomatedHTTPConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedHTTPConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedHTTPConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedHTTPConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedHTTPConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedCompressConfig>() == std::is_polymorphic<FAutomatedConfigBase>(), "USTRUCT FAutomatedCompressConfig cannot be polymorphic unless super FAutomatedConfigBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedCompressConfig;
class UScriptStruct* FAutomatedCompressConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedCompressConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedCompressConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedCompressConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedCompressConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedCompressConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedCompressConfig>()
{
	return FAutomatedCompressConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompress_MetaData[];
#endif
		static void NewProp_bCompress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompress;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CompressMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompressEachFileUnderPath_MetaData[];
#endif
		static void NewProp_bCompressEachFileUnderPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressEachFileUnderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathOfSourceToTarget_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathOfSourceToTarget_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathOfSourceToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PathOfSourceToTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedCompressConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompress_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompress_SetBit(void* Obj)
	{
		((FAutomatedCompressConfig*)Obj)->bCompress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompress = { "bCompress", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomatedCompressConfig), &Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompress_MetaData), Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompress_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_CompressMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_CompressMethod_MetaData[] = {
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe5\x8e\x8b\xe7\xbc\xa9\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe5\x8e\x8b\xe7\xbc\xa9" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_CompressMethod = { "CompressMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedCompressConfig, CompressMethod), Z_Construct_UEnum_SimpleAutomatedToolCommon_ECompressType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_CompressMethod_MetaData), Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_CompressMethod_MetaData) }; // 1002605352
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompressEachFileUnderPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompressEachFileUnderPath_SetBit(void* Obj)
	{
		((FAutomatedCompressConfig*)Obj)->bCompressEachFileUnderPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompressEachFileUnderPath = { "bCompressEachFileUnderPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomatedCompressConfig), &Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompressEachFileUnderPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompressEachFileUnderPath_MetaData), Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompressEachFileUnderPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_Password_MetaData[] = {
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\xaf\xb9\xe8\xb7\xaf\xe5\xbe\x84\xe4\xb8\x8b\xe7\x9a\x84\xe6\xaf\x8f\xe4\xb8\xaa\xe6\x96\x87\xe4\xbb\xb6\xe8\xbf\x9b\xe8\xa1\x8c\xe5\x8e\x8b\xe7\xbc\xa9\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe8\xb7\xaf\xe5\xbe\x84\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xaf\xb9\xe8\xb7\xaf\xe5\xbe\x84\xe4\xb8\x8b\xe7\x9a\x84\xe6\xaf\x8f\xe4\xb8\xaa\xe6\x96\x87\xe4\xbb\xb6\xe8\xbf\x9b\xe8\xa1\x8c\xe5\x8e\x8b\xe7\xbc\xa9\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe8\xb7\xaf\xe5\xbe\x84" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedCompressConfig, Password), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_Password_MetaData), Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_Password_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_PathOfSourceToTarget_ValueProp = { "PathOfSourceToTarget", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_PathOfSourceToTarget_Key_KeyProp = { "PathOfSourceToTarget_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_PathOfSourceToTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_PathOfSourceToTarget = { "PathOfSourceToTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedCompressConfig, PathOfSourceToTarget), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_PathOfSourceToTarget_MetaData), Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_PathOfSourceToTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_CompressMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_CompressMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_bCompressEachFileUnderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_PathOfSourceToTarget_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_PathOfSourceToTarget_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewProp_PathOfSourceToTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedConfigBase,
		&NewStructOps,
		"AutomatedCompressConfig",
		Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::PropPointers),
		sizeof(FAutomatedCompressConfig),
		alignof(FAutomatedCompressConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedCompressConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedCompressConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedCompressConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedCompressConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedMysqlConfig>() == std::is_polymorphic<FAutomatedConfigBase>(), "USTRUCT FAutomatedMysqlConfig cannot be polymorphic unless super FAutomatedConfigBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedMysqlConfig;
class UScriptStruct* FAutomatedMysqlConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedMysqlConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedMysqlConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedMysqlConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedMysqlConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedMysqlConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedMysqlConfig>()
{
	return FAutomatedMysqlConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_User;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataBase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataBase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sql_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Sql;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedMysqlConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_User_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedMysqlConfig, User), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_User_MetaData), Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_User_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Host_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedMysqlConfig, Host), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Host_MetaData), Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Host_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Port_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedMysqlConfig, Port), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Port_MetaData), Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Port_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Password_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedMysqlConfig, Password), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Password_MetaData), Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Password_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_DataBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_DataBase = { "DataBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedMysqlConfig, DataBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_DataBase_MetaData), Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_DataBase_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Method_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedMysqlConfig, Method), Z_Construct_UEnum_SimpleAutomatedToolCommon_EMysqlMethodType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Method_MetaData), Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Method_MetaData) }; // 4069310515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Sql_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Sql = { "Sql", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedMysqlConfig, Sql), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Sql_MetaData), Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Sql_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_SavePath_MetaData[] = {
		{ "Comment", "//\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe8\xaf\xad\xe5\x8f\xa5\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe8\xaf\xad\xe5\x8f\xa5" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedMysqlConfig, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_SavePath_MetaData), Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_SavePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_DataBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_Sql,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewProp_SavePath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedConfigBase,
		&NewStructOps,
		"AutomatedMysqlConfig",
		Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::PropPointers),
		sizeof(FAutomatedMysqlConfig),
		alignof(FAutomatedMysqlConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedMysqlConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedMysqlConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedMysqlConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedMysqlConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutomatedHTTPServerConfig>() == std::is_polymorphic<FAutomatedConfigBase>(), "USTRUCT FAutomatedHTTPServerConfig cannot be polymorphic unless super FAutomatedConfigBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedHTTPServerConfig;
class UScriptStruct* FAutomatedHTTPServerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedHTTPServerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedHTTPServerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolCommon(), TEXT("AutomatedHTTPServerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedHTTPServerConfig.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLCOMMON_API UScriptStruct* StaticStruct<FAutomatedHTTPServerConfig>()
{
	return FAutomatedHTTPServerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHttps_MetaData[];
#endif
		static void NewProp_bHttps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHttps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Certificate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Certificate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n//\xe4\xb8\x8d\xe4\xb8\x8e""Elements\xe4\xba\xa7\xe7\x94\x9f\xe5\x85\xb3\xe8\x81\x94\xef\xbc\x8c\xe4\xb8\x8d\xe4\xbd\xbf\xe7\x94\xa8Json\xef\xbc\x8c\xe4\xbb\x8e\xe5\x91\xbd\xe4\xbb\xa4\xe8\xa1\x8c\xe5\x8f\x82\xe6\x95\xb0\xe4\xbc\xa0\xe5\x85\xa5\xe8\xa7\xa3\xe6\x9e\x90\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "\xe4\xb8\x8d\xe4\xb8\x8e""Elements\xe4\xba\xa7\xe7\x94\x9f\xe5\x85\xb3\xe8\x81\x94\xef\xbc\x8c\xe4\xb8\x8d\xe4\xbd\xbf\xe7\x94\xa8Json\xef\xbc\x8c\xe4\xbb\x8e\xe5\x91\xbd\xe4\xbb\xa4\xe8\xa1\x8c\xe5\x8f\x82\xe6\x95\xb0\xe4\xbc\xa0\xe5\x85\xa5\xe8\xa7\xa3\xe6\x9e\x90" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedHTTPServerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_IP_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedHTTPServerConfig, IP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_IP_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_IP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Port_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedHTTPServerConfig, Port), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Port_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Port_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_bHttps_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_bHttps_SetBit(void* Obj)
	{
		((FAutomatedHTTPServerConfig*)Obj)->bHttps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_bHttps = { "bHttps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutomatedHTTPServerConfig), &Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_bHttps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_bHttps_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_bHttps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Certificate_MetaData[] = {
		{ "Comment", "//http or https\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "http or https" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Certificate = { "Certificate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedHTTPServerConfig, Certificate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Certificate_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Certificate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Key_MetaData[] = {
		{ "Comment", "//\xe8\xaf\x81\xe4\xb9\xa6\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
		{ "ToolTip", "\xe8\xaf\x81\xe4\xb9\xa6" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedHTTPServerConfig, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Timeout_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomatedHTTPServerConfig, Timeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Timeout_MetaData), Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Timeout_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_bHttps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Certificate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewProp_Timeout,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolCommon,
		Z_Construct_UScriptStruct_FAutomatedConfigBase,
		&NewStructOps,
		"AutomatedHTTPServerConfig",
		Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::PropPointers),
		sizeof(FAutomatedHTTPServerConfig),
		alignof(FAutomatedHTTPServerConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedHTTPServerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedHTTPServerConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedHTTPServerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_Common_SimpleAutomatedToolCommon_Public_SimpleAutomatedToolType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_Common_SimpleAutomatedToolCommon_Public_SimpleAutomatedToolType_h_Statics::EnumInfo[] = {
		{ ECommandProtocol_StaticEnum, TEXT("ECommandProtocol"), &Z_Registration_Info_UEnum_ECommandProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4245713119U) },
		{ EComparisionType_StaticEnum, TEXT("EComparisionType"), &Z_Registration_Info_UEnum_EComparisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4267479872U) },
		{ ECompressType_StaticEnum, TEXT("ECompressType"), &Z_Registration_Info_UEnum_ECompressType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1002605352U) },
		{ EMysqlMethodType_StaticEnum, TEXT("EMysqlMethodType"), &Z_Registration_Info_UEnum_EMysqlMethodType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4069310515U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_Common_SimpleAutomatedToolCommon_Public_SimpleAutomatedToolType_h_Statics::ScriptStructInfo[] = {
		{ FAutomatedConfigBase::StaticStruct, Z_Construct_UScriptStruct_FAutomatedConfigBase_Statics::NewStructOps, TEXT("AutomatedConfigBase"), &Z_Registration_Info_UScriptStruct_AutomatedConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedConfigBase), 657247085U) },
		{ FAutomatedCallConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedCallConfig_Statics::NewStructOps, TEXT("AutomatedCallConfig"), &Z_Registration_Info_UScriptStruct_AutomatedCallConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedCallConfig), 1202776148U) },
		{ FAutomatedCallCustomContentConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedCallCustomContentConfig_Statics::NewStructOps, TEXT("AutomatedCallCustomContentConfig"), &Z_Registration_Info_UScriptStruct_AutomatedCallCustomContentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedCallCustomContentConfig), 2998686490U) },
		{ FAutomatedUEProjectRefreshConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedUEProjectRefreshConfig_Statics::NewStructOps, TEXT("AutomatedUEProjectRefreshConfig"), &Z_Registration_Info_UScriptStruct_AutomatedUEProjectRefreshConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedUEProjectRefreshConfig), 3864604037U) },
		{ FAutomatedCommandNestingConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedCommandNestingConfig_Statics::NewStructOps, TEXT("AutomatedCommandNestingConfig"), &Z_Registration_Info_UScriptStruct_AutomatedCommandNestingConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedCommandNestingConfig), 1773846183U) },
		{ FAutomatedDeploymentCopyConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedDeploymentCopyConfig_Statics::NewStructOps, TEXT("AutomatedDeploymentCopyConfig"), &Z_Registration_Info_UScriptStruct_AutomatedDeploymentCopyConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedDeploymentCopyConfig), 2211125290U) },
		{ FAutomatedDeploymentDeleteConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedDeploymentDeleteConfig_Statics::NewStructOps, TEXT("AutomatedDeploymentDeleteConfig"), &Z_Registration_Info_UScriptStruct_AutomatedDeploymentDeleteConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedDeploymentDeleteConfig), 4057198394U) },
		{ FAutomatedVSCompileConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedVSCompileConfig_Statics::NewStructOps, TEXT("AutomatedVSCompileConfig"), &Z_Registration_Info_UScriptStruct_AutomatedVSCompileConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedVSCompileConfig), 1007906753U) },
		{ FAutomatedGitConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedGitConfig_Statics::NewStructOps, TEXT("AutomatedGitConfig"), &Z_Registration_Info_UScriptStruct_AutomatedGitConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedGitConfig), 2894538335U) },
		{ FAutomatedUEPackagingConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedUEPackagingConfig_Statics::NewStructOps, TEXT("AutomatedUEPackagingConfig"), &Z_Registration_Info_UScriptStruct_AutomatedUEPackagingConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedUEPackagingConfig), 1477928545U) },
		{ FAutomatedUEPluginPackagingConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedUEPluginPackagingConfig_Statics::NewStructOps, TEXT("AutomatedUEPluginPackagingConfig"), &Z_Registration_Info_UScriptStruct_AutomatedUEPluginPackagingConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedUEPluginPackagingConfig), 1045077703U) },
		{ FAutomatedConditionCommandConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedConditionCommandConfig_Statics::NewStructOps, TEXT("AutomatedConditionCommandConfig"), &Z_Registration_Info_UScriptStruct_AutomatedConditionCommandConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedConditionCommandConfig), 3384150419U) },
		{ FAutomatedOSSConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedOSSConfig_Statics::NewStructOps, TEXT("AutomatedOSSConfig"), &Z_Registration_Info_UScriptStruct_AutomatedOSSConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedOSSConfig), 1695891123U) },
		{ FAutomatedHTTPConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedHTTPConfig_Statics::NewStructOps, TEXT("AutomatedHTTPConfig"), &Z_Registration_Info_UScriptStruct_AutomatedHTTPConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedHTTPConfig), 2542714838U) },
		{ FAutomatedCompressConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedCompressConfig_Statics::NewStructOps, TEXT("AutomatedCompressConfig"), &Z_Registration_Info_UScriptStruct_AutomatedCompressConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedCompressConfig), 1112503084U) },
		{ FAutomatedMysqlConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedMysqlConfig_Statics::NewStructOps, TEXT("AutomatedMysqlConfig"), &Z_Registration_Info_UScriptStruct_AutomatedMysqlConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedMysqlConfig), 3950718067U) },
		{ FAutomatedHTTPServerConfig::StaticStruct, Z_Construct_UScriptStruct_FAutomatedHTTPServerConfig_Statics::NewStructOps, TEXT("AutomatedHTTPServerConfig"), &Z_Registration_Info_UScriptStruct_AutomatedHTTPServerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedHTTPServerConfig), 2548653368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_Common_SimpleAutomatedToolCommon_Public_SimpleAutomatedToolType_h_4155193401(TEXT("/Script/SimpleAutomatedToolCommon"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_Common_SimpleAutomatedToolCommon_Public_SimpleAutomatedToolType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_Common_SimpleAutomatedToolCommon_Public_SimpleAutomatedToolType_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_Common_SimpleAutomatedToolCommon_Public_SimpleAutomatedToolType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_Common_SimpleAutomatedToolCommon_Public_SimpleAutomatedToolType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
