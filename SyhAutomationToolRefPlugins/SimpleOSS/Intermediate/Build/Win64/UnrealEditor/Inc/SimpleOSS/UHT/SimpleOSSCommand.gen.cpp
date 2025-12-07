// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleOSSCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleOSSCommand() {}
// Cross Module References
	SIMPLEOSS_API UEnum* Z_Construct_UEnum_SimpleOSS_ESimpleOSSCommand();
	UPackage* Z_Construct_UPackage__Script_SimpleOSS();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleOSSCommand;
	static UEnum* ESimpleOSSCommand_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleOSSCommand.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleOSSCommand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleOSS_ESimpleOSSCommand, (UObject*)Z_Construct_UPackage__Script_SimpleOSS(), TEXT("ESimpleOSSCommand"));
		}
		return Z_Registration_Info_UEnum_ESimpleOSSCommand.OuterSingleton;
	}
	template<> SIMPLEOSS_API UEnum* StaticEnum<ESimpleOSSCommand>()
	{
		return ESimpleOSSCommand_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleOSS_ESimpleOSSCommand_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleOSS_ESimpleOSSCommand_Statics::Enumerators[] = {
		{ "ESimpleOSSCommand::OSS_INIT", (int64)ESimpleOSSCommand::OSS_INIT },
		{ "ESimpleOSSCommand::OSS_BUCKET_EXIST", (int64)ESimpleOSSCommand::OSS_BUCKET_EXIST },
		{ "ESimpleOSSCommand::OSS_OBJECT_EXIST", (int64)ESimpleOSSCommand::OSS_OBJECT_EXIST },
		{ "ESimpleOSSCommand::OSS_COPY_OBJECT", (int64)ESimpleOSSCommand::OSS_COPY_OBJECT },
		{ "ESimpleOSSCommand::OSS_DELETE_OBJECT", (int64)ESimpleOSSCommand::OSS_DELETE_OBJECT },
		{ "ESimpleOSSCommand::OSS_GET_OBJECT", (int64)ESimpleOSSCommand::OSS_GET_OBJECT },
		{ "ESimpleOSSCommand::OSS_RESUMABLE_DOWNLOAD_OBJECT", (int64)ESimpleOSSCommand::OSS_RESUMABLE_DOWNLOAD_OBJECT },
		{ "ESimpleOSSCommand::OSS_PUT_OBJECT", (int64)ESimpleOSSCommand::OSS_PUT_OBJECT },
		{ "ESimpleOSSCommand::OSS_RESUMABLE_UPLOAD_OBJECT", (int64)ESimpleOSSCommand::OSS_RESUMABLE_UPLOAD_OBJECT },
		{ "ESimpleOSSCommand::OSS_UPLOAD_PART", (int64)ESimpleOSSCommand::OSS_UPLOAD_PART },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleOSS_ESimpleOSSCommand_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe5\x91\xbd\xe4\xbb\xa4\n" },
		{ "ModuleRelativePath", "Public/SimpleOSSCommand.h" },
		{ "OSS_BUCKET_EXIST.Name", "ESimpleOSSCommand::OSS_BUCKET_EXIST" },
		{ "OSS_COPY_OBJECT.Name", "ESimpleOSSCommand::OSS_COPY_OBJECT" },
		{ "OSS_DELETE_OBJECT.Name", "ESimpleOSSCommand::OSS_DELETE_OBJECT" },
		{ "OSS_GET_OBJECT.Name", "ESimpleOSSCommand::OSS_GET_OBJECT" },
		{ "OSS_INIT.Name", "ESimpleOSSCommand::OSS_INIT" },
		{ "OSS_OBJECT_EXIST.Name", "ESimpleOSSCommand::OSS_OBJECT_EXIST" },
		{ "OSS_PUT_OBJECT.Name", "ESimpleOSSCommand::OSS_PUT_OBJECT" },
		{ "OSS_RESUMABLE_DOWNLOAD_OBJECT.Name", "ESimpleOSSCommand::OSS_RESUMABLE_DOWNLOAD_OBJECT" },
		{ "OSS_RESUMABLE_UPLOAD_OBJECT.Name", "ESimpleOSSCommand::OSS_RESUMABLE_UPLOAD_OBJECT" },
		{ "OSS_UPLOAD_PART.Name", "ESimpleOSSCommand::OSS_UPLOAD_PART" },
		{ "ToolTip", "\xe5\x91\xbd\xe4\xbb\xa4" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleOSS_ESimpleOSSCommand_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleOSS,
		nullptr,
		"ESimpleOSSCommand",
		"ESimpleOSSCommand",
		Z_Construct_UEnum_SimpleOSS_ESimpleOSSCommand_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleOSS_ESimpleOSSCommand_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleOSS_ESimpleOSSCommand_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleOSS_ESimpleOSSCommand_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleOSS_ESimpleOSSCommand()
	{
		if (!Z_Registration_Info_UEnum_ESimpleOSSCommand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleOSSCommand.InnerSingleton, Z_Construct_UEnum_SimpleOSS_ESimpleOSSCommand_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleOSSCommand.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSCommand_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSCommand_h_Statics::EnumInfo[] = {
		{ ESimpleOSSCommand_StaticEnum, TEXT("ESimpleOSSCommand"), &Z_Registration_Info_UEnum_ESimpleOSSCommand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 750651137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSCommand_h_2737450650(TEXT("/Script/SimpleOSS"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSCommand_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSCommand_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
