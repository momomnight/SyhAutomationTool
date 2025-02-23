// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObject/SimplePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplePlayer() {}
// Cross Module References
	SIMPLENETCHANNEL_API UClass* Z_Construct_UClass_USimpleNetworkObject();
	SIMPLENETCHANNEL_API UClass* Z_Construct_UClass_USimplePlayer();
	SIMPLENETCHANNEL_API UClass* Z_Construct_UClass_USimplePlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleNetChannel();
// End Cross Module References
	void USimplePlayer::StaticRegisterNativesUSimplePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimplePlayer);
	UClass* Z_Construct_UClass_USimplePlayer_NoRegister()
	{
		return USimplePlayer::StaticClass();
	}
	struct Z_Construct_UClass_USimplePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleNetworkObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleNetChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UObject/SimplePlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UObject/SimplePlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimplePlayer_Statics::ClassParams = {
		&USimplePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimplePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplePlayer()
	{
		if (!Z_Registration_Info_UClass_USimplePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimplePlayer.OuterSingleton, Z_Construct_UClass_USimplePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimplePlayer.OuterSingleton;
	}
	template<> SIMPLENETCHANNEL_API UClass* StaticClass<USimplePlayer>()
	{
		return USimplePlayer::StaticClass();
	}
	USimplePlayer::USimplePlayer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplePlayer);
	USimplePlayer::~USimplePlayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_SimplePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_SimplePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimplePlayer, USimplePlayer::StaticClass, TEXT("USimplePlayer"), &Z_Registration_Info_UClass_USimplePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimplePlayer), 1904954741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_SimplePlayer_h_422040885(TEXT("/Script/SimpleNetChannel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_SimplePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_UObject_SimplePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
