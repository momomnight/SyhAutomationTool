// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleUnrealPakView/Source/SimpleUnrealPakView/Public/Register/SimpleUEViewConfigurationInfor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleUEViewConfigurationInfor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_USimpleUEViewConfigurationInfor();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_USimpleUEViewConfigurationInfor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleUnrealPakView();
// End Cross Module References

// Begin Class USimpleUEViewConfigurationInfor
void USimpleUEViewConfigurationInfor::StaticRegisterNativesUSimpleUEViewConfigurationInfor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleUEViewConfigurationInfor);
UClass* Z_Construct_UClass_USimpleUEViewConfigurationInfor_NoRegister()
{
	return USimpleUEViewConfigurationInfor::StaticClass();
}
struct Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Register/SimpleUEViewConfigurationInfor.h" },
		{ "ModuleRelativePath", "Public/Register/SimpleUEViewConfigurationInfor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PakPath_MetaData[] = {
		{ "Category", "UEViewInfo" },
		{ "ModuleRelativePath", "Public/Register/SimpleUEViewConfigurationInfor.h" },
		{ "ToolTip", "xxx." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AES_MetaData[] = {
		{ "Category", "UEViewInfo" },
		{ "ModuleRelativePath", "Public/Register/SimpleUEViewConfigurationInfor.h" },
		{ "ToolTip", "xxx." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountPoint_MetaData[] = {
		{ "Category", "UEViewInfo" },
		{ "ModuleRelativePath", "Public/Register/SimpleUEViewConfigurationInfor.h" },
		{ "ToolTip", "xxx." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PakPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AES;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MountPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleUEViewConfigurationInfor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::NewProp_PakPath = { "PakPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleUEViewConfigurationInfor, PakPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PakPath_MetaData), NewProp_PakPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::NewProp_AES = { "AES", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleUEViewConfigurationInfor, AES), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AES_MetaData), NewProp_AES_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::NewProp_MountPoint = { "MountPoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleUEViewConfigurationInfor, MountPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountPoint_MetaData), NewProp_MountPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::NewProp_PakPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::NewProp_AES,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::NewProp_MountPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUnrealPakView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::ClassParams = {
	&USimpleUEViewConfigurationInfor::StaticClass,
	"UEViewConfigurationInfor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleUEViewConfigurationInfor()
{
	if (!Z_Registration_Info_UClass_USimpleUEViewConfigurationInfor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleUEViewConfigurationInfor.OuterSingleton, Z_Construct_UClass_USimpleUEViewConfigurationInfor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleUEViewConfigurationInfor.OuterSingleton;
}
template<> SIMPLEUNREALPAKVIEW_API UClass* StaticClass<USimpleUEViewConfigurationInfor>()
{
	return USimpleUEViewConfigurationInfor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleUEViewConfigurationInfor);
USimpleUEViewConfigurationInfor::~USimpleUEViewConfigurationInfor() {}
// End Class USimpleUEViewConfigurationInfor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Register_SimpleUEViewConfigurationInfor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleUEViewConfigurationInfor, USimpleUEViewConfigurationInfor::StaticClass, TEXT("USimpleUEViewConfigurationInfor"), &Z_Registration_Info_UClass_USimpleUEViewConfigurationInfor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleUEViewConfigurationInfor), 737459564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Register_SimpleUEViewConfigurationInfor_h_3461410929(TEXT("/Script/SimpleUnrealPakView"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Register_SimpleUEViewConfigurationInfor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Register_SimpleUEViewConfigurationInfor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
