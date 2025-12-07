// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/MenuContext/AutomatedToolWorkFlowContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomatedToolWorkFlowContext() {}
// Cross Module References
	SIMPLEAUTOMATEDTOOLVIEW_API UClass* Z_Construct_UClass_UAutomatedToolEditorContextBase();
	SIMPLEAUTOMATEDTOOLVIEW_API UClass* Z_Construct_UClass_UAutomatedToolWorkFlowContext();
	SIMPLEAUTOMATEDTOOLVIEW_API UClass* Z_Construct_UClass_UAutomatedToolWorkFlowContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleAutomatedToolView();
// End Cross Module References
	void UAutomatedToolWorkFlowContext::StaticRegisterNativesUAutomatedToolWorkFlowContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomatedToolWorkFlowContext);
	UClass* Z_Construct_UClass_UAutomatedToolWorkFlowContext_NoRegister()
	{
		return UAutomatedToolWorkFlowContext::StaticClass();
	}
	struct Z_Construct_UClass_UAutomatedToolWorkFlowContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomatedToolWorkFlowContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAutomatedToolEditorContextBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleAutomatedToolView,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedToolWorkFlowContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedToolWorkFlowContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/MenuContext/AutomatedToolWorkFlowContext.h" },
		{ "ModuleRelativePath", "Public/Editor/MenuContext/AutomatedToolWorkFlowContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomatedToolWorkFlowContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomatedToolWorkFlowContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomatedToolWorkFlowContext_Statics::ClassParams = {
		&UAutomatedToolWorkFlowContext::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedToolWorkFlowContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomatedToolWorkFlowContext_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAutomatedToolWorkFlowContext()
	{
		if (!Z_Registration_Info_UClass_UAutomatedToolWorkFlowContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomatedToolWorkFlowContext.OuterSingleton, Z_Construct_UClass_UAutomatedToolWorkFlowContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomatedToolWorkFlowContext.OuterSingleton;
	}
	template<> SIMPLEAUTOMATEDTOOLVIEW_API UClass* StaticClass<UAutomatedToolWorkFlowContext>()
	{
		return UAutomatedToolWorkFlowContext::StaticClass();
	}
	UAutomatedToolWorkFlowContext::UAutomatedToolWorkFlowContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomatedToolWorkFlowContext);
	UAutomatedToolWorkFlowContext::~UAutomatedToolWorkFlowContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolWorkFlowContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolWorkFlowContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutomatedToolWorkFlowContext, UAutomatedToolWorkFlowContext::StaticClass, TEXT("UAutomatedToolWorkFlowContext"), &Z_Registration_Info_UClass_UAutomatedToolWorkFlowContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomatedToolWorkFlowContext), 1416309436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolWorkFlowContext_h_2186517643(TEXT("/Script/SimpleAutomatedToolView"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolWorkFlowContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_Editor_MenuContext_AutomatedToolWorkFlowContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
