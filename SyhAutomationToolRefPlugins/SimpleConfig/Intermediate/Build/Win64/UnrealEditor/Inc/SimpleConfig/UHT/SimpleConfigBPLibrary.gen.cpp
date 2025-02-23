// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleConfig/Public/SimpleConfigBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleConfigBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
SIMPLECONFIG_API UClass* Z_Construct_UClass_USimpleConfigBPLibrary();
SIMPLECONFIG_API UClass* Z_Construct_UClass_USimpleConfigBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleConfig();
// End Cross Module References

// Begin Class USimpleConfigBPLibrary Function DoesSectionExist
struct Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics
{
	struct SimpleConfigBPLibrary_eventDoesSectionExist_Parms
	{
		FString Section;
		FString Filename;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventDoesSectionExist_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventDoesSectionExist_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
void Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleConfigBPLibrary_eventDoesSectionExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleConfigBPLibrary_eventDoesSectionExist_Parms), &Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "DoesSectionExist", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::SimpleConfigBPLibrary_eventDoesSectionExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::SimpleConfigBPLibrary_eventDoesSectionExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execDoesSectionExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USimpleConfigBPLibrary::DoesSectionExist(Z_Param_Section,Z_Param_Filename);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function DoesSectionExist

// Begin Class USimpleConfigBPLibrary Function GetArray
struct Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics
{
	struct SimpleConfigBPLibrary_eventGetArray_Parms
	{
		FString Section;
		FString Key;
		TArray<FString> Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetArray_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetArray_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetArray_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "GetArray", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::SimpleConfigBPLibrary_eventGetArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::SimpleConfigBPLibrary_eventGetArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execGetArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::GetArray(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function GetArray

// Begin Class USimpleConfigBPLibrary Function GetBool
struct Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics
{
	struct SimpleConfigBPLibrary_eventGetBool_Parms
	{
		FString Section;
		FString Key;
		bool Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetBool_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetBool_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((SimpleConfigBPLibrary_eventGetBool_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleConfigBPLibrary_eventGetBool_Parms), &Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetBool_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "GetBool", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::SimpleConfigBPLibrary_eventGetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::SimpleConfigBPLibrary_eventGetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execGetBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL_REF(Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::GetBool(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function GetBool

// Begin Class USimpleConfigBPLibrary Function GetDouble
struct Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics
{
	struct SimpleConfigBPLibrary_eventGetDouble_Parms
	{
		FString Section;
		FString Key;
		double Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetDouble_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetDouble_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetDouble_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetDouble_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "GetDouble", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::SimpleConfigBPLibrary_eventGetDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::SimpleConfigBPLibrary_eventGetDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execGetDouble)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::GetDouble(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function GetDouble

// Begin Class USimpleConfigBPLibrary Function GetFloat
struct Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics
{
	struct SimpleConfigBPLibrary_eventGetFloat_Parms
	{
		FString Section;
		FString Key;
		float Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetFloat_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetFloat_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetFloat_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "GetFloat", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::SimpleConfigBPLibrary_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::SimpleConfigBPLibrary_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execGetFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::GetFloat(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function GetFloat

// Begin Class USimpleConfigBPLibrary Function GetInt
struct Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics
{
	struct SimpleConfigBPLibrary_eventGetInt_Parms
	{
		FString Section;
		FString Key;
		int32 Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetInt_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetInt_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetInt_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "GetInt", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::SimpleConfigBPLibrary_eventGetInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::SimpleConfigBPLibrary_eventGetInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execGetInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::GetInt(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function GetInt

// Begin Class USimpleConfigBPLibrary Function GetRotator
struct Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics
{
	struct SimpleConfigBPLibrary_eventGetRotator_Parms
	{
		FString Section;
		FString Key;
		FRotator Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetRotator_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetRotator_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetRotator_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "GetRotator", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::SimpleConfigBPLibrary_eventGetRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::SimpleConfigBPLibrary_eventGetRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execGetRotator)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::GetRotator(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function GetRotator

// Begin Class USimpleConfigBPLibrary Function GetSection
struct Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics
{
	struct SimpleConfigBPLibrary_eventGetSection_Parms
	{
		FString Section;
		TArray<FString> Result;
		FString Filename;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetSection_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetSection_Parms, Result), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetSection_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
void Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleConfigBPLibrary_eventGetSection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleConfigBPLibrary_eventGetSection_Parms), &Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::NewProp_Result_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "GetSection", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::SimpleConfigBPLibrary_eventGetSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::SimpleConfigBPLibrary_eventGetSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execGetSection)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Result);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USimpleConfigBPLibrary::GetSection(Z_Param_Section,Z_Param_Out_Result,Z_Param_Filename);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function GetSection

// Begin Class USimpleConfigBPLibrary Function GetString
struct Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics
{
	struct SimpleConfigBPLibrary_eventGetString_Parms
	{
		FString Section;
		FString Key;
		FString Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetString_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetString_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetString_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetString_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::SimpleConfigBPLibrary_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::SimpleConfigBPLibrary_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execGetString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::GetString(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function GetString

// Begin Class USimpleConfigBPLibrary Function GetText
struct Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics
{
	struct SimpleConfigBPLibrary_eventGetText_Parms
	{
		FString Section;
		FString Key;
		FText Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetText_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetText_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetText_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetText_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "GetText", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::SimpleConfigBPLibrary_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::SimpleConfigBPLibrary_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_GetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_GetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execGetText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::GetText(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function GetText

// Begin Class USimpleConfigBPLibrary Function GetVector
struct Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics
{
	struct SimpleConfigBPLibrary_eventGetVector_Parms
	{
		FString Section;
		FString Key;
		FVector Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetVector_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetVector_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetVector_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "GetVector", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::SimpleConfigBPLibrary_eventGetVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::SimpleConfigBPLibrary_eventGetVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execGetVector)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::GetVector(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function GetVector

// Begin Class USimpleConfigBPLibrary Function GetVector4
struct Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics
{
	struct SimpleConfigBPLibrary_eventGetVector4_Parms
	{
		FString Section;
		FString Key;
		FVector4 Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetVector4_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetVector4_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetVector4_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventGetVector4_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "GetVector4", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::SimpleConfigBPLibrary_eventGetVector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::SimpleConfigBPLibrary_eventGetVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execGetVector4)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::GetVector4(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function GetVector4

// Begin Class USimpleConfigBPLibrary Function SetArray
struct Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics
{
	struct SimpleConfigBPLibrary_eventSetArray_Parms
	{
		FString Section;
		FString Key;
		TArray<FString> Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetArray_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetArray_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetArray_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "SetArray", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::SimpleConfigBPLibrary_eventSetArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::SimpleConfigBPLibrary_eventSetArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execSetArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::SetArray(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function SetArray

// Begin Class USimpleConfigBPLibrary Function SetBool
struct Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics
{
	struct SimpleConfigBPLibrary_eventSetBool_Parms
	{
		FString Section;
		FString Key;
		bool Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetBool_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetBool_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((SimpleConfigBPLibrary_eventSetBool_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleConfigBPLibrary_eventSetBool_Parms), &Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetBool_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "SetBool", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::SimpleConfigBPLibrary_eventSetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::SimpleConfigBPLibrary_eventSetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execSetBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL_REF(Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::SetBool(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function SetBool

// Begin Class USimpleConfigBPLibrary Function SetDouble
struct Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics
{
	struct SimpleConfigBPLibrary_eventSetDouble_Parms
	{
		FString Section;
		FString Key;
		double Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetDouble_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetDouble_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetDouble_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetDouble_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "SetDouble", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::SimpleConfigBPLibrary_eventSetDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::SimpleConfigBPLibrary_eventSetDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execSetDouble)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::SetDouble(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function SetDouble

// Begin Class USimpleConfigBPLibrary Function SetFloat
struct Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics
{
	struct SimpleConfigBPLibrary_eventSetFloat_Parms
	{
		FString Section;
		FString Key;
		float Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetFloat_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetFloat_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetFloat_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "SetFloat", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::SimpleConfigBPLibrary_eventSetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::SimpleConfigBPLibrary_eventSetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execSetFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::SetFloat(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function SetFloat

// Begin Class USimpleConfigBPLibrary Function SetInt
struct Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics
{
	struct SimpleConfigBPLibrary_eventSetInt_Parms
	{
		FString Section;
		FString Key;
		int32 Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetInt_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetInt_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetInt_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "SetInt", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::SimpleConfigBPLibrary_eventSetInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::SimpleConfigBPLibrary_eventSetInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execSetInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::SetInt(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function SetInt

// Begin Class USimpleConfigBPLibrary Function SetRotator
struct Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics
{
	struct SimpleConfigBPLibrary_eventSetRotator_Parms
	{
		FString Section;
		FString Key;
		FRotator Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetRotator_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetRotator_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetRotator_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "SetRotator", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::SimpleConfigBPLibrary_eventSetRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::SimpleConfigBPLibrary_eventSetRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execSetRotator)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::SetRotator(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function SetRotator

// Begin Class USimpleConfigBPLibrary Function SetString
struct Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics
{
	struct SimpleConfigBPLibrary_eventSetString_Parms
	{
		FString Section;
		FString Key;
		FString Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetString_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetString_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetString_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetString_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "SetString", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::SimpleConfigBPLibrary_eventSetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::SimpleConfigBPLibrary_eventSetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_SetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_SetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execSetString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::SetString(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function SetString

// Begin Class USimpleConfigBPLibrary Function SetText
struct Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics
{
	struct SimpleConfigBPLibrary_eventSetText_Parms
	{
		FString Section;
		FString Key;
		FText Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetText_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetText_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetText_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetText_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "SetText", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::SimpleConfigBPLibrary_eventSetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::SimpleConfigBPLibrary_eventSetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_SetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_SetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execSetText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::SetText(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function SetText

// Begin Class USimpleConfigBPLibrary Function SetVector
struct Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics
{
	struct SimpleConfigBPLibrary_eventSetVector_Parms
	{
		FString Section;
		FString Key;
		FVector Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetVector_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetVector_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetVector_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "SetVector", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::SimpleConfigBPLibrary_eventSetVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::SimpleConfigBPLibrary_eventSetVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execSetVector)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::SetVector(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function SetVector

// Begin Class USimpleConfigBPLibrary Function SetVector4
struct Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics
{
	struct SimpleConfigBPLibrary_eventSetVector4_Parms
	{
		FString Section;
		FString Key;
		FVector4 Value;
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetVector4_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetVector4_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetVector4_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleConfigBPLibrary_eventSetVector4_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleConfigBPLibrary, nullptr, "SetVector4", nullptr, nullptr, Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::SimpleConfigBPLibrary_eventSetVector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::SimpleConfigBPLibrary_eventSetVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleConfigBPLibrary::execSetVector4)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Section);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleConfigBPLibrary::SetVector4(Z_Param_Section,Z_Param_Key,Z_Param_Out_Value,Z_Param_InPath);
	P_NATIVE_END;
}
// End Class USimpleConfigBPLibrary Function SetVector4

// Begin Class USimpleConfigBPLibrary
void USimpleConfigBPLibrary::StaticRegisterNativesUSimpleConfigBPLibrary()
{
	UClass* Class = USimpleConfigBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoesSectionExist", &USimpleConfigBPLibrary::execDoesSectionExist },
		{ "GetArray", &USimpleConfigBPLibrary::execGetArray },
		{ "GetBool", &USimpleConfigBPLibrary::execGetBool },
		{ "GetDouble", &USimpleConfigBPLibrary::execGetDouble },
		{ "GetFloat", &USimpleConfigBPLibrary::execGetFloat },
		{ "GetInt", &USimpleConfigBPLibrary::execGetInt },
		{ "GetRotator", &USimpleConfigBPLibrary::execGetRotator },
		{ "GetSection", &USimpleConfigBPLibrary::execGetSection },
		{ "GetString", &USimpleConfigBPLibrary::execGetString },
		{ "GetText", &USimpleConfigBPLibrary::execGetText },
		{ "GetVector", &USimpleConfigBPLibrary::execGetVector },
		{ "GetVector4", &USimpleConfigBPLibrary::execGetVector4 },
		{ "SetArray", &USimpleConfigBPLibrary::execSetArray },
		{ "SetBool", &USimpleConfigBPLibrary::execSetBool },
		{ "SetDouble", &USimpleConfigBPLibrary::execSetDouble },
		{ "SetFloat", &USimpleConfigBPLibrary::execSetFloat },
		{ "SetInt", &USimpleConfigBPLibrary::execSetInt },
		{ "SetRotator", &USimpleConfigBPLibrary::execSetRotator },
		{ "SetString", &USimpleConfigBPLibrary::execSetString },
		{ "SetText", &USimpleConfigBPLibrary::execSetText },
		{ "SetVector", &USimpleConfigBPLibrary::execSetVector },
		{ "SetVector4", &USimpleConfigBPLibrary::execSetVector4 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleConfigBPLibrary);
UClass* Z_Construct_UClass_USimpleConfigBPLibrary_NoRegister()
{
	return USimpleConfigBPLibrary::StaticClass();
}
struct Z_Construct_UClass_USimpleConfigBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleConfigBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleConfigBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_DoesSectionExist, "DoesSectionExist" }, // 652163199
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_GetArray, "GetArray" }, // 892195208
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_GetBool, "GetBool" }, // 3625345499
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_GetDouble, "GetDouble" }, // 4294823110
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_GetFloat, "GetFloat" }, // 1133819962
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_GetInt, "GetInt" }, // 2920223917
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_GetRotator, "GetRotator" }, // 3670511801
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_GetSection, "GetSection" }, // 4181033323
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_GetString, "GetString" }, // 2147199000
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_GetText, "GetText" }, // 836608849
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector, "GetVector" }, // 3528860875
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_GetVector4, "GetVector4" }, // 2602019069
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_SetArray, "SetArray" }, // 2642371168
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_SetBool, "SetBool" }, // 2028962036
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_SetDouble, "SetDouble" }, // 3813712938
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_SetFloat, "SetFloat" }, // 2078472103
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_SetInt, "SetInt" }, // 975658171
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_SetRotator, "SetRotator" }, // 2794237911
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_SetString, "SetString" }, // 1138373876
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_SetText, "SetText" }, // 1240753903
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector, "SetVector" }, // 4273208271
		{ &Z_Construct_UFunction_USimpleConfigBPLibrary_SetVector4, "SetVector4" }, // 1425875160
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleConfigBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleConfigBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConfigBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleConfigBPLibrary_Statics::ClassParams = {
	&USimpleConfigBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConfigBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleConfigBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleConfigBPLibrary()
{
	if (!Z_Registration_Info_UClass_USimpleConfigBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleConfigBPLibrary.OuterSingleton, Z_Construct_UClass_USimpleConfigBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleConfigBPLibrary.OuterSingleton;
}
template<> SIMPLECONFIG_API UClass* StaticClass<USimpleConfigBPLibrary>()
{
	return USimpleConfigBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleConfigBPLibrary);
USimpleConfigBPLibrary::~USimpleConfigBPLibrary() {}
// End Class USimpleConfigBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleConfig_Source_SimpleConfig_Public_SimpleConfigBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleConfigBPLibrary, USimpleConfigBPLibrary::StaticClass, TEXT("USimpleConfigBPLibrary"), &Z_Registration_Info_UClass_USimpleConfigBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleConfigBPLibrary), 2366309670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleConfig_Source_SimpleConfig_Public_SimpleConfigBPLibrary_h_3768480602(TEXT("/Script/SimpleConfig"),
	Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleConfig_Source_SimpleConfig_Public_SimpleConfigBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleConfig_Source_SimpleConfig_Public_SimpleConfigBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
