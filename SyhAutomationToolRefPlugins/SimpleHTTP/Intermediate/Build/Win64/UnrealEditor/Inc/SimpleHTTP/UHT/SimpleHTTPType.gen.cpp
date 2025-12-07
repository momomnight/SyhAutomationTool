// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleHTTPType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleHTTPType() {}
// Cross Module References
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleHTTP_EHTTPRequestType_Statics::Enumerators[] = {
		{ "EHTTPRequestType::SINGLE", (int64)EHTTPRequestType::SINGLE },
		{ "EHTTPRequestType::MULTPLE", (int64)EHTTPRequestType::MULTPLE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleHTTP_EHTTPRequestType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
		{ "MULTPLE.DisplayName", "Multple" },
		{ "MULTPLE.Name", "EHTTPRequestType::MULTPLE" },
		{ "SINGLE.DisplayName", "Single" },
		{ "SINGLE.Name", "EHTTPRequestType::SINGLE" },
	};
#endif
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte_Statics::Enumerators[] = {
		{ "FSimpleHttpStarte::NotStarted", (int64)FSimpleHttpStarte::NotStarted },
		{ "FSimpleHttpStarte::Processing", (int64)FSimpleHttpStarte::Processing },
		{ "FSimpleHttpStarte::Failed", (int64)FSimpleHttpStarte::Failed },
		{ "FSimpleHttpStarte::Failed_ConnectionError", (int64)FSimpleHttpStarte::Failed_ConnectionError },
		{ "FSimpleHttpStarte::Succeeded", (int64)FSimpleHttpStarte::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte_Statics::Enum_MetaDataParams[] = {
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
#endif
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType_Statics::Enumerators[] = {
		{ "ESimpleHTTPVerbType::SIMPLE_POST", (int64)ESimpleHTTPVerbType::SIMPLE_POST },
		{ "ESimpleHTTPVerbType::SIMPLE_PUT", (int64)ESimpleHTTPVerbType::SIMPLE_PUT },
		{ "ESimpleHTTPVerbType::SIMPLE_GET", (int64)ESimpleHTTPVerbType::SIMPLE_GET },
		{ "ESimpleHTTPVerbType::SIMPLE_DELETE", (int64)ESimpleHTTPVerbType::SIMPLE_DELETE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType_Statics::Enum_MetaDataParams[] = {
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
#endif
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
	DEFINE_FUNCTION(USimpleHttpContent::execSave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LocalPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Save(Z_Param_LocalPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHttpContent::execGetContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetContent();
		P_NATIVE_END;
	}
	void USimpleHttpContent::StaticRegisterNativesUSimpleHttpContent()
	{
		UClass* Class = USimpleHttpContent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetContent", &USimpleHttpContent::execGetContent },
			{ "Save", &USimpleHttpContent::execSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics
	{
		struct SimpleHttpContent_eventGetContent_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHttpContent_eventGetContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|HttpContent" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHttpContent, nullptr, "GetContent", nullptr, nullptr, Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::SimpleHttpContent_eventGetContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_GetContent_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_USimpleHttpContent_Save_Statics
	{
		struct SimpleHttpContent_eventSave_Parms
		{
			FString LocalPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_LocalPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_LocalPath = { "LocalPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHttpContent_eventSave_Parms, LocalPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_LocalPath_MetaData), Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_LocalPath_MetaData) };
	void Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHttpContent_eventSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHttpContent_eventSave_Parms), &Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHttpContent_Save_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_LocalPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHttpContent_Save_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHttpContent_Save_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|HttpContent" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHttpContent_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHttpContent, nullptr, "Save", nullptr, nullptr, Z_Construct_UFunction_USimpleHttpContent_Save_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_Save_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHttpContent_Save_Statics::SimpleHttpContent_eventSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_Save_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHttpContent_Save_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHttpContent_Save_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleHttpContent);
	UClass* Z_Construct_UClass_USimpleHttpContent_NoRegister()
	{
		return USimpleHttpContent::StaticClass();
	}
	struct Z_Construct_UClass_USimpleHttpContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleHttpContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleHTTP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleHttpContent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleHttpContent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleHttpContent_GetContent, "GetContent" }, // 1494035464
		{ &Z_Construct_UFunction_USimpleHttpContent_Save, "Save" }, // 2594150147
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleHttpContent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleHttpContent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleHTTPType.h" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleHttpContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleHttpContent>::IsAbstract,
	};
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllHeaders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllHeaders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllHeaders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ContentLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleHttpBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpBase" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpBase, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_URL_MetaData), Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_AllHeaders_Inner = { "AllHeaders", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_AllHeaders_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpBase" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_AllHeaders = { "AllHeaders", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpBase, AllHeaders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_AllHeaders_MetaData), Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_AllHeaders_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentType_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpBase" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpBase, ContentType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentType_MetaData), Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentLength_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpBase" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentLength = { "ContentLength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpBase, ContentLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentLength_MetaData), Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentLength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_AllHeaders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_AllHeaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewProp_ContentLength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleHttpBase()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleHttpBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleHttpBase.InnerSingleton, Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleHttpBase.InnerSingleton;
	}

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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Verb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleHttpRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Verb_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpRequest" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpRequest, Verb), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Verb_MetaData), Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Verb_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpRequest" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpRequest, ElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_ElapsedTime_MetaData), Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_ElapsedTime_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpRequest" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpRequest, Status), Z_Construct_UEnum_SimpleHTTP_FSimpleHttpStarte, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Status_MetaData), Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Status_MetaData) }; // 2654786380
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Verb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_ElapsedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewProp_Status,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleHttpRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleHttpRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleHttpRequest.InnerSingleton, Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleHttpRequest.InnerSingleton;
	}

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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleHttpResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseCode_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpResponse" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpResponse, ResponseCode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseCode_MetaData), Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseCode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseMessage_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpResponse" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseMessage = { "ResponseMessage", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpResponse, ResponseMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseMessage_MetaData), Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseMessage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "SimpleHttpBase|SimpleHttpResponse" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHttpResponse, Content), Z_Construct_UClass_USimpleHttpContent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_Content_MetaData), Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_Content_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_ResponseMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewProp_Content,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleHttpResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleHttpResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleHttpResponse.InnerSingleton, Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleHttpResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics
	{
		struct _Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms
		{
			FSimpleHttpRequest Request;
			FSimpleHttpResponse Response;
			bool bConnectedSuccessfully;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static void NewProp_bConnectedSuccessfully_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnectedSuccessfully;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms, Request), Z_Construct_UScriptStruct_FSimpleHttpRequest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_Request_MetaData), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_Request_MetaData) }; // 180723591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms, Response), Z_Construct_UScriptStruct_FSimpleHttpResponse, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_Response_MetaData), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::NewProp_Response_MetaData) }; // 1702700340
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//BP\n" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
		{ "ToolTip", "BP" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleHTTP, nullptr, "SimpleHttpSingleRequestCompleteDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::_Script_SimpleHTTP_eventSimpleHttpSingleRequestCompleteDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics
	{
		struct _Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms
		{
			FSimpleHttpRequest Request;
			uint64 BytesSent;
			uint64 BytesReceived;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_BytesSent;
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_BytesReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms, Request), Z_Construct_UScriptStruct_FSimpleHttpRequest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_Request_MetaData), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_Request_MetaData) }; // 180723591
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_BytesSent = { "BytesSent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms, BytesSent), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms, BytesReceived), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_BytesSent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::NewProp_BytesReceived,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleHTTP, nullptr, "SimpleHttpSingleRequestProgressDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::_Script_SimpleHTTP_eventSimpleHttpSingleRequestProgressDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms
		{
			FSimpleHttpRequest Request;
			FString HeaderName;
			FString NewHeaderValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewHeaderValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewHeaderValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms, Request), Z_Construct_UScriptStruct_FSimpleHttpRequest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_Request_MetaData), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_Request_MetaData) }; // 180723591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms, HeaderName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_HeaderName_MetaData), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_HeaderName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_NewHeaderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_NewHeaderValue = { "NewHeaderValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms, NewHeaderValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_NewHeaderValue_MetaData), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_NewHeaderValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_HeaderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::NewProp_NewHeaderValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleHTTP, nullptr, "SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::_Script_SimpleHTTP_eventSimpleHttpSingleRequestHeaderReceivedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleHttpRequestCompleteDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_SimpleHttpRequestCompleteDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleHttpRequestProgressDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_SimpleHttpRequestProgressDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleHttpRequestHeaderReceivedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_SimpleHttpRequestHeaderReceivedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllRequestCompleteDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AllRequestCompleteDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleHTTPBPResponseDelegate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestCompleteDelegate_MetaData[] = {
		{ "Category", "SimpleHTTP|HTTPResponseDelegate" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestCompleteDelegate = { "SimpleHttpRequestCompleteDelegate", nullptr, (EPropertyFlags)0x00100000000a0005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHTTPBPResponseDelegate, SimpleHttpRequestCompleteDelegate), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestCompleteDelegate_MetaData), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestCompleteDelegate_MetaData) }; // 454639103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestProgressDelegate_MetaData[] = {
		{ "Category", "SimpleHTTP|HTTPResponseDelegate" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestProgressDelegate = { "SimpleHttpRequestProgressDelegate", nullptr, (EPropertyFlags)0x00100000000a0005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHTTPBPResponseDelegate, SimpleHttpRequestProgressDelegate), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestProgressDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestProgressDelegate_MetaData), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestProgressDelegate_MetaData) }; // 1401825503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestHeaderReceivedDelegate_MetaData[] = {
		{ "Category", "SimpleHTTP|HTTPResponseDelegate" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestHeaderReceivedDelegate = { "SimpleHttpRequestHeaderReceivedDelegate", nullptr, (EPropertyFlags)0x00100000000a0005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHTTPBPResponseDelegate, SimpleHttpRequestHeaderReceivedDelegate), Z_Construct_UDelegateFunction_SimpleHTTP_SimpleHttpSingleRequestHeaderReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestHeaderReceivedDelegate_MetaData), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestHeaderReceivedDelegate_MetaData) }; // 2789902468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_AllRequestCompleteDelegate_MetaData[] = {
		{ "Category", "SimpleHTTP|HTTPResponseDelegate" },
		{ "ModuleRelativePath", "Public/SimpleHTTPType.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_AllRequestCompleteDelegate = { "AllRequestCompleteDelegate", nullptr, (EPropertyFlags)0x00100000000a0005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHTTPBPResponseDelegate, AllRequestCompleteDelegate), Z_Construct_UDelegateFunction_SimpleHTTP_AllRequestCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_AllRequestCompleteDelegate_MetaData), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_AllRequestCompleteDelegate_MetaData) }; // 1663500388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestCompleteDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestProgressDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_SimpleHttpRequestHeaderReceivedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewProp_AllRequestCompleteDelegate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleHTTPBPResponseDelegate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleHTTPBPResponseDelegate.InnerSingleton, Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleHTTPBPResponseDelegate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::EnumInfo[] = {
		{ EHTTPRequestType_StaticEnum, TEXT("EHTTPRequestType"), &Z_Registration_Info_UEnum_EHTTPRequestType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3493020419U) },
		{ FSimpleHttpStarte_StaticEnum, TEXT("FSimpleHttpStarte"), &Z_Registration_Info_UEnum_FSimpleHttpStarte, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2654786380U) },
		{ ESimpleHTTPVerbType_StaticEnum, TEXT("ESimpleHTTPVerbType"), &Z_Registration_Info_UEnum_ESimpleHTTPVerbType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 10049799U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::ScriptStructInfo[] = {
		{ FSimpleHttpBase::StaticStruct, Z_Construct_UScriptStruct_FSimpleHttpBase_Statics::NewStructOps, TEXT("SimpleHttpBase"), &Z_Registration_Info_UScriptStruct_SimpleHttpBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleHttpBase), 3793932622U) },
		{ FSimpleHttpRequest::StaticStruct, Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics::NewStructOps, TEXT("SimpleHttpRequest"), &Z_Registration_Info_UScriptStruct_SimpleHttpRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleHttpRequest), 180723591U) },
		{ FSimpleHttpResponse::StaticStruct, Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics::NewStructOps, TEXT("SimpleHttpResponse"), &Z_Registration_Info_UScriptStruct_SimpleHttpResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleHttpResponse), 1702700340U) },
		{ FSimpleHTTPBPResponseDelegate::StaticStruct, Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics::NewStructOps, TEXT("SimpleHTTPBPResponseDelegate"), &Z_Registration_Info_UScriptStruct_SimpleHTTPBPResponseDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleHTTPBPResponseDelegate), 4276125514U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleHttpContent, USimpleHttpContent::StaticClass, TEXT("USimpleHttpContent"), &Z_Registration_Info_UClass_USimpleHttpContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleHttpContent), 3145144398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_4014585302(TEXT("/Script/SimpleHTTP"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
