// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleProtobuf/Source/SimpleProtobuf/Public/SimpleProtobufBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SIMPLEPROTOBUF_API UClass* Z_Construct_UClass_USimpleProtobufBPLibrary();
SIMPLEPROTOBUF_API UClass* Z_Construct_UClass_USimpleProtobufBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleProtobuf();
// End Cross Module References

// Begin Class USimpleProtobufBPLibrary Function GenerateProtoCode
struct Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics
{
	struct SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms
	{
		TArray<FString> InGenerateProtoPaths;
		TArray<FString> InImportProtoFile;
		FString InGenerateProtoFilename;
		FString InMetaTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proto" },
		{ "Comment", "//\xe5\xb0\x86\xe5\xbc\x95\xe6\x93\x8e\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84\xe6\xa0\x87\xe8\xae\xb0\xe5\x90\x8e\xe4\xbb\xa3\xe7\xa0\x81\xe7\x94\x9f\xe6\x88\x90\xe6\x8c\x87\xe5\xae\x9a\xe5\x86\x85\xe5\xae\xb9\n" },
		{ "CPP_Default_InGenerateProtoFilename", "ProtoCode" },
		{ "CPP_Default_InMetaTag", "Proto" },
		{ "ModuleRelativePath", "Public/SimpleProtobufBPLibrary.h" },
		{ "ToolTip", "\xe5\xb0\x86\xe5\xbc\x95\xe6\x93\x8e\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84\xe6\xa0\x87\xe8\xae\xb0\xe5\x90\x8e\xe4\xbb\xa3\xe7\xa0\x81\xe7\x94\x9f\xe6\x88\x90\xe6\x8c\x87\xe5\xae\x9a\xe5\x86\x85\xe5\xae\xb9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGenerateProtoPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InImportProtoFile_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGenerateProtoFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMetaTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InGenerateProtoPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InGenerateProtoPaths;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InImportProtoFile_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InImportProtoFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InGenerateProtoFilename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InMetaTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoPaths_Inner = { "InGenerateProtoPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoPaths = { "InGenerateProtoPaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms, InGenerateProtoPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGenerateProtoPaths_MetaData), NewProp_InGenerateProtoPaths_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InImportProtoFile_Inner = { "InImportProtoFile", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InImportProtoFile = { "InImportProtoFile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms, InImportProtoFile), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InImportProtoFile_MetaData), NewProp_InImportProtoFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoFilename = { "InGenerateProtoFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms, InGenerateProtoFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGenerateProtoFilename_MetaData), NewProp_InGenerateProtoFilename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InMetaTag = { "InMetaTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms, InMetaTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMetaTag_MetaData), NewProp_InMetaTag_MetaData) };
void Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms), &Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InImportProtoFile_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InImportProtoFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InMetaTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleProtobufBPLibrary, nullptr, "GenerateProtoCode", nullptr, nullptr, Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleProtobufBPLibrary::execGenerateProtoCode)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InGenerateProtoPaths);
	P_GET_TARRAY_REF(FString,Z_Param_Out_InImportProtoFile);
	P_GET_PROPERTY(FStrProperty,Z_Param_InGenerateProtoFilename);
	P_GET_PROPERTY(FStrProperty,Z_Param_InMetaTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USimpleProtobufBPLibrary::GenerateProtoCode(Z_Param_Out_InGenerateProtoPaths,Z_Param_Out_InImportProtoFile,Z_Param_InGenerateProtoFilename,Z_Param_InMetaTag);
	P_NATIVE_END;
}
// End Class USimpleProtobufBPLibrary Function GenerateProtoCode

// Begin Class USimpleProtobufBPLibrary
void USimpleProtobufBPLibrary::StaticRegisterNativesUSimpleProtobufBPLibrary()
{
	UClass* Class = USimpleProtobufBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateProtoCode", &USimpleProtobufBPLibrary::execGenerateProtoCode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleProtobufBPLibrary);
UClass* Z_Construct_UClass_USimpleProtobufBPLibrary_NoRegister()
{
	return USimpleProtobufBPLibrary::StaticClass();
}
struct Z_Construct_UClass_USimpleProtobufBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * DocURL\xef\xbc\x9a\x09\x09\x09    https://renzhai.net/420.html\n * Here's how to develop the current plug-in\n * MarketplaceURL :     https://www.aboutcg.org/courseDetails/1269/introduce\n * If you want to learn more about the UE4 tutorial, please refer to:\n * URL :\x09\x09\x09\x09https://zhuanlan.zhihu.com/p/60117613\n * If you want to learn about the series of tutorials and related plug-ins, you can follow my blog\n * URL :\x09\x09\x09\x09http://renzhai.net/\n * If you want to know our next course arrangement,\n * you can search the WeChat public house for your attention, then we will push a lot of technical articles.\n * Sina blog            https://weibo.com/bzrz/profile?S=6cm7d0 // this blog hasn't been used for three or four years now.\n * Maybe you can re enable the first connection later\n*/" },
		{ "IncludePath", "SimpleProtobufBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleProtobufBPLibrary.h" },
		{ "ToolTip", "* DocURL\xef\xbc\x9a                         https://renzhai.net/420.html\n* Here's how to develop the current plug-in\n* MarketplaceURL :     https://www.aboutcg.org/courseDetails/1269/introduce\n* If you want to learn more about the UE4 tutorial, please refer to:\n* URL :                               https://zhuanlan.zhihu.com/p/60117613\n* If you want to learn about the series of tutorials and related plug-ins, you can follow my blog\n* URL :                               http://renzhai.net/\n* If you want to know our next course arrangement,\n* you can search the WeChat public house for your attention, then we will push a lot of technical articles.\n* Sina blog            https://weibo.com/bzrz/profile?S=6cm7d0 // this blog hasn't been used for three or four years now.\n* Maybe you can re enable the first connection later" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode, "GenerateProtoCode" }, // 3910697115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleProtobufBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleProtobufBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobuf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleProtobufBPLibrary_Statics::ClassParams = {
	&USimpleProtobufBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleProtobufBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleProtobufBPLibrary()
{
	if (!Z_Registration_Info_UClass_USimpleProtobufBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleProtobufBPLibrary.OuterSingleton, Z_Construct_UClass_USimpleProtobufBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleProtobufBPLibrary.OuterSingleton;
}
template<> SIMPLEPROTOBUF_API UClass* StaticClass<USimpleProtobufBPLibrary>()
{
	return USimpleProtobufBPLibrary::StaticClass();
}
USimpleProtobufBPLibrary::USimpleProtobufBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleProtobufBPLibrary);
USimpleProtobufBPLibrary::~USimpleProtobufBPLibrary() {}
// End Class USimpleProtobufBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleProtobufBPLibrary, USimpleProtobufBPLibrary::StaticClass, TEXT("USimpleProtobufBPLibrary"), &Z_Registration_Info_UClass_USimpleProtobufBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleProtobufBPLibrary), 1601648777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_1773605847(TEXT("/Script/SimpleProtobuf"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
