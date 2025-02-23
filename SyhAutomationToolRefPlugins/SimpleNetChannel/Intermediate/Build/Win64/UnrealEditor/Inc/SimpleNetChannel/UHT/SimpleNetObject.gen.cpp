// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObject/Core/SimpleNetObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleNetObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLENETCHANNEL_API UClass* Z_Construct_UClass_USimpleNetworkObject();
	SIMPLENETCHANNEL_API UClass* Z_Construct_UClass_USimpleNetworkObject_NoRegister();
	SIMPLENETCHANNEL_API UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState();
	UPackage* Z_Construct_UPackage__Script_SimpleNetChannel();
// End Cross Module References
	void USimpleNetworkObject::StaticRegisterNativesUSimpleNetworkObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleNetworkObject);
	UClass* Z_Construct_UClass_USimpleNetworkObject_NoRegister()
	{
		return USimpleNetworkObject::StaticClass();
	}
	struct Z_Construct_UClass_USimpleNetworkObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinkState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleNetworkObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleNetChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleNetworkObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UObject/Core/SimpleNetObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UObject/Core/SimpleNetObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USimpleNetworkObject_Statics::NewProp_LinkState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleNetworkObject_Statics::NewProp_LinkState_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/Core/SimpleNetObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USimpleNetworkObject_Statics::NewProp_LinkState = { "LinkState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleNetworkObject, LinkState), Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState, METADATA_PARAMS(Z_Construct_UClass_USimpleNetworkObject_Statics::NewProp_LinkState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleNetworkObject_Statics::NewProp_LinkState_MetaData)) }; // 352885271
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleNetworkObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleNetworkObject_Statics::NewProp_LinkState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleNetworkObject_Statics::NewProp_LinkState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleNetworkObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleNetworkObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleNetworkObject_Statics::ClassParams = {
		&USimpleNetworkObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleNetworkObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleNetworkObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleNetworkObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleNetworkObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleNetworkObject()
	{
		if (!Z_Registration_Info_UClass_USimpleNetworkObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleNetworkObject.OuterSingleton, Z_Construct_UClass_USimpleNetworkObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleNetworkObject.OuterSingleton;
	}
	template<> SIMPLENETCHANNEL_API UClass* StaticClass<USimpleNetworkObject>()
	{
		return USimpleNetworkObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleNetworkObject);
	USimpleNetworkObject::~USimpleNetworkObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_Core_SimpleNetObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_Core_SimpleNetObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleNetworkObject, USimpleNetworkObject::StaticClass, TEXT("USimpleNetworkObject"), &Z_Registration_Info_UClass_USimpleNetworkObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleNetworkObject), 1285547271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_Core_SimpleNetObject_h_1456913370(TEXT("/Script/SimpleNetChannel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_Core_SimpleNetObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_Core_SimpleNetObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
