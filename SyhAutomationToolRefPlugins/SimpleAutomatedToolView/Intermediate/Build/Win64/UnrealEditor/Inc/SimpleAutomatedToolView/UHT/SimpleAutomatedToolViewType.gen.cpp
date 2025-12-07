// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAutomatedToolViewType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAutomatedToolViewType() {}
// Cross Module References
	SIMPLEAUTOMATEDTOOLVIEW_API UEnum* Z_Construct_UEnum_SimpleAutomatedToolView_ETabType();
	SIMPLEAUTOMATEDTOOLVIEW_API UScriptStruct* Z_Construct_UScriptStruct_FPageButtonInfo();
	UPackage* Z_Construct_UPackage__Script_SimpleAutomatedToolView();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PageButtonInfo;
class UScriptStruct* FPageButtonInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PageButtonInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PageButtonInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPageButtonInfo, (UObject*)Z_Construct_UPackage__Script_SimpleAutomatedToolView(), TEXT("PageButtonInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PageButtonInfo.OuterSingleton;
}
template<> SIMPLEAUTOMATEDTOOLVIEW_API UScriptStruct* StaticStruct<FPageButtonInfo>()
{
	return FPageButtonInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPageButtonInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LayoutName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Style;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LayoutTabType_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutTabType_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutTabType_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayoutTabType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPageButtonInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolViewType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPageButtonInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "//\xe9\xa1\xb5\xe9\x9d\xa2\xe5\x90\x8d\xef\xbc\x8c\xe4\xbc\x9a\xe6\x98\xbe\xe7\xa4\xba\xe5\x9c\xa8""Button\xe4\xb8\x8a\n" },
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolViewType.h" },
		{ "ToolTip", "\xe9\xa1\xb5\xe9\x9d\xa2\xe5\x90\x8d\xef\xbc\x8c\xe4\xbc\x9a\xe6\x98\xbe\xe7\xa4\xba\xe5\x9c\xa8""Button\xe4\xb8\x8a" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPageButtonInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolViewType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutName = { "LayoutName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPageButtonInfo, LayoutName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutName_MetaData), Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_Style_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolViewType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPageButtonInfo, Style), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_Style_MetaData), Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_Style_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutTabType_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutTabType_Inner = { "LayoutTabType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SimpleAutomatedToolView_ETabType, METADATA_PARAMS(0, nullptr) }; // 4272201804
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutTabType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleAutomatedToolViewType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutTabType = { "LayoutTabType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPageButtonInfo, LayoutTabType), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutTabType_MetaData), Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutTabType_MetaData) }; // 4272201804
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPageButtonInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_Style,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutTabType_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutTabType_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewProp_LayoutTabType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPageButtonInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolView,
		nullptr,
		&NewStructOps,
		"PageButtonInfo",
		Z_Construct_UScriptStruct_FPageButtonInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPageButtonInfo_Statics::PropPointers),
		sizeof(FPageButtonInfo),
		alignof(FPageButtonInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPageButtonInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPageButtonInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPageButtonInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPageButtonInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PageButtonInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PageButtonInfo.InnerSingleton, Z_Construct_UScriptStruct_FPageButtonInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PageButtonInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_SimpleAutomatedToolViewType_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_SimpleAutomatedToolViewType_h_Statics::ScriptStructInfo[] = {
		{ FPageButtonInfo::StaticStruct, Z_Construct_UScriptStruct_FPageButtonInfo_Statics::NewStructOps, TEXT("PageButtonInfo"), &Z_Registration_Info_UScriptStruct_PageButtonInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPageButtonInfo), 2539831072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_SimpleAutomatedToolViewType_h_53914987(TEXT("/Script/SimpleAutomatedToolView"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_SimpleAutomatedToolViewType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_SimpleAutomatedToolViewType_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
