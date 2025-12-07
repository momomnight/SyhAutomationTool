// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleProtobuf/Source/SimpleProtobufEditor/Public/UObject/SimpleProtobufInstallInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufInstallInfo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufInstallInfo();
SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufInstallInfo_NoRegister();
SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufObject();
UPackage* Z_Construct_UPackage__Script_SimpleProtobufEditor();
// End Cross Module References

// Begin Class USimpleProtobufInstallInfo
void USimpleProtobufInstallInfo::StaticRegisterNativesUSimpleProtobufInstallInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleProtobufInstallInfo);
UClass* Z_Construct_UClass_USimpleProtobufInstallInfo_NoRegister()
{
	return USimpleProtobufInstallInfo::StaticClass();
}
struct Z_Construct_UClass_USimpleProtobufInstallInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UObject/SimpleProtobufInstallInfo.h" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufInstallInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoogleRZPath_MetaData[] = {
		{ "Category", "Protobuf|Install" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufInstallInfo.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoogleRZPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleProtobufInstallInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleProtobufInstallInfo_Statics::NewProp_GoogleRZPath = { "GoogleRZPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufInstallInfo, GoogleRZPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoogleRZPath_MetaData), NewProp_GoogleRZPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleProtobufInstallInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufInstallInfo_Statics::NewProp_GoogleRZPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufInstallInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleProtobufInstallInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USimpleProtobufObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobufEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufInstallInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleProtobufInstallInfo_Statics::ClassParams = {
	&USimpleProtobufInstallInfo::StaticClass,
	"SimpleProtobufInstall",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleProtobufInstallInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufInstallInfo_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufInstallInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleProtobufInstallInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleProtobufInstallInfo()
{
	if (!Z_Registration_Info_UClass_USimpleProtobufInstallInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleProtobufInstallInfo.OuterSingleton, Z_Construct_UClass_USimpleProtobufInstallInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleProtobufInstallInfo.OuterSingleton;
}
template<> SIMPLEPROTOBUFEDITOR_API UClass* StaticClass<USimpleProtobufInstallInfo>()
{
	return USimpleProtobufInstallInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleProtobufInstallInfo);
USimpleProtobufInstallInfo::~USimpleProtobufInstallInfo() {}
// End Class USimpleProtobufInstallInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufInstallInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleProtobufInstallInfo, USimpleProtobufInstallInfo::StaticClass, TEXT("USimpleProtobufInstallInfo"), &Z_Registration_Info_UClass_USimpleProtobufInstallInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleProtobufInstallInfo), 3301599223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufInstallInfo_h_116852821(TEXT("/Script/SimpleProtobufEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufInstallInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufInstallInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
