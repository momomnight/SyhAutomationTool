// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Base/EditorSettings/BaseEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLEAUTOMATEDTOOLVIEW_API UClass* Z_Construct_UClass_UProgramEditorSettings();
	SIMPLEAUTOMATEDTOOLVIEW_API UClass* Z_Construct_UClass_UProgramEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleAutomatedToolView();
// End Cross Module References
	void UProgramEditorSettings::StaticRegisterNativesUProgramEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProgramEditorSettings);
	UClass* Z_Construct_UClass_UProgramEditorSettings_NoRegister()
	{
		return UProgramEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UProgramEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProgramEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolView,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProgramEditorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgramEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/Base/EditorSettings/BaseEditorSettings.h" },
		{ "ModuleRelativePath", "Public/Editor/Base/EditorSettings/BaseEditorSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProgramEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgramEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProgramEditorSettings_Statics::ClassParams = {
		&UProgramEditorSettings::StaticClass,
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
		0x000800A2u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProgramEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UProgramEditorSettings_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UProgramEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UProgramEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProgramEditorSettings.OuterSingleton, Z_Construct_UClass_UProgramEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProgramEditorSettings.OuterSingleton;
	}
	template<> SIMPLEAUTOMATEDTOOLVIEW_API UClass* StaticClass<UProgramEditorSettings>()
	{
		return UProgramEditorSettings::StaticClass();
	}
	UProgramEditorSettings::UProgramEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProgramEditorSettings);
	UProgramEditorSettings::~UProgramEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_Base_EditorSettings_BaseEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_Base_EditorSettings_BaseEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProgramEditorSettings, UProgramEditorSettings::StaticClass, TEXT("UProgramEditorSettings"), &Z_Registration_Info_UClass_UProgramEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProgramEditorSettings), 3913252296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_Base_EditorSettings_BaseEditorSettings_h_588810537(TEXT("/Script/SimpleAutomatedToolView"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_Base_EditorSettings_BaseEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_Base_EditorSettings_BaseEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
