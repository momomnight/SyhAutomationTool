// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObject/SimpleProtobufInfo.h"
#include "SimpleProtobufEditorType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufInfo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufBase();
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufObject();
	SIMPLEPROTOBUFEDITOR_API UClass* Z_Construct_UClass_USimpleProtobufObject_NoRegister();
	SIMPLEPROTOBUFEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FProtobufMap();
	UPackage* Z_Construct_UPackage__Script_SimpleProtobufEditor();
// End Cross Module References
	void USimpleProtobufObject::StaticRegisterNativesUSimpleProtobufObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleProtobufObject);
	UClass* Z_Construct_UClass_USimpleProtobufObject_NoRegister()
	{
		return USimpleProtobufObject::StaticClass();
	}
	struct Z_Construct_UClass_USimpleProtobufObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtoExe_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProtoExe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPause_MetaData[];
#endif
		static void NewProp_bPause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Maps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Maps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleProtobufObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleProtobufBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobufEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UObject/SimpleProtobufInfo.h" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_ProtoExe_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufInfo.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_ProtoExe = { "ProtoExe", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufObject, ProtoExe), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_ProtoExe_MetaData), Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_ProtoExe_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_bPause_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufInfo.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif
	void Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((USimpleProtobufObject*)Obj)->bPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleProtobufObject), &Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_bPause_MetaData), Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_bPause_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_Maps_Inner = { "Maps", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProtobufMap, METADATA_PARAMS(0, nullptr) }; // 3294434066
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_Maps_MetaData[] = {
		{ "Category", "Protobuf|Common" },
		{ "ModuleRelativePath", "Public/UObject/SimpleProtobufInfo.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_Maps = { "Maps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleProtobufObject, Maps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_Maps_MetaData), Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_Maps_MetaData) }; // 3294434066
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleProtobufObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_ProtoExe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_bPause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_Maps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleProtobufObject_Statics::NewProp_Maps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleProtobufObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleProtobufObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleProtobufObject_Statics::ClassParams = {
		&USimpleProtobufObject::StaticClass,
		"SimpleProtobufObject",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleProtobufObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufObject_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufObject_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleProtobufObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleProtobufObject()
	{
		if (!Z_Registration_Info_UClass_USimpleProtobufObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleProtobufObject.OuterSingleton, Z_Construct_UClass_USimpleProtobufObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleProtobufObject.OuterSingleton;
	}
	template<> SIMPLEPROTOBUFEDITOR_API UClass* StaticClass<USimpleProtobufObject>()
	{
		return USimpleProtobufObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleProtobufObject);
	USimpleProtobufObject::~USimpleProtobufObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleProtobufObject, USimpleProtobufObject::StaticClass, TEXT("USimpleProtobufObject"), &Z_Registration_Info_UClass_USimpleProtobufObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleProtobufObject), 1828872335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufInfo_h_3718955039(TEXT("/Script/SimpleProtobufEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleProtobuf_Source_SimpleProtobufEditor_Public_UObject_SimpleProtobufInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
