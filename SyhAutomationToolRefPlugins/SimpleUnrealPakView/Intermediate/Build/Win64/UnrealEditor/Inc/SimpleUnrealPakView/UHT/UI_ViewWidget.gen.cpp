// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleUnrealPakView/Source/SimpleUnrealPakView/Public/UMG/UI_ViewWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_ViewWidget() {}

// Begin Cross Module References
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_UUI_ViewWidget();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_UUI_ViewWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SimpleUnrealPakView();
// End Cross Module References

// Begin Class UUI_ViewWidget
void UUI_ViewWidget::StaticRegisterNativesUUI_ViewWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUI_ViewWidget);
UClass* Z_Construct_UClass_UUI_ViewWidget_NoRegister()
{
	return UUI_ViewWidget::StaticClass();
}
struct Z_Construct_UClass_UUI_ViewWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/UI_ViewWidget.h" },
		{ "ModuleRelativePath", "Public/UMG/UI_ViewWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUI_ViewWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUI_ViewWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUnrealPakView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ViewWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUI_ViewWidget_Statics::ClassParams = {
	&UUI_ViewWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUI_ViewWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UUI_ViewWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUI_ViewWidget()
{
	if (!Z_Registration_Info_UClass_UUI_ViewWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUI_ViewWidget.OuterSingleton, Z_Construct_UClass_UUI_ViewWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUI_ViewWidget.OuterSingleton;
}
template<> SIMPLEUNREALPAKVIEW_API UClass* StaticClass<UUI_ViewWidget>()
{
	return UUI_ViewWidget::StaticClass();
}
UUI_ViewWidget::UUI_ViewWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUI_ViewWidget);
UUI_ViewWidget::~UUI_ViewWidget() {}
// End Class UUI_ViewWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUI_ViewWidget, UUI_ViewWidget::StaticClass, TEXT("UUI_ViewWidget"), &Z_Registration_Info_UClass_UUI_ViewWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUI_ViewWidget), 613133981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewWidget_h_2836722147(TEXT("/Script/SimpleUnrealPakView"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
