// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectedObjectManager/Public/SelectedObjectManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectedObjectManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SELECTEDOBJECTMANAGER_API UClass* Z_Construct_UClass_USelectedObjectManager();
	SELECTEDOBJECTMANAGER_API UClass* Z_Construct_UClass_USelectedObjectManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SelectedObjectManager();
// End Cross Module References
	void USelectedObjectManager::StaticRegisterNativesUSelectedObjectManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectedObjectManager);
	UClass* Z_Construct_UClass_USelectedObjectManager_NoRegister()
	{
		return USelectedObjectManager::StaticClass();
	}
	struct Z_Construct_UClass_USelectedObjectManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectedObjectManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SelectedObjectManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectedObjectManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectedObjectManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SelectedObjectManager.h" },
		{ "ModuleRelativePath", "Public/SelectedObjectManager.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USelectedObjectManager_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectedObjectManager_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectedObjectManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USelectedObjectManager_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectedObjectManager, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectedObjectManager_Statics::NewProp_SelectedObjects_MetaData), Z_Construct_UClass_USelectedObjectManager_Statics::NewProp_SelectedObjects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelectedObjectManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectedObjectManager_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectedObjectManager_Statics::NewProp_SelectedObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectedObjectManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectedObjectManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectedObjectManager_Statics::ClassParams = {
		&USelectedObjectManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USelectedObjectManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USelectedObjectManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectedObjectManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USelectedObjectManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectedObjectManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USelectedObjectManager()
	{
		if (!Z_Registration_Info_UClass_USelectedObjectManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectedObjectManager.OuterSingleton, Z_Construct_UClass_USelectedObjectManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelectedObjectManager.OuterSingleton;
	}
	template<> SELECTEDOBJECTMANAGER_API UClass* StaticClass<USelectedObjectManager>()
	{
		return USelectedObjectManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectedObjectManager);
	USelectedObjectManager::~USelectedObjectManager() {}
	struct Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_SelectedObjectManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_SelectedObjectManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USelectedObjectManager, USelectedObjectManager::StaticClass, TEXT("USelectedObjectManager"), &Z_Registration_Info_UClass_USelectedObjectManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectedObjectManager), 4273441889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_SelectedObjectManager_h_2476585381(TEXT("/Script/SelectedObjectManager"),
		Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_SelectedObjectManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_SelectedObjectManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
