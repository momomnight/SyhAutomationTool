// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleProtobuf/Source/SimpleProtobuf/Public/SimpleProtobufType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProtobufType() {}

// Begin Cross Module References
SIMPLEPROTOBUF_API UScriptStruct* Z_Construct_UScriptStruct_FProto();
SIMPLEPROTOBUF_API UScriptStruct* Z_Construct_UScriptStruct_FProtoElement();
UPackage* Z_Construct_UPackage__Script_SimpleProtobuf();
// End Cross Module References

// Begin ScriptStruct FProtoElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProtoElement;
class UScriptStruct* FProtoElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProtoElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProtoElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtoElement, (UObject*)Z_Construct_UPackage__Script_SimpleProtobuf(), TEXT("ProtoElement"));
	}
	return Z_Registration_Info_UScriptStruct_ProtoElement.OuterSingleton;
}
template<> SIMPLEPROTOBUF_API UScriptStruct* StaticStruct<FProtoElement>()
{
	return FProtoElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProtoElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleProtobufType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementName_MetaData[] = {
		{ "Comment", "//\xe5\x8f\x98\xe9\x87\x8f\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97\n" },
		{ "ModuleRelativePath", "Public/SimpleProtobufType.h" },
		{ "ToolTip", "\xe5\x8f\x98\xe9\x87\x8f\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[] = {
		{ "Comment", "//\xe4\xb8\xbb\xe7\xb1\xbb\xe5\x9e\x8b \xe6\xaf\x94\xe5\xa6\x82int32 float TMap\n" },
		{ "ModuleRelativePath", "Public/SimpleProtobufType.h" },
		{ "ToolTip", "\xe4\xb8\xbb\xe7\xb1\xbb\xe5\x9e\x8b \xe6\xaf\x94\xe5\xa6\x82int32 float TMap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementTypes_MetaData[] = {
		{ "Comment", "//\xe4\xb8\xbb\xe8\xa6\x81\xe9\x92\x88\xe5\xaf\xb9\xe5\xa4\x9a\xe5\x85\x83\xe7\xb4\xa0\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe6\x83\x85\xe5\x86\xb5 \xe6\xaf\x94\xe5\xa6\x82""Array \xe7\x9a\x84\xe5\x85\x83\xe7\xb4\xa0 Tmap key value\n" },
		{ "ModuleRelativePath", "Public/SimpleProtobufType.h" },
		{ "ToolTip", "\xe4\xb8\xbb\xe8\xa6\x81\xe9\x92\x88\xe5\xaf\xb9\xe5\xa4\x9a\xe5\x85\x83\xe7\xb4\xa0\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe6\x83\x85\xe5\x86\xb5 \xe6\xaf\x94\xe5\xa6\x82""Array \xe7\x9a\x84\xe5\x85\x83\xe7\xb4\xa0 Tmap key value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ElementName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ElementType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ElementTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ElementTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtoElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProtoElement_Statics::NewProp_ElementName = { "ElementName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtoElement, ElementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementName_MetaData), NewProp_ElementName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProtoElement_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtoElement, ElementType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementType_MetaData), NewProp_ElementType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProtoElement_Statics::NewProp_ElementTypes_Inner = { "ElementTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProtoElement_Statics::NewProp_ElementTypes = { "ElementTypes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtoElement, ElementTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementTypes_MetaData), NewProp_ElementTypes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtoElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtoElement_Statics::NewProp_ElementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtoElement_Statics::NewProp_ElementType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtoElement_Statics::NewProp_ElementTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtoElement_Statics::NewProp_ElementTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtoElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtoElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobuf,
	nullptr,
	&NewStructOps,
	"ProtoElement",
	Z_Construct_UScriptStruct_FProtoElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtoElement_Statics::PropPointers),
	sizeof(FProtoElement),
	alignof(FProtoElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtoElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtoElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtoElement()
{
	if (!Z_Registration_Info_UScriptStruct_ProtoElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProtoElement.InnerSingleton, Z_Construct_UScriptStruct_FProtoElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProtoElement.InnerSingleton;
}
// End ScriptStruct FProtoElement

// Begin ScriptStruct FProto
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Proto;
class UScriptStruct* FProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Proto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Proto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProto, (UObject*)Z_Construct_UPackage__Script_SimpleProtobuf(), TEXT("Proto"));
	}
	return Z_Registration_Info_UScriptStruct_Proto.OuterSingleton;
}
template<> SIMPLEPROTOBUF_API UScriptStruct* StaticStruct<FProto>()
{
	return FProto::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleProtobufType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "//proto\xe5\x90\x8d\xe5\xad\x97 \xe9\x98\xb2\xe6\xad\xa2\xe5\x92\x8c\xe6\x9c\xac\xe4\xbd\x93\xe5\x90\x8d\xe5\xad\x97\xe9\x87\x8d\xe5\xa4\x8d\n" },
		{ "ModuleRelativePath", "Public/SimpleProtobufType.h" },
		{ "ToolTip", "proto\xe5\x90\x8d\xe5\xad\x97 \xe9\x98\xb2\xe6\xad\xa2\xe5\x92\x8c\xe6\x9c\xac\xe4\xbd\x93\xe5\x90\x8d\xe5\xad\x97\xe9\x87\x8d\xe5\xa4\x8d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalName_MetaData[] = {
		{ "Comment", "//\xe5\x8e\x9f\xe6\x9d\xa5\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97 \xe6\x98\xa0\xe5\xb0\x84UE\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97\n" },
		{ "ModuleRelativePath", "Public/SimpleProtobufType.h" },
		{ "ToolTip", "\xe5\x8e\x9f\xe6\x9d\xa5\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97 \xe6\x98\xa0\xe5\xb0\x84UE\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[] = {
		{ "Comment", "//\xe5\x85\x83\xe7\xb4\xa0\xe5\x90\x8d\xe5\xad\x97\n" },
		{ "ModuleRelativePath", "Public/SimpleProtobufType.h" },
		{ "ToolTip", "\xe5\x85\x83\xe7\xb4\xa0\xe5\x90\x8d\xe5\xad\x97" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Elements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProto>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProto_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProto, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProto_Statics::NewProp_OriginalName = { "OriginalName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProto, OriginalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalName_MetaData), NewProp_OriginalName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProto_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProtoElement, METADATA_PARAMS(0, nullptr) }; // 2246480076
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProto_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProto, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Elements_MetaData), NewProp_Elements_MetaData) }; // 2246480076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProto_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProto_Statics::NewProp_OriginalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProto_Statics::NewProp_Elements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProto_Statics::NewProp_Elements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProto_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleProtobuf,
	nullptr,
	&NewStructOps,
	"Proto",
	Z_Construct_UScriptStruct_FProto_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProto_Statics::PropPointers),
	sizeof(FProto),
	alignof(FProto),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProto_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProto_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProto()
{
	if (!Z_Registration_Info_UScriptStruct_Proto.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Proto.InnerSingleton, Z_Construct_UScriptStruct_FProto_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Proto.InnerSingleton;
}
// End ScriptStruct FProto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufType_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProtoElement::StaticStruct, Z_Construct_UScriptStruct_FProtoElement_Statics::NewStructOps, TEXT("ProtoElement"), &Z_Registration_Info_UScriptStruct_ProtoElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtoElement), 2246480076U) },
		{ FProto::StaticStruct, Z_Construct_UScriptStruct_FProto_Statics::NewStructOps, TEXT("Proto"), &Z_Registration_Info_UScriptStruct_Proto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProto), 1004589786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufType_h_3309978956(TEXT("/Script/SimpleProtobuf"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufType_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
