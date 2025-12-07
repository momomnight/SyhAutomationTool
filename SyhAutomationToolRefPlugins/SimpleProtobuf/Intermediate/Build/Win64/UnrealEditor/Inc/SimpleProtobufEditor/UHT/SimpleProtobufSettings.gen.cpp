// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObject/SimpleProtobufSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufSettings() {}
// Cross Module References
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufBase();
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufSettings();
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleProtobufEditor();
// End Cross Module References
	void USimpleProtobufSettings::StaticRegisterNativesUSimpleProtobufSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleProtobufSettings);
	UClass* Z_Construct_UClass_USimpleProtobufSettings_NoRegister()
	{
		return USimpleProtobufSettings::StaticClass();
	}
	struct Z_Construct_UClass_USimpleProtobufSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProtoNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtoNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProtoNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSelected_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewConfigName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewConfigName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleProtobufSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleProtobufBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobufEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UObject/SimpleProtobufSettings.h" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_ProtoNames_Inner = { "ProtoNames", nullptr, (EPropertyFlags)0x0000000000024000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_ProtoNames_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufSettings.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_ProtoNames = { "ProtoNames", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufSettings, ProtoNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_ProtoNames_MetaData), Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_ProtoNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_CurrentSelected_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufSettings.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_CurrentSelected = { "CurrentSelected", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufSettings, CurrentSelected), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_CurrentSelected_MetaData), Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_CurrentSelected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_NewConfigName_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufSettings.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_NewConfigName = { "NewConfigName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufSettings, NewConfigName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_NewConfigName_MetaData), Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_NewConfigName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleProtobufSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_ProtoNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_ProtoNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_CurrentSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_NewConfigName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleProtobufSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleProtobufSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleProtobufSettings_Statics::ClassParams = {
		&USimpleProtobufSettings::StaticClass,
		"SimpleProtobufSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleProtobufSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleProtobufSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleProtobufSettings()
	{
		if (!Z_Registration_Info_UClass_USimpleProtobufSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleProtobufSettings.OuterSingleton, Z_Construct_UClass_USimpleProtobufSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleProtobufSettings.OuterSingleton;
	}
	template<> SIMPLEPROTOBUFEDITOR_API UClass* StaticClass<USimpleProtobufSettings>()
	{
		return USimpleProtobufSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleProtobufSettings);
	USimpleProtobufSettings::~USimpleProtobufSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleProtobufSettings, USimpleProtobufSettings::StaticClass, TEXT("USimpleProtobufSettings"), &Z_Registration_Info_UClass_USimpleProtobufSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleProtobufSettings), 3326831511U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufSettings_h_3969050559(TEXT("/Script/SimpleProtobufEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
