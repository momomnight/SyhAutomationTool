// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleProtobuf/Source/SimpleProtobufEditor/Public/UObject/SimpleProtobufCompileInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufCompileInfo() {}

// Begin Cross Module References
SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufCompileInfo();
SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufCompileInfo_NoRegister();
SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufObject();
UPackage* Z_Construct_UPackage__Script_SimpleProtobufEditor();
// End Cross Module References

// Begin Class USimpleProtobufCompileInfo
void USimpleProtobufCompileInfo::StaticRegisterNativesUSimpleProtobufCompileInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleProtobufCompileInfo);
UClass* Z_Construct_UClass_USimpleProtobufCompileInfo_NoRegister()
{
	return USimpleProtobufCompileInfo::StaticClass();
}
struct Z_Construct_UClass_USimpleProtobufCompileInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UObject/SimpleProtobufCompileInfo.h" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufCompileInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleProtobufCompileInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USimpleProtobufObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobufEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::ClassParams = {
	&USimpleProtobufCompileInfo::StaticClass,
	"SimpleProtobufCompileInfo",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleProtobufCompileInfo()
{
	if (!Z_Registration_Info_UClass_USimpleProtobufCompileInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleProtobufCompileInfo.OuterSingleton, Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleProtobufCompileInfo.OuterSingleton;
}
template<> SIMPLEPROTOBUFEDITOR_API UClass* StaticClass<USimpleProtobufCompileInfo>()
{
	return USimpleProtobufCompileInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleProtobufCompileInfo);
USimpleProtobufCompileInfo::~USimpleProtobufCompileInfo() {}
// End Class USimpleProtobufCompileInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleProtobufCompileInfo, USimpleProtobufCompileInfo::StaticClass, TEXT("USimpleProtobufCompileInfo"), &Z_Registration_Info_UClass_USimpleProtobufCompileInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleProtobufCompileInfo), 985431494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileInfo_h_2000415531(TEXT("/Script/SimpleProtobufEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
