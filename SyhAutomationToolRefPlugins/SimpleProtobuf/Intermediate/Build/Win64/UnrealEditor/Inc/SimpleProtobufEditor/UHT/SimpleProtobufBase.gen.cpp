// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObject/SimpleProtobufBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufBase();
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleProtobufEditor();
// End Cross Module References
	void USimpleProtobufBase::StaticRegisterNativesUSimpleProtobufBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleProtobufBase);
	UClass* Z_Construct_UClass_USimpleProtobufBase_NoRegister()
	{
		return USimpleProtobufBase::StaticClass();
	}
	struct Z_Construct_UClass_USimpleProtobufBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleProtobufBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobufEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UObject/SimpleProtobufBase.h" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleProtobufBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleProtobufBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleProtobufBase_Statics::ClassParams = {
		&USimpleProtobufBase::StaticClass,
		"SimpleProtobufBase",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleProtobufBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleProtobufBase()
	{
		if (!Z_Registration_Info_UClass_USimpleProtobufBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleProtobufBase.OuterSingleton, Z_Construct_UClass_USimpleProtobufBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleProtobufBase.OuterSingleton;
	}
	template<> SIMPLEPROTOBUFEDITOR_API UClass* StaticClass<USimpleProtobufBase>()
	{
		return USimpleProtobufBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleProtobufBase);
	USimpleProtobufBase::~USimpleProtobufBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleProtobufBase, USimpleProtobufBase::StaticClass, TEXT("USimpleProtobufBase"), &Z_Registration_Info_UClass_USimpleProtobufBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleProtobufBase), 1410934319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufBase_h_1367117971(TEXT("/Script/SimpleProtobufEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
