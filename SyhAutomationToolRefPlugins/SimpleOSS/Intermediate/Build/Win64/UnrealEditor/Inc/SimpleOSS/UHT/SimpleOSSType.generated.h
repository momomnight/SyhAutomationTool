// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleOSSType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEOSS_SimpleOSSType_generated_h
#error "SimpleOSSType.generated.h already included, missing '#pragma once' in SimpleOSSType.h"
#endif
#define SIMPLEOSS_SimpleOSSType_generated_h

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBucketInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEOSS_API UScriptStruct* StaticStruct<struct FBucketInfo>();

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEOSS_API UScriptStruct* StaticStruct<struct FMultipartPartsUploadsInfo>();

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRange_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEOSS_API UScriptStruct* StaticStruct<struct FRange>();

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOSSObjectInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEOSS_API UScriptStruct* StaticStruct<struct FOSSObjectInfo>();

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRefererList_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEOSS_API UScriptStruct* StaticStruct<struct FRefererList>();

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOSSObjectMeta_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEOSS_API UScriptStruct* StaticStruct<struct FOSSObjectMeta>();

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_295_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClientConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEOSS_API UScriptStruct* StaticStruct<struct FClientConfiguration>();

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_408_DELEGATE \
SIMPLEOSS_API void FBytesBufferByOSSCallbackDelegate_DelegateWrapper(const FScriptDelegate& BytesBufferByOSSCallbackDelegate, TArray<uint8> const& InBuffer);


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_409_DELEGATE \
SIMPLEOSS_API void FBufferByOSSCallbackDelegate_DelegateWrapper(const FScriptDelegate& BufferByOSSCallbackDelegate, const FString& InBuffer);


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_410_DELEGATE \
SIMPLEOSS_API void FProgressCallbackDelegate_DelegateWrapper(const FScriptDelegate& ProgressCallbackDelegate, int64 ConsumedBytes, int64 TotalBytes);


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h_411_DELEGATE \
SIMPLEOSS_API void FCallbackUploadPartDelegate_DelegateWrapper(const FScriptDelegate& CallbackUploadPartDelegate, const FString& UploadId, int64 PartCount, int64 Size, int64 InTotal, bool bPart, bool bComplete);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSType_h


#define FOREACH_ENUM_EREQUESTPAYERTYPE(op) \
	op(ERequestPayerType::NOTSET) \
	op(ERequestPayerType::BUCKETOWNER) \
	op(ERequestPayerType::REQUESTER) \
	op(ERequestPayerType::NONE) 

enum class ERequestPayerType : uint8;
template<> struct TIsUEnumClass<ERequestPayerType> { enum { Value = true }; };
template<> SIMPLEOSS_API UEnum* StaticEnum<ERequestPayerType>();

#define FOREACH_ENUM_EACL(op) \
	op(EAcl::PRIVATE) \
	op(EAcl::PUBLICREAD) \
	op(EAcl::PUBLICREADWRITE) \
	op(EAcl::NONE) 

enum class EAcl : uint8;
template<> struct TIsUEnumClass<EAcl> { enum { Value = true }; };
template<> SIMPLEOSS_API UEnum* StaticEnum<EAcl>();

#define FOREACH_ENUM_ESCHEME(op) \
	op(EScheme::HTTP) \
	op(EScheme::HTTPS) 

enum class EScheme : uint8;
template<> struct TIsUEnumClass<EScheme> { enum { Value = true }; };
template<> SIMPLEOSS_API UEnum* StaticEnum<EScheme>();

#define FOREACH_ENUM_EOSSSTORAGETYPE(op) \
	op(EOSSStorageType::STANDARD) \
	op(EOSSStorageType::IA) \
	op(EOSSStorageType::ARCHIVE) \
	op(EOSSStorageType::NONE) 

enum class EOSSStorageType : uint8;
template<> struct TIsUEnumClass<EOSSStorageType> { enum { Value = true }; };
template<> SIMPLEOSS_API UEnum* StaticEnum<EOSSStorageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
