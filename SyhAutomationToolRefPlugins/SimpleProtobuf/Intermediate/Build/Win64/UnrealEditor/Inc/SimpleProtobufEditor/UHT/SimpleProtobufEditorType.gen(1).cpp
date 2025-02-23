// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleProtobuf/Source/SimpleProtobufEditor/Public/SimpleProtobufEditorType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufEditorType() {}

// Begin Cross Module References
SIMPLEPROTOBUFEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FProtobufMap();
UPackage* Z_Construct_UPackage__Script_SimpleProtobufEditor();
// End Cross Module References

// Begin ScriptStruct FProtobufMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProtobufMap;
class UScriptStruct* FProtobufMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProtobufMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProtobufMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtobufMap, (UObject*)Z_Construct_UPackage__Script_SimpleProtobufEditor(), TEXT("ProtobufMap"));
	}
	return Z_Registration_Info_UScriptStruct_ProtobufMap.OuterSingleton;
}
template<> SIMPLEPROTOBUFEDITOR_API UScriptStruct* StaticStruct<FProtobufMap>()
{
	return FProtobufMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProtobufMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleProtobufEditorType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Protobuf" },
		{ "ModuleRelativePath", "Public/SimpleProtobufEditorType.h" },
		{ "ToolTip", "Output C++ file location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Protobuf" },
		{ "ModuleRelativePath", "Public/SimpleProtobufEditorType.h" },
		{ "ToolTip", "Output C++ file location." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtobufMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProtobufMap_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtobufMap, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProtobufMap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtobufMap, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtobufMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtobufMap_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtobufMap_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtobufMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtobufMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobufEditor,
	nullptr,
	&NewStructOps,
	"ProtobufMap",
	Z_Construct_UScriptStruct_FProtobufMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtobufMap_Statics::PropPointers),
	sizeof(FProtobufMap),
	alignof(FProtobufMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtobufMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtobufMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtobufMap()
{
	if (!Z_Registration_Info_UScriptStruct_ProtobufMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProtobufMap.InnerSingleton, Z_Construct_UScriptStruct_FProtobufMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProtobufMap.InnerSingleton;
}
// End ScriptStruct FProtobufMap

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_SimpleProtobufEditorType_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProtobufMap::StaticStruct, Z_Construct_UScriptStruct_FProtobufMap_Statics::NewStructOps, TEXT("ProtobufMap"), &Z_Registration_Info_UScriptStruct_ProtobufMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtobufMap), 2987640590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_SimpleProtobufEditorType_h_1754247003(TEXT("/Script/SimpleProtobufEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_SimpleProtobufEditorType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobufEditor_Public_SimpleProtobufEditorType_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
