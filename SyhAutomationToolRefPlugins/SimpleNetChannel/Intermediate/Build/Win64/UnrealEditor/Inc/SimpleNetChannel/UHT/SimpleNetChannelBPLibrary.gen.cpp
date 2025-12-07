// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNetChannelBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleNetChannelBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLENETCHANNEL_API UClass* Z_Construct_UClass_USimpleNetChannelBPLibrary();
	SIMPLENETCHANNEL_API UClass* Z_Construct_UClass_USimpleNetChannelBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleNetChannel();
// End Cross Module References
	DEFINE_FUNCTION(USimpleNetChannelBPLibrary::execSimpleNetChannelSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleNetChannelBPLibrary::SimpleNetChannelSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void USimpleNetChannelBPLibrary::StaticRegisterNativesUSimpleNetChannelBPLibrary()
	{
		UClass* Class = USimpleNetChannelBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SimpleNetChannelSampleFunction", &USimpleNetChannelBPLibrary::execSimpleNetChannelSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics
	{
		struct SimpleNetChannelBPLibrary_eventSimpleNetChannelSampleFunction_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleNetChannelBPLibrary_eventSimpleNetChannelSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleNetChannelBPLibrary_eventSimpleNetChannelSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleNetChannelTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "SimpleNetChannel sample test testing" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleNetChannelBPLibrary, nullptr, "SimpleNetChannelSampleFunction", nullptr, nullptr, Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::SimpleNetChannelBPLibrary_eventSimpleNetChannelSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::SimpleNetChannelBPLibrary_eventSimpleNetChannelSampleFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleNetChannelBPLibrary);
	UClass* Z_Construct_UClass_USimpleNetChannelBPLibrary_NoRegister()
	{
		return USimpleNetChannelBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USimpleNetChannelBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleNetChannelBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleNetChannel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleNetChannelBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleNetChannelBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleNetChannelBPLibrary_SimpleNetChannelSampleFunction, "SimpleNetChannelSampleFunction" }, // 28736553
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleNetChannelBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleNetChannelBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleNetChannelBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleNetChannelBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleNetChannelBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleNetChannelBPLibrary_Statics::ClassParams = {
		&USimpleNetChannelBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleNetChannelBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleNetChannelBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleNetChannelBPLibrary()
	{
		if (!Z_Registration_Info_UClass_USimpleNetChannelBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleNetChannelBPLibrary.OuterSingleton, Z_Construct_UClass_USimpleNetChannelBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleNetChannelBPLibrary.OuterSingleton;
	}
	template<> SIMPLENETCHANNEL_API UClass* StaticClass<USimpleNetChannelBPLibrary>()
	{
		return USimpleNetChannelBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleNetChannelBPLibrary);
	USimpleNetChannelBPLibrary::~USimpleNetChannelBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleNetChannelBPLibrary, USimpleNetChannelBPLibrary::StaticClass, TEXT("USimpleNetChannelBPLibrary"), &Z_Registration_Info_UClass_USimpleNetChannelBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleNetChannelBPLibrary), 3022532685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelBPLibrary_h_2942806279(TEXT("/Script/SimpleNetChannel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
