// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleUnrealPakView/Source/SimpleUnrealPakView/Public/Core/ViewPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_AViewPlayerController();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_AViewPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleUnrealPakView();
// End Cross Module References

// Begin Class AViewPlayerController
void AViewPlayerController::StaticRegisterNativesAViewPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AViewPlayerController);
UClass* Z_Construct_UClass_AViewPlayerController_NoRegister()
{
	return AViewPlayerController::StaticClass();
}
struct Z_Construct_UClass_AViewPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Core/ViewPlayerController.h" },
		{ "ModuleRelativePath", "Public/Core/ViewPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AViewPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AViewPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUnrealPakView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AViewPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AViewPlayerController_Statics::ClassParams = {
	&AViewPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AViewPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AViewPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AViewPlayerController()
{
	if (!Z_Registration_Info_UClass_AViewPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AViewPlayerController.OuterSingleton, Z_Construct_UClass_AViewPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AViewPlayerController.OuterSingleton;
}
template<> SIMPLEUNREALPAKVIEW_API UClass* StaticClass<AViewPlayerController>()
{
	return AViewPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AViewPlayerController);
AViewPlayerController::~AViewPlayerController() {}
// End Class AViewPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Core_ViewPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AViewPlayerController, AViewPlayerController::StaticClass, TEXT("AViewPlayerController"), &Z_Registration_Info_UClass_AViewPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AViewPlayerController), 3491679556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Core_ViewPlayerController_h_4294502147(TEXT("/Script/SimpleUnrealPakView"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Core_ViewPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Core_ViewPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
