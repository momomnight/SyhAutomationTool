// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObject/SimpleController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleController() {}
// Cross Module References
	SIMPLENETCHANNEL_API UClass* Z_Construct_UClass_USimpleController();
	SIMPLENETCHANNEL_API UClass* Z_Construct_UClass_USimpleController_NoRegister();
	SIMPLENETCHANNEL_API UClass* Z_Construct_UClass_USimpleNetworkObject();
	SIMPLENETCHANNEL_API UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType();
	UPackage* Z_Construct_UPackage__Script_SimpleNetChannel();
// End Cross Module References
	DEFINE_FUNCTION(USimpleController::execLinkServerInfo)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InType);
		P_GET_PROPERTY(FStrProperty,Z_Param_InMsg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LinkServerInfo(ESimpleNetErrorType(Z_Param_InType),Z_Param_InMsg);
		P_NATIVE_END;
	}
	void USimpleController::StaticRegisterNativesUSimpleController()
	{
		UClass* Class = USimpleController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LinkServerInfo", &USimpleController::execLinkServerInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics
	{
		struct SimpleController_eventLinkServerInfo_Parms
		{
			TEnumAsByte<ESimpleNetErrorType> InType;
			FString InMsg;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMsg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMsg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleController_eventLinkServerInfo_Parms, InType), Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType, METADATA_PARAMS(0, nullptr) }; // 4012382574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::NewProp_InMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleController_eventLinkServerInfo_Parms, InMsg), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::NewProp_InMsg_MetaData), Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::NewProp_InMsg_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::NewProp_InType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::NewProp_InMsg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObject/SimpleController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleController, nullptr, "LinkServerInfo", nullptr, nullptr, Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::SimpleController_eventLinkServerInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::SimpleController_eventLinkServerInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleController_LinkServerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleController_LinkServerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleController);
	UClass* Z_Construct_UClass_USimpleController_NoRegister()
	{
		return USimpleController::StaticClass();
	}
	struct Z_Construct_UClass_USimpleController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleNetworkObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleNetChannel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleController_LinkServerInfo, "LinkServerInfo" }, // 2346787056
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UObject/SimpleController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UObject/SimpleController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleController_Statics::ClassParams = {
		&USimpleController::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleController_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleController()
	{
		if (!Z_Registration_Info_UClass_USimpleController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleController.OuterSingleton, Z_Construct_UClass_USimpleController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleController.OuterSingleton;
	}
	template<> SIMPLENETCHANNEL_API UClass* StaticClass<USimpleController>()
	{
		return USimpleController::StaticClass();
	}
	USimpleController::USimpleController() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleController);
	USimpleController::~USimpleController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_SimpleController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_SimpleController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleController, USimpleController::StaticClass, TEXT("USimpleController"), &Z_Registration_Info_UClass_USimpleController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleController), 1520713704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_SimpleController_h_1337112222(TEXT("/Script/SimpleNetChannel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_SimpleController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_SimpleController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
