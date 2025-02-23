// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleZIP/Source/SimpleZIP/Public/SimpleZIPFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleZIPFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SIMPLEZIP_API UClass* Z_Construct_UClass_USimpleZIPFunctionLibrary();
SIMPLEZIP_API UClass* Z_Construct_UClass_USimpleZIPFunctionLibrary_NoRegister();
SIMPLEZIP_API UFunction* Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackCompleteFunction__DelegateSignature();
SIMPLEZIP_API UFunction* Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SimpleZIP();
// End Cross Module References

// Begin Class USimpleZIPFunctionLibrary Function AsyncUnzipByLoacl
struct Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics
{
	struct SimpleZIPFunctionLibrary_eventAsyncUnzipByLoacl_Parms
	{
		FString SrcPath;
		FString DestFilename;
		FString Password;
		bool bOverwrite;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleZIP" },
		{ "Comment", "/**\n\x09 * The compression scheme zip provided by windows can be used to compress and encrypt the scheme as async.\n\x09 * @param SrcPath\x09\x09\x09\x09""File path to decompress.  for example  D:\\Hello\\Plugins\\xxx.zip\n\x09 * @param DestFilename\x09\x09\x09""Decompressed to target file plus file name. for example D:\\Hello\\Plugins\\Ok\\File\\\n\x09 * @param Password\x09\x09\x09\x09You need a password to unzip your zip.\n\x09 * @param bOverwrite\x09\x09\x09WIf the file already exists, do you want to override it.\n\x09 */" },
		{ "CPP_Default_bOverwrite", "true" },
		{ "ModuleRelativePath", "Public/SimpleZIPFunctionLibrary.h" },
		{ "ToolTip", "The compression scheme zip provided by windows can be used to compress and encrypt the scheme as async.\n@param SrcPath                               File path to decompress.  for example  D:\\Hello\\Plugins\\xxx.zip\n@param DestFilename                  Decompressed to target file plus file name. for example D:\\Hello\\Plugins\\Ok\\File\\\n@param Password                              You need a password to unzip your zip.\n@param bOverwrite                    WIf the file already exists, do you want to override it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrcPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SrcPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestFilename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static void NewProp_bOverwrite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwrite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::NewProp_SrcPath = { "SrcPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventAsyncUnzipByLoacl_Parms, SrcPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrcPath_MetaData), NewProp_SrcPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::NewProp_DestFilename = { "DestFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventAsyncUnzipByLoacl_Parms, DestFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestFilename_MetaData), NewProp_DestFilename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventAsyncUnzipByLoacl_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
void Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::NewProp_bOverwrite_SetBit(void* Obj)
{
	((SimpleZIPFunctionLibrary_eventAsyncUnzipByLoacl_Parms*)Obj)->bOverwrite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::NewProp_bOverwrite = { "bOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleZIPFunctionLibrary_eventAsyncUnzipByLoacl_Parms), &Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::NewProp_bOverwrite_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::NewProp_SrcPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::NewProp_DestFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::NewProp_bOverwrite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleZIPFunctionLibrary, nullptr, "AsyncUnzipByLoacl", nullptr, nullptr, Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::SimpleZIPFunctionLibrary_eventAsyncUnzipByLoacl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::SimpleZIPFunctionLibrary_eventAsyncUnzipByLoacl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleZIPFunctionLibrary::execAsyncUnzipByLoacl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SrcPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_DestFilename);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_UBOOL(Z_Param_bOverwrite);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleZIPFunctionLibrary::AsyncUnzipByLoacl(Z_Param_SrcPath,Z_Param_DestFilename,Z_Param_Password,Z_Param_bOverwrite);
	P_NATIVE_END;
}
// End Class USimpleZIPFunctionLibrary Function AsyncUnzipByLoacl

// Begin Class USimpleZIPFunctionLibrary Function AsyncZipByLoacl
struct Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics
{
	struct SimpleZIPFunctionLibrary_eventAsyncZipByLoacl_Parms
	{
		FString SrcPath;
		FString DestFilename;
		FString Password;
		bool bOverwrite;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleZIP" },
		{ "Comment", "/**\n\x09 * The compression scheme zip provided by windows can be used to compress and encrypt the scheme as async.\n\x09 * @param SrcPath\x09\x09\x09\x09""File path to compress.  for example D:\\Hello\\Plugins\\Ok\\File\\\n\x09 * @param DestFilename\x09\x09\x09""Compressed to target file plus file name. for example D:\\Hello\\Plugins\\xxx.zip\n\x09 * @param Password\x09\x09\x09\x09Write a password so that others need a password to unzip it.\n\x09 */" },
		{ "CPP_Default_bOverwrite", "true" },
		{ "ModuleRelativePath", "Public/SimpleZIPFunctionLibrary.h" },
		{ "ToolTip", "The compression scheme zip provided by windows can be used to compress and encrypt the scheme as async.\n@param SrcPath                               File path to compress.  for example D:\\Hello\\Plugins\\Ok\\File\\\n@param DestFilename                  Compressed to target file plus file name. for example D:\\Hello\\Plugins\\xxx.zip\n@param Password                              Write a password so that others need a password to unzip it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrcPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SrcPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestFilename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static void NewProp_bOverwrite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwrite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::NewProp_SrcPath = { "SrcPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventAsyncZipByLoacl_Parms, SrcPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrcPath_MetaData), NewProp_SrcPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::NewProp_DestFilename = { "DestFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventAsyncZipByLoacl_Parms, DestFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestFilename_MetaData), NewProp_DestFilename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventAsyncZipByLoacl_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
void Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::NewProp_bOverwrite_SetBit(void* Obj)
{
	((SimpleZIPFunctionLibrary_eventAsyncZipByLoacl_Parms*)Obj)->bOverwrite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::NewProp_bOverwrite = { "bOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleZIPFunctionLibrary_eventAsyncZipByLoacl_Parms), &Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::NewProp_bOverwrite_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::NewProp_SrcPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::NewProp_DestFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::NewProp_bOverwrite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleZIPFunctionLibrary, nullptr, "AsyncZipByLoacl", nullptr, nullptr, Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::SimpleZIPFunctionLibrary_eventAsyncZipByLoacl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::SimpleZIPFunctionLibrary_eventAsyncZipByLoacl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleZIPFunctionLibrary::execAsyncZipByLoacl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SrcPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_DestFilename);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_UBOOL(Z_Param_bOverwrite);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleZIPFunctionLibrary::AsyncZipByLoacl(Z_Param_SrcPath,Z_Param_DestFilename,Z_Param_Password,Z_Param_bOverwrite);
	P_NATIVE_END;
}
// End Class USimpleZIPFunctionLibrary Function AsyncZipByLoacl

// Begin Class USimpleZIPFunctionLibrary Function BindZipFileCallbackCompleteFunction
struct Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics
{
	struct SimpleZIPFunctionLibrary_eventBindZipFileCallbackCompleteFunction_Parms
	{
		FScriptDelegate OnFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleZIP" },
		{ "ModuleRelativePath", "Public/SimpleZIPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics::NewProp_OnFunction = { "OnFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventBindZipFileCallbackCompleteFunction_Parms, OnFunction), Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackCompleteFunction__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4153466152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics::NewProp_OnFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleZIPFunctionLibrary, nullptr, "BindZipFileCallbackCompleteFunction", nullptr, nullptr, Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics::SimpleZIPFunctionLibrary_eventBindZipFileCallbackCompleteFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics::SimpleZIPFunctionLibrary_eventBindZipFileCallbackCompleteFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleZIPFunctionLibrary::execBindZipFileCallbackCompleteFunction)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleZIPFunctionLibrary::BindZipFileCallbackCompleteFunction(FOnZipFileCallbackCompleteFunction(Z_Param_OnFunction));
	P_NATIVE_END;
}
// End Class USimpleZIPFunctionLibrary Function BindZipFileCallbackCompleteFunction

// Begin Class USimpleZIPFunctionLibrary Function BindZipFileCallbackFunction
struct Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics
{
	struct SimpleZIPFunctionLibrary_eventBindZipFileCallbackFunction_Parms
	{
		FScriptDelegate OnFunction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleZIP" },
		{ "Comment", "/**\n\x09 * If you want to execute this compression asynchronously, you need to help that function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleZIPFunctionLibrary.h" },
		{ "ToolTip", "If you want to execute this compression asynchronously, you need to help that function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics::NewProp_OnFunction = { "OnFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventBindZipFileCallbackFunction_Parms, OnFunction), Z_Construct_UDelegateFunction_SimpleZIP_OnZipFileCallbackFunction__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1779523810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics::NewProp_OnFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleZIPFunctionLibrary, nullptr, "BindZipFileCallbackFunction", nullptr, nullptr, Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics::SimpleZIPFunctionLibrary_eventBindZipFileCallbackFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics::SimpleZIPFunctionLibrary_eventBindZipFileCallbackFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleZIPFunctionLibrary::execBindZipFileCallbackFunction)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleZIPFunctionLibrary::BindZipFileCallbackFunction(FOnZipFileCallbackFunction(Z_Param_OnFunction));
	P_NATIVE_END;
}
// End Class USimpleZIPFunctionLibrary Function BindZipFileCallbackFunction

// Begin Class USimpleZIPFunctionLibrary Function ClearZipFileCallbackFunction
struct Z_Construct_UFunction_USimpleZIPFunctionLibrary_ClearZipFileCallbackFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleZIP" },
		{ "Comment", "/**\n\x09 * Remember to clear the agent when you don't use it, otherwise it may collapse next time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleZIPFunctionLibrary.h" },
		{ "ToolTip", "Remember to clear the agent when you don't use it, otherwise it may collapse next time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_ClearZipFileCallbackFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleZIPFunctionLibrary, nullptr, "ClearZipFileCallbackFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_ClearZipFileCallbackFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleZIPFunctionLibrary_ClearZipFileCallbackFunction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimpleZIPFunctionLibrary_ClearZipFileCallbackFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleZIPFunctionLibrary_ClearZipFileCallbackFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleZIPFunctionLibrary::execClearZipFileCallbackFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleZIPFunctionLibrary::ClearZipFileCallbackFunction();
	P_NATIVE_END;
}
// End Class USimpleZIPFunctionLibrary Function ClearZipFileCallbackFunction

// Begin Class USimpleZIPFunctionLibrary Function Compress
struct Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics
{
	struct SimpleZIPFunctionLibrary_eventCompress_Parms
	{
		TArray<uint8> UncompressedData;
		TArray<uint8> OutData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleZIP" },
		{ "Comment", "/**\n\x09 * Using UE4 compression scheme to compress our files.\n\x09 * @param UncompressedData\x09""Data to be compressed.\n\x09 * @param OutData\x09\x09\x09""Compress the output data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleZIPFunctionLibrary.h" },
		{ "ToolTip", "Using UE4 compression scheme to compress our files.\n@param UncompressedData      Data to be compressed.\n@param OutData                       Compress the output data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UncompressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_UncompressedData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UncompressedData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::NewProp_UncompressedData_Inner = { "UncompressedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::NewProp_UncompressedData = { "UncompressedData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventCompress_Parms, UncompressedData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UncompressedData_MetaData), NewProp_UncompressedData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::NewProp_OutData_Inner = { "OutData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventCompress_Parms, OutData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleZIPFunctionLibrary_eventCompress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleZIPFunctionLibrary_eventCompress_Parms), &Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::NewProp_UncompressedData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::NewProp_UncompressedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::NewProp_OutData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::NewProp_OutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleZIPFunctionLibrary, nullptr, "Compress", nullptr, nullptr, Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::SimpleZIPFunctionLibrary_eventCompress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::SimpleZIPFunctionLibrary_eventCompress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleZIPFunctionLibrary::execCompress)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_UncompressedData);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USimpleZIPFunctionLibrary::Compress(Z_Param_Out_UncompressedData,Z_Param_Out_OutData);
	P_NATIVE_END;
}
// End Class USimpleZIPFunctionLibrary Function Compress

// Begin Class USimpleZIPFunctionLibrary Function CompressToLocalToLocal
struct Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics
{
	struct SimpleZIPFunctionLibrary_eventCompressToLocalToLocal_Parms
	{
		FString InPath;
		FString OutPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleZIP" },
		{ "Comment", "/**\n\x09 * Using UE4 compression scheme to compress our files.\n\x09 * @param UncompressedData\x09""Data to be compressed.\n\x09 * @param OutData\x09\x09\x09""Compress the output data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleZIPFunctionLibrary.h" },
		{ "ToolTip", "Using UE4 compression scheme to compress our files.\n@param UncompressedData      Data to be compressed.\n@param OutData                       Compress the output data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventCompressToLocalToLocal_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventCompressToLocalToLocal_Parms, OutPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutPath_MetaData), NewProp_OutPath_MetaData) };
void Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleZIPFunctionLibrary_eventCompressToLocalToLocal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleZIPFunctionLibrary_eventCompressToLocalToLocal_Parms), &Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::NewProp_OutPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleZIPFunctionLibrary, nullptr, "CompressToLocalToLocal", nullptr, nullptr, Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::SimpleZIPFunctionLibrary_eventCompressToLocalToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::SimpleZIPFunctionLibrary_eventCompressToLocalToLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleZIPFunctionLibrary::execCompressToLocalToLocal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USimpleZIPFunctionLibrary::CompressToLocalToLocal(Z_Param_InPath,Z_Param_OutPath);
	P_NATIVE_END;
}
// End Class USimpleZIPFunctionLibrary Function CompressToLocalToLocal

// Begin Class USimpleZIPFunctionLibrary Function Decompress
struct Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics
{
	struct SimpleZIPFunctionLibrary_eventDecompress_Parms
	{
		TArray<uint8> CompressedData;
		TArray<uint8> OutData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleZIP" },
		{ "Comment", "/**\n\x09 * Use UE4 to decompress.\n\x09 * @param CompressedData\x09""Data to be decompress.\n\x09 * @param OutData\x09\x09\x09""Decompress the output data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleZIPFunctionLibrary.h" },
		{ "ToolTip", "Use UE4 to decompress.\n@param CompressedData        Data to be decompress.\n@param OutData                       Decompress the output data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressedData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompressedData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::NewProp_CompressedData_Inner = { "CompressedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::NewProp_CompressedData = { "CompressedData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventDecompress_Parms, CompressedData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressedData_MetaData), NewProp_CompressedData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::NewProp_OutData_Inner = { "OutData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventDecompress_Parms, OutData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleZIPFunctionLibrary_eventDecompress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleZIPFunctionLibrary_eventDecompress_Parms), &Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::NewProp_CompressedData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::NewProp_CompressedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::NewProp_OutData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::NewProp_OutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleZIPFunctionLibrary, nullptr, "Decompress", nullptr, nullptr, Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::SimpleZIPFunctionLibrary_eventDecompress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::SimpleZIPFunctionLibrary_eventDecompress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleZIPFunctionLibrary::execDecompress)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedData);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USimpleZIPFunctionLibrary::Decompress(Z_Param_Out_CompressedData,Z_Param_Out_OutData);
	P_NATIVE_END;
}
// End Class USimpleZIPFunctionLibrary Function Decompress

// Begin Class USimpleZIPFunctionLibrary Function DecompressFormLocalToLocal
struct Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics
{
	struct SimpleZIPFunctionLibrary_eventDecompressFormLocalToLocal_Parms
	{
		FString InPath;
		FString OutPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleZIP" },
		{ "Comment", "/**\n\x09 * Use UE4 to decompress.\n\x09 * @param CompressedData\x09""Data to be decompress.\n\x09 * @param OutData\x09\x09\x09""Decompress the output data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleZIPFunctionLibrary.h" },
		{ "ToolTip", "Use UE4 to decompress.\n@param CompressedData        Data to be decompress.\n@param OutData                       Decompress the output data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventDecompressFormLocalToLocal_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventDecompressFormLocalToLocal_Parms, OutPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutPath_MetaData), NewProp_OutPath_MetaData) };
void Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleZIPFunctionLibrary_eventDecompressFormLocalToLocal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleZIPFunctionLibrary_eventDecompressFormLocalToLocal_Parms), &Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::NewProp_OutPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleZIPFunctionLibrary, nullptr, "DecompressFormLocalToLocal", nullptr, nullptr, Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::SimpleZIPFunctionLibrary_eventDecompressFormLocalToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::SimpleZIPFunctionLibrary_eventDecompressFormLocalToLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleZIPFunctionLibrary::execDecompressFormLocalToLocal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USimpleZIPFunctionLibrary::DecompressFormLocalToLocal(Z_Param_InPath,Z_Param_OutPath);
	P_NATIVE_END;
}
// End Class USimpleZIPFunctionLibrary Function DecompressFormLocalToLocal

// Begin Class USimpleZIPFunctionLibrary Function UnzipByLoacl
struct Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics
{
	struct SimpleZIPFunctionLibrary_eventUnzipByLoacl_Parms
	{
		FString SrcPath;
		FString DestFilename;
		FString Password;
		bool bOverwrite;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleZIP" },
		{ "Comment", "/**\n\x09 * The compression scheme zip provided by windows can be used to compress and encrypt the scheme.\n\x09 * @param SrcPath\x09\x09\x09\x09""File path to decompress.  for example  D:\\Hello\\Plugins\\xxx.zip\n\x09 * @param DestFilename\x09\x09\x09""Decompressed to target file plus file name. for example D:\\Hello\\Plugins\\Ok\\File\\\n\x09 * @param Password\x09\x09\x09\x09You need a password to unzip your zip.\n\x09 * @param bOverwrite\x09\x09\x09WIf the file already exists, do you want to override it.\n\x09 */" },
		{ "CPP_Default_bOverwrite", "true" },
		{ "ModuleRelativePath", "Public/SimpleZIPFunctionLibrary.h" },
		{ "ToolTip", "The compression scheme zip provided by windows can be used to compress and encrypt the scheme.\n@param SrcPath                               File path to decompress.  for example  D:\\Hello\\Plugins\\xxx.zip\n@param DestFilename                  Decompressed to target file plus file name. for example D:\\Hello\\Plugins\\Ok\\File\\\n@param Password                              You need a password to unzip your zip.\n@param bOverwrite                    WIf the file already exists, do you want to override it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrcPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SrcPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestFilename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static void NewProp_bOverwrite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwrite;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_SrcPath = { "SrcPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventUnzipByLoacl_Parms, SrcPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrcPath_MetaData), NewProp_SrcPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_DestFilename = { "DestFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventUnzipByLoacl_Parms, DestFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestFilename_MetaData), NewProp_DestFilename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventUnzipByLoacl_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
void Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_bOverwrite_SetBit(void* Obj)
{
	((SimpleZIPFunctionLibrary_eventUnzipByLoacl_Parms*)Obj)->bOverwrite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_bOverwrite = { "bOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleZIPFunctionLibrary_eventUnzipByLoacl_Parms), &Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_bOverwrite_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleZIPFunctionLibrary_eventUnzipByLoacl_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleZIPFunctionLibrary_eventUnzipByLoacl_Parms), &Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_SrcPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_DestFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_bOverwrite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleZIPFunctionLibrary, nullptr, "UnzipByLoacl", nullptr, nullptr, Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::SimpleZIPFunctionLibrary_eventUnzipByLoacl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::SimpleZIPFunctionLibrary_eventUnzipByLoacl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleZIPFunctionLibrary::execUnzipByLoacl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SrcPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_DestFilename);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_UBOOL(Z_Param_bOverwrite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USimpleZIPFunctionLibrary::UnzipByLoacl(Z_Param_SrcPath,Z_Param_DestFilename,Z_Param_Password,Z_Param_bOverwrite);
	P_NATIVE_END;
}
// End Class USimpleZIPFunctionLibrary Function UnzipByLoacl

// Begin Class USimpleZIPFunctionLibrary Function ZipByLoacl
struct Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics
{
	struct SimpleZIPFunctionLibrary_eventZipByLoacl_Parms
	{
		FString SrcPath;
		FString DestFilename;
		FString Password;
		bool bOverwrite;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleZIP" },
		{ "Comment", "/**\n\x09 * The compression scheme zip provided by windows can be used to compress and encrypt the scheme.\n\x09 * @param SrcPath\x09\x09\x09\x09""File path to compress.  for example D:\\Hello\\Plugins\\Ok\\File\\\n\x09 * @param DestFilename\x09\x09\x09""Compressed to target file plus file name. for example D:\\Hello\\Plugins\\xxx.zip\n\x09 * @param Password\x09\x09\x09\x09Write a password so that others need a password to unzip it.\n\x09 */" },
		{ "CPP_Default_bOverwrite", "true" },
		{ "ModuleRelativePath", "Public/SimpleZIPFunctionLibrary.h" },
		{ "ToolTip", "The compression scheme zip provided by windows can be used to compress and encrypt the scheme.\n@param SrcPath                               File path to compress.  for example D:\\Hello\\Plugins\\Ok\\File\\\n@param DestFilename                  Compressed to target file plus file name. for example D:\\Hello\\Plugins\\xxx.zip\n@param Password                              Write a password so that others need a password to unzip it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrcPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SrcPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestFilename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static void NewProp_bOverwrite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwrite;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_SrcPath = { "SrcPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventZipByLoacl_Parms, SrcPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrcPath_MetaData), NewProp_SrcPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_DestFilename = { "DestFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventZipByLoacl_Parms, DestFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestFilename_MetaData), NewProp_DestFilename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleZIPFunctionLibrary_eventZipByLoacl_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
void Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_bOverwrite_SetBit(void* Obj)
{
	((SimpleZIPFunctionLibrary_eventZipByLoacl_Parms*)Obj)->bOverwrite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_bOverwrite = { "bOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleZIPFunctionLibrary_eventZipByLoacl_Parms), &Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_bOverwrite_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleZIPFunctionLibrary_eventZipByLoacl_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleZIPFunctionLibrary_eventZipByLoacl_Parms), &Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_SrcPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_DestFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_bOverwrite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleZIPFunctionLibrary, nullptr, "ZipByLoacl", nullptr, nullptr, Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::SimpleZIPFunctionLibrary_eventZipByLoacl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::SimpleZIPFunctionLibrary_eventZipByLoacl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleZIPFunctionLibrary::execZipByLoacl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SrcPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_DestFilename);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_UBOOL(Z_Param_bOverwrite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USimpleZIPFunctionLibrary::ZipByLoacl(Z_Param_SrcPath,Z_Param_DestFilename,Z_Param_Password,Z_Param_bOverwrite);
	P_NATIVE_END;
}
// End Class USimpleZIPFunctionLibrary Function ZipByLoacl

// Begin Class USimpleZIPFunctionLibrary
void USimpleZIPFunctionLibrary::StaticRegisterNativesUSimpleZIPFunctionLibrary()
{
	UClass* Class = USimpleZIPFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncUnzipByLoacl", &USimpleZIPFunctionLibrary::execAsyncUnzipByLoacl },
		{ "AsyncZipByLoacl", &USimpleZIPFunctionLibrary::execAsyncZipByLoacl },
		{ "BindZipFileCallbackCompleteFunction", &USimpleZIPFunctionLibrary::execBindZipFileCallbackCompleteFunction },
		{ "BindZipFileCallbackFunction", &USimpleZIPFunctionLibrary::execBindZipFileCallbackFunction },
		{ "ClearZipFileCallbackFunction", &USimpleZIPFunctionLibrary::execClearZipFileCallbackFunction },
		{ "Compress", &USimpleZIPFunctionLibrary::execCompress },
		{ "CompressToLocalToLocal", &USimpleZIPFunctionLibrary::execCompressToLocalToLocal },
		{ "Decompress", &USimpleZIPFunctionLibrary::execDecompress },
		{ "DecompressFormLocalToLocal", &USimpleZIPFunctionLibrary::execDecompressFormLocalToLocal },
		{ "UnzipByLoacl", &USimpleZIPFunctionLibrary::execUnzipByLoacl },
		{ "ZipByLoacl", &USimpleZIPFunctionLibrary::execZipByLoacl },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleZIPFunctionLibrary);
UClass* Z_Construct_UClass_USimpleZIPFunctionLibrary_NoRegister()
{
	return USimpleZIPFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_USimpleZIPFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleZIPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleZIPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncUnzipByLoacl, "AsyncUnzipByLoacl" }, // 1553458737
		{ &Z_Construct_UFunction_USimpleZIPFunctionLibrary_AsyncZipByLoacl, "AsyncZipByLoacl" }, // 3025623236
		{ &Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackCompleteFunction, "BindZipFileCallbackCompleteFunction" }, // 3111980074
		{ &Z_Construct_UFunction_USimpleZIPFunctionLibrary_BindZipFileCallbackFunction, "BindZipFileCallbackFunction" }, // 4019208091
		{ &Z_Construct_UFunction_USimpleZIPFunctionLibrary_ClearZipFileCallbackFunction, "ClearZipFileCallbackFunction" }, // 4294949672
		{ &Z_Construct_UFunction_USimpleZIPFunctionLibrary_Compress, "Compress" }, // 854983188
		{ &Z_Construct_UFunction_USimpleZIPFunctionLibrary_CompressToLocalToLocal, "CompressToLocalToLocal" }, // 1069708357
		{ &Z_Construct_UFunction_USimpleZIPFunctionLibrary_Decompress, "Decompress" }, // 2487949123
		{ &Z_Construct_UFunction_USimpleZIPFunctionLibrary_DecompressFormLocalToLocal, "DecompressFormLocalToLocal" }, // 3664466183
		{ &Z_Construct_UFunction_USimpleZIPFunctionLibrary_UnzipByLoacl, "UnzipByLoacl" }, // 3974826526
		{ &Z_Construct_UFunction_USimpleZIPFunctionLibrary_ZipByLoacl, "ZipByLoacl" }, // 94652509
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleZIPFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleZIPFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleZIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleZIPFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleZIPFunctionLibrary_Statics::ClassParams = {
	&USimpleZIPFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleZIPFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleZIPFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleZIPFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_USimpleZIPFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleZIPFunctionLibrary.OuterSingleton, Z_Construct_UClass_USimpleZIPFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleZIPFunctionLibrary.OuterSingleton;
}
template<> SIMPLEZIP_API UClass* StaticClass<USimpleZIPFunctionLibrary>()
{
	return USimpleZIPFunctionLibrary::StaticClass();
}
USimpleZIPFunctionLibrary::USimpleZIPFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleZIPFunctionLibrary);
USimpleZIPFunctionLibrary::~USimpleZIPFunctionLibrary() {}
// End Class USimpleZIPFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleZIP_Source_SimpleZIP_Public_SimpleZIPFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleZIPFunctionLibrary, USimpleZIPFunctionLibrary::StaticClass, TEXT("USimpleZIPFunctionLibrary"), &Z_Registration_Info_UClass_USimpleZIPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleZIPFunctionLibrary), 1357055152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleZIP_Source_SimpleZIP_Public_SimpleZIPFunctionLibrary_h_2006427063(TEXT("/Script/SimpleZIP"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleZIP_Source_SimpleZIP_Public_SimpleZIPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleZIP_Source_SimpleZIP_Public_SimpleZIPFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
