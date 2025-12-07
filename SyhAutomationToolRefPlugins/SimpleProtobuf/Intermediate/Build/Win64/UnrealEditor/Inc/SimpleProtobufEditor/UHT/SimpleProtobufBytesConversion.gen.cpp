// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObject/SimpleProtobufBytesConversion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufBytesConversion() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufBase();
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufBytesConversion();
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufBytesConversion_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleProtobufEditor();
// End Cross Module References
	void USimpleProtobufBytesConversion::StaticRegisterNativesUSimpleProtobufBytesConversion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleProtobufBytesConversion);
	UClass* Z_Construct_UClass_USimpleProtobufBytesConversion_NoRegister()
	{
		return USimpleProtobufBytesConversion::StaticClass();
	}
	struct Z_Construct_UClass_USimpleProtobufBytesConversion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APIName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_APIName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtoCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProtoCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CPPIncludePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPIncludePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CPPIncludePaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateBytesConversionCodeHPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GenerateBytesConversionCodeHPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateBytesConversionCodeCPPPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GenerateBytesConversionCodeCPPPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleProtobufBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobufEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UObject/SimpleProtobufBytesConversion.h" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufBytesConversion.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_APIName_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufBytesConversion.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_APIName = { "APIName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufBytesConversion, APIName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_APIName_MetaData), Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_APIName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufBytesConversion.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufBytesConversion, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_Filename_MetaData), Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_Filename_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_ProtoCode_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufBytesConversion.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_ProtoCode = { "ProtoCode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufBytesConversion, ProtoCode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_ProtoCode_MetaData), Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_ProtoCode_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_CPPIncludePaths_Inner = { "CPPIncludePaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_CPPIncludePaths_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufBytesConversion.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_CPPIncludePaths = { "CPPIncludePaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufBytesConversion, CPPIncludePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_CPPIncludePaths_MetaData), Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_CPPIncludePaths_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_GenerateBytesConversionCodeHPaths_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufBytesConversion.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_GenerateBytesConversionCodeHPaths = { "GenerateBytesConversionCodeHPaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufBytesConversion, GenerateBytesConversionCodeHPaths), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_GenerateBytesConversionCodeHPaths_MetaData), Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_GenerateBytesConversionCodeHPaths_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_GenerateBytesConversionCodeCPPPaths_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufBytesConversion.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_GenerateBytesConversionCodeCPPPaths = { "GenerateBytesConversionCodeCPPPaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufBytesConversion, GenerateBytesConversionCodeCPPPaths), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_GenerateBytesConversionCodeCPPPaths_MetaData), Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_GenerateBytesConversionCodeCPPPaths_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_APIName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_ProtoCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_CPPIncludePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_CPPIncludePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_GenerateBytesConversionCodeHPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::NewProp_GenerateBytesConversionCodeCPPPaths,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleProtobufBytesConversion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::ClassParams = {
		&USimpleProtobufBytesConversion::StaticClass,
		"SimpleProtobufBytesConversion",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleProtobufBytesConversion()
	{
		if (!Z_Registration_Info_UClass_USimpleProtobufBytesConversion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleProtobufBytesConversion.OuterSingleton, Z_Construct_UClass_USimpleProtobufBytesConversion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleProtobufBytesConversion.OuterSingleton;
	}
	template<> SIMPLEPROTOBUFEDITOR_API UClass* StaticClass<USimpleProtobufBytesConversion>()
	{
		return USimpleProtobufBytesConversion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleProtobufBytesConversion);
	USimpleProtobufBytesConversion::~USimpleProtobufBytesConversion() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufBytesConversion_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufBytesConversion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleProtobufBytesConversion, USimpleProtobufBytesConversion::StaticClass, TEXT("USimpleProtobufBytesConversion"), &Z_Registration_Info_UClass_USimpleProtobufBytesConversion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleProtobufBytesConversion), 1103783058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufBytesConversion_h_694535422(TEXT("/Script/SimpleProtobufEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufBytesConversion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufBytesConversion_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
