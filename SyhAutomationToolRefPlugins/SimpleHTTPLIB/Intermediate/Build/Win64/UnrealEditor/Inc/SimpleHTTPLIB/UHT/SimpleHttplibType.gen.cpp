// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Plugins/RENZHAI_PLUGIN/SimpleHTTPLIB/Source/SimpleHTTPLIB/Public/SimpleHttplibType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleHttplibType() {}

// Begin Cross Module References
SIMPLEHTTPLIB_API UEnum* Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibErrorType();
SIMPLEHTTPLIB_API UEnum* Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibVerbType();
SIMPLEHTTPLIB_API UScriptStruct* Z_Construct_UScriptStruct_FHTTPLibRequest();
SIMPLEHTTPLIB_API UScriptStruct* Z_Construct_UScriptStruct_FHTTPLibResponse();
SIMPLEHTTPLIB_API UScriptStruct* Z_Construct_UScriptStruct_FHTTPLibResult();
UPackage* Z_Construct_UPackage__Script_SimpleHTTPLIB();
// End Cross Module References

// Begin Enum EHTTPLibVerbType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHTTPLibVerbType;
static UEnum* EHTTPLibVerbType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHTTPLibVerbType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHTTPLibVerbType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibVerbType, (UObject*)Z_Construct_UPackage__Script_SimpleHTTPLIB(), TEXT("EHTTPLibVerbType"));
	}
	return Z_Registration_Info_UEnum_EHTTPLibVerbType.OuterSingleton;
}
template<> SIMPLEHTTPLIB_API UEnum* StaticEnum<EHTTPLibVerbType>()
{
	return EHTTPLibVerbType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibVerbType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HTTPLIB_DELETE.DisplayName", "Delete" },
		{ "HTTPLIB_DELETE.Name", "EHTTPLibVerbType::HTTPLIB_DELETE" },
		{ "HTTPLIB_GET.DisplayName", "Get" },
		{ "HTTPLIB_GET.Name", "EHTTPLibVerbType::HTTPLIB_GET" },
		{ "HTTPLIB_POST.DisplayName", "Post" },
		{ "HTTPLIB_POST.Name", "EHTTPLibVerbType::HTTPLIB_POST" },
		{ "HTTPLIB_PUT.DisplayName", "Put" },
		{ "HTTPLIB_PUT.Name", "EHTTPLibVerbType::HTTPLIB_PUT" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHTTPLibVerbType::HTTPLIB_POST", (int64)EHTTPLibVerbType::HTTPLIB_POST },
		{ "EHTTPLibVerbType::HTTPLIB_PUT", (int64)EHTTPLibVerbType::HTTPLIB_PUT },
		{ "EHTTPLibVerbType::HTTPLIB_GET", (int64)EHTTPLibVerbType::HTTPLIB_GET },
		{ "EHTTPLibVerbType::HTTPLIB_DELETE", (int64)EHTTPLibVerbType::HTTPLIB_DELETE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibVerbType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleHTTPLIB,
	nullptr,
	"EHTTPLibVerbType",
	"EHTTPLibVerbType",
	Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibVerbType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibVerbType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibVerbType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibVerbType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibVerbType()
{
	if (!Z_Registration_Info_UEnum_EHTTPLibVerbType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHTTPLibVerbType.InnerSingleton, Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibVerbType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHTTPLibVerbType.InnerSingleton;
}
// End Enum EHTTPLibVerbType

// Begin Enum EHTTPLibErrorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHTTPLibErrorType;
static UEnum* EHTTPLibErrorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHTTPLibErrorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHTTPLibErrorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibErrorType, (UObject*)Z_Construct_UPackage__Script_SimpleHTTPLIB(), TEXT("EHTTPLibErrorType"));
	}
	return Z_Registration_Info_UEnum_EHTTPLibErrorType.OuterSingleton;
}
template<> SIMPLEHTTPLIB_API UEnum* StaticEnum<EHTTPLibErrorType>()
{
	return EHTTPLibErrorType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibErrorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HTTPLIBERRORTYPE_BINDIPADDRESS.DisplayName", "BindIPAddress" },
		{ "HTTPLIBERRORTYPE_BINDIPADDRESS.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_BINDIPADDRESS" },
		{ "HTTPLIBERRORTYPE_CANCELED.DisplayName", "Canceled" },
		{ "HTTPLIBERRORTYPE_CANCELED.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_CANCELED" },
		{ "HTTPLIBERRORTYPE_COMPRESSION.DisplayName", "Compression" },
		{ "HTTPLIBERRORTYPE_COMPRESSION.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_COMPRESSION" },
		{ "HTTPLIBERRORTYPE_CONNECTION.DisplayName", "Connection" },
		{ "HTTPLIBERRORTYPE_CONNECTION.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_CONNECTION" },
		{ "HTTPLIBERRORTYPE_CONNECTIONTIMEOUT.DisplayName", "ConnectionTimeout" },
		{ "HTTPLIBERRORTYPE_CONNECTIONTIMEOUT.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_CONNECTIONTIMEOUT" },
		{ "HTTPLIBERRORTYPE_EXCEEDREDIRECTCOUNT.DisplayName", "ExceedRedirectCount" },
		{ "HTTPLIBERRORTYPE_EXCEEDREDIRECTCOUNT.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_EXCEEDREDIRECTCOUNT" },
		{ "HTTPLIBERRORTYPE_PROXYCONNECTION.DisplayName", "ProxyConnection" },
		{ "HTTPLIBERRORTYPE_PROXYCONNECTION.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_PROXYCONNECTION" },
		{ "HTTPLIBERRORTYPE_READ.DisplayName", "Read" },
		{ "HTTPLIBERRORTYPE_READ.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_READ" },
		{ "HTTPLIBERRORTYPE_SSLCONNECTION.DisplayName", "SSLConnection" },
		{ "HTTPLIBERRORTYPE_SSLCONNECTION.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLCONNECTION" },
		{ "HTTPLIBERRORTYPE_SSLLOADINGCERTS.DisplayName", "SSLLoadingCerts" },
		{ "HTTPLIBERRORTYPE_SSLLOADINGCERTS.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLLOADINGCERTS" },
		{ "HTTPLIBERRORTYPE_SSLPEERCOULDBECLOSED_.DisplayName", "SSLPeerCouldBeClosed_" },
		{ "HTTPLIBERRORTYPE_SSLPEERCOULDBECLOSED_.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLPEERCOULDBECLOSED_" },
		{ "HTTPLIBERRORTYPE_SSLSERVERVERIFICATION.DisplayName", "SSLServerVerification" },
		{ "HTTPLIBERRORTYPE_SSLSERVERVERIFICATION.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLSERVERVERIFICATION" },
		{ "HTTPLIBERRORTYPE_SUCCESS.DisplayName", "Success" },
		{ "HTTPLIBERRORTYPE_SUCCESS.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_SUCCESS" },
		{ "HTTPLIBERRORTYPE_UNKNOWN.DisplayName", "Unknown" },
		{ "HTTPLIBERRORTYPE_UNKNOWN.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_UNKNOWN" },
		{ "HTTPLIBERRORTYPE_UNSUPPORTEDMULTIPARTBOUNDARYCHARS.DisplayName", "UnsupportedMultipartBoundaryChars" },
		{ "HTTPLIBERRORTYPE_UNSUPPORTEDMULTIPARTBOUNDARYCHARS.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_UNSUPPORTEDMULTIPARTBOUNDARYCHARS" },
		{ "HTTPLIBERRORTYPE_WRITE.DisplayName", "Write" },
		{ "HTTPLIBERRORTYPE_WRITE.Name", "EHTTPLibErrorType::HTTPLIBERRORTYPE_WRITE" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_SUCCESS", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_SUCCESS },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_UNKNOWN", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_UNKNOWN },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_CONNECTION", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_CONNECTION },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_BINDIPADDRESS", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_BINDIPADDRESS },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_READ", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_READ },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_WRITE", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_WRITE },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_EXCEEDREDIRECTCOUNT", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_EXCEEDREDIRECTCOUNT },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_CANCELED", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_CANCELED },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLCONNECTION", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLCONNECTION },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLLOADINGCERTS", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLLOADINGCERTS },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLSERVERVERIFICATION", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLSERVERVERIFICATION },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_UNSUPPORTEDMULTIPARTBOUNDARYCHARS", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_UNSUPPORTEDMULTIPARTBOUNDARYCHARS },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_COMPRESSION", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_COMPRESSION },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_CONNECTIONTIMEOUT", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_CONNECTIONTIMEOUT },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_PROXYCONNECTION", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_PROXYCONNECTION },
		{ "EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLPEERCOULDBECLOSED_", (int64)EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLPEERCOULDBECLOSED_ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibErrorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleHTTPLIB,
	nullptr,
	"EHTTPLibErrorType",
	"EHTTPLibErrorType",
	Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibErrorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibErrorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibErrorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibErrorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibErrorType()
{
	if (!Z_Registration_Info_UEnum_EHTTPLibErrorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHTTPLibErrorType.InnerSingleton, Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibErrorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHTTPLibErrorType.InnerSingleton;
}
// End Enum EHTTPLibErrorType

// Begin ScriptStruct FHTTPLibRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HTTPLibRequest;
class UScriptStruct* FHTTPLibRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HTTPLibRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HTTPLibRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHTTPLibRequest, (UObject*)Z_Construct_UPackage__Script_SimpleHTTPLIB(), TEXT("HTTPLibRequest"));
	}
	return Z_Registration_Info_UScriptStruct_HTTPLibRequest.OuterSingleton;
}
template<> SIMPLEHTTPLIB_API UScriptStruct* StaticStruct<FHTTPLibRequest>()
{
	return FHTTPLibRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHTTPLibRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "HTTPLib|Request" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Category", "HTTPLib|Request" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[] = {
		{ "Category", "HTTPLib|Request" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "Category", "HTTPLib|Request" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteAddr_MetaData[] = {
		{ "Category", "HTTPLib|Request" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemotePort_MetaData[] = {
		{ "Category", "HTTPLib|Request" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalAddr_MetaData[] = {
		{ "Category", "HTTPLib|Request" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPort_MetaData[] = {
		{ "Category", "HTTPLib|Request" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "HTTPLib|Request" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "HTTPLib|Request" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Method;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Body;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteAddr;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemotePort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalAddr;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHTTPLibRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibRequest, Method), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibRequest, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibRequest, Headers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Headers_MetaData), NewProp_Headers_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibRequest, Body), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_RemoteAddr = { "RemoteAddr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibRequest, RemoteAddr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteAddr_MetaData), NewProp_RemoteAddr_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_RemotePort = { "RemotePort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibRequest, RemotePort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemotePort_MetaData), NewProp_RemotePort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_LocalAddr = { "LocalAddr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibRequest, LocalAddr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalAddr_MetaData), NewProp_LocalAddr_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_LocalPort = { "LocalPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibRequest, LocalPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPort_MetaData), NewProp_LocalPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibRequest, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibRequest, Target), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Headers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Headers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Headers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_RemoteAddr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_RemotePort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_LocalAddr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_LocalPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleHTTPLIB,
	nullptr,
	&NewStructOps,
	"HTTPLibRequest",
	Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::PropPointers),
	sizeof(FHTTPLibRequest),
	alignof(FHTTPLibRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHTTPLibRequest()
{
	if (!Z_Registration_Info_UScriptStruct_HTTPLibRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HTTPLibRequest.InnerSingleton, Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HTTPLibRequest.InnerSingleton;
}
// End ScriptStruct FHTTPLibRequest

// Begin ScriptStruct FHTTPLibResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HTTPLibResponse;
class UScriptStruct* FHTTPLibResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HTTPLibResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HTTPLibResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHTTPLibResponse, (UObject*)Z_Construct_UPackage__Script_SimpleHTTPLIB(), TEXT("HTTPLibResponse"));
	}
	return Z_Registration_Info_UScriptStruct_HTTPLibResponse.OuterSingleton;
}
template<> SIMPLEHTTPLIB_API UScriptStruct* StaticStruct<FHTTPLibResponse>()
{
	return FHTTPLibResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHTTPLibResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "HTTPLib|Response" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "HTTPLib|Response" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "Category", "HTTPLib|Response" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[] = {
		{ "Category", "HTTPLib|Response" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "Category", "HTTPLib|Response" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "HTTPLib|Response" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Status;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Body;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHTTPLibResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibResponse, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibResponse, Status), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibResponse, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibResponse, Headers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Headers_MetaData), NewProp_Headers_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibResponse, Body), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibResponse, Location), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Headers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Headers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Headers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleHTTPLIB,
	nullptr,
	&NewStructOps,
	"HTTPLibResponse",
	Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::PropPointers),
	sizeof(FHTTPLibResponse),
	alignof(FHTTPLibResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHTTPLibResponse()
{
	if (!Z_Registration_Info_UScriptStruct_HTTPLibResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HTTPLibResponse.InnerSingleton, Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HTTPLibResponse.InnerSingleton;
}
// End ScriptStruct FHTTPLibResponse

// Begin ScriptStruct FHTTPLibResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HTTPLibResult;
class UScriptStruct* FHTTPLibResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HTTPLibResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HTTPLibResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHTTPLibResult, (UObject*)Z_Construct_UPackage__Script_SimpleHTTPLIB(), TEXT("HTTPLibResult"));
	}
	return Z_Registration_Info_UScriptStruct_HTTPLibResult.OuterSingleton;
}
template<> SIMPLEHTTPLIB_API UScriptStruct* StaticStruct<FHTTPLibResult>()
{
	return FHTTPLibResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHTTPLibResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "Category", "HTTPLib|Result" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorType_MetaData[] = {
		{ "Category", "HTTPLib|Result" },
		{ "ModuleRelativePath", "Public/SimpleHttplibType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHTTPLibResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHTTPLibResult_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibResult, Response), Z_Construct_UScriptStruct_FHTTPLibResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 636862626
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHTTPLibResult_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHTTPLibResult_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHTTPLibResult, ErrorType), Z_Construct_UEnum_SimpleHTTPLIB_EHTTPLibErrorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorType_MetaData), NewProp_ErrorType_MetaData) }; // 3479618721
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHTTPLibResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibResult_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibResult_Statics::NewProp_ErrorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTTPLibResult_Statics::NewProp_ErrorType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHTTPLibResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHTTPLibResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleHTTPLIB,
	nullptr,
	&NewStructOps,
	"HTTPLibResult",
	Z_Construct_UScriptStruct_FHTTPLibResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHTTPLibResult_Statics::PropPointers),
	sizeof(FHTTPLibResult),
	alignof(FHTTPLibResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHTTPLibResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHTTPLibResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHTTPLibResult()
{
	if (!Z_Registration_Info_UScriptStruct_HTTPLibResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HTTPLibResult.InnerSingleton, Z_Construct_UScriptStruct_FHTTPLibResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HTTPLibResult.InnerSingleton;
}
// End ScriptStruct FHTTPLibResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHttplibType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHTTPLibVerbType_StaticEnum, TEXT("EHTTPLibVerbType"), &Z_Registration_Info_UEnum_EHTTPLibVerbType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1998041649U) },
		{ EHTTPLibErrorType_StaticEnum, TEXT("EHTTPLibErrorType"), &Z_Registration_Info_UEnum_EHTTPLibErrorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3479618721U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHTTPLibRequest::StaticStruct, Z_Construct_UScriptStruct_FHTTPLibRequest_Statics::NewStructOps, TEXT("HTTPLibRequest"), &Z_Registration_Info_UScriptStruct_HTTPLibRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHTTPLibRequest), 419756193U) },
		{ FHTTPLibResponse::StaticStruct, Z_Construct_UScriptStruct_FHTTPLibResponse_Statics::NewStructOps, TEXT("HTTPLibResponse"), &Z_Registration_Info_UScriptStruct_HTTPLibResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHTTPLibResponse), 636862626U) },
		{ FHTTPLibResult::StaticStruct, Z_Construct_UScriptStruct_FHTTPLibResult_Statics::NewStructOps, TEXT("HTTPLibResult"), &Z_Registration_Info_UScriptStruct_HTTPLibResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHTTPLibResult), 1331590688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHttplibType_h_2479765172(TEXT("/Script/SimpleHTTPLIB"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHttplibType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHttplibType_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHttplibType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHttplibType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
