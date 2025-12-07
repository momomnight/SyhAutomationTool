// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAutomatedToolViewEditorID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAutomatedToolViewEditorID() {}
// Cross Module References
	SIMPLEAUTOMATEDTOOLVIEW_API UEnum* Z_Construct_UEnum_SimpleAutomatedToolView_ETabType();
	UPackage* Z_Construct_UPackage__Script_SimpleAutomatedToolView();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETabType;
	static UEnum* ETabType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETabType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETabType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAutomatedToolView_ETabType, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolView(), TEXT("ETabType"));
		}
		return Z_Registration_Info_UEnum_ETabType.OuterSingleton;
	}
	template<> SIMPLEAUTOMATEDTOOLVIEW_API UEnum* StaticEnum<ETabType>()
	{
		return ETabType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleAutomatedToolView_ETabType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleAutomatedToolView_ETabType_Statics::Enumerators[] = {
		{ "ETabType::DefaultTabName", (int64)ETabType::DefaultTabName },
		{ "ETabType::FileDirectoryTabName", (int64)ETabType::FileDirectoryTabName },
		{ "ETabType::GraphTabName", (int64)ETabType::GraphTabName },
		{ "ETabType::NodeListTabName", (int64)ETabType::NodeListTabName },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleAutomatedToolView_ETabType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DefaultTabName.DisplayName", "Automated Editor DefaultTabName" },
		{ "DefaultTabName.Name", "ETabType::DefaultTabName" },
		{ "FileDirectoryTabName.DisplayName", "Automated Editor FileDirectoryTabName" },
		{ "FileDirectoryTabName.Name", "ETabType::FileDirectoryTabName" },
		{ "GraphTabName.DisplayName", "Automated Editor GraphTabName" },
		{ "GraphTabName.Name", "ETabType::GraphTabName" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolViewEditorID.h" },
		{ "NodeListTabName.DisplayName", "Automated Editor NodeListTabName" },
		{ "NodeListTabName.Name", "ETabType::NodeListTabName" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAutomatedToolView_ETabType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleAutomatedToolView,
		nullptr,
		"ETabType",
		"ETabType",
		Z_Construct_UEnum_SimpleAutomatedToolView_ETabType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAutomatedToolView_ETabType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAutomatedToolView_ETabType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAutomatedToolView_ETabType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleAutomatedToolView_ETabType()
	{
		if (!Z_Registration_Info_UEnum_ETabType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETabType.InnerSingleton, Z_Construct_UEnum_SimpleAutomatedToolView_ETabType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETabType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_SimpleAutomatedToolViewEditorID_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_SimpleAutomatedToolViewEditorID_h_Statics::EnumInfo[] = {
		{ ETabType_StaticEnum, TEXT("ETabType"), &Z_Registration_Info_UEnum_ETabType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4272201804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_SimpleAutomatedToolViewEditorID_h_2140435187(TEXT("/Script/SimpleAutomatedToolView"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_SimpleAutomatedToolViewEditorID_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_SimpleAutomatedToolViewEditorID_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
