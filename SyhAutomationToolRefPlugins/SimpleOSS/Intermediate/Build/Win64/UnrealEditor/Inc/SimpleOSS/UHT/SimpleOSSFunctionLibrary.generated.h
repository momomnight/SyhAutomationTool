// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleOSSFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
enum class EAcl : uint8;
enum class EOSSStorageType : uint8;
struct FBucketInfo;
struct FClientConfiguration;
struct FMultipartPartsUploadsInfo;
struct FOSSObjectInfo;
struct FOSSObjectMeta;
struct FRange;
#ifdef SIMPLEOSS_SimpleOSSFunctionLibrary_generated_h
#error "SimpleOSSFunctionLibrary.generated.h already included, missing '#pragma once' in SimpleOSSFunctionLibrary.h"
#endif
#define SIMPLEOSS_SimpleOSSFunctionLibrary_generated_h

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetImageInfo); \
	DECLARE_FUNCTION(execGetImageObjectByCascade); \
	DECLARE_FUNCTION(execGetImageObjectByStyle); \
	DECLARE_FUNCTION(execGetImageObjectByRotate); \
	DECLARE_FUNCTION(execGetImageObjectByWaterMark); \
	DECLARE_FUNCTION(execGetImageObjectBySharpen); \
	DECLARE_FUNCTION(execGetImageObjectByCrop); \
	DECLARE_FUNCTION(execGetImageObjectByResize); \
	DECLARE_FUNCTION(execAsyncResumableDownloadObject); \
	DECLARE_FUNCTION(execAsyncGetObjectByteToMemoryByURL); \
	DECLARE_FUNCTION(execAsyncGetObjectStringToMemoryByURL); \
	DECLARE_FUNCTION(execAsyncGetObjectToLocalByURL); \
	DECLARE_FUNCTION(execAsyncGetObjectBytesToMemory); \
	DECLARE_FUNCTION(execAsyncGetObjectStringToMemory); \
	DECLARE_FUNCTION(execAsyncGetObjectToLocal); \
	DECLARE_FUNCTION(execAsyncUploadPart); \
	DECLARE_FUNCTION(execAsyncResumableUploadObject); \
	DECLARE_FUNCTION(execAsyncPutObjectByteMemoryByURL); \
	DECLARE_FUNCTION(execAsyncPutObjectStringMemoryByURL); \
	DECLARE_FUNCTION(execAsyncPutObjectBytesByMemory); \
	DECLARE_FUNCTION(execAsyncPutObjectStringByMemory); \
	DECLARE_FUNCTION(execAsyncPutObjectByURL); \
	DECLARE_FUNCTION(execAsyncPutObject); \
	DECLARE_FUNCTION(execAbortMultipartUpload); \
	DECLARE_FUNCTION(execUploadPart); \
	DECLARE_FUNCTION(execResumableUploadObject); \
	DECLARE_FUNCTION(execPutByteObjectMemoryByURL); \
	DECLARE_FUNCTION(execPutStringObjectMemoryByURL); \
	DECLARE_FUNCTION(execPutByteObjectByMemory); \
	DECLARE_FUNCTION(execPutStringObjectByMemory); \
	DECLARE_FUNCTION(execPutObjectByURL); \
	DECLARE_FUNCTION(execPutObject); \
	DECLARE_FUNCTION(execResumableDownloadObject); \
	DECLARE_FUNCTION(execGetObjectByteToMemoryByURL); \
	DECLARE_FUNCTION(execGetObjectStringToMemoryByURL); \
	DECLARE_FUNCTION(execGetObjectByteToMemory); \
	DECLARE_FUNCTION(execGetObjectStringToMemory); \
	DECLARE_FUNCTION(execGetObjectToLocalByURL); \
	DECLARE_FUNCTION(execGetObjectToLocal); \
	DECLARE_FUNCTION(execGeneratePresignedUrl); \
	DECLARE_FUNCTION(execListMultipartUploads); \
	DECLARE_FUNCTION(execDeleteObjects); \
	DECLARE_FUNCTION(execDeleteObjectByFilePath); \
	DECLARE_FUNCTION(execDeleteObjectByPrefix); \
	DECLARE_FUNCTION(execDeleteObject); \
	DECLARE_FUNCTION(execCopyObject); \
	DECLARE_FUNCTION(execGetSymlink); \
	DECLARE_FUNCTION(execCreateSymlink); \
	DECLARE_FUNCTION(execRecursiveListObjectsByFilePaths); \
	DECLARE_FUNCTION(execListObjectsByFilePaths); \
	DECLARE_FUNCTION(execListObjects); \
	DECLARE_FUNCTION(execDoesObjectExist); \
	DECLARE_FUNCTION(execSetObjectAcl); \
	DECLARE_FUNCTION(execGetObjectAcl); \
	DECLARE_FUNCTION(execGetObjectMeta); \
	DECLARE_FUNCTION(execDeleteBucketReferer); \
	DECLARE_FUNCTION(execGetBucketReferer); \
	DECLARE_FUNCTION(execSetBucketReferer); \
	DECLARE_FUNCTION(execGetBucketAcl); \
	DECLARE_FUNCTION(execSetBucketAcl); \
	DECLARE_FUNCTION(execDeleteBucket); \
	DECLARE_FUNCTION(execGetBucketLocation); \
	DECLARE_FUNCTION(execGetBucketsInfo); \
	DECLARE_FUNCTION(execListBuckets); \
	DECLARE_FUNCTION(execCreateBucket); \
	DECLARE_FUNCTION(execDoesBucketExist); \
	DECLARE_FUNCTION(execInitConf); \
	DECLARE_FUNCTION(execInitAccounts); \
	DECLARE_FUNCTION(execGetEndpoint);


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleOSSFunctionLibrary(); \
	friend struct Z_Construct_UClass_USimpleOSSFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USimpleOSSFunctionLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleOSS"), NO_API) \
	DECLARE_SERIALIZER(USimpleOSSFunctionLibrary)


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleOSSFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleOSSFunctionLibrary(USimpleOSSFunctionLibrary&&); \
	USimpleOSSFunctionLibrary(const USimpleOSSFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleOSSFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleOSSFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleOSSFunctionLibrary) \
	NO_API virtual ~USimpleOSSFunctionLibrary();


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_9_PROLOG
#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEOSS_API UClass* StaticClass<class USimpleOSSFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
