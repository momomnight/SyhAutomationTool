// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleHttplibType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEHTTPLIB_SimpleHttplibType_generated_h
#error "SimpleHttplibType.generated.h already included, missing '#pragma once' in SimpleHttplibType.h"
#endif
#define SIMPLEHTTPLIB_SimpleHttplibType_generated_h

#define FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHttplibType_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHTTPLibRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEHTTPLIB_API UScriptStruct* StaticStruct<struct FHTTPLibRequest>();

#define FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHttplibType_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHTTPLibResponse_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEHTTPLIB_API UScriptStruct* StaticStruct<struct FHTTPLibResponse>();

#define FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHttplibType_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHTTPLibResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEHTTPLIB_API UScriptStruct* StaticStruct<struct FHTTPLibResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTPLIB_Source_SimpleHTTPLIB_Public_SimpleHttplibType_h


#define FOREACH_ENUM_EHTTPLIBVERBTYPE(op) \
	op(EHTTPLibVerbType::HTTPLIB_POST) \
	op(EHTTPLibVerbType::HTTPLIB_PUT) \
	op(EHTTPLibVerbType::HTTPLIB_GET) \
	op(EHTTPLibVerbType::HTTPLIB_DELETE) 

enum class EHTTPLibVerbType : uint8;
template<> struct TIsUEnumClass<EHTTPLibVerbType> { enum { Value = true }; };
template<> SIMPLEHTTPLIB_API UEnum* StaticEnum<EHTTPLibVerbType>();

#define FOREACH_ENUM_EHTTPLIBERRORTYPE(op) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_SUCCESS) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_UNKNOWN) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_CONNECTION) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_BINDIPADDRESS) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_READ) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_WRITE) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_EXCEEDREDIRECTCOUNT) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_CANCELED) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLCONNECTION) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLLOADINGCERTS) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLSERVERVERIFICATION) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_UNSUPPORTEDMULTIPARTBOUNDARYCHARS) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_COMPRESSION) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_CONNECTIONTIMEOUT) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_PROXYCONNECTION) \
	op(EHTTPLibErrorType::HTTPLIBERRORTYPE_SSLPEERCOULDBECLOSED_) 

enum class EHTTPLibErrorType : uint8;
template<> struct TIsUEnumClass<EHTTPLibErrorType> { enum { Value = true }; };
template<> SIMPLEHTTPLIB_API UEnum* StaticEnum<EHTTPLibErrorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
