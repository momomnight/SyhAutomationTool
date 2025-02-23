// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleOSS/Source/SimpleOSS/Public/SimpleOSSType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleOSSType() {}

// Begin Cross Module References
SIMPLEOSS_API UEnum* Z_Construct_UEnum_SimpleOSS_EAcl();
SIMPLEOSS_API UEnum* Z_Construct_UEnum_SimpleOSS_EOSSStorageType();
SIMPLEOSS_API UEnum* Z_Construct_UEnum_SimpleOSS_ERequestPayerType();
SIMPLEOSS_API UEnum* Z_Construct_UEnum_SimpleOSS_EScheme();
SIMPLEOSS_API UFunction* Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature();
SIMPLEOSS_API UFunction* Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature();
SIMPLEOSS_API UFunction* Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature();
SIMPLEOSS_API UFunction* Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature();
SIMPLEOSS_API UScriptStruct* Z_Construct_UScriptStruct_FBucketInfo();
SIMPLEOSS_API UScriptStruct* Z_Construct_UScriptStruct_FClientConfiguration();
SIMPLEOSS_API UScriptStruct* Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo();
SIMPLEOSS_API UScriptStruct* Z_Construct_UScriptStruct_FOSSObjectInfo();
SIMPLEOSS_API UScriptStruct* Z_Construct_UScriptStruct_FOSSObjectMeta();
SIMPLEOSS_API UScriptStruct* Z_Construct_UScriptStruct_FRange();
SIMPLEOSS_API UScriptStruct* Z_Construct_UScriptStruct_FRefererList();
UPackage* Z_Construct_UPackage__Script_SimpleOSS();
// End Cross Module References

