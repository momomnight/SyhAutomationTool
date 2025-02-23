// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleHTTP/Public/SimpleHTTPType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleHTTPType() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SIMPLEHTTP_API UClass* Z_Construct_UClass_USimpleHttpContent();
SIMPLEHTTP_API UClass* Z_Construct_UClass_USimpleHttpContent_NoRegister();
SIMPLEHTTP_API UEnum* Z_Construct_UEnum_SimpleHTTP_EHTTPRequestType();
SIMPLEHTTP_API UEnum* Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType();
SIMPLEHTTP_API UEnum* Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte();
SIMPLEHTTP_API UFunction* Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature();
SIMPLEHTTP_API UFunction* Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature();
SIMPLEHTTP_API UFunction* Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature();
SIMPLEHTTP_API UFunction* Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature();
SIMPLEHTTP_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHttpBase();
SIMPLEHTTP_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate();
SIMPLEHTTP_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHttpRequest();
SIMPLEHTTP_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHttpResponse();
UPackage* Z_Construct_UPackage__Script_SimpleHTTP();
// End Cross Module References

// Begin Enum EHTTPRequestType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHTTPRequestType;
static UEnum* EHTTPRequestType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHTTPRequestType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHTTPRequestType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleHTTP_EHTTPRequestType, (UObject*)Z_Construct_UPackage__Script_SimpleHTTP(), TEXT("EHTTPRequestType"));
	}
	return Z_Registration_Info_UEnum_EHTTPRequestType.OuterSingleton;
}
template<> SIMPLEHTTP_API UEnum* StaticEnum<EHTTPRequestType>()
{
	return EHTTPRequestType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleHTTP_EHTTPRequestType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
		{ "MULTPLE.DisplayName", "Multple" },
		{ "MULTPLE.Name", "EHTTPRequestType::MULTPLE" },
		{ "SINGLE.DisplayName", "Single" },
		{ "SINGLE.Name", "EHTTPRequestType::SINGLE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHTTPRequestType::SINGLE", (int64)EHTTPRequestType::SINGLE },
		{ "EHTTPRequestType::MULTPLE", (int64)EHTTPRequestType::MULTPLE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleHTTP_EHTTPRequestType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleHTTP,
	nullptr,
	"EHTTPRequestType",
	"EHTTPRequestType",
	Z_Construct_UEnum_SimpleHTTP_EHTTPRequestType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleHTTP_EHTTPRequestType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleHTTP_EHTTPRequestType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleHTTP_EHTTPRequestType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleHTTP_EHTTPRequestType()
{
	if (!Z_Registration_Info_UEnum_EHTTPRequestType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHTTPRequestType.InnerSingleton, Z_Construct_UEnum_SimpleHTTP_EHTTPRequestType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHTTPRequestType.InnerSingleton;
}
// End Enum EHTTPRequestType

// Begin Enum FSimpleHttpStarte
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FSimpleHttpStarte;
static UEnum* FSimpleHttpStarte_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FSimpleHttpStarte.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FSimpleHttpStarte.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte, (UObject*)Z_Construct_UPackage__Script_SimpleHTTP(), TEXT("FSimpleHttpStarte"));
	}
	return Z_Registration_Info_UEnum_FSimpleHttpStarte.OuterSingleton;
}
template<> SIMPLEHTTP_API UEnum* StaticEnum<FSimpleHttpStarte>()
{
	return FSimpleHttpStarte_StaticEnum();
}
struct Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.Name", "FSimpleHttpStarte::Failed" },
		{ "Failed_ConnectionError.Name", "FSimpleHttpStarte::Failed_ConnectionError" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
		{ "NotStarted.Name", "FSimpleHttpStarte::NotStarted" },
		{ "Processing.Comment", "//ProcessRequest()\n" },
		{ "Processing.Name", "FSimpleHttpStarte::Processing" },
		{ "Processing.ToolTip", "ProcessRequest()" },
		{ "Succeeded.Name", "FSimpleHttpStarte::Succeeded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FSimpleHttpStarte::NotStarted", (int64)FSimpleHttpStarte::NotStarted },
		{ "FSimpleHttpStarte::Processing", (int64)FSimpleHttpStarte::Processing },
		{ "FSimpleHttpStarte::Failed", (int64)FSimpleHttpStarte::Failed },
		{ "FSimpleHttpStarte::Failed_ConnectionError", (int64)FSimpleHttpStarte::Failed_ConnectionError },
		{ "FSimpleHttpStarte::Succeeded", (int64)FSimpleHttpStarte::Succeeded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleHTTP,
	nullptr,
	"FSimpleHttpStarte",
	"FSimpleHttpStarte",
	Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte()
{
	if (!Z_Registration_Info_UEnum_FSimpleHttpStarte.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FSimpleHttpStarte.InnerSingleton, Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FSimpleHttpStarte.InnerSingleton;
}
// End Enum FSimpleHttpStarte

// Begin Enum ESimpleHTTPVerbType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleHTTPVerbType;
static UEnum* ESimpleHTTPVerbType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimpleHTTPVerbType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimpleHTTPVerbType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType, (UObject*)Z_Construct_UPackage__Script_SimpleHTTP(), TEXT("ESimpleHTTPVerbType"));
	}
	return Z_Registration_Info_UEnum_ESimpleHTTPVerbType.OuterSingleton;
}
template<> SIMPLEHTTP_API UEnum* StaticEnum<ESimpleHTTPVerbType>()
{
	return ESimpleHTTPVerbType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
		{ "SIMPLE_DELETE.DisplayName", "Delete" },
		{ "SIMPLE_DELETE.Name", "ESimpleHTTPVerbType::SIMPLE_DELETE" },
		{ "SIMPLE_GET.DisplayName", "Get" },
		{ "SIMPLE_GET.Name", "ESimpleHTTPVerbType::SIMPLE_GET" },
		{ "SIMPLE_POST.DisplayName", "Post" },
		{ "SIMPLE_POST.Name", "ESimpleHTTPVerbType::SIMPLE_POST" },
		{ "SIMPLE_PUT.DisplayName", "Put" },
		{ "SIMPLE_PUT.Name", "ESimpleHTTPVerbType::SIMPLE_PUT" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimpleHTTPVerbType::SIMPLE_POST", (int64)ESimpleHTTPVerbType::SIMPLE_POST },
		{ "ESimpleHTTPVerbType::SIMPLE_PUT", (int64)ESimpleHTTPVerbType::SIMPLE_PUT },
		{ "ESimpleHTTPVerbType::SIMPLE_GET", (int64)ESimpleHTTPVerbType::SIMPLE_GET },
		{ "ESimpleHTTPVerbType::SIMPLE_DELETE", (int64)ESimpleHTTPVerbType::SIMPLE_DELETE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleHTTP,
	nullptr,
	"ESimpleHTTPVerbType",
	"ESimpleHTTPVerbType",
	Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType()
{
	if (!Z_Registration_Info_UEnum_ESimpleHTTPVerbType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleHTTPVerbType.InnerSingleton, Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimpleHTTPVerbType.InnerSingleton;
}
// End Enum ESimpleHTTPVerbType

// Begin Class USimpleHttpContent Function GetContent
struct Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics
{
	struct SimpleHttpContent_eventGetContent_Parms
	{
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|HttpContent" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHttpContent_eventGetContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHttpContent, nullptr, "GetContent", nullptr, nullptr, Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::SimpleHttpContent_eventGetContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::SimpleHttpContent_eventGetContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleHttpContent_GetContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleHttpContent::execGetContent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->GetContent();
	P_NATIVE_END;
}
// End Class USimpleHttpContent Function GetContent

// Begin Class USimpleHttpContent Function Save
struct Z_Construct_UFunction_USimpleHttpContent_Save_Statics
{
	struct SimpleHttpContent_eventSave_Parms
	{
		FString LocalPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|HttpContent" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_LocalPath = { "LocalPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHttpContent_eventSave_Parms, LocalPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPath_MetaData), NewProp_LocalPath_MetaData) };
void Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleHttpContent_eventSave_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHttpContent_eventSave_Parms), &Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHttpContent_Save_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_LocalPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_Save_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHttpContent_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHttpContent, nullptr, "Save", nullptr, nullptr, Z_Construct_UFunction_USimpleHttpContent_Save_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_Save_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHttpContent_Save_Statics::SimpleHttpContent_eventSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_Save_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHttpContent_Save_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleHttpContent_Save_Statics::SimpleHttpContent_eventSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleHttpContent_Save()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHttpContent_Save_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleHttpContent::execSave)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LocalPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Save(Z_Param_LocalPath);
	P_NATIVE_END;
}
// End Class USimpleHttpContent Function Save

// Begin Class USimpleHttpContent
void USimpleHttpContent::StaticRegisterNativesUSimpleHttpContent()
{
	UClass* Class = USimpleHttpContent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetContent", &USimpleHttpContent::execGetContent },
		{ "Save", &USimpleHttpContent::execSave },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleHttpContent);
UClass* Z_Construct_UClass_USimpleHttpContent_NoRegister()
{
	return USimpleHttpContent::StaticClass();
}
struct Z_Construct_UClass_USimpleHttpContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleHTTPType.h" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleHttpContent_GetContent, "GetContent" }, // 1083585669
		{ &Z_Construct_UFunction_USimpleHttpContent_Save, "Save" }, // 2837821094
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleHttpContent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleHttpContent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleHTTP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleHttpContent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleHttpContent_Statics::ClassParams = {
	&USimpleHttpContent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleHttpContent_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleHttpContent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleHttpContent()
{
	if (!Z_Registration_Info_UClass_USimpleHttpContent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleHttpContent.OuterSingleton, Z_Construct_UClass_USimpleHttpContent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleHttpContent.OuterSingleton;
}
template<> SIMPLEHTTP_API UClass* StaticClass<USimpleHttpContent>()
{
	return USimpleHttpContent::StaticClass();
}
USimpleHttpContent::USimpleHttpContent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleHttpContent);
USimpleHttpContent::~USimpleHttpContent() {}
// End Class USimpleHttpContent

// Begin ScriptStruct FSimpleHttpBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleHttpBase;
class UScriptStruct* FSimpleHttpBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleHttpBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleHttpBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleHttpBase, (UObject*)Z_Construct_UPackage__Script_SimpleHTTP(), TEXT("SimpleHttpBase"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleHttpBase.OuterSingleton;
}
template<> SIMPLEHTTP_API UScriptStruct* StaticStruct<FSimpleHttpBase>()
{
	return FSimpleHttpBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleHttpBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpBase" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllHeaders_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpBase" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpBase" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentLength_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpBase" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllHeaders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllHeaders;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ContentLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleHttpBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpBase, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_AllHeaders_Inner = { "AllHeaders", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_AllHeaders = { "AllHeaders", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpBase, AllHeaders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllHeaders_MetaData), NewProp_AllHeaders_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpBase, ContentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentType_MetaData), NewProp_ContentType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentLength = { "ContentLength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpBase, ContentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentLength_MetaData), NewProp_ContentLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_AllHeaders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_AllHeaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleHTTP,
	nullptr,
	&NewStructOps,
	"SimpleHttpBase",
	Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::PropPointers),
	sizeof(FSimpleHttpBase),
	alignof(FSimpleHttpBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleHttpBase()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleHttpBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleHttpBase.InnerSingleton, Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleHttpBase.InnerSingleton;
}
// End ScriptStruct FSimpleHttpBase

// Begin ScriptStruct FSimpleHttpRequest
static_assert(std::is_polymorphic<FSimpleHttpRequest>() == std::is_polymorphic<FSimpleHttpBase>(), "USTRUCT FSimpleHttpRequest cannot be polymorphic unless super FSimpleHttpBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleHttpRequest;
class UScriptStruct* FSimpleHttpRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleHttpRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleHttpRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleHttpRequest, (UObject*)Z_Construct_UPackage__Script_SimpleHTTP(), TEXT("SimpleHttpRequest"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleHttpRequest.OuterSingleton;
}
template<> SIMPLEHTTP_API UScriptStruct* StaticStruct<FSimpleHttpRequest>()
{
	return FSimpleHttpRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpRequest" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpRequest" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpRequest" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleHttpRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpRequest, Verb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Verb_MetaData), NewProp_Verb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpRequest, ElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTime_MetaData), NewProp_ElapsedTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpRequest, Status), Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 2351369944
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Verb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_ElapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleHTTP,
	Z_Construct_UScriptStruct_FSimpleHttpBase,
	&NewStructOps,
	"SimpleHttpRequest",
	Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::PropPointers),
	sizeof(FSimpleHttpRequest),
	alignof(FSimpleHttpRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleHttpRequest()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleHttpRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleHttpRequest.InnerSingleton, Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleHttpRequest.InnerSingleton;
}
// End ScriptStruct FSimpleHttpRequest

// Begin ScriptStruct FSimpleHttpResponse
static_assert(std::is_polymorphic<FSimpleHttpResponse>() == std::is_polymorphic<FSimpleHttpBase>(), "USTRUCT FSimpleHttpResponse cannot be polymorphic unless super FSimpleHttpBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleHttpResponse;
class UScriptStruct* FSimpleHttpResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleHttpResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleHttpResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleHttpResponse, (UObject*)Z_Construct_UPackage__Script_SimpleHTTP(), TEXT("SimpleHttpResponse"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleHttpResponse.OuterSingleton;
}
template<> SIMPLEHTTP_API UScriptStruct* StaticStruct<FSimpleHttpResponse>()
{
	return FSimpleHttpResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpResponse" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseMessage_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpResponse" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpResponse" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleHttpResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpResponse, ResponseCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseCode_MetaData), NewProp_ResponseCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseMessage = { "ResponseMessage", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpResponse, ResponseMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseMessage_MetaData), NewProp_ResponseMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0114000000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpResponse, Content), Z_Construct_UClass_USimpleHttpContent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleHTTP,
	Z_Construct_UScriptStruct_FSimpleHttpBase,
	&NewStructOps,
	"SimpleHttpResponse",
	Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::PropPointers),
	sizeof(FSimpleHttpResponse),
	alignof(FSimpleHttpResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleHttpResponse()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleHttpResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleHttpResponse.InnerSingleton, Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleHttpResponse.InnerSingleton;
}
// End ScriptStruct FSimpleHttpResponse

// Begin Delegate FSimpleHttpSingleRequestCompleteDelegate
struct Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics
{
	struct _Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms
	{
		FSimpleHttpRequest Request;
		FSimpleHttpResponse Response;
		bool bConnectedSuccessfully;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//BP\n" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
		{ "ToolTip", "BP" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static void NewProp_bConnectedSuccessfully_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnectedSuccessfully;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms, Request), Z_Construct_UScriptStruct_FSimpleHttpRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1975266138
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms, Response), Z_Construct_UScriptStruct_FSimpleHttpResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 3206149253
void Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_bConnectedSuccessfully_SetBit(void* Obj)
{
	((_Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms*)Obj)->bConnectedSuccessfully = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_bConnectedSuccessfully = { "bConnectedSuccessfully", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms), &Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_bConnectedSuccessfully_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_bConnectedSuccessfully,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleHTTP, nullptr, "SimpleHttpSingleRequestCompleteDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::_Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::_Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSimpleHttpSingleRequestCompleteDelegate_DelegateWrapper(const FScriptDelegate& SimpleHttpSingleRequestCompleteDelegate, const FSimpleHttpRequest Request, const FSimpleHttpResponse Response, bool bConnectedSuccessfully)
{
	struct _Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms
	{
		FSimpleHttpRequest Request;
		FSimpleHttpResponse Response;
		bool bConnectedSuccessfully;
	};
	_Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms Parms;
	Parms.Request=Request;
	Parms.Response=Response;
	Parms.bConnectedSuccessfully=bConnectedSuccessfully ? true : false;
	SimpleHttpSingleRequestCompleteDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FSimpleHttpSingleRequestCompleteDelegate

// Begin Delegate FSimpleHttpSingleRequestProgressDelegate
struct Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics
{
	struct _Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms
	{
		FSimpleHttpRequest Request;
		uint64 BytesSent;
		uint64 BytesReceived;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_BytesSent;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_BytesReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms, Request), Z_Construct_UScriptStruct_FSimpleHttpRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1975266138
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_BytesSent = { "BytesSent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms, BytesSent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms, BytesReceived), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_BytesSent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_BytesReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleHTTP, nullptr, "SimpleHttpSingleRequestProgressDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::_Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::_Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSimpleHttpSingleRequestProgressDelegate_DelegateWrapper(const FScriptDelegate& SimpleHttpSingleRequestProgressDelegate, const FSimpleHttpRequest Request, uint64 BytesSent, uint64 BytesReceived)
{
	struct _Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms
	{
		FSimpleHttpRequest Request;
		uint64 BytesSent;
		uint64 BytesReceived;
	};
	_Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms Parms;
	Parms.Request=Request;
	Parms.BytesSent=BytesSent;
	Parms.BytesReceived=BytesReceived;
	SimpleHttpSingleRequestProgressDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FSimpleHttpSingleRequestProgressDelegate

// Begin Delegate FSimpleHttpSingleRequestHeaderReceivedDelegate
struct Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics
{
	struct _Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms
	{
		FSimpleHttpRequest Request;
		FString HeaderName;
		FString NewHeaderValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewHeaderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewHeaderValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms, Request), Z_Construct_UScriptStruct_FSimpleHttpRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1975266138
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms, HeaderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderName_MetaData), NewProp_HeaderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_NewHeaderValue = { "NewHeaderValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms, NewHeaderValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewHeaderValue_MetaData), NewProp_NewHeaderValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_HeaderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_NewHeaderValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleHTTP, nullptr, "SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::_Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::_Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSimpleHttpSingleRequestHeaderReceivedDelegate_DelegateWrapper(const FScriptDelegate& SimpleHttpSingleRequestHeaderReceivedDelegate, const FSimpleHttpRequest Request, const FString& HeaderName, const FString& NewHeaderValue)
{
	struct _Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms
	{
		FSimpleHttpRequest Request;
		FString HeaderName;
		FString NewHeaderValue;
	};
	_Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms Parms;
	Parms.Request=Request;
	Parms.HeaderName=HeaderName;
	Parms.NewHeaderValue=NewHeaderValue;
	SimpleHttpSingleRequestHeaderReceivedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FSimpleHttpSingleRequestHeaderReceivedDelegate

// Begin Delegate FAllRequestCompleteDelegate
struct Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleHTTP, nullptr, "AllRequestCompleteDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAllRequestCompleteDelegate_DelegateWrapper(const FScriptDelegate& AllRequestCompleteDelegate)
{
	AllRequestCompleteDelegate.ProcessDelegate<UObject>(NULL);
}
// End Delegate FAllRequestCompleteDelegate

// Begin ScriptStruct FSimpleHTTPBPResponseDelegate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleHTTPBPResponseDelegate;
class UScriptStruct* FSimpleHTTPBPResponseDelegate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleHTTPBPResponseDelegate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleHTTPBPResponseDelegate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, (UObject*)Z_Construct_UPackage__Script_SimpleHTTP(), TEXT("SimpleHTTPBPResponseDelegate"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleHTTPBPResponseDelegate.OuterSingleton;
}
template<> SIMPLEHTTP_API UScriptStruct* StaticStruct<FSimpleHTTPBPResponseDelegate>()
{
	return FSimpleHTTPBPResponseDelegate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleHttpRequestCompleteDelegate_MetaData[] = {
		{ "Category", "SimpleHTTP|HTTPResponseDelegate" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleHttpRequestProgressDelegate_MetaData[] = {
		{ "Category", "SimpleHTTP|HTTPResponseDelegate" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleHttpRequestHeaderReceivedDelegate_MetaData[] = {
		{ "Category", "SimpleHTTP|HTTPResponseDelegate" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllRequestCompleteDelegate_MetaData[] = {
		{ "Category", "SimpleHTTP|HTTPResponseDelegate" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_SimpleHttpRequestCompleteDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_SimpleHttpRequestProgressDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_SimpleHttpRequestHeaderReceivedDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_AllRequestCompleteDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleHTTPBPResponseDelegate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestCompleteDelegate = { "SimpleHttpRequestCompleteDelegate", nullptr, (EPropertyFlags)0x00100000000a0005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHTTPBPResponseDelegate, SimpleHttpRequestCompleteDelegate), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleHttpRequestCompleteDelegate_MetaData), NewProp_SimpleHttpRequestCompleteDelegate_MetaData) }; // 2773432415
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestProgressDelegate = { "SimpleHttpRequestProgressDelegate", nullptr, (EPropertyFlags)0x00100000000a0005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHTTPBPResponseDelegate, SimpleHttpRequestProgressDelegate), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleHttpRequestProgressDelegate_MetaData), NewProp_SimpleHttpRequestProgressDelegate_MetaData) }; // 3825746147
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestHeaderReceivedDelegate = { "SimpleHttpRequestHeaderReceivedDelegate", nullptr, (EPropertyFlags)0x00100000000a0005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHTTPBPResponseDelegate, SimpleHttpRequestHeaderReceivedDelegate), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleHttpRequestHeaderReceivedDelegate_MetaData), NewProp_SimpleHttpRequestHeaderReceivedDelegate_MetaData) }; // 2885074593
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_AllRequestCompleteDelegate = { "AllRequestCompleteDelegate", nullptr, (EPropertyFlags)0x00100000000a0005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHTTPBPResponseDelegate, AllRequestCompleteDelegate), Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllRequestCompleteDelegate_MetaData), NewProp_AllRequestCompleteDelegate_MetaData) }; // 517084070
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestCompleteDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestProgressDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestHeaderReceivedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_AllRequestCompleteDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleHTTP,
	nullptr,
	&NewStructOps,
	"SimpleHTTPBPResponseDelegate",
	Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::PropPointers),
	sizeof(FSimpleHTTPBPResponseDelegate),
	alignof(FSimpleHTTPBPResponseDelegate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleHTTPBPResponseDelegate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleHTTPBPResponseDelegate.InnerSingleton, Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleHTTPBPResponseDelegate.InnerSingleton;
}
// End ScriptStruct FSimpleHTTPBPResponseDelegate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHTTPRequestType_StaticEnum, TEXT("EHTTPRequestType"), &Z_Registration_Info_UEnum_EHTTPRequestType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2681330177U) },
		{ FSimpleHttpStarte_StaticEnum, TEXT("FSimpleHttpStarte"), &Z_Registration_Info_UEnum_FSimpleHttpStarte, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2351369944U) },
		{ ESimpleHTTPVerbType_StaticEnum, TEXT("ESimpleHTTPVerbType"), &Z_Registration_Info_UEnum_ESimpleHTTPVerbType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 350389960U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSimpleHttpBase::StaticStruct, Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewStructOps, TEXT("SimpleHttpBase"), &Z_Registration_Info_UScriptStruct_SimpleHttpBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleHttpBase), 2857365950U) },
		{ FSimpleHttpRequest::StaticStruct, Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewStructOps, TEXT("SimpleHttpRequest"), &Z_Registration_Info_UScriptStruct_SimpleHttpRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleHttpRequest), 1975266138U) },
		{ FSimpleHttpResponse::StaticStruct, Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewStructOps, TEXT("SimpleHttpResponse"), &Z_Registration_Info_UScriptStruct_SimpleHttpResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleHttpResponse), 3206149253U) },
		{ FSimpleHTTPBPResponseDelegate::StaticStruct, Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewStructOps, TEXT("SimpleHTTPBPResponseDelegate"), &Z_Registration_Info_UScriptStruct_SimpleHTTPBPResponseDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleHTTPBPResponseDelegate), 3521546707U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleHttpContent, USimpleHttpContent::StaticClass, TEXT("USimpleHttpContent"), &Z_Registration_Info_UClass_USimpleHttpContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleHttpContent), 3273024281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_3994620037(TEXT("/Script/SimpleHTTP"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
