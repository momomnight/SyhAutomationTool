// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleHTTPLIBBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleHTTPLIBBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLEHTTPLIB_API UClass* Z_Construct_UClass_USimpleHTTPLIBBPLibrary();
	SIMPLEHTTPLIB_API UClass* Z_Construct_UClass_USimpleHTTPLIBBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleHTTPLIB();
// End Cross Module References
	DEFINE_FUNCTION(USimpleHTTPLIBBPLibrary::execSimpleuWebSocketSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleHTTPLIBBPLibrary::SimpleuWebSocketSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void USimpleHTTPLIBBPLibrary::StaticRegisterNativesUSimpleHTTPLIBBPLibrary()
	{
		UClass* Class = USimpleHTTPLIBBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SimpleuWebSocketSampleFunction", &USimpleHTTPLIBBPLibrary::execSimpleuWebSocketSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics
	{
		struct SimpleHTTPLIBBPLibrary_eventSimpleuWebSocketSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPLIBBPLibrary_eventSimpleuWebSocketSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPLIBBPLibrary_eventSimpleuWebSocketSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleuWebSocketTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "SimpleuWebSocket sample test testing" },
		{ "ModuleRelativePath", "Public/SimpleHTTPLIBBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPLIBBPLibrary, nullptr, "SimpleuWebSocketSampleFunction", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::SimpleHTTPLIBBPLibrary_eventSimpleuWebSocketSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::SimpleHTTPLIBBPLibrary_eventSimpleuWebSocketSampleFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleHTTPLIBBPLibrary);
	UClass* Z_Construct_UClass_USimpleHTTPLIBBPLibrary_NoRegister()
	{
		return USimpleHTTPLIBBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USimpleHTTPLIBBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleHTTPLIBBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleHTTPLIB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleHTTPLIBBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleHTTPLIBBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleHTTPLIBBPLibrary_SimpleuWebSocketSampleFunction, "SimpleuWebSocketSampleFunction" }, // 286884496
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleHTTPLIBBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleHTTPLIBBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleHTTPLIBBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleHTTPLIBBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleHTTPLIBBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleHTTPLIBBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleHTTPLIBBPLibrary_Statics::ClassParams = {
		&USimpleHTTPLIBBPLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleHTTPLIBBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleHTTPLIBBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleHTTPLIBBPLibrary()
	{
		if (!Z_Registration_Info_UClass_USimpleHTTPLIBBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleHTTPLIBBPLibrary.OuterSingleton, Z_Construct_UClass_USimpleHTTPLIBBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleHTTPLIBBPLibrary.OuterSingleton;
	}
	template<> SIMPLEHTTPLIB_API UClass* StaticClass<USimpleHTTPLIBBPLibrary>()
	{
		return USimpleHTTPLIBBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleHTTPLIBBPLibrary);
	USimpleHTTPLIBBPLibrary::~USimpleHTTPLIBBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHTTPLIBBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHTTPLIBBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleHTTPLIBBPLibrary, USimpleHTTPLIBBPLibrary::StaticClass, TEXT("USimpleHTTPLIBBPLibrary"), &Z_Registration_Info_UClass_USimpleHTTPLIBBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleHTTPLIBBPLibrary), 123515379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHTTPLIBBPLibrary_h_2700710379(TEXT("/Script/SimpleHTTPLIB"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHTTPLIBBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHTTPLIBBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
