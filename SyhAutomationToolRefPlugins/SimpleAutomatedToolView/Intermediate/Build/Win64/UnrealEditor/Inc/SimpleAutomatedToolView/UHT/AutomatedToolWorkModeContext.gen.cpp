// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/MenuContext/AutomatedToolWorkModeContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomatedToolWorkModeContext() {}
// Cross Module References
	SIMPLEAUTOMATEDTOOLVIEW_API UClass* Z_Construct_UClass_UAutomatedToolEditorContextBase();
	SIMPLEAUTOMATEDTOOLVIEW_API UClass* Z_Construct_UClass_UAutomatedToolWorkModeContext();
	SIMPLEAUTOMATEDTOOLVIEW_API UClass* Z_Construct_UClass_UAutomatedToolWorkModeContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleAutomatedToolView();
// End Cross Module References
	void UAutomatedToolWorkModeContext::StaticRegisterNativesUAutomatedToolWorkModeContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomatedToolWorkModeContext);
	UClass* Z_Construct_UClass_UAutomatedToolWorkModeContext_NoRegister()
	{
		return UAutomatedToolWorkModeContext::StaticClass();
	}
	struct Z_Construct_UClass_UAutomatedToolWorkModeContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomatedToolWorkModeContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAutomatedToolEditorContextBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolView,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedToolWorkModeContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedToolWorkModeContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/MenuContext/AutomatedToolWorkModeContext.h" },
		{ "ModuleRelativePath", "Public/Editor/MenuContext/AutomatedToolWorkModeContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomatedToolWorkModeContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomatedToolWorkModeContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomatedToolWorkModeContext_Statics::ClassParams = {
		&UAutomatedToolWorkModeContext::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedToolWorkModeContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomatedToolWorkModeContext_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAutomatedToolWorkModeContext()
	{
		if (!Z_Registration_Info_UClass_UAutomatedToolWorkModeContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomatedToolWorkModeContext.OuterSingleton, Z_Construct_UClass_UAutomatedToolWorkModeContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomatedToolWorkModeContext.OuterSingleton;
	}
	template<> SIMPLEAUTOMATEDTOOLVIEW_API UClass* StaticClass<UAutomatedToolWorkModeContext>()
	{
		return UAutomatedToolWorkModeContext::StaticClass();
	}
	UAutomatedToolWorkModeContext::UAutomatedToolWorkModeContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomatedToolWorkModeContext);
	UAutomatedToolWorkModeContext::~UAutomatedToolWorkModeContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolWorkModeContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolWorkModeContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutomatedToolWorkModeContext, UAutomatedToolWorkModeContext::StaticClass, TEXT("UAutomatedToolWorkModeContext"), &Z_Registration_Info_UClass_UAutomatedToolWorkModeContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomatedToolWorkModeContext), 2263136942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolWorkModeContext_h_730658782(TEXT("/Script/SimpleAutomatedToolView"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolWorkModeContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolWorkModeContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
