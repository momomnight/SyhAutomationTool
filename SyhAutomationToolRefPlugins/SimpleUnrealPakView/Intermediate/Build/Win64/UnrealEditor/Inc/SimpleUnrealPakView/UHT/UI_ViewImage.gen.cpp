// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleUnrealPakView/Source/SimpleUnrealPakView/Public/UMG/UI_ViewImage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_ViewImage() {}

// Begin Cross Module References
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_UUI_ViewImage();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_UUI_ViewImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SimpleUnrealPakView();
// End Cross Module References

// Begin Class UUI_ViewImage
void UUI_ViewImage::StaticRegisterNativesUUI_ViewImage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_ViewImage);
UClass* Z_Construct_UClass_UUI_ViewImage_NoRegister()
{
	return UUI_ViewImage::StaticClass();
}
struct Z_Construct_UClass_UUI_ViewImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/UI_ViewImage.h" },
		{ "ModuleRelativePath", "Public/UMG/UI_ViewImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMG/UI_ViewImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_ViewImage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUI_ViewImage_Statics::NewProp_ImageBox = { "ImageBox", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUI_ViewImage, ImageBox), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageBox_MetaData), NewProp_ImageBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUI_ViewImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUI_ViewImage_Statics::NewProp_ImageBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ViewImage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUI_ViewImage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUnrealPakView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ViewImage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_ViewImage_Statics::ClassParams = {
	&UUI_ViewImage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUI_ViewImage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ViewImage_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ViewImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UUI_ViewImage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUI_ViewImage()
{
	if (!Z_Registration_Info_UClass_UUI_ViewImage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_ViewImage.OuterSingleton, Z_Construct_UClass_UUI_ViewImage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUI_ViewImage.OuterSingleton;
}
template<> SIMPLEUNREALPAKVIEW_API UClass* StaticClass<UUI_ViewImage>()
{
	return UUI_ViewImage::StaticClass();
}
UUI_ViewImage::UUI_ViewImage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_ViewImage);
UUI_ViewImage::~UUI_ViewImage() {}
// End Class UUI_ViewImage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewImage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUI_ViewImage, UUI_ViewImage::StaticClass, TEXT("UUI_ViewImage"), &Z_Registration_Info_UClass_UUI_ViewImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_ViewImage), 3376098963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewImage_h_3482364912(TEXT("/Script/SimpleUnrealPakView"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewImage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewImage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
