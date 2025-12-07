// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Source/SimpleMySQL/Public/Blueprint/SimpleMysqlObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleMysqlObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLEMYSQL_API UClass* Z_Construct_UClass_USimpleMysqlObject();
	SIMPLEMYSQL_API UClass* Z_Construct_UClass_USimpleMysqlObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleMySQL();
// End Cross Module References
	void USimpleMysqlObject::StaticRegisterNativesUSimpleMysqlObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleMysqlObject);
	UClass* Z_Construct_UClass_USimpleMysqlObject_NoRegister()
	{
		return USimpleMysqlObject::StaticClass();
	}
	struct Z_Construct_UClass_USimpleMysqlObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleMysqlObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleMySQL,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleMysqlObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleMysqlObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Blueprint/SimpleMysqlObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/SimpleMysqlObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleMysqlObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleMysqlObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleMysqlObject_Statics::ClassParams = {
		&USimpleMysqlObject::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleMysqlObject_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleMysqlObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleMysqlObject()
	{
		if (!Z_Registration_Info_UClass_USimpleMysqlObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleMysqlObject.OuterSingleton, Z_Construct_UClass_USimpleMysqlObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleMysqlObject.OuterSingleton;
	}
	template<> SIMPLEMYSQL_API UClass* StaticClass<USimpleMysqlObject>()
	{
		return USimpleMysqlObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleMysqlObject);
	USimpleMysqlObject::~USimpleMysqlObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleMySQL_Source_SimpleMySQL_Public_Blueprint_SimpleMysqlObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleMySQL_Source_SimpleMySQL_Public_Blueprint_SimpleMysqlObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleMysqlObject, USimpleMysqlObject::StaticClass, TEXT("USimpleMysqlObject"), &Z_Registration_Info_UClass_USimpleMysqlObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleMysqlObject), 2999514634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleMySQL_Source_SimpleMySQL_Public_Blueprint_SimpleMysqlObject_h_1691223117(TEXT("/Script/SimpleMySQL"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleMySQL_Source_SimpleMySQL_Public_Blueprint_SimpleMysqlObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleMySQL_Source_SimpleMySQL_Public_Blueprint_SimpleMysqlObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
