// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleUnrealPakView/Source/SimpleUnrealPakView/Public/Core/ViewHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AHUD();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_AViewHUD();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_AViewHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleUnrealPakView();
// End Cross Module References

// Begin Class AViewHUD
void AViewHUD::StaticRegisterNativesAViewHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AViewHUD);
UClass* Z_Construct_UClass_AViewHUD_NoRegister()
{
	return AViewHUD::StaticClass();
}
struct Z_Construct_UClass_AViewHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Core/ViewHUD.h" },
		{ "ModuleRelativePath", "Public/Core/ViewHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AViewHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AViewHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUnrealPakView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AViewHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AViewHUD_Statics::ClassParams = {
	&AViewHUD::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AViewHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AViewHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AViewHUD()
{
	if (!Z_Registration_Info_UClass_AViewHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AViewHUD.OuterSingleton, Z_Construct_UClass_AViewHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AViewHUD.OuterSingleton;
}
template<> SIMPLEUNREALPAKVIEW_API UClass* StaticClass<AViewHUD>()
{
	return AViewHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AViewHUD);
AViewHUD::~AViewHUD() {}
// End Class AViewHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Core_ViewHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AViewHUD, AViewHUD::StaticClass, TEXT("AViewHUD"), &Z_Registration_Info_UClass_AViewHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AViewHUD), 413535406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Core_ViewHUD_h_2506530008(TEXT("/Script/SimpleUnrealPakView"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Core_ViewHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Core_ViewHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
