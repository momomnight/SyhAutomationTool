// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleProtobufBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLEPROTOBUF_API UClass* Z_Construct_UClass_USimpleProtobufBPLibrary();
	SIMPLEPROTOBUF_API UClass* Z_Construct_UClass_USimpleProtobufBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleProtobuf();
// End Cross Module References
	DEFINE_FUNCTION(USimpleProtobufBPLibrary::execGenerateBytesConversion)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Includes);
		P_GET_PROPERTY(FStrProperty,Z_Param_APIName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFilename);
		P_GET_PROPERTY(FStrProperty,Z_Param_InHPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InCPPPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InGenerateProtoFilename);
		P_GET_PROPERTY(FStrProperty,Z_Param_InMetaTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleProtobufBPLibrary::GenerateBytesConversion(Z_Param_Out_Includes,Z_Param_APIName,Z_Param_InFilename,Z_Param_InHPath,Z_Param_InCPPPath,Z_Param_InGenerateProtoFilename,Z_Param_InMetaTag);
		P_NATIVE_END;
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
	void USimpleProtobufBPLibrary::StaticRegisterNativesUSimpleProtobufBPLibrary()
	{
		UClass* Class = USimpleProtobufBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateBytesConversion", &USimpleProtobufBPLibrary::execGenerateBytesConversion },
			{ "GenerateProtoCode", &USimpleProtobufBPLibrary::execGenerateProtoCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics
	{
		struct SimpleProtobufBPLibrary_eventGenerateBytesConversion_Parms
		{
			TArray<FString> Includes;
			FString APIName;
			FString InFilename;
			FString InHPath;
			FString InCPPPath;
			FString InGenerateProtoFilename;
			FString InMetaTag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Includes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Includes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Includes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APIName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_APIName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InHPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCPPPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCPPPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGenerateProtoFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InGenerateProtoFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMetaTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMetaTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_Includes_Inner = { "Includes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_Includes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_Includes = { "Includes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateBytesConversion_Parms, Includes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_Includes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_Includes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_APIName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_APIName = { "APIName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateBytesConversion_Parms, APIName), METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_APIName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_APIName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InFilename = { "InFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateBytesConversion_Parms, InFilename), METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InFilename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InHPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InHPath = { "InHPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateBytesConversion_Parms, InHPath), METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InHPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InHPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InCPPPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InCPPPath = { "InCPPPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateBytesConversion_Parms, InCPPPath), METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InCPPPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InCPPPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InGenerateProtoFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InGenerateProtoFilename = { "InGenerateProtoFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateBytesConversion_Parms, InGenerateProtoFilename), METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InGenerateProtoFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InGenerateProtoFilename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InMetaTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InMetaTag = { "InMetaTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateBytesConversion_Parms, InMetaTag), METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InMetaTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InMetaTag_MetaData)) };
	void Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleProtobufBPLibrary_eventGenerateBytesConversion_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleProtobufBPLibrary_eventGenerateBytesConversion_Parms), &Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_Includes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_Includes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_APIName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InHPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InCPPPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InGenerateProtoFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_InMetaTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Proto" },
		{ "Comment", "//\xe5\xb0\x86\xe5\xbc\x95\xe6\x93\x8e\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84\xe6\xa0\x87\xe8\xae\xb0\xe5\x90\x8e\xe4\xbb\xa3\xe7\xa0\x81\xe7\x94\x9f\xe6\x88\x90\xe6\x8c\x87\xe5\xae\x9a\xe5\x86\x85\xe5\xae\xb9\n" },
		{ "CPP_Default_InGenerateProtoFilename", "ProtoCode" },
		{ "CPP_Default_InMetaTag", "Proto" },
		{ "ModuleRelativePath", "Public/SimpleProtobufBPLibrary.h" },
		{ "ToolTip", "\xe5\xb0\x86\xe5\xbc\x95\xe6\x93\x8e\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84\xe6\xa0\x87\xe8\xae\xb0\xe5\x90\x8e\xe4\xbb\xa3\xe7\xa0\x81\xe7\x94\x9f\xe6\x88\x90\xe6\x8c\x87\xe5\xae\x9a\xe5\x86\x85\xe5\xae\xb9" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleProtobufBPLibrary, nullptr, "GenerateBytesConversion", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::SimpleProtobufBPLibrary_eventGenerateBytesConversion_Parms), Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_InGenerateProtoPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGenerateProtoPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InGenerateProtoPaths;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InImportProtoFile_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InImportProtoFile_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InImportProtoFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGenerateProtoFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InGenerateProtoFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMetaTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMetaTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoPaths_Inner = { "InGenerateProtoPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoPaths = { "InGenerateProtoPaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms, InGenerateProtoPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoPaths_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InImportProtoFile_Inner = { "InImportProtoFile", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InImportProtoFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InImportProtoFile = { "InImportProtoFile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms, InImportProtoFile), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InImportProtoFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InImportProtoFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoFilename = { "InGenerateProtoFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms, InGenerateProtoFilename), METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoFilename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InMetaTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InMetaTag = { "InMetaTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms, InMetaTag), METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InMetaTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InMetaTag_MetaData)) };
	void Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms), &Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InImportProtoFile_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InImportProtoFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InGenerateProtoFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_InMetaTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Proto" },
		{ "Comment", "//\xe5\xb0\x86\xe5\xbc\x95\xe6\x93\x8e\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84\xe6\xa0\x87\xe8\xae\xb0\xe5\x90\x8e\xe4\xbb\xa3\xe7\xa0\x81\xe7\x94\x9f\xe6\x88\x90\xe6\x8c\x87\xe5\xae\x9a\xe5\x86\x85\xe5\xae\xb9\n" },
		{ "CPP_Default_InGenerateProtoFilename", "ProtoCode" },
		{ "CPP_Default_InMetaTag", "Proto" },
		{ "ModuleRelativePath", "Public/SimpleProtobufBPLibrary.h" },
		{ "ToolTip", "\xe5\xb0\x86\xe5\xbc\x95\xe6\x93\x8e\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84\xe6\xa0\x87\xe8\xae\xb0\xe5\x90\x8e\xe4\xbb\xa3\xe7\xa0\x81\xe7\x94\x9f\xe6\x88\x90\xe6\x8c\x87\xe5\xae\x9a\xe5\x86\x85\xe5\xae\xb9" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleProtobufBPLibrary, nullptr, "GenerateProtoCode", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::SimpleProtobufBPLibrary_eventGenerateProtoCode_Parms), Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleProtobufBPLibrary);
	UClass* Z_Construct_UClass_USimpleProtobufBPLibrary_NoRegister()
	{
		return USimpleProtobufBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USimpleProtobufBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleProtobufBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobuf,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleProtobufBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateBytesConversion, "GenerateBytesConversion" }, // 3073726525
		{ &Z_Construct_UFunction_USimpleProtobufBPLibrary_GenerateProtoCode, "GenerateProtoCode" }, // 137187881
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProtobufBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * DocURL\xef\xbc\x9a\x09\x09\x09    https://renzhai.net/420.html\n * Here's how to develop the current plug-in\n * MarketplaceURL :     https://www.aboutcg.org/courseDetails/1269/introduce\n * If you want to learn more about the UE4 tutorial, please refer to:\n * URL :\x09\x09\x09\x09https://zhuanlan.zhihu.com/p/60117613\n * If you want to learn about the series of tutorials and related plug-ins, you can follow my blog\n * URL :\x09\x09\x09\x09http://renzhai.net/\n * If you want to know our next course arrangement,\n * you can search the WeChat public house for your attention, then we will push a lot of technical articles.\n * Sina blog            https://weibo.com/bzrz/profile?S=6cm7d0 // this blog hasn't been used for three or four years now.\n * Maybe you can re enable the first connection later\n*/" },
		{ "IncludePath", "SimpleProtobufBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleProtobufBPLibrary.h" },
		{ "ToolTip", "* DocURL\xef\xbc\x9a                         https://renzhai.net/420.html\n* Here's how to develop the current plug-in\n* MarketplaceURL :     https://www.aboutcg.org/courseDetails/1269/introduce\n* If you want to learn more about the UE4 tutorial, please refer to:\n* URL :                               https://zhuanlan.zhihu.com/p/60117613\n* If you want to learn about the series of tutorials and related plug-ins, you can follow my blog\n* URL :                               http://renzhai.net/\n* If you want to know our next course arrangement,\n* you can search the WeChat public house for your attention, then we will push a lot of technical articles.\n* Sina blog            https://weibo.com/bzrz/profile?S=6cm7d0 // this blog hasn't been used for three or four years now.\n* Maybe you can re enable the first connection later" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleProtobufBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleProtobufBPLibrary>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USimpleProtobufBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProtobufBPLibrary_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleProtobufBPLibrary, USimpleProtobufBPLibrary::StaticClass, TEXT("USimpleProtobufBPLibrary"), &Z_Registration_Info_UClass_USimpleProtobufBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleProtobufBPLibrary), 3576273098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_1429817377(TEXT("/Script/SimpleProtobuf"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