// Begin Enum ERequestPayerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERequestPayerType;
static UEnum* ERequestPayerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERequestPayerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERequestPayerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleOSS_ERequestPayerType, (UObject*)Z_Construct_UPackage__Script_SimpleOSS(), TEXT("ERequestPayerType"));
	}
	return Z_Registration_Info_UEnum_ERequestPayerType.OuterSingleton;
}
template<> SIMPLEOSS_API UEnum* StaticEnum<ERequestPayerType>()
{
	return ERequestPayerType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleOSS_ERequestPayerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BUCKETOWNER.Name", "ERequestPayerType::BUCKETOWNER" },
		{ "Comment", "//#ifdef _MSC_VER\n//#pragma warning(push)\n//#pragma warning(disable:2005)\n//#endif\n//\n//class RateLimiter;\n//using namespace AlibabaCloud::OSS;\n//\n" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "NONE.Name", "ERequestPayerType::NONE" },
		{ "NOTSET.Name", "ERequestPayerType::NOTSET" },
		{ "REQUESTER.Name", "ERequestPayerType::REQUESTER" },
		{ "ToolTip", "#ifdef _MSC_VER\n#pragma warning(push)\n#pragma warning(disable:2005)\n#endif\n\nclass RateLimiter;\nusing namespace AlibabaCloud::OSS;" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERequestPayerType::NOTSET", (int64)ERequestPayerType::NOTSET },
		{ "ERequestPayerType::BUCKETOWNER", (int64)ERequestPayerType::BUCKETOWNER },
		{ "ERequestPayerType::REQUESTER", (int64)ERequestPayerType::REQUESTER },
		{ "ERequestPayerType::NONE", (int64)ERequestPayerType::NONE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleOSS_ERequestPayerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleOSS,
	nullptr,
	"ERequestPayerType",
	"ERequestPayerType",
	Z_Construct_UEnum_SimpleOSS_ERequestPayerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleOSS_ERequestPayerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleOSS_ERequestPayerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleOSS_ERequestPayerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleOSS_ERequestPayerType()
{
	if (!Z_Registration_Info_UEnum_ERequestPayerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERequestPayerType.InnerSingleton, Z_Construct_UEnum_SimpleOSS_ERequestPayerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERequestPayerType.InnerSingleton;
}
// End Enum ERequestPayerType

// Begin Enum EAcl
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAcl;
static UEnum* EAcl_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAcl.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAcl.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleOSS_EAcl, (UObject*)Z_Construct_UPackage__Script_SimpleOSS(), TEXT("EAcl"));
	}
	return Z_Registration_Info_UEnum_EAcl.OuterSingleton;
}
template<> SIMPLEOSS_API UEnum* StaticEnum<EAcl>()
{
	return EAcl_StaticEnum();
}
struct Z_Construct_UEnum_SimpleOSS_EAcl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "NONE.Name", "EAcl::NONE" },
		{ "PRIVATE.Name", "EAcl::PRIVATE" },
		{ "PUBLICREAD.Name", "EAcl::PUBLICREAD" },
		{ "PUBLICREADWRITE.Name", "EAcl::PUBLICREADWRITE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAcl::PRIVATE", (int64)EAcl::PRIVATE },
		{ "EAcl::PUBLICREAD", (int64)EAcl::PUBLICREAD },
		{ "EAcl::PUBLICREADWRITE", (int64)EAcl::PUBLICREADWRITE },
		{ "EAcl::NONE", (int64)EAcl::NONE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleOSS_EAcl_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleOSS,
	nullptr,
	"EAcl",
	"EAcl",
	Z_Construct_UEnum_SimpleOSS_EAcl_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleOSS_EAcl_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleOSS_EAcl_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleOSS_EAcl_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleOSS_EAcl()
{
	if (!Z_Registration_Info_UEnum_EAcl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAcl.InnerSingleton, Z_Construct_UEnum_SimpleOSS_EAcl_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAcl.InnerSingleton;
}
// End Enum EAcl

// Begin Enum EScheme
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScheme;
static UEnum* EScheme_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScheme.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScheme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleOSS_EScheme, (UObject*)Z_Construct_UPackage__Script_SimpleOSS(), TEXT("EScheme"));
	}
	return Z_Registration_Info_UEnum_EScheme.OuterSingleton;
}
template<> SIMPLEOSS_API UEnum* StaticEnum<EScheme>()
{
	return EScheme_StaticEnum();
}
struct Z_Construct_UEnum_SimpleOSS_EScheme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HTTP.Name", "EScheme::HTTP" },
		{ "HTTPS.Name", "EScheme::HTTPS" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EScheme::HTTP", (int64)EScheme::HTTP },
		{ "EScheme::HTTPS", (int64)EScheme::HTTPS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleOSS_EScheme_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleOSS,
	nullptr,
	"EScheme",
	"EScheme",
	Z_Construct_UEnum_SimpleOSS_EScheme_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleOSS_EScheme_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleOSS_EScheme_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleOSS_EScheme_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleOSS_EScheme()
{
	if (!Z_Registration_Info_UEnum_EScheme.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScheme.InnerSingleton, Z_Construct_UEnum_SimpleOSS_EScheme_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScheme.InnerSingleton;
}
// End Enum EScheme

// Begin Enum EOSSStorageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOSSStorageType;
static UEnum* EOSSStorageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOSSStorageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOSSStorageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleOSS_EOSSStorageType, (UObject*)Z_Construct_UPackage__Script_SimpleOSS(), TEXT("EOSSStorageType"));
	}
	return Z_Registration_Info_UEnum_EOSSStorageType.OuterSingleton;
}
template<> SIMPLEOSS_API UEnum* StaticEnum<EOSSStorageType>()
{
	return EOSSStorageType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleOSS_EOSSStorageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ARCHIVE.Name", "EOSSStorageType::ARCHIVE" },
		{ "BlueprintType", "true" },
		{ "IA.Name", "EOSSStorageType::IA" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "NONE.Name", "EOSSStorageType::NONE" },
		{ "STANDARD.Name", "EOSSStorageType::STANDARD" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOSSStorageType::STANDARD", (int64)EOSSStorageType::STANDARD },
		{ "EOSSStorageType::IA", (int64)EOSSStorageType::IA },
		{ "EOSSStorageType::ARCHIVE", (int64)EOSSStorageType::ARCHIVE },
		{ "EOSSStorageType::NONE", (int64)EOSSStorageType::NONE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleOSS_EOSSStorageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleOSS,
	nullptr,
	"EOSSStorageType",
	"EOSSStorageType",
	Z_Construct_UEnum_SimpleOSS_EOSSStorageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleOSS_EOSSStorageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleOSS_EOSSStorageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleOSS_EOSSStorageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleOSS_EOSSStorageType()
{
	if (!Z_Registration_Info_UEnum_EOSSStorageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOSSStorageType.InnerSingleton, Z_Construct_UEnum_SimpleOSS_EOSSStorageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOSSStorageType.InnerSingleton;
}
// End Enum EOSSStorageType

// Begin ScriptStruct FBucketInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BucketInfo;
class UScriptStruct* FBucketInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BucketInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BucketInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBucketInfo, (UObject*)Z_Construct_UPackage__Script_SimpleOSS(), TEXT("BucketInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BucketInfo.OuterSingleton;
}
template<> SIMPLEOSS_API UScriptStruct* StaticStruct<FBucketInfo>()
{
	return FBucketInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBucketInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "SimpleOSS|BucketInfo" },
		{ "Comment", "/*Physical location of the server */" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "Physical location of the server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerID_MetaData[] = {
		{ "Category", "SimpleOSS|BucketInfo" },
		{ "Comment", "/*Bucket */" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "Bucket" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[] = {
		{ "Category", "SimpleOSS|BucketInfo" },
		{ "Comment", "/*Bucket name*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "Bucket name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtranetEndpoint_MetaData[] = {
		{ "Category", "SimpleOSS|BucketInfo" },
		{ "Comment", "/*External network provides external network access */" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "External network provides external network access" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntranetEndpoint_MetaData[] = {
		{ "Category", "SimpleOSS|BucketInfo" },
		{ "Comment", "/*Address of internal access provided by intranet */" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "Address of internal access provided by intranet" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acl_MetaData[] = {
		{ "Category", "SimpleOSS|BucketInfo" },
		{ "Comment", "/*ownership */" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "ownership" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[] = {
		{ "Category", "SimpleOSS|BucketInfo" },
		{ "Comment", "/*Who created*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "Who created" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OwnerID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OwnerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtranetEndpoint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IntranetEndpoint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Acl_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Acl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Created;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBucketInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBucketInfo, Location), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_OwnerID = { "OwnerID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBucketInfo, OwnerID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerID_MetaData), NewProp_OwnerID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBucketInfo, OwnerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerName_MetaData), NewProp_OwnerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_ExtranetEndpoint = { "ExtranetEndpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBucketInfo, ExtranetEndpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtranetEndpoint_MetaData), NewProp_ExtranetEndpoint_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_IntranetEndpoint = { "IntranetEndpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBucketInfo, IntranetEndpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntranetEndpoint_MetaData), NewProp_IntranetEndpoint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_Acl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_Acl = { "Acl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBucketInfo, Acl), Z_Construct_UEnum_SimpleOSS_EAcl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acl_MetaData), NewProp_Acl_MetaData) }; // 2749969756
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBucketInfo, Created), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Created_MetaData), NewProp_Created_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBucketInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_OwnerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_OwnerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_ExtranetEndpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_IntranetEndpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_Acl_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_Acl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBucketInfo_Statics::NewProp_Created,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBucketInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBucketInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleOSS,
	nullptr,
	&NewStructOps,
	"BucketInfo",
	Z_Construct_UScriptStruct_FBucketInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBucketInfo_Statics::PropPointers),
	sizeof(FBucketInfo),
	alignof(FBucketInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBucketInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBucketInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBucketInfo()
{
	if (!Z_Registration_Info_UScriptStruct_BucketInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BucketInfo.InnerSingleton, Z_Construct_UScriptStruct_FBucketInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BucketInfo.InnerSingleton;
}
// End ScriptStruct FBucketInfo

// Begin ScriptStruct FMultipartPartsUploadsInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultipartPartsUploadsInfo;
class UScriptStruct* FMultipartPartsUploadsInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultipartPartsUploadsInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultipartPartsUploadsInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo, (UObject*)Z_Construct_UPackage__Script_SimpleOSS(), TEXT("MultipartPartsUploadsInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MultipartPartsUploadsInfo.OuterSingleton;
}
template<> SIMPLEOSS_API UScriptStruct* StaticStruct<FMultipartPartsUploadsInfo>()
{
	return FMultipartPartsUploadsInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "SimpleOSS|MultipartPartsUploadsInfo" },
		{ "Comment", "/*Which object's sui'p */" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "Which object's sui'p" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UploadId_MetaData[] = {
		{ "Category", "SimpleOSS|MultipartPartsUploadsInfo" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Initiated_MetaData[] = {
		{ "Category", "SimpleOSS|MultipartPartsUploadsInfo" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UploadId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Initiated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultipartPartsUploadsInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultipartPartsUploadsInfo, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::NewProp_UploadId = { "UploadId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultipartPartsUploadsInfo, UploadId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UploadId_MetaData), NewProp_UploadId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::NewProp_Initiated = { "Initiated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultipartPartsUploadsInfo, Initiated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Initiated_MetaData), NewProp_Initiated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::NewProp_UploadId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::NewProp_Initiated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleOSS,
	nullptr,
	&NewStructOps,
	"MultipartPartsUploadsInfo",
	Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::PropPointers),
	sizeof(FMultipartPartsUploadsInfo),
	alignof(FMultipartPartsUploadsInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MultipartPartsUploadsInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultipartPartsUploadsInfo.InnerSingleton, Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MultipartPartsUploadsInfo.InnerSingleton;
}
// End ScriptStruct FMultipartPartsUploadsInfo

// Begin ScriptStruct FRange
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Range;
class UScriptStruct* FRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Range.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Range.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRange, (UObject*)Z_Construct_UPackage__Script_SimpleOSS(), TEXT("Range"));
	}
	return Z_Registration_Info_UScriptStruct_Range.OuterSingleton;
}
template<> SIMPLEOSS_API UScriptStruct* StaticStruct<FRange>()
{
	return FRange::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "SimpleOSS|Range" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "Category", "SimpleOSS|Range" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Start;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_End;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRange_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRange, Start), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRange_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRange, End), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRange_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRange_Statics::NewProp_End,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleOSS,
	nullptr,
	&NewStructOps,
	"Range",
	Z_Construct_UScriptStruct_FRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRange_Statics::PropPointers),
	sizeof(FRange),
	alignof(FRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRange()
{
	if (!Z_Registration_Info_UScriptStruct_Range.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Range.InnerSingleton, Z_Construct_UScriptStruct_FRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Range.InnerSingleton;
}
// End ScriptStruct FRange

// Begin ScriptStruct FOSSObjectInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OSSObjectInfo;
class UScriptStruct* FOSSObjectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OSSObjectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OSSObjectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOSSObjectInfo, (UObject*)Z_Construct_UPackage__Script_SimpleOSS(), TEXT("OSSObjectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OSSObjectInfo.OuterSingleton;
}
template<> SIMPLEOSS_API UScriptStruct* StaticStruct<FOSSObjectInfo>()
{
	return FOSSObjectInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOSSObjectInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "SimpleOSS|ObjectInfo" },
		{ "Comment", "/*What's the name of this object */" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "What's the name of this object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "SimpleOSS|ObjectInfo" },
		{ "Comment", "/*About the size of this file */" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "About the size of this file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastmodifyTime_MetaData[] = {
		{ "Category", "SimpleOSS|ObjectInfo" },
		{ "Comment", "/*Last time the object was modified */" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "Last time the object was modified" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Size;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastmodifyTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOSSObjectInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOSSObjectInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOSSObjectInfo, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::NewProp_LastmodifyTime = { "LastmodifyTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOSSObjectInfo, LastmodifyTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastmodifyTime_MetaData), NewProp_LastmodifyTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::NewProp_LastmodifyTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleOSS,
	nullptr,
	&NewStructOps,
	"OSSObjectInfo",
	Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::PropPointers),
	sizeof(FOSSObjectInfo),
	alignof(FOSSObjectInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOSSObjectInfo()
{
	if (!Z_Registration_Info_UScriptStruct_OSSObjectInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OSSObjectInfo.InnerSingleton, Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OSSObjectInfo.InnerSingleton;
}
// End ScriptStruct FOSSObjectInfo

// Begin ScriptStruct FRefererList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RefererList;
class UScriptStruct* FRefererList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RefererList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RefererList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRefererList, (UObject*)Z_Construct_UPackage__Script_SimpleOSS(), TEXT("RefererList"));
	}
	return Z_Registration_Info_UScriptStruct_RefererList.OuterSingleton;
}
template<> SIMPLEOSS_API UScriptStruct* StaticStruct<FRefererList>()
{
	return FRefererList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRefererList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowEmptyReferer_MetaData[] = {
		{ "Category", "SimpleOSS|RefererList" },
		{ "Comment", "/*Allow empty references */" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "Allow empty references" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefererListNum_MetaData[] = {
		{ "Category", "SimpleOSS|RefererList" },
		{ "Comment", "/*How many references */" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "How many references" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[] = {
		{ "Category", "SimpleOSS|RefererList" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowEmptyReferer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowEmptyReferer;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RefererListNum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRefererList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRefererList_Statics::NewProp_bAllowEmptyReferer_SetBit(void* Obj)
{
	((FRefererList*)Obj)->bAllowEmptyReferer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRefererList_Statics::NewProp_bAllowEmptyReferer = { "bAllowEmptyReferer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRefererList), &Z_Construct_UScriptStruct_FRefererList_Statics::NewProp_bAllowEmptyReferer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowEmptyReferer_MetaData), NewProp_bAllowEmptyReferer_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRefererList_Statics::NewProp_RefererListNum = { "RefererListNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRefererList, RefererListNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefererListNum_MetaData), NewProp_RefererListNum_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRefererList_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRefererList, RequestId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestId_MetaData), NewProp_RequestId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRefererList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRefererList_Statics::NewProp_bAllowEmptyReferer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRefererList_Statics::NewProp_RefererListNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRefererList_Statics::NewProp_RequestId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefererList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRefererList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleOSS,
	nullptr,
	&NewStructOps,
	"RefererList",
	Z_Construct_UScriptStruct_FRefererList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefererList_Statics::PropPointers),
	sizeof(FRefererList),
	alignof(FRefererList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRefererList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRefererList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRefererList()
{
	if (!Z_Registration_Info_UScriptStruct_RefererList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RefererList.InnerSingleton, Z_Construct_UScriptStruct_FRefererList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RefererList.InnerSingleton;
}
// End ScriptStruct FRefererList

// Begin ScriptStruct FOSSObjectMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OSSObjectMeta;
class UScriptStruct* FOSSObjectMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OSSObjectMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OSSObjectMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOSSObjectMeta, (UObject*)Z_Construct_UPackage__Script_SimpleOSS(), TEXT("OSSObjectMeta"));
	}
	return Z_Registration_Info_UScriptStruct_OSSObjectMeta.OuterSingleton;
}
template<> SIMPLEOSS_API UScriptStruct* StaticStruct<FOSSObjectMeta>()
{
	return FOSSObjectMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOSSObjectMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentLength_MetaData[] = {
		{ "Category", "SimpleOSS|Meta" },
		{ "Comment", "//\xe5\xb8\xb8\xe7\x94\xa8\xe6\x95\xb0\xe6\x8d\xae\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n//\x09""FString ContentType;\n" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "\xe5\xb8\xb8\xe7\x94\xa8\xe6\x95\xb0\xe6\x8d\xae\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n       FString ContentType;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Crc64_MetaData[] = {
		{ "Category", "SimpleOSS|Meta" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Date_MetaData[] = {
		{ "Category", "SimpleOSS|Meta" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n//\x09""EOSSStorageType StorageClass;\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n//\x09""FString ContentDisposition;\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n//\x09""FString ContentEncoding;\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n//\x09""FString ContentMd5;\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n//\x09""FString Tag;\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n//\x09""FString LastModified;\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n//\x09""FString ExpirationTime;\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n//\x09""EAcl XOssAcl;\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n//\x09""FString XOssData;\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n//\x09""FString TargetSymlink;\n" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n       EOSSStorageType StorageClass;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n       FString ContentDisposition;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n       FString ContentEncoding;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n       FString ContentMd5;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n       FString Tag;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n       FString LastModified;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n       FString ExpirationTime;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n       EAcl XOssAcl;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n       FString XOssData;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SimpleOSS|Meta\")\n       FString TargetSymlink;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ContentLength;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Crc64;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Date;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOSSObjectMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::NewProp_ContentLength = { "ContentLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOSSObjectMeta, ContentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentLength_MetaData), NewProp_ContentLength_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::NewProp_Crc64 = { "Crc64", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOSSObjectMeta, Crc64), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Crc64_MetaData), NewProp_Crc64_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOSSObjectMeta, Date), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Date_MetaData), NewProp_Date_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::NewProp_ContentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::NewProp_Crc64,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::NewProp_Date,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleOSS,
	nullptr,
	&NewStructOps,
	"OSSObjectMeta",
	Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::PropPointers),
	sizeof(FOSSObjectMeta),
	alignof(FOSSObjectMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOSSObjectMeta()
{
	if (!Z_Registration_Info_UScriptStruct_OSSObjectMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OSSObjectMeta.InnerSingleton, Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OSSObjectMeta.InnerSingleton;
}
// End ScriptStruct FOSSObjectMeta

// Begin ScriptStruct FClientConfiguration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClientConfiguration;
class UScriptStruct* FClientConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClientConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClientConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientConfiguration, (UObject*)Z_Construct_UPackage__Script_SimpleOSS(), TEXT("ClientConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_ClientConfiguration.OuterSingleton;
}
template<> SIMPLEOSS_API UScriptStruct* StaticStruct<FClientConfiguration>()
{
	return FClientConfiguration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClientConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DNSTimeoutS_MetaData[] = {
		{ "Category", "SimpleOSS|Config" },
		{ "Comment", "/**\n\x09* DNS timeouts. Default 60 .\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "DNS timeouts. Default 60 ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectTimeoutS_MetaData[] = {
		{ "Category", "SimpleOSS|Config" },
		{ "Comment", "/**\n\x09* Socket connect timeout.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "Socket connect timeout." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCname_MetaData[] = {
		{ "Category", "SimpleOSS|Config" },
		{ "Comment", "/**\n\x09* your certificate file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "your certificate file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumRateOfTolerance_MetaData[] = {
		{ "Category", "SimpleOSS|Config" },
		{ "Comment", "/**\n\x09* The minimum rate that can be tolerated is controlled by setting the value of speed limit, which is 1024 by default, i.e. 1KB / s. \n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "The minimum rate that can be tolerated is controlled by setting the value of speed limit, which is 1024 by default, i.e. 1KB / s." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumRateOfToleranceTime_MetaData[] = {
		{ "Category", "SimpleOSS|Config" },
		{ "Comment", "/**\n\x09* The maximum time that can be tolerated is controlled by setting the value of speed \"time, which is 15 seconds by default. \n\x09* Indicates a timeout if the transfer rate is less than 1KB / s for 15 seconds. \n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
		{ "ToolTip", "The maximum time that can be tolerated is controlled by setting the value of speed \"time, which is 15 seconds by default.\nIndicates a timeout if the transfer rate is less than 1KB / s for 15 seconds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DNSTimeoutS;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectTimeoutS;
	static void NewProp_bCname_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCname;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_MinimumRateOfTolerance;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_MinimumRateOfToleranceTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewProp_DNSTimeoutS = { "DNSTimeoutS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientConfiguration, DNSTimeoutS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DNSTimeoutS_MetaData), NewProp_DNSTimeoutS_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewProp_ConnectTimeoutS = { "ConnectTimeoutS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientConfiguration, ConnectTimeoutS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectTimeoutS_MetaData), NewProp_ConnectTimeoutS_MetaData) };
void Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewProp_bCname_SetBit(void* Obj)
{
	((FClientConfiguration*)Obj)->bCname = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewProp_bCname = { "bCname", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClientConfiguration), &Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewProp_bCname_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCname_MetaData), NewProp_bCname_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewProp_MinimumRateOfTolerance = { "MinimumRateOfTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientConfiguration, MinimumRateOfTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumRateOfTolerance_MetaData), NewProp_MinimumRateOfTolerance_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewProp_MinimumRateOfToleranceTime = { "MinimumRateOfToleranceTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientConfiguration, MinimumRateOfToleranceTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumRateOfToleranceTime_MetaData), NewProp_MinimumRateOfToleranceTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewProp_DNSTimeoutS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewProp_ConnectTimeoutS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewProp_bCname,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewProp_MinimumRateOfTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewProp_MinimumRateOfToleranceTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientConfiguration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleOSS,
	nullptr,
	&NewStructOps,
	"ClientConfiguration",
	Z_Construct_UScriptStruct_FClientConfiguration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConfiguration_Statics::PropPointers),
	sizeof(FClientConfiguration),
	alignof(FClientConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClientConfiguration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClientConfiguration()
{
	if (!Z_Registration_Info_UScriptStruct_ClientConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClientConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FClientConfiguration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClientConfiguration.InnerSingleton;
}
// End ScriptStruct FClientConfiguration

// Begin Delegate FBytesBufferByOSSCallbackDelegate
struct Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics
{
	struct _Script_SimpleOSS_eventBytesBufferByOSSCallbackDelegate_Parms
	{
		TArray<uint8> InBuffer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBuffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::NewProp_InBuffer_Inner = { "InBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::NewProp_InBuffer = { "InBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleOSS_eventBytesBufferByOSSCallbackDelegate_Parms, InBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBuffer_MetaData), NewProp_InBuffer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::NewProp_InBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::NewProp_InBuffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleOSS, nullptr, "BytesBufferByOSSCallbackDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::_Script_SimpleOSS_eventBytesBufferByOSSCallbackDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::_Script_SimpleOSS_eventBytesBufferByOSSCallbackDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBytesBufferByOSSCallbackDelegate_DelegateWrapper(const FScriptDelegate& BytesBufferByOSSCallbackDelegate, TArray<uint8> const& InBuffer)
{
	struct _Script_SimpleOSS_eventBytesBufferByOSSCallbackDelegate_Parms
	{
		TArray<uint8> InBuffer;
	};
	_Script_SimpleOSS_eventBytesBufferByOSSCallbackDelegate_Parms Parms;
	Parms.InBuffer=InBuffer;
	BytesBufferByOSSCallbackDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBytesBufferByOSSCallbackDelegate

// Begin Delegate FBufferByOSSCallbackDelegate
struct Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics
{
	struct _Script_SimpleOSS_eventBufferByOSSCallbackDelegate_Parms
	{
		FString InBuffer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InBuffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics::NewProp_InBuffer = { "InBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleOSS_eventBufferByOSSCallbackDelegate_Parms, InBuffer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics::NewProp_InBuffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleOSS, nullptr, "BufferByOSSCallbackDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics::_Script_SimpleOSS_eventBufferByOSSCallbackDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics::_Script_SimpleOSS_eventBufferByOSSCallbackDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBufferByOSSCallbackDelegate_DelegateWrapper(const FScriptDelegate& BufferByOSSCallbackDelegate, const FString& InBuffer)
{
	struct _Script_SimpleOSS_eventBufferByOSSCallbackDelegate_Parms
	{
		FString InBuffer;
	};
	_Script_SimpleOSS_eventBufferByOSSCallbackDelegate_Parms Parms;
	Parms.InBuffer=InBuffer;
	BufferByOSSCallbackDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBufferByOSSCallbackDelegate

// Begin Delegate FProgressCallbackDelegate
struct Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics
{
	struct _Script_SimpleOSS_eventProgressCallbackDelegate_Parms
	{
		int64 ConsumedBytes;
		int64 TotalBytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ConsumedBytes;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TotalBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::NewProp_ConsumedBytes = { "ConsumedBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleOSS_eventProgressCallbackDelegate_Parms, ConsumedBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::NewProp_TotalBytes = { "TotalBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleOSS_eventProgressCallbackDelegate_Parms, TotalBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::NewProp_ConsumedBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::NewProp_TotalBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleOSS, nullptr, "ProgressCallbackDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::_Script_SimpleOSS_eventProgressCallbackDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::_Script_SimpleOSS_eventProgressCallbackDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FProgressCallbackDelegate_DelegateWrapper(const FScriptDelegate& ProgressCallbackDelegate, int64 ConsumedBytes, int64 TotalBytes)
{
	struct _Script_SimpleOSS_eventProgressCallbackDelegate_Parms
	{
		int64 ConsumedBytes;
		int64 TotalBytes;
	};
	_Script_SimpleOSS_eventProgressCallbackDelegate_Parms Parms;
	Parms.ConsumedBytes=ConsumedBytes;
	Parms.TotalBytes=TotalBytes;
	ProgressCallbackDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FProgressCallbackDelegate

// Begin Delegate FCallbackUploadPartDelegate
struct Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics
{
	struct _Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms
	{
		FString UploadId;
		int64 PartCount;
		int64 Size;
		int64 InTotal;
		bool bPart;
		bool bComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleOSSType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UploadId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_PartCount;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Size;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InTotal;
	static void NewProp_bPart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPart;
	static void NewProp_bComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_UploadId = { "UploadId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms, UploadId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_PartCount = { "PartCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms, PartCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_InTotal = { "InTotal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms, InTotal), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_bPart_SetBit(void* Obj)
{
	((_Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms*)Obj)->bPart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_bPart = { "bPart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms), &Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_bPart_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_bComplete_SetBit(void* Obj)
{
	((_Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms*)Obj)->bComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_bComplete = { "bComplete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms), &Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_bComplete_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_UploadId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_PartCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_InTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_bPart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::NewProp_bComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleOSS, nullptr, "CallbackUploadPartDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::_Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::_Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCallbackUploadPartDelegate_DelegateWrapper(const FScriptDelegate& CallbackUploadPartDelegate, const FString& UploadId, int64 PartCount, int64 Size, int64 InTotal, bool bPart, bool bComplete)
{
	struct _Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms
	{
		FString UploadId;
		int64 PartCount;
		int64 Size;
		int64 InTotal;
		bool bPart;
		bool bComplete;
	};
	_Script_SimpleOSS_eventCallbackUploadPartDelegate_Parms Parms;
	Parms.UploadId=UploadId;
	Parms.PartCount=PartCount;
	Parms.Size=Size;
	Parms.InTotal=InTotal;
	Parms.bPart=bPart ? true : false;
	Parms.bComplete=bComplete ? true : false;
	CallbackUploadPartDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FCallbackUploadPartDelegate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERequestPayerType_StaticEnum, TEXT("ERequestPayerType"), &Z_Registration_Info_UEnum_ERequestPayerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2945905894U) },
		{ EAcl_StaticEnum, TEXT("EAcl"), &Z_Registration_Info_UEnum_EAcl, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2749969756U) },
		{ EScheme_StaticEnum, TEXT("EScheme"), &Z_Registration_Info_UEnum_EScheme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3472403732U) },
		{ EOSSStorageType_StaticEnum, TEXT("EOSSStorageType"), &Z_Registration_Info_UEnum_EOSSStorageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2596087354U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBucketInfo::StaticStruct, Z_Construct_UScriptStruct_FBucketInfo_Statics::NewStructOps, TEXT("BucketInfo"), &Z_Registration_Info_UScriptStruct_BucketInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBucketInfo), 1806273649U) },
		{ FMultipartPartsUploadsInfo::StaticStruct, Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics::NewStructOps, TEXT("MultipartPartsUploadsInfo"), &Z_Registration_Info_UScriptStruct_MultipartPartsUploadsInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultipartPartsUploadsInfo), 1682836986U) },
		{ FRange::StaticStruct, Z_Construct_UScriptStruct_FRange_Statics::NewStructOps, TEXT("Range"), &Z_Registration_Info_UScriptStruct_Range, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRange), 195629010U) },
		{ FOSSObjectInfo::StaticStruct, Z_Construct_UScriptStruct_FOSSObjectInfo_Statics::NewStructOps, TEXT("OSSObjectInfo"), &Z_Registration_Info_UScriptStruct_OSSObjectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOSSObjectInfo), 2315604194U) },
		{ FRefererList::StaticStruct, Z_Construct_UScriptStruct_FRefererList_Statics::NewStructOps, TEXT("RefererList"), &Z_Registration_Info_UScriptStruct_RefererList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRefererList), 1464838686U) },
		{ FOSSObjectMeta::StaticStruct, Z_Construct_UScriptStruct_FOSSObjectMeta_Statics::NewStructOps, TEXT("OSSObjectMeta"), &Z_Registration_Info_UScriptStruct_OSSObjectMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOSSObjectMeta), 928003926U) },
		{ FClientConfiguration::StaticStruct, Z_Construct_UScriptStruct_FClientConfiguration_Statics::NewStructOps, TEXT("ClientConfiguration"), &Z_Registration_Info_UScriptStruct_ClientConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClientConfiguration), 2744035206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_3066699248(TEXT("/Script/SimpleOSS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
