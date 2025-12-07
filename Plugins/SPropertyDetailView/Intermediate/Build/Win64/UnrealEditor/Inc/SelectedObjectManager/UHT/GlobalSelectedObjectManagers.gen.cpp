// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectedObjectManager/Public/GlobalSelectedObjectManagers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalSelectedObjectManagers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SELECTEDOBJECTMANAGER_API UClass* Z_Construct_UClass_UGlobalSelectedObjectManagers();
	SELECTEDOBJECTMANAGER_API UClass* Z_Construct_UClass_UGlobalSelectedObjectManagers_NoRegister();
	SELECTEDOBJECTMANAGER_API UClass* Z_Construct_UClass_USelectedObjectManager_NoRegister();
	SELECTEDOBJECTMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FRegisteredObjectManager();
	UPackage* Z_Construct_UPackage__Script_SelectedObjectManager();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RegisteredObjectManager;
class UScriptStruct* FRegisteredObjectManager::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegisteredObjectManager.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RegisteredObjectManager.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegisteredObjectManager, (UObject*)Z_Construct_UPackage__Script_SelectedObjectManager(), TEXT("RegisteredObjectManager"));
	}
	return Z_Registration_Info_UScriptStruct_RegisteredObjectManager.OuterSingleton;
}
template<> SELECTEDOBJECTMANAGER_API UScriptStruct* StaticStruct<FRegisteredObjectManager>()
{
	return FRegisteredObjectManager::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FGlobalSelectedObjectManagers\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdManager, \xca\xb9\xef\xbf\xbd\xef\xbf\xbd""FRegisteredObjectManager\xef\xbf\xbd\xe1\xb9\xb9\xd3\xb3\xef\xbf\xbd\xef\xbf\xbdOwner\xef\xbf\xbd\xef\xbf\xbdManager\n//\xef\xbf\xbd\xe7\xa3\xba""Editor\xef\xbf\xbd\xef\xbf\xbdManger\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GlobalSelectedObjectManagers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGlobalSelectedObjectManagers\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdManager, \xca\xb9\xef\xbf\xbd\xef\xbf\xbd""FRegisteredObjectManager\xef\xbf\xbd\xe1\xb9\xb9\xd3\xb3\xef\xbf\xbd\xef\xbf\xbdOwner\xef\xbf\xbd\xef\xbf\xbdManager\n\xef\xbf\xbd\xe7\xa3\xba""Editor\xef\xbf\xbd\xef\xbf\xbdManger\xef\xbf\xbd\xef\xbf\xbd\xd3\xb3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegisteredObjectManager>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/GlobalSelectedObjectManagers.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegisteredObjectManager, Owner), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::NewProp_Owner_MetaData), Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::NewProp_Owner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::NewProp_Manager_MetaData[] = {
		{ "ModuleRelativePath", "Public/GlobalSelectedObjectManagers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegisteredObjectManager, Manager), Z_Construct_UClass_USelectedObjectManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::NewProp_Manager_MetaData), Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::NewProp_Manager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::NewProp_Manager,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SelectedObjectManager,
		nullptr,
		&NewStructOps,
		"RegisteredObjectManager",
		Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::PropPointers),
		sizeof(FRegisteredObjectManager),
		alignof(FRegisteredObjectManager),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRegisteredObjectManager()
	{
		if (!Z_Registration_Info_UScriptStruct_RegisteredObjectManager.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RegisteredObjectManager.InnerSingleton, Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RegisteredObjectManager.InnerSingleton;
	}
	void UGlobalSelectedObjectManagers::StaticRegisterNativesUGlobalSelectedObjectManagers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGlobalSelectedObjectManagers);
	UClass* Z_Construct_UClass_UGlobalSelectedObjectManagers_NoRegister()
	{
		return UGlobalSelectedObjectManagers::StaticClass();
	}
	struct Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Managers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Managers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Managers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SelectedObjectManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GlobalSelectedObjectManagers.h" },
		{ "ModuleRelativePath", "Public/GlobalSelectedObjectManagers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::NewProp_Managers_Inner = { "Managers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRegisteredObjectManager, METADATA_PARAMS(0, nullptr) }; // 167723065
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::NewProp_Managers_MetaData[] = {
		{ "ModuleRelativePath", "Public/GlobalSelectedObjectManagers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::NewProp_Managers = { "Managers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGlobalSelectedObjectManagers, Managers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::NewProp_Managers_MetaData), Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::NewProp_Managers_MetaData) }; // 167723065
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::NewProp_Managers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::NewProp_Managers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalSelectedObjectManagers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::ClassParams = {
		&UGlobalSelectedObjectManagers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::Class_MetaDataParams), Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGlobalSelectedObjectManagers()
	{
		if (!Z_Registration_Info_UClass_UGlobalSelectedObjectManagers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGlobalSelectedObjectManagers.OuterSingleton, Z_Construct_UClass_UGlobalSelectedObjectManagers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGlobalSelectedObjectManagers.OuterSingleton;
	}
	template<> SELECTEDOBJECTMANAGER_API UClass* StaticClass<UGlobalSelectedObjectManagers>()
	{
		return UGlobalSelectedObjectManagers::StaticClass();
	}
	UGlobalSelectedObjectManagers::UGlobalSelectedObjectManagers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalSelectedObjectManagers);
	UGlobalSelectedObjectManagers::~UGlobalSelectedObjectManagers() {}
	struct Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_GlobalSelectedObjectManagers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_GlobalSelectedObjectManagers_h_Statics::ScriptStructInfo[] = {
		{ FRegisteredObjectManager::StaticStruct, Z_Construct_UScriptStruct_FRegisteredObjectManager_Statics::NewStructOps, TEXT("RegisteredObjectManager"), &Z_Registration_Info_UScriptStruct_RegisteredObjectManager, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegisteredObjectManager), 167723065U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_GlobalSelectedObjectManagers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGlobalSelectedObjectManagers, UGlobalSelectedObjectManagers::StaticClass, TEXT("UGlobalSelectedObjectManagers"), &Z_Registration_Info_UClass_UGlobalSelectedObjectManagers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGlobalSelectedObjectManagers), 2618574278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_GlobalSelectedObjectManagers_h_685538681(TEXT("/Script/SelectedObjectManager"),
		Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_GlobalSelectedObjectManagers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_GlobalSelectedObjectManagers_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_GlobalSelectedObjectManagers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProgram_UE_Project_MyProject_Plugins_SPropertyDetailView_Source_SelectedObjectManager_Public_GlobalSelectedObjectManagers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
