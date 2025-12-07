// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/MenuContext/AutomatedToolEditorContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomatedToolEditorContext() {}
// Cross Module References
	SIMPLEAUTOMATEDTOOLVIEW_API UClass* Z_Construct_UClass_UAutomatedToolEditorContext();
	SIMPLEAUTOMATEDTOOLVIEW_API UClass* Z_Construct_UClass_UAutomatedToolEditorContext_NoRegister();
	SIMPLEAUTOMATEDTOOLVIEW_API UClass* Z_Construct_UClass_UAutomatedToolEditorContextBase();
	UPackage* Z_Construct_UPackage__Script_SimpleAutomatedToolView();
// End Cross Module References
	void UAutomatedToolEditorContext::StaticRegisterNativesUAutomatedToolEditorContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomatedToolEditorContext);
	UClass* Z_Construct_UClass_UAutomatedToolEditorContext_NoRegister()
	{
		return UAutomatedToolEditorContext::StaticClass();
	}
	struct Z_Construct_UClass_UAutomatedToolEditorContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomatedToolEditorContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAutomatedToolEditorContextBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolView,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedToolEditorContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedToolEditorContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/MenuContext/AutomatedToolEditorContext.h" },
		{ "ModuleRelativePath", "Public/Editor/MenuContext/AutomatedToolEditorContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomatedToolEditorContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomatedToolEditorContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomatedToolEditorContext_Statics::ClassParams = {
		&UAutomatedToolEditorContext::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedToolEditorContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomatedToolEditorContext_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAutomatedToolEditorContext()
	{
		if (!Z_Registration_Info_UClass_UAutomatedToolEditorContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomatedToolEditorContext.OuterSingleton, Z_Construct_UClass_UAutomatedToolEditorContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomatedToolEditorContext.OuterSingleton;
	}
	template<> SIMPLEAUTOMATEDTOOLVIEW_API UClass* StaticClass<UAutomatedToolEditorContext>()
	{
		return UAutomatedToolEditorContext::StaticClass();
	}
	UAutomatedToolEditorContext::UAutomatedToolEditorContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomatedToolEditorContext);
	UAutomatedToolEditorContext::~UAutomatedToolEditorContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolEditorContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolEditorContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutomatedToolEditorContext, UAutomatedToolEditorContext::StaticClass, TEXT("UAutomatedToolEditorContext"), &Z_Registration_Info_UClass_UAutomatedToolEditorContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomatedToolEditorContext), 2908787996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolEditorContext_h_3405339740(TEXT("/Script/SimpleAutomatedToolView"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolEditorContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolEditorContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
