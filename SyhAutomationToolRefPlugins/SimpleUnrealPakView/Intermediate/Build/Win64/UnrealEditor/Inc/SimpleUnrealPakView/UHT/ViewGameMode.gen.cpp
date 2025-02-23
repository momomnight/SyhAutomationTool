// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleUnrealPakView/Source/SimpleUnrealPakView/Public/Core/ViewGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_AViewGameMode();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_AViewGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleUnrealPakView();
// End Cross Module References

// Begin Class AViewGameMode
void AViewGameMode::StaticRegisterNativesAViewGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AViewGameMode);
UClass* Z_Construct_UClass_AViewGameMode_NoRegister()
{
	return AViewGameMode::StaticClass();
}
struct Z_Construct_UClass_AViewGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/ViewGameMode.h" },
		{ "ModuleRelativePath", "Public/Core/ViewGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AViewGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AViewGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUnrealPakView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AViewGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AViewGameMode_Statics::ClassParams = {
	&AViewGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AViewGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AViewGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AViewGameMode()
{
	if (!Z_Registration_Info_UClass_AViewGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AViewGameMode.OuterSingleton, Z_Construct_UClass_AViewGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AViewGameMode.OuterSingleton;
}
template<> SIMPLEUNREALPAKVIEW_API UClass* StaticClass<AViewGameMode>()
{
	return AViewGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AViewGameMode);
AViewGameMode::~AViewGameMode() {}
// End Class AViewGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Core_ViewGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AViewGameMode, AViewGameMode::StaticClass, TEXT("AViewGameMode"), &Z_Registration_Info_UClass_AViewGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AViewGameMode), 2654673999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Core_ViewGameMode_h_327363963(TEXT("/Script/SimpleUnrealPakView"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Core_ViewGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Core_ViewGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
