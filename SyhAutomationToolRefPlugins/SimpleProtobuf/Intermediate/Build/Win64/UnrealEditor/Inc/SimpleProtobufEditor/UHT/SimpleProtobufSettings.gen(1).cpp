// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleProtobuf/Source/SimpleProtobufEditor/Public/UObject/SimpleProtobufSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufSettings() {}

// Begin Cross Module References
SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufBase();
SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufSettings();
SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleProtobufEditor();
// End Cross Module References

// Begin Class USimpleProtobufSettings
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UObject/SimpleProtobufSettings.h" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProtoNames_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufSettings.h" },
		{ "ToolTip", "Output C++ file location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSelected_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufSettings.h" },
		{ "ToolTip", "Output C++ file location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewConfigName_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufSettings.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProtoNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProtoNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentSelected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewConfigName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleProtobufSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_ProtoNames_Inner = { "ProtoNames", nullptr, (EPropertyFlags)0x0000000000024000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_ProtoNames = { "ProtoNames", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufSettings, ProtoNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProtoNames_MetaData), NewProp_ProtoNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_CurrentSelected = { "CurrentSelected", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufSettings, CurrentSelected), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSelected_MetaData), NewProp_CurrentSelected_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_NewConfigName = { "NewConfigName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufSettings, NewConfigName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewConfigName_MetaData), NewProp_NewConfigName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleProtobufSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_ProtoNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_ProtoNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_CurrentSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufSettings_Statics::NewProp_NewConfigName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleProtobufSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USimpleProtobufBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobufEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufSettings_Statics::DependentSingletons) < 16);
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
// End Class USimpleProtobufSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleProtobufSettings, USimpleProtobufSettings::StaticClass, TEXT("USimpleProtobufSettings"), &Z_Registration_Info_UClass_USimpleProtobufSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleProtobufSettings), 3306644342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufSettings_h_2610973248(TEXT("/Script/SimpleProtobufEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
