// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleProtobuf/Source/SimpleProtobufEditor/Public/UObject/SimpleProtobufCompileToProtoInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufCompileToProtoInfo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufBase();
SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufCompileToProtoInfo();
SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleProtobufEditor();
// End Cross Module References

// Begin Class USimpleProtobufCompileToProtoInfo
void USimpleProtobufCompileToProtoInfo::StaticRegisterNativesUSimpleProtobufCompileToProtoInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleProtobufCompileToProtoInfo);
UClass* Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_NoRegister()
{
	return USimpleProtobufCompileToProtoInfo::StaticClass();
}
struct Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UObject/SimpleProtobufCompileToProtoInfo.h" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufCompileToProtoInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateProtoPaths_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufCompileToProtoInfo.h" },
		{ "ToolTip", "Output C++ file location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateProtoFilename_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufCompileToProtoInfo.h" },
		{ "ToolTip", "Output C++ file location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaTag_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufCompileToProtoInfo.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerateProtoPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GenerateProtoPaths;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GenerateProtoFilename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetaTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleProtobufCompileToProtoInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::NewProp_GenerateProtoPaths_Inner = { "GenerateProtoPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::NewProp_GenerateProtoPaths = { "GenerateProtoPaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufCompileToProtoInfo, GenerateProtoPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateProtoPaths_MetaData), NewProp_GenerateProtoPaths_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::NewProp_GenerateProtoFilename = { "GenerateProtoFilename", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufCompileToProtoInfo, GenerateProtoFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateProtoFilename_MetaData), NewProp_GenerateProtoFilename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::NewProp_MetaTag = { "MetaTag", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufCompileToProtoInfo, MetaTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaTag_MetaData), NewProp_MetaTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::NewProp_GenerateProtoPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::NewProp_GenerateProtoPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::NewProp_GenerateProtoFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::NewProp_MetaTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USimpleProtobufBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobufEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::ClassParams = {
	&USimpleProtobufCompileToProtoInfo::StaticClass,
	"SimpleProtobufCompileToProtoInfo",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleProtobufCompileToProtoInfo()
{
	if (!Z_Registration_Info_UClass_USimpleProtobufCompileToProtoInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleProtobufCompileToProtoInfo.OuterSingleton, Z_Construct_UClass_USimpleProtobufCompileToProtoInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleProtobufCompileToProtoInfo.OuterSingleton;
}
template<> SIMPLEPROTOBUFEDITOR_API UClass* StaticClass<USimpleProtobufCompileToProtoInfo>()
{
	return USimpleProtobufCompileToProtoInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleProtobufCompileToProtoInfo);
USimpleProtobufCompileToProtoInfo::~USimpleProtobufCompileToProtoInfo() {}
// End Class USimpleProtobufCompileToProtoInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileToProtoInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleProtobufCompileToProtoInfo, USimpleProtobufCompileToProtoInfo::StaticClass, TEXT("USimpleProtobufCompileToProtoInfo"), &Z_Registration_Info_UClass_USimpleProtobufCompileToProtoInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleProtobufCompileToProtoInfo), 774639587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileToProtoInfo_h_3581253242(TEXT("/Script/SimpleProtobufEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileToProtoInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileToProtoInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
