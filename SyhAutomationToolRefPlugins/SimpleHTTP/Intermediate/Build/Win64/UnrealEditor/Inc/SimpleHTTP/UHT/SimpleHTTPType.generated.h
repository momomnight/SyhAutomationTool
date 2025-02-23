// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleHTTPType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSimpleHttpRequest;
struct FSimpleHttpResponse;
#ifdef SIMPLEHTTP_SimpleHTTPType_generated_h
#error "SimpleHTTPType.generated.h already included, missing '#pragma once' in SimpleHTTPType.h"
#endif
#define SIMPLEHTTP_SimpleHTTPType_generated_h

#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execGetContent);


#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleHttpContent(); \
	friend struct Z_Construct_UClass_USimpleHttpContent_Statics; \
public: \
	DECLARE_CLASS(USimpleHttpContent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleHTTP"), NO_API) \
	DECLARE_SERIALIZER(USimpleHttpContent)


#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleHttpContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleHttpContent(USimpleHttpContent&&); \
	USimpleHttpContent(const USimpleHttpContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleHttpContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleHttpContent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleHttpContent) \
	NO_API virtual ~USimpleHttpContent();


#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_51_PROLOG
#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEHTTP_API UClass* StaticClass<class USimpleHttpContent>();

#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleHttpBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEHTTP_API UScriptStruct* StaticStruct<struct FSimpleHttpBase>();

#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleHttpRequest_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSimpleHttpBase Super;


template<> SIMPLEHTTP_API UScriptStruct* StaticStruct<struct FSimpleHttpRequest>();

#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleHttpResponse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSimpleHttpBase Super;


template<> SIMPLEHTTP_API UScriptStruct* StaticStruct<struct FSimpleHttpResponse>();

#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_135_DELEGATE \
SIMPLEHTTP_API void FSimpleHttpSingleRequestCompleteDelegate_DelegateWrapper(const FScriptDelegate& SimpleHttpSingleRequestCompleteDelegate, const FSimpleHttpRequest Request, const FSimpleHttpResponse Response, bool bConnectedSuccessfully);


#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_136_DELEGATE \
SIMPLEHTTP_API void FSimpleHttpSingleRequestProgressDelegate_DelegateWrapper(const FScriptDelegate& SimpleHttpSingleRequestProgressDelegate, const FSimpleHttpRequest Request, uint64 BytesSent, uint64 BytesReceived);


#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_137_DELEGATE \
SIMPLEHTTP_API void FSimpleHttpSingleRequestHeaderReceivedDelegate_DelegateWrapper(const FScriptDelegate& SimpleHttpSingleRequestHeaderReceivedDelegate, const FSimpleHttpRequest Request, const FString& HeaderName, const FString& NewHeaderValue);


#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_138_DELEGATE \
SIMPLEHTTP_API void FAllRequestCompleteDelegate_DelegateWrapper(const FScriptDelegate& AllRequestCompleteDelegate);


#define FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEHTTP_API UScriptStruct* StaticStruct<struct FSimpleHTTPBPResponseDelegate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_RENZHAI_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPType_h


#define FOREACH_ENUM_EHTTPREQUESTTYPE(op) \
	op(EHTTPRequestType::SINGLE) \
	op(EHTTPRequestType::MULTPLE) 

enum class EHTTPRequestType : uint8;
template<> struct TIsUEnumClass<EHTTPRequestType> { enum { Value = true }; };
template<> SIMPLEHTTP_API UEnum* StaticEnum<EHTTPRequestType>();

#define FOREACH_ENUM_FSIMPLEHTTPSTARTE(op) \
	op(FSimpleHttpStarte::NotStarted) \
	op(FSimpleHttpStarte::Processing) \
	op(FSimpleHttpStarte::Failed) \
	op(FSimpleHttpStarte::Failed_ConnectionError) \
	op(FSimpleHttpStarte::Succeeded) 

enum class FSimpleHttpStarte : uint8;
template<> struct TIsUEnumClass<FSimpleHttpStarte> { enum { Value = true }; };
template<> SIMPLEHTTP_API UEnum* StaticEnum<FSimpleHttpStarte>();

#define FOREACH_ENUM_ESIMPLEHTTPVERBTYPE(op) \
	op(ESimpleHTTPVerbType::SIMPLE_POST) \
	op(ESimpleHTTPVerbType::SIMPLE_PUT) \
	op(ESimpleHTTPVerbType::SIMPLE_GET) \
	op(ESimpleHTTPVerbType::SIMPLE_DELETE) 

enum class ESimpleHTTPVerbType : uint8;
template<> struct TIsUEnumClass<ESimpleHTTPVerbType> { enum { Value = true }; };
template<> SIMPLEHTTP_API UEnum* StaticEnum<ESimpleHTTPVerbType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
