// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObject/SimpleProtobufCompileInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufCompileInfo() {}
// Cross Module References
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufCompileInfo();
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufCompileInfo_NoRegister();
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufObject();
	UPackage* Z_Construct_UPackage__Script_SimpleProtobufEditor();
// End Cross Module References
	void USimpleProtobufCompileInfo::StaticRegisterNativesUSimpleProtobufCompileInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleProtobufCompileInfo);
	UClass* Z_Construct_UClass_USimpleProtobufCompileInfo_NoRegister()
	{
		return USimpleProtobufCompileInfo::StaticClass();
	}
	struct Z_Construct_UClass_USimpleProtobufCompileInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleProtobufObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobufEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UObject/SimpleProtobufCompileInfo.h" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufCompileInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleProtobufCompileInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::ClassParams = {
		&USimpleProtobufCompileInfo::StaticClass,
		"SimpleProtobufCompileInfo",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleProtobufCompileInfo()
	{
		if (!Z_Registration_Info_UClass_USimpleProtobufCompileInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleProtobufCompileInfo.OuterSingleton, Z_Construct_UClass_USimpleProtobufCompileInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleProtobufCompileInfo.OuterSingleton;
	}
	template<> SIMPLEPROTOBUFEDITOR_API UClass* StaticClass<USimpleProtobufCompileInfo>()
	{
		return USimpleProtobufCompileInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleProtobufCompileInfo);
	USimpleProtobufCompileInfo::~USimpleProtobufCompileInfo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleProtobufCompileInfo, USimpleProtobufCompileInfo::StaticClass, TEXT("USimpleProtobufCompileInfo"), &Z_Registration_Info_UClass_USimpleProtobufCompileInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleProtobufCompileInfo), 3595105989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileInfo_h_4185404041(TEXT("/Script/SimpleProtobufEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufCompileInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
