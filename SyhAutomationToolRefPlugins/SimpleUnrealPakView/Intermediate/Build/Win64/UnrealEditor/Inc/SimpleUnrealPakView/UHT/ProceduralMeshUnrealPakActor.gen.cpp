// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleUnrealPakView/Source/SimpleUnrealPakView/Public/Actor/ProceduralMeshUnrealPakActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralMeshUnrealPakActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_AProceduralMeshUnrealPakActor();
SIMPLEUNREALPAKVIEW_API UClass* Z_Construct_UClass_AProceduralMeshUnrealPakActor_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleUnrealPakView();
// End Cross Module References

// Begin Class AProceduralMeshUnrealPakActor
void AProceduralMeshUnrealPakActor::StaticRegisterNativesAProceduralMeshUnrealPakActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProceduralMeshUnrealPakActor);
UClass* Z_Construct_UClass_AProceduralMeshUnrealPakActor_NoRegister()
{
	return AProceduralMeshUnrealPakActor::StaticClass();
}
struct Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/ProceduralMeshUnrealPakActor.h" },
		{ "ModuleRelativePath", "Public/Actor/ProceduralMeshUnrealPakActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SkeletalMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Components|Procedural,Animation,Physics" },
		{ "ModuleRelativePath", "Public/Actor/ProceduralMeshUnrealPakActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MMOARPGCharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/ProceduralMeshUnrealPakActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralMeshUnrealPakActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::NewProp_ProceduralMeshComponent = { "ProceduralMeshComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralMeshUnrealPakActor, ProceduralMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMeshComponent_MetaData), NewProp_ProceduralMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralMeshUnrealPakActor, Widget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::NewProp_ProceduralMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUnrealPakView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::ClassParams = {
	&AProceduralMeshUnrealPakActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProceduralMeshUnrealPakActor()
{
	if (!Z_Registration_Info_UClass_AProceduralMeshUnrealPakActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralMeshUnrealPakActor.OuterSingleton, Z_Construct_UClass_AProceduralMeshUnrealPakActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProceduralMeshUnrealPakActor.OuterSingleton;
}
template<> SIMPLEUNREALPAKVIEW_API UClass* StaticClass<AProceduralMeshUnrealPakActor>()
{
	return AProceduralMeshUnrealPakActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralMeshUnrealPakActor);
AProceduralMeshUnrealPakActor::~AProceduralMeshUnrealPakActor() {}
// End Class AProceduralMeshUnrealPakActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Actor_ProceduralMeshUnrealPakActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralMeshUnrealPakActor, AProceduralMeshUnrealPakActor::StaticClass, TEXT("AProceduralMeshUnrealPakActor"), &Z_Registration_Info_UClass_AProceduralMeshUnrealPakActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralMeshUnrealPakActor), 1476537646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Actor_ProceduralMeshUnrealPakActor_h_298569452(TEXT("/Script/SimpleUnrealPakView"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Actor_ProceduralMeshUnrealPakActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_Actor_ProceduralMeshUnrealPakActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
