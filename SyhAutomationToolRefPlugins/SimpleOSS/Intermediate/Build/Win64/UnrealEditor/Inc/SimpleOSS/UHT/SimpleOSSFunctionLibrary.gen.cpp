// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleOSSFunctionLibrary.h"
#include "SimpleOSSType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleOSSFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	SIMPLEOSS_API UClass* Z_Construct_UClass_USimpleOSSFunctionLibrary();
	SIMPLEOSS_API UClass* Z_Construct_UClass_USimpleOSSFunctionLibrary_NoRegister();
	SIMPLEOSS_API UEnum* Z_Construct_UEnum_SimpleOSS_EAcl();
	SIMPLEOSS_API UEnum* Z_Construct_UEnum_SimpleOSS_EOSSStorageType();
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
	UPackage* Z_Construct_UPackage__Script_SimpleOSS();
// End Cross Module References
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetImageInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileNametoSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetImageInfo(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InFileNametoSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetImageObjectByCascade)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_CascadeCommand);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileNametoSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetImageObjectByCascade(Z_Param_Out_CascadeCommand,Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InFileNametoSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetImageObjectByStyle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OSSStyleName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileNametoSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetImageObjectByStyle(Z_Param_OSSStyleName,Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InFileNametoSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetImageObjectByRotate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Rotate);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileNametoSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetImageObjectByRotate(Z_Param_Rotate,Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InFileNametoSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetImageObjectByWaterMark)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WaterMarkObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileNametoSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetImageObjectByWaterMark(Z_Param_WaterMarkObjectName,Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InFileNametoSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetImageObjectBySharpen)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Sharpen);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileNametoSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetImageObjectBySharpen(Z_Param_Sharpen,Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InFileNametoSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetImageObjectByCrop)
	{
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_Ratio);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileNametoSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetImageObjectByCrop(Z_Param_Out_Size,Z_Param_Ratio,Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InFileNametoSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetImageObjectByResize)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Size);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileNametoSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetImageObjectByResize(Z_Param_Out_Size,Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InFileNametoSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncResumableDownloadObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InDownloadFilePath);
		P_GET_PROPERTY(FIntProperty,Z_Param_PartSize);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncResumableDownloadObject(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InDownloadFilePath,Z_Param_PartSize,FProgressCallbackDelegate(Z_Param_InProgressCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncGetObjectByteToMemoryByURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_STRUCT(FRange,Z_Param_Range);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InStartCallback);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InEndCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncGetObjectByteToMemoryByURL(Z_Param_URL,Z_Param_Range,FProgressCallbackDelegate(Z_Param_InProgressCallback),FBufferByOSSCallbackDelegate(Z_Param_InStartCallback),FBytesBufferByOSSCallbackDelegate(Z_Param_InEndCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncGetObjectStringToMemoryByURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_STRUCT(FRange,Z_Param_Range);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InStartCallback);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InEndCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncGetObjectStringToMemoryByURL(Z_Param_URL,Z_Param_Range,FProgressCallbackDelegate(Z_Param_InProgressCallback),FBufferByOSSCallbackDelegate(Z_Param_InStartCallback),FBufferByOSSCallbackDelegate(Z_Param_InEndCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncGetObjectToLocalByURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLocalPaths);
		P_GET_STRUCT(FRange,Z_Param_Range);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InStartCallback);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InEndCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncGetObjectToLocalByURL(Z_Param_URL,Z_Param_InLocalPaths,Z_Param_Range,FProgressCallbackDelegate(Z_Param_InProgressCallback),FBufferByOSSCallbackDelegate(Z_Param_InStartCallback),FBufferByOSSCallbackDelegate(Z_Param_InEndCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncGetObjectBytesToMemory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_STRUCT(FRange,Z_Param_Range);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InStartCallback);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InEndCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncGetObjectBytesToMemory(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_Range,FProgressCallbackDelegate(Z_Param_InProgressCallback),FBufferByOSSCallbackDelegate(Z_Param_InStartCallback),FBytesBufferByOSSCallbackDelegate(Z_Param_InEndCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncGetObjectStringToMemory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_STRUCT(FRange,Z_Param_Range);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InStartCallback);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InEndCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncGetObjectStringToMemory(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_Range,FProgressCallbackDelegate(Z_Param_InProgressCallback),FBufferByOSSCallbackDelegate(Z_Param_InStartCallback),FBufferByOSSCallbackDelegate(Z_Param_InEndCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncGetObjectToLocal)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLocalPaths);
		P_GET_STRUCT(FRange,Z_Param_Range);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncGetObjectToLocal(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InLocalPaths,Z_Param_Range,FProgressCallbackDelegate(Z_Param_InProgressCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncUploadPart)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLocalPaths);
		P_GET_PROPERTY(FIntProperty,Z_Param_PartSize);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USimpleOSSFunctionLibrary::AsyncUploadPart(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InLocalPaths,Z_Param_PartSize,FCallbackUploadPartDelegate(Z_Param_InProgressCallback),Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncResumableUploadObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InUploadFilePath);
		P_GET_PROPERTY(FInt64Property,Z_Param_PartSize);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncResumableUploadObject(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InUploadFilePath,Z_Param_PartSize,FProgressCallbackDelegate(Z_Param_InProgressCallback),Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncPutObjectByteMemoryByURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncPutObjectByteMemoryByURL(Z_Param_URL,Z_Param_Out_Data,FProgressCallbackDelegate(Z_Param_InProgressCallback),Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncPutObjectStringMemoryByURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncPutObjectStringMemoryByURL(Z_Param_URL,Z_Param_Data,FProgressCallbackDelegate(Z_Param_InProgressCallback),Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncPutObjectBytesByMemory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncPutObjectBytesByMemory(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_Out_Data,FProgressCallbackDelegate(Z_Param_InProgressCallback),Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncPutObjectStringByMemory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncPutObjectStringByMemory(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_Data,FProgressCallbackDelegate(Z_Param_InProgressCallback),Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncPutObjectByURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLocalPaths);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncPutObjectByURL(Z_Param_URL,Z_Param_InLocalPaths,FProgressCallbackDelegate(Z_Param_InProgressCallback),Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAsyncPutObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLocalPaths);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InProgressCallback);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::AsyncPutObject(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InLocalPaths,FProgressCallbackDelegate(Z_Param_InProgressCallback),Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execAbortMultipartUpload)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InUploadId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::AbortMultipartUpload(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InUploadId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execUploadPart)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InUploadId);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLocalPaths);
		P_GET_PROPERTY(FIntProperty,Z_Param_PartSize);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::UploadPart(Z_Param_Out_InUploadId,Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InLocalPaths,Z_Param_PartSize,Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execResumableUploadObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InUploadFilePath);
		P_GET_PROPERTY(FInt64Property,Z_Param_PartSize);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::ResumableUploadObject(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InUploadFilePath,Z_Param_PartSize,Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execPutByteObjectMemoryByURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::PutByteObjectMemoryByURL(Z_Param_URL,Z_Param_Out_Data,Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execPutStringObjectMemoryByURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::PutStringObjectMemoryByURL(Z_Param_URL,Z_Param_Data,Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execPutByteObjectByMemory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::PutByteObjectByMemory(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_Out_Data,Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execPutStringObjectByMemory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::PutStringObjectByMemory(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_Data,Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execPutObjectByURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLocalPaths);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::PutObjectByURL(Z_Param_URL,Z_Param_InLocalPaths,Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execPutObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLocalPaths);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OSSMeta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::PutObject(Z_Param_InBucketName,Z_Param_InLocalPaths,Z_Param_InObjectName,Z_Param_Out_OSSMeta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execResumableDownloadObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InDownloadFilePath);
		P_GET_PROPERTY(FIntProperty,Z_Param_PartSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::ResumableDownloadObject(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InDownloadFilePath,Z_Param_PartSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetObjectByteToMemoryByURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ContextString);
		P_GET_STRUCT(FRange,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetObjectByteToMemoryByURL(Z_Param_URL,Z_Param_Out_ContextString,Z_Param_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetObjectStringToMemoryByURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ContextString);
		P_GET_STRUCT(FRange,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetObjectStringToMemoryByURL(Z_Param_URL,Z_Param_Out_ContextString,Z_Param_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetObjectByteToMemory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutData);
		P_GET_STRUCT(FRange,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetObjectByteToMemory(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_Out_OutData,Z_Param_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetObjectStringToMemory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ContextString);
		P_GET_STRUCT(FRange,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetObjectStringToMemory(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_Out_ContextString,Z_Param_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetObjectToLocalByURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLocalPaths);
		P_GET_STRUCT(FRange,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetObjectToLocalByURL(Z_Param_URL,Z_Param_InLocalPaths,Z_Param_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetObjectToLocal)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLocalPaths);
		P_GET_STRUCT_REF(FRange,Z_Param_Out_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetObjectToLocal(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InLocalPaths,Z_Param_Out_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGeneratePresignedUrl)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GeneratePresignedUrl(Z_Param_Out_URL,Z_Param_InBucketName,Z_Param_InObjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execListMultipartUploads)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_TARRAY_REF(FMultipartPartsUploadsInfo,Z_Param_Out_MultipartPartsInfo);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxParts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::ListMultipartUploads(Z_Param_InBucketName,Z_Param_Out_MultipartPartsInfo,Z_Param_MaxParts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execDeleteObjects)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_InObjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::DeleteObjects(Z_Param_InBucketName,Z_Param_Out_InObjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execDeleteObjectByFilePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InServerFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::DeleteObjectByFilePath(Z_Param_InBucketName,Z_Param_InServerFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execDeleteObjectByPrefix)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InPrefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::DeleteObjectByPrefix(Z_Param_InBucketName,Z_Param_InPrefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execDeleteObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::DeleteObject(Z_Param_InBucketName,Z_Param_InObjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execCopyObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InSourceBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSourceObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InCopyBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InCopyObjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::CopyObject(Z_Param_InSourceBucketName,Z_Param_InSourceObjectName,Z_Param_InCopyBucketName,Z_Param_InCopyObjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetSymlink)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLinkName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USimpleOSSFunctionLibrary::GetSymlink(Z_Param_InBucketName,Z_Param_InLinkName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execCreateSymlink)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLinkObjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::CreateSymlink(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_InLinkObjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execRecursiveListObjectsByFilePaths)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerFileRelativePaths);
		P_GET_TARRAY_REF(FOSSObjectInfo,Z_Param_Out_ObjectName);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::RecursiveListObjectsByFilePaths(Z_Param_InBucketName,Z_Param_ServerFileRelativePaths,Z_Param_Out_ObjectName,Z_Param_MaxNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execListObjectsByFilePaths)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerFileRelativePaths);
		P_GET_TARRAY_REF(FOSSObjectInfo,Z_Param_Out_ObjectName);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::ListObjectsByFilePaths(Z_Param_InBucketName,Z_Param_ServerFileRelativePaths,Z_Param_Out_ObjectName,Z_Param_MaxNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execListObjects)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_TARRAY_REF(FOSSObjectInfo,Z_Param_Out_ObjectName);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::ListObjects(Z_Param_InBucketName,Z_Param_Out_ObjectName,Z_Param_MaxNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execDoesObjectExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::DoesObjectExist(Z_Param_InBucketName,Z_Param_InObjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execSetObjectAcl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_ENUM(EAcl,Z_Param_InAcl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::SetObjectAcl(Z_Param_InBucketName,Z_Param_InObjectName,EAcl(Z_Param_InAcl));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetObjectAcl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAcl*)Z_Param__Result=USimpleOSSFunctionLibrary::GetObjectAcl(Z_Param_InBucketName,Z_Param_InObjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetObjectMeta)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InObjectName);
		P_GET_STRUCT_REF(FOSSObjectMeta,Z_Param_Out_OSSObjectInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetObjectMeta(Z_Param_InBucketName,Z_Param_InObjectName,Z_Param_Out_OSSObjectInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execDeleteBucketReferer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_UBOOL(Z_Param_bAllowEmptyRefere);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::DeleteBucketReferer(Z_Param_InBucketName,Z_Param_bAllowEmptyRefere);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetBucketReferer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_BucketReferers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetBucketReferer(Z_Param_InBucketName,Z_Param_Out_BucketReferers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execSetBucketReferer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_URLReferer);
		P_GET_UBOOL(Z_Param_bAllowEmptyRefere);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::SetBucketReferer(Z_Param_InBucketName,Z_Param_Out_URLReferer,Z_Param_bAllowEmptyRefere);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetBucketAcl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAcl*)Z_Param__Result=USimpleOSSFunctionLibrary::GetBucketAcl(Z_Param_InBucketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execSetBucketAcl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_ENUM(EAcl,Z_Param_BucketAcl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::SetBucketAcl(Z_Param_InBucketName,EAcl(Z_Param_BucketAcl));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execDeleteBucket)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::DeleteBucket(Z_Param_InBucketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetBucketLocation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USimpleOSSFunctionLibrary::GetBucketLocation(Z_Param_InBucketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetBucketsInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_STRUCT_REF(FBucketInfo,Z_Param_Out_InBucketInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::GetBucketsInfo(Z_Param_InBucketName,Z_Param_Out_InBucketInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execListBuckets)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_InBucketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::ListBuckets(Z_Param_Out_InBucketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execCreateBucket)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_GET_ENUM(EOSSStorageType,Z_Param_OSSStorageType);
		P_GET_ENUM(EAcl,Z_Param_Acl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::CreateBucket(Z_Param_InBucketName,EOSSStorageType(Z_Param_OSSStorageType),EAcl(Z_Param_Acl));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execDoesBucketExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBucketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleOSSFunctionLibrary::DoesBucketExist(Z_Param_InBucketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execInitConf)
	{
		P_GET_STRUCT_REF(FClientConfiguration,Z_Param_Out_InConf);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::InitConf(Z_Param_Out_InConf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execInitAccounts)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAccessKeyId);
		P_GET_PROPERTY(FStrProperty,Z_Param_InAccessKeySecret);
		P_GET_PROPERTY(FStrProperty,Z_Param_InEndpoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleOSSFunctionLibrary::InitAccounts(Z_Param_InAccessKeyId,Z_Param_InAccessKeySecret,Z_Param_InEndpoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleOSSFunctionLibrary::execGetEndpoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USimpleOSSFunctionLibrary::GetEndpoint();
		P_NATIVE_END;
	}
	void USimpleOSSFunctionLibrary::StaticRegisterNativesUSimpleOSSFunctionLibrary()
	{
		UClass* Class = USimpleOSSFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortMultipartUpload", &USimpleOSSFunctionLibrary::execAbortMultipartUpload },
			{ "AsyncGetObjectBytesToMemory", &USimpleOSSFunctionLibrary::execAsyncGetObjectBytesToMemory },
			{ "AsyncGetObjectByteToMemoryByURL", &USimpleOSSFunctionLibrary::execAsyncGetObjectByteToMemoryByURL },
			{ "AsyncGetObjectStringToMemory", &USimpleOSSFunctionLibrary::execAsyncGetObjectStringToMemory },
			{ "AsyncGetObjectStringToMemoryByURL", &USimpleOSSFunctionLibrary::execAsyncGetObjectStringToMemoryByURL },
			{ "AsyncGetObjectToLocal", &USimpleOSSFunctionLibrary::execAsyncGetObjectToLocal },
			{ "AsyncGetObjectToLocalByURL", &USimpleOSSFunctionLibrary::execAsyncGetObjectToLocalByURL },
			{ "AsyncPutObject", &USimpleOSSFunctionLibrary::execAsyncPutObject },
			{ "AsyncPutObjectByteMemoryByURL", &USimpleOSSFunctionLibrary::execAsyncPutObjectByteMemoryByURL },
			{ "AsyncPutObjectBytesByMemory", &USimpleOSSFunctionLibrary::execAsyncPutObjectBytesByMemory },
			{ "AsyncPutObjectByURL", &USimpleOSSFunctionLibrary::execAsyncPutObjectByURL },
			{ "AsyncPutObjectStringByMemory", &USimpleOSSFunctionLibrary::execAsyncPutObjectStringByMemory },
			{ "AsyncPutObjectStringMemoryByURL", &USimpleOSSFunctionLibrary::execAsyncPutObjectStringMemoryByURL },
			{ "AsyncResumableDownloadObject", &USimpleOSSFunctionLibrary::execAsyncResumableDownloadObject },
			{ "AsyncResumableUploadObject", &USimpleOSSFunctionLibrary::execAsyncResumableUploadObject },
			{ "AsyncUploadPart", &USimpleOSSFunctionLibrary::execAsyncUploadPart },
			{ "CopyObject", &USimpleOSSFunctionLibrary::execCopyObject },
			{ "CreateBucket", &USimpleOSSFunctionLibrary::execCreateBucket },
			{ "CreateSymlink", &USimpleOSSFunctionLibrary::execCreateSymlink },
			{ "DeleteBucket", &USimpleOSSFunctionLibrary::execDeleteBucket },
			{ "DeleteBucketReferer", &USimpleOSSFunctionLibrary::execDeleteBucketReferer },
			{ "DeleteObject", &USimpleOSSFunctionLibrary::execDeleteObject },
			{ "DeleteObjectByFilePath", &USimpleOSSFunctionLibrary::execDeleteObjectByFilePath },
			{ "DeleteObjectByPrefix", &USimpleOSSFunctionLibrary::execDeleteObjectByPrefix },
			{ "DeleteObjects", &USimpleOSSFunctionLibrary::execDeleteObjects },
			{ "DoesBucketExist", &USimpleOSSFunctionLibrary::execDoesBucketExist },
			{ "DoesObjectExist", &USimpleOSSFunctionLibrary::execDoesObjectExist },
			{ "GeneratePresignedUrl", &USimpleOSSFunctionLibrary::execGeneratePresignedUrl },
			{ "GetBucketAcl", &USimpleOSSFunctionLibrary::execGetBucketAcl },
			{ "GetBucketLocation", &USimpleOSSFunctionLibrary::execGetBucketLocation },
			{ "GetBucketReferer", &USimpleOSSFunctionLibrary::execGetBucketReferer },
			{ "GetBucketsInfo", &USimpleOSSFunctionLibrary::execGetBucketsInfo },
			{ "GetEndpoint", &USimpleOSSFunctionLibrary::execGetEndpoint },
			{ "GetImageInfo", &USimpleOSSFunctionLibrary::execGetImageInfo },
			{ "GetImageObjectByCascade", &USimpleOSSFunctionLibrary::execGetImageObjectByCascade },
			{ "GetImageObjectByCrop", &USimpleOSSFunctionLibrary::execGetImageObjectByCrop },
			{ "GetImageObjectByResize", &USimpleOSSFunctionLibrary::execGetImageObjectByResize },
			{ "GetImageObjectByRotate", &USimpleOSSFunctionLibrary::execGetImageObjectByRotate },
			{ "GetImageObjectBySharpen", &USimpleOSSFunctionLibrary::execGetImageObjectBySharpen },
			{ "GetImageObjectByStyle", &USimpleOSSFunctionLibrary::execGetImageObjectByStyle },
			{ "GetImageObjectByWaterMark", &USimpleOSSFunctionLibrary::execGetImageObjectByWaterMark },
			{ "GetObjectAcl", &USimpleOSSFunctionLibrary::execGetObjectAcl },
			{ "GetObjectByteToMemory", &USimpleOSSFunctionLibrary::execGetObjectByteToMemory },
			{ "GetObjectByteToMemoryByURL", &USimpleOSSFunctionLibrary::execGetObjectByteToMemoryByURL },
			{ "GetObjectMeta", &USimpleOSSFunctionLibrary::execGetObjectMeta },
			{ "GetObjectStringToMemory", &USimpleOSSFunctionLibrary::execGetObjectStringToMemory },
			{ "GetObjectStringToMemoryByURL", &USimpleOSSFunctionLibrary::execGetObjectStringToMemoryByURL },
			{ "GetObjectToLocal", &USimpleOSSFunctionLibrary::execGetObjectToLocal },
			{ "GetObjectToLocalByURL", &USimpleOSSFunctionLibrary::execGetObjectToLocalByURL },
			{ "GetSymlink", &USimpleOSSFunctionLibrary::execGetSymlink },
			{ "InitAccounts", &USimpleOSSFunctionLibrary::execInitAccounts },
			{ "InitConf", &USimpleOSSFunctionLibrary::execInitConf },
			{ "ListBuckets", &USimpleOSSFunctionLibrary::execListBuckets },
			{ "ListMultipartUploads", &USimpleOSSFunctionLibrary::execListMultipartUploads },
			{ "ListObjects", &USimpleOSSFunctionLibrary::execListObjects },
			{ "ListObjectsByFilePaths", &USimpleOSSFunctionLibrary::execListObjectsByFilePaths },
			{ "PutByteObjectByMemory", &USimpleOSSFunctionLibrary::execPutByteObjectByMemory },
			{ "PutByteObjectMemoryByURL", &USimpleOSSFunctionLibrary::execPutByteObjectMemoryByURL },
			{ "PutObject", &USimpleOSSFunctionLibrary::execPutObject },
			{ "PutObjectByURL", &USimpleOSSFunctionLibrary::execPutObjectByURL },
			{ "PutStringObjectByMemory", &USimpleOSSFunctionLibrary::execPutStringObjectByMemory },
			{ "PutStringObjectMemoryByURL", &USimpleOSSFunctionLibrary::execPutStringObjectMemoryByURL },
			{ "RecursiveListObjectsByFilePaths", &USimpleOSSFunctionLibrary::execRecursiveListObjectsByFilePaths },
			{ "ResumableDownloadObject", &USimpleOSSFunctionLibrary::execResumableDownloadObject },
			{ "ResumableUploadObject", &USimpleOSSFunctionLibrary::execResumableUploadObject },
			{ "SetBucketAcl", &USimpleOSSFunctionLibrary::execSetBucketAcl },
			{ "SetBucketReferer", &USimpleOSSFunctionLibrary::execSetBucketReferer },
			{ "SetObjectAcl", &USimpleOSSFunctionLibrary::execSetObjectAcl },
			{ "UploadPart", &USimpleOSSFunctionLibrary::execUploadPart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAbortMultipartUpload_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString InUploadId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUploadId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InUploadId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAbortMultipartUpload_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAbortMultipartUpload_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InUploadId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InUploadId = { "InUploadId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAbortMultipartUpload_Parms, InUploadId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InUploadId_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InUploadId_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventAbortMultipartUpload_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventAbortMultipartUpload_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_InUploadId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put" },
		{ "Comment", "/**\n\x09* Cancel fragment upload\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InUploadId\x09\x09\x09\x09Upload ID\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Cancel fragment upload\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InUploadId                          Upload ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AbortMultipartUpload", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::SimpleOSSFunctionLibrary_eventAbortMultipartUpload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::SimpleOSSFunctionLibrary_eventAbortMultipartUpload_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncGetObjectBytesToMemory_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FRange Range;
			FScriptDelegate InProgressCallback;
			FScriptDelegate InStartCallback;
			FScriptDelegate InEndCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InStartCallback;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InEndCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectBytesToMemory_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectBytesToMemory_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InObjectName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectBytesToMemory_Parms, Range), Z_Construct_UScriptStruct_FRange, METADATA_PARAMS(0, nullptr) }; // 2882621238
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectBytesToMemory_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InStartCallback = { "InStartCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectBytesToMemory_Parms, InStartCallback), Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 188727451
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InEndCallback = { "InEndCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectBytesToMemory_Parms, InEndCallback), Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2789007506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InStartCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::NewProp_InEndCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get|Async" },
		{ "Comment", "/**\n\x09* Download locl By URL\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Download locl By URL\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ PartSize                            Part Size\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncGetObjectBytesToMemory", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::SimpleOSSFunctionLibrary_eventAsyncGetObjectBytesToMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::SimpleOSSFunctionLibrary_eventAsyncGetObjectBytesToMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncGetObjectByteToMemoryByURL_Parms
		{
			FString URL;
			FRange Range;
			FScriptDelegate InProgressCallback;
			FScriptDelegate InStartCallback;
			FScriptDelegate InEndCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InStartCallback;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InEndCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectByteToMemoryByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectByteToMemoryByURL_Parms, Range), Z_Construct_UScriptStruct_FRange, METADATA_PARAMS(0, nullptr) }; // 2882621238
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectByteToMemoryByURL_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_InStartCallback = { "InStartCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectByteToMemoryByURL_Parms, InStartCallback), Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 188727451
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_InEndCallback = { "InEndCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectByteToMemoryByURL_Parms, InEndCallback), Z_Construct_UDelegateFunction_SimpleOSS_BytesBufferByOSSCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2789007506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_InStartCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::NewProp_InEndCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get|Async" },
		{ "Comment", "/**\n\x09* Download locl By URL Memory\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Download locl By URL Memory\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ PartSize                            Part Size\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncGetObjectByteToMemoryByURL", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventAsyncGetObjectByteToMemoryByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventAsyncGetObjectByteToMemoryByURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemory_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FRange Range;
			FScriptDelegate InProgressCallback;
			FScriptDelegate InStartCallback;
			FScriptDelegate InEndCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InStartCallback;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InEndCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemory_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemory_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InObjectName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemory_Parms, Range), Z_Construct_UScriptStruct_FRange, METADATA_PARAMS(0, nullptr) }; // 2882621238
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemory_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InStartCallback = { "InStartCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemory_Parms, InStartCallback), Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 188727451
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InEndCallback = { "InEndCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemory_Parms, InEndCallback), Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 188727451
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InStartCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::NewProp_InEndCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get|Async" },
		{ "Comment", "/**\n\x09* Download locl By URL\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Download locl By URL\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ PartSize                            Part Size\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncGetObjectStringToMemory", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemoryByURL_Parms
		{
			FString URL;
			FRange Range;
			FScriptDelegate InProgressCallback;
			FScriptDelegate InStartCallback;
			FScriptDelegate InEndCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InStartCallback;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InEndCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemoryByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemoryByURL_Parms, Range), Z_Construct_UScriptStruct_FRange, METADATA_PARAMS(0, nullptr) }; // 2882621238
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemoryByURL_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_InStartCallback = { "InStartCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemoryByURL_Parms, InStartCallback), Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 188727451
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_InEndCallback = { "InEndCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemoryByURL_Parms, InEndCallback), Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 188727451
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_InStartCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::NewProp_InEndCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get|Async" },
		{ "Comment", "/**\n\x09* Download locl By URL Memory\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Download locl By URL Memory\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ PartSize                            Part Size\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncGetObjectStringToMemoryByURL", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemoryByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventAsyncGetObjectStringToMemoryByURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocal_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString InLocalPaths;
			FRange Range;
			FScriptDelegate InProgressCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLocalPaths;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocal_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocal_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InLocalPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InLocalPaths = { "InLocalPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocal_Parms, InLocalPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InLocalPaths_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InLocalPaths_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocal_Parms, Range), Z_Construct_UScriptStruct_FRange, METADATA_PARAMS(0, nullptr) }; // 2882621238
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocal_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InLocalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::NewProp_InProgressCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get|Async" },
		{ "Comment", "/**\n\x09* Asynchronous download to local\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Asynchronous download to local\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@Range                                        Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncGetObjectToLocal", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocalByURL_Parms
		{
			FString URL;
			FString InLocalPaths;
			FRange Range;
			FScriptDelegate InProgressCallback;
			FScriptDelegate InStartCallback;
			FScriptDelegate InEndCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLocalPaths;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InStartCallback;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InEndCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocalByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_InLocalPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_InLocalPaths = { "InLocalPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocalByURL_Parms, InLocalPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_InLocalPaths_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_InLocalPaths_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocalByURL_Parms, Range), Z_Construct_UScriptStruct_FRange, METADATA_PARAMS(0, nullptr) }; // 2882621238
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocalByURL_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_InStartCallback = { "InStartCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocalByURL_Parms, InStartCallback), Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 188727451
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_InEndCallback = { "InEndCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocalByURL_Parms, InEndCallback), Z_Construct_UDelegateFunction_SimpleOSS_BufferByOSSCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 188727451
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_InLocalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_InStartCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::NewProp_InEndCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get|Async" },
		{ "Comment", "/**\n\x09* Download locl By URL\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Download locl By URL\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ PartSize                            Part Size\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncGetObjectToLocalByURL", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocalByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::SimpleOSSFunctionLibrary_eventAsyncGetObjectToLocalByURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncPutObject_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString InLocalPaths;
			FScriptDelegate InProgressCallback;
			TMap<FString,FString> OSSMeta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLocalPaths;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObject_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObject_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InLocalPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InLocalPaths = { "InLocalPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObject_Parms, InLocalPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InLocalPaths_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InLocalPaths_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObject_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObject_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_OSSMeta_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InLocalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::NewProp_OSSMeta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put|Async" },
		{ "Comment", "/**\n\x09* Asynchronous upload object\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*///Asynchronous upload can not get the real-time transmission of bytes, this is the Ali Cloud Library problem\n" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Asynchronous upload object\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details\n       //Asynchronous upload can not get the real-time transmission of bytes, this is the Ali Cloud Library problem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncPutObject", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::SimpleOSSFunctionLibrary_eventAsyncPutObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::SimpleOSSFunctionLibrary_eventAsyncPutObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncPutObjectByteMemoryByURL_Parms
		{
			FString URL;
			TArray<uint8> Data;
			FScriptDelegate InProgressCallback;
			TMap<FString,FString> OSSMeta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectByteMemoryByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectByteMemoryByURL_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectByteMemoryByURL_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectByteMemoryByURL_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_OSSMeta_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::NewProp_OSSMeta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put|Async" },
		{ "Comment", "/**\n\x09* Asynchronous upload object by Memory string\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ Data\x09\x09\x09\x09\x09""Data to upload, which exists in memory.\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Asynchronous upload object by Memory string\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ Data                                        Data to upload, which exists in memory.\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncPutObjectByteMemoryByURL", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventAsyncPutObjectByteMemoryByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventAsyncPutObjectByteMemoryByURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncPutObjectBytesByMemory_Parms
		{
			FString InBucketName;
			FString InObjectName;
			TArray<uint8> Data;
			FScriptDelegate InProgressCallback;
			TMap<FString,FString> OSSMeta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectBytesByMemory_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectBytesByMemory_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_InObjectName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectBytesByMemory_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectBytesByMemory_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectBytesByMemory_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_OSSMeta_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::NewProp_OSSMeta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put|Async" },
		{ "Comment", "/**\n\x09* Asynchronous upload object by Memory string\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ Data\x09\x09\x09\x09\x09""Data to upload, which exists in memory.\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Asynchronous upload object by Memory string\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ Data                                        Data to upload, which exists in memory.\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncPutObjectBytesByMemory", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::SimpleOSSFunctionLibrary_eventAsyncPutObjectBytesByMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::SimpleOSSFunctionLibrary_eventAsyncPutObjectBytesByMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncPutObjectByURL_Parms
		{
			FString URL;
			FString InLocalPaths;
			FScriptDelegate InProgressCallback;
			TMap<FString,FString> OSSMeta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLocalPaths;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_InLocalPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_InLocalPaths = { "InLocalPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectByURL_Parms, InLocalPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_InLocalPaths_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_InLocalPaths_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectByURL_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectByURL_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_OSSMeta_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_InLocalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::NewProp_OSSMeta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put|Async" },
		{ "Comment", "/**\n\x09*  Asynchronous upload object\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ Data\x09\x09\x09\x09\x09""Data to upload, which exists in memory.\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Asynchronous upload object\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ Data                                        Data to upload, which exists in memory.\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncPutObjectByURL", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::SimpleOSSFunctionLibrary_eventAsyncPutObjectByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::SimpleOSSFunctionLibrary_eventAsyncPutObjectByURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncPutObjectStringByMemory_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString Data;
			FScriptDelegate InProgressCallback;
			TMap<FString,FString> OSSMeta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectStringByMemory_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectStringByMemory_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectStringByMemory_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectStringByMemory_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectStringByMemory_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_OSSMeta_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::NewProp_OSSMeta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put|Async" },
		{ "Comment", "/**\n\x09* Asynchronous upload object by Memory string\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ Data\x09\x09\x09\x09\x09""Data to upload, which exists in memory.\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Asynchronous upload object by Memory string\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ Data                                        Data to upload, which exists in memory.\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncPutObjectStringByMemory", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::SimpleOSSFunctionLibrary_eventAsyncPutObjectStringByMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::SimpleOSSFunctionLibrary_eventAsyncPutObjectStringByMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncPutObjectStringMemoryByURL_Parms
		{
			FString URL;
			FString Data;
			FScriptDelegate InProgressCallback;
			TMap<FString,FString> OSSMeta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectStringMemoryByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectStringMemoryByURL_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectStringMemoryByURL_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncPutObjectStringMemoryByURL_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_OSSMeta_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::NewProp_OSSMeta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put|Async" },
		{ "Comment", "/**\n\x09* Asynchronous upload object by Memory string\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ Data\x09\x09\x09\x09\x09""Data to upload, which exists in memory.\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Asynchronous upload object by Memory string\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ Data                                        Data to upload, which exists in memory.\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncPutObjectStringMemoryByURL", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventAsyncPutObjectStringMemoryByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventAsyncPutObjectStringMemoryByURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncResumableDownloadObject_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString InDownloadFilePath;
			int32 PartSize;
			FScriptDelegate InProgressCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDownloadFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDownloadFilePath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartSize;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncResumableDownloadObject_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncResumableDownloadObject_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InDownloadFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InDownloadFilePath = { "InDownloadFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncResumableDownloadObject_Parms, InDownloadFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InDownloadFilePath_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InDownloadFilePath_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_PartSize = { "PartSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncResumableDownloadObject_Parms, PartSize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncResumableDownloadObject_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InDownloadFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_PartSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::NewProp_InProgressCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get|Async" },
		{ "Comment", "/**\n\x09* Asynchronous breakpoint resume Download\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @InCheckpointFilePath\x09\x09Resumable cache storage path\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Asynchronous breakpoint resume Download\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@InCheckpointFilePath         Resumable cache storage path" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncResumableDownloadObject", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::SimpleOSSFunctionLibrary_eventAsyncResumableDownloadObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::SimpleOSSFunctionLibrary_eventAsyncResumableDownloadObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncResumableUploadObject_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString InUploadFilePath;
			int64 PartSize;
			FScriptDelegate InProgressCallback;
			TMap<FString,FString> OSSMeta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUploadFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InUploadFilePath;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_PartSize;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncResumableUploadObject_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncResumableUploadObject_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InUploadFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InUploadFilePath = { "InUploadFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncResumableUploadObject_Parms, InUploadFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InUploadFilePath_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InUploadFilePath_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_PartSize = { "PartSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncResumableUploadObject_Parms, PartSize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncResumableUploadObject_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_ProgressCallbackDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2425500179
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncResumableUploadObject_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_OSSMeta_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InUploadFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_PartSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::NewProp_OSSMeta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put|Async" },
		{ "Comment", "/**\n\x09* Asynchronous version resumable continuation prevents breakpoints. Next upload will connect\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ InCheckpointFilePath\x09Resumable cache storage path\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Asynchronous version resumable continuation prevents breakpoints. Next upload will connect\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ InCheckpointFilePath        Resumable cache storage path\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncResumableUploadObject", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::SimpleOSSFunctionLibrary_eventAsyncResumableUploadObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::SimpleOSSFunctionLibrary_eventAsyncResumableUploadObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics
	{
		struct SimpleOSSFunctionLibrary_eventAsyncUploadPart_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString InLocalPaths;
			int32 PartSize;
			FScriptDelegate InProgressCallback;
			TMap<FString,FString> OSSMeta;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLocalPaths;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartSize;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InProgressCallback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncUploadPart_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncUploadPart_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InLocalPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InLocalPaths = { "InLocalPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncUploadPart_Parms, InLocalPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InLocalPaths_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InLocalPaths_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_PartSize = { "PartSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncUploadPart_Parms, PartSize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InProgressCallback = { "InProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncUploadPart_Parms, InProgressCallback), Z_Construct_UDelegateFunction_SimpleOSS_CallbackUploadPartDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2507182459
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncUploadPart_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_OSSMeta_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventAsyncUploadPart_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InLocalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_PartSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_InProgressCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_OSSMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put|Async" },
		{ "Comment", "/**\n\x09* The scheme of asynchronous fragment upload for large files\n\x09* @ InUploadId\x09\x09\x09\x09InUpload ID\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "The scheme of asynchronous fragment upload for large files\n@ InUploadId                          InUpload ID\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ PartSize                            Part Size\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "AsyncUploadPart", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::SimpleOSSFunctionLibrary_eventAsyncUploadPart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::SimpleOSSFunctionLibrary_eventAsyncUploadPart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics
	{
		struct SimpleOSSFunctionLibrary_eventCopyObject_Parms
		{
			FString InSourceBucketName;
			FString InSourceObjectName;
			FString InCopyBucketName;
			FString InCopyObjectName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSourceBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSourceBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSourceObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSourceObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCopyBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCopyBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCopyObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCopyObjectName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InSourceBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InSourceBucketName = { "InSourceBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventCopyObject_Parms, InSourceBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InSourceBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InSourceBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InSourceObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InSourceObjectName = { "InSourceObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventCopyObject_Parms, InSourceObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InSourceObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InSourceObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InCopyBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InCopyBucketName = { "InCopyBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventCopyObject_Parms, InCopyBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InCopyBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InCopyBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InCopyObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InCopyObjectName = { "InCopyObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventCopyObject_Parms, InCopyObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InCopyObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InCopyObjectName_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventCopyObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventCopyObject_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InSourceBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InSourceObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InCopyBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_InCopyObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* Copy object from source bucket to target bucket\n\x09* @ InSourceBucketName\x09\x09\x09Source bucket to copy\n\x09* @ InSourceObjectName\x09\x09\x09Source object to copy\n\x09* @ InCopyBucketName\x09\x09\x09The bucket copied from the original bucket to the object yes\n\x09* @ InCopyObjectName\x09\x09\x09""Copy from the object of the original bucket to the object name under the corresponding bucket\n\x09* @ InProgressCallback\x09\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Copy object from source bucket to target bucket\n@ InSourceBucketName                  Source bucket to copy\n@ InSourceObjectName                  Source object to copy\n@ InCopyBucketName                    The bucket copied from the original bucket to the object yes\n@ InCopyObjectName                    Copy from the object of the original bucket to the object name under the corresponding bucket\n@ InProgressCallback                  Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "CopyObject", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::SimpleOSSFunctionLibrary_eventCopyObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::SimpleOSSFunctionLibrary_eventCopyObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics
	{
		struct SimpleOSSFunctionLibrary_eventCreateBucket_Parms
		{
			FString InBucketName;
			EOSSStorageType OSSStorageType;
			EAcl Acl;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OSSStorageType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OSSStorageType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Acl_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Acl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventCreateBucket_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_InBucketName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_OSSStorageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_OSSStorageType = { "OSSStorageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventCreateBucket_Parms, OSSStorageType), Z_Construct_UEnum_SimpleOSS_EOSSStorageType, METADATA_PARAMS(0, nullptr) }; // 2228081469
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_Acl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_Acl = { "Acl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventCreateBucket_Parms, Acl), Z_Construct_UEnum_SimpleOSS_EAcl, METADATA_PARAMS(0, nullptr) }; // 239129401
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventCreateBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventCreateBucket_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_OSSStorageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_OSSStorageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_Acl_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_Acl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Bucket" },
		{ "Comment", "/**\n\x09* Create bucket\n\x09* @ InBucketName\x09\x09""Bucket name defined\n\x09* @ OSSStorageType\x09Storage type\n\x09* @ Acl\x09\x09\x09\x09Jurisdiction\n\x09*/" },
		{ "CPP_Default_Acl", "PRIVATE" },
		{ "CPP_Default_OSSStorageType", "STANDARD" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Create bucket\n@ InBucketName                Bucket name defined\n@ OSSStorageType      Storage type\n@ Acl                         Jurisdiction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "CreateBucket", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::SimpleOSSFunctionLibrary_eventCreateBucket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::SimpleOSSFunctionLibrary_eventCreateBucket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics
	{
		struct SimpleOSSFunctionLibrary_eventCreateSymlink_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString InLinkObjectName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLinkObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLinkObjectName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventCreateSymlink_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventCreateSymlink_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InLinkObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InLinkObjectName = { "InLinkObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventCreateSymlink_Parms, InLinkObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InLinkObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InLinkObjectName_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventCreateSymlink_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventCreateSymlink_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_InLinkObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09*Create a soft connect shortcut\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Shortcut name\n\x09* @ InLinkObjectName\x09\x09Where data to connect\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Create a soft connect shortcut\n@ InBucketName                        Bucket name\n@ InObjectName                        Shortcut name\n@ InLinkObjectName            Where data to connect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "CreateSymlink", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::SimpleOSSFunctionLibrary_eventCreateSymlink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::SimpleOSSFunctionLibrary_eventCreateSymlink_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics
	{
		struct SimpleOSSFunctionLibrary_eventDeleteBucket_Parms
		{
			FString InBucketName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDeleteBucket_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::NewProp_InBucketName_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventDeleteBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventDeleteBucket_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Bucket" },
		{ "Comment", "/**\n\x09* Delete bucket\n\x09* @InBucketName\x09\x09\x09\x09""Bucket name\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Delete bucket\n@InBucketName                         Bucket name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "DeleteBucket", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::SimpleOSSFunctionLibrary_eventDeleteBucket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::SimpleOSSFunctionLibrary_eventDeleteBucket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics
	{
		struct SimpleOSSFunctionLibrary_eventDeleteBucketReferer_Parms
		{
			FString InBucketName;
			bool bAllowEmptyRefere;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static void NewProp_bAllowEmptyRefere_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowEmptyRefere;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDeleteBucketReferer_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_InBucketName_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_bAllowEmptyRefere_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventDeleteBucketReferer_Parms*)Obj)->bAllowEmptyRefere = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_bAllowEmptyRefere = { "bAllowEmptyRefere", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventDeleteBucketReferer_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_bAllowEmptyRefere_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventDeleteBucketReferer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventDeleteBucketReferer_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_bAllowEmptyRefere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Bucket" },
		{ "Comment", "/**\n\x09* Remove the anti-theft chain \n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ URLReferer\x09\x09\x09\x09List of anti-theft chains\n\x09* @ bAllowEmptyRefere\x09\x09""Allow empty chain\n\x09*/" },
		{ "CPP_Default_bAllowEmptyRefere", "true" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Remove the anti-theft chain\n@ InBucketName                        Bucket name\n@ URLReferer                          List of anti-theft chains\n@ bAllowEmptyRefere           Allow empty chain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "DeleteBucketReferer", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::SimpleOSSFunctionLibrary_eventDeleteBucketReferer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::SimpleOSSFunctionLibrary_eventDeleteBucketReferer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics
	{
		struct SimpleOSSFunctionLibrary_eventDeleteObject_Parms
		{
			FString InBucketName;
			FString InObjectName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDeleteObject_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDeleteObject_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_InObjectName_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventDeleteObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventDeleteObject_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* Delete a single resource\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Delete a single resource\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "DeleteObject", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::SimpleOSSFunctionLibrary_eventDeleteObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::SimpleOSSFunctionLibrary_eventDeleteObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics
	{
		struct SimpleOSSFunctionLibrary_eventDeleteObjectByFilePath_Parms
		{
			FString InBucketName;
			FString InServerFilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InServerFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InServerFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDeleteObjectByFilePath_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_InServerFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_InServerFilePath = { "InServerFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDeleteObjectByFilePath_Parms, InServerFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_InServerFilePath_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_InServerFilePath_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventDeleteObjectByFilePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventDeleteObjectByFilePath_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_InServerFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* Delete all files under the file path specified by the server \n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InServerFilePath\x09\x09\x09Object name\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Delete all files under the file path specified by the server\n@ InBucketName                        Bucket name\n@ InServerFilePath                    Object name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "DeleteObjectByFilePath", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::SimpleOSSFunctionLibrary_eventDeleteObjectByFilePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::SimpleOSSFunctionLibrary_eventDeleteObjectByFilePath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics
	{
		struct SimpleOSSFunctionLibrary_eventDeleteObjectByPrefix_Parms
		{
			FString InBucketName;
			FString InPrefix;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPrefix;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDeleteObjectByPrefix_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_InPrefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_InPrefix = { "InPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDeleteObjectByPrefix_Parms, InPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_InPrefix_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_InPrefix_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventDeleteObjectByPrefix_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventDeleteObjectByPrefix_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_InPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* Delete individual resources by prefix\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Delete individual resources by prefix\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "DeleteObjectByPrefix", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::SimpleOSSFunctionLibrary_eventDeleteObjectByPrefix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::SimpleOSSFunctionLibrary_eventDeleteObjectByPrefix_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics
	{
		struct SimpleOSSFunctionLibrary_eventDeleteObjects_Parms
		{
			FString InBucketName;
			TArray<FString> InObjectName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InObjectName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDeleteObjects_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_InBucketName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_InObjectName_Inner = { "InObjectName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDeleteObjects_Parms, InObjectName), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_InObjectName_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventDeleteObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventDeleteObjects_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_InObjectName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* Delete multiple resources\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Multiple objects\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Delete multiple resources\n@ InBucketName                        Bucket name\n@ InObjectName                        Multiple objects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "DeleteObjects", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::SimpleOSSFunctionLibrary_eventDeleteObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::SimpleOSSFunctionLibrary_eventDeleteObjects_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics
	{
		struct SimpleOSSFunctionLibrary_eventDoesBucketExist_Parms
		{
			FString InBucketName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDoesBucketExist_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::NewProp_InBucketName_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventDoesBucketExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventDoesBucketExist_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Bucket" },
		{ "Comment", "/**\n\x09*Whether the bucket exists\n\x09*@ inbucketname bucket name\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Whether the bucket exists\n@ inbucketname bucket name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "DoesBucketExist", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::SimpleOSSFunctionLibrary_eventDoesBucketExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::SimpleOSSFunctionLibrary_eventDoesBucketExist_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics
	{
		struct SimpleOSSFunctionLibrary_eventDoesObjectExist_Parms
		{
			FString InBucketName;
			FString InObjectName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDoesObjectExist_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventDoesObjectExist_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_InObjectName_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventDoesObjectExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventDoesObjectExist_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* Whether the object exists\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Whether the object exists\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "DoesObjectExist", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::SimpleOSSFunctionLibrary_eventDoesObjectExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::SimpleOSSFunctionLibrary_eventDoesObjectExist_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGeneratePresignedUrl_Parms
		{
			FString URL;
			FString InBucketName;
			FString InObjectName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGeneratePresignedUrl_Parms, URL), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGeneratePresignedUrl_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGeneratePresignedUrl_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_InObjectName_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGeneratePresignedUrl_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGeneratePresignedUrl_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|URL" },
		{ "Comment", "/**\n\x09\x09* Get object utrl\n\x09\x09* @InBucketName Bucket\n\x09\x09* @InObjectName\x09Object\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Get object utrl\n@InBucketName Bucket\n@InObjectName Object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GeneratePresignedUrl", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::SimpleOSSFunctionLibrary_eventGeneratePresignedUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::SimpleOSSFunctionLibrary_eventGeneratePresignedUrl_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetBucketAcl_Parms
		{
			FString InBucketName;
			EAcl ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetBucketAcl_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::NewProp_InBucketName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetBucketAcl_Parms, ReturnValue), Z_Construct_UEnum_SimpleOSS_EAcl, METADATA_PARAMS(0, nullptr) }; // 239129401
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Bucket" },
		{ "Comment", "/**\n\x09* Get bucket permission\n\x09* @InBucketName\x09\x09\x09\x09""Bucket name\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Get bucket permission\n@InBucketName                         Bucket name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetBucketAcl", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::SimpleOSSFunctionLibrary_eventGetBucketAcl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::SimpleOSSFunctionLibrary_eventGetBucketAcl_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetBucketLocation_Parms
		{
			FString InBucketName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetBucketLocation_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::NewProp_InBucketName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetBucketLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Bucket" },
		{ "Comment", "/**\n\x09* Location to get buckets\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Location to get buckets\n@ InBucketName                        Bucket name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetBucketLocation", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::SimpleOSSFunctionLibrary_eventGetBucketLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::SimpleOSSFunctionLibrary_eventGetBucketLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetBucketReferer_Parms
		{
			FString InBucketName;
			TArray<FString> BucketReferers;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BucketReferers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BucketReferers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetBucketReferer_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_InBucketName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_BucketReferers_Inner = { "BucketReferers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_BucketReferers = { "BucketReferers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetBucketReferer_Parms, BucketReferers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetBucketReferer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetBucketReferer_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_BucketReferers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_BucketReferers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Bucket" },
		{ "Comment", "/**\n\x09* Get Bucket Referer\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ BucketReferers\x09\x09\x09""Anti theft chain reference\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Get Bucket Referer\n@ InBucketName                        Bucket name\n@ BucketReferers                      Anti theft chain reference" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetBucketReferer", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::SimpleOSSFunctionLibrary_eventGetBucketReferer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::SimpleOSSFunctionLibrary_eventGetBucketReferer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetBucketsInfo_Parms
		{
			FString InBucketName;
			FBucketInfo InBucketInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBucketInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetBucketsInfo_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::NewProp_InBucketName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::NewProp_InBucketInfo = { "InBucketInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetBucketsInfo_Parms, InBucketInfo), Z_Construct_UScriptStruct_FBucketInfo, METADATA_PARAMS(0, nullptr) }; // 3789699118
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetBucketsInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetBucketsInfo_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::NewProp_InBucketInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Bucket" },
		{ "Comment", "/**\n\x09* Get bucket information\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InBucketInfo\x09\x09\x09""Can get the information of the bucket\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Get bucket information\n@ InBucketName                        Bucket name\n@ InBucketInfo                        Can get the information of the bucket" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetBucketsInfo", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::SimpleOSSFunctionLibrary_eventGetBucketsInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::SimpleOSSFunctionLibrary_eventGetBucketsInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetEndpoint_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetEndpoint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|InitOSS" },
		{ "Comment", "/*End Point*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "End Point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetEndpoint", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::SimpleOSSFunctionLibrary_eventGetEndpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::SimpleOSSFunctionLibrary_eventGetEndpoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetImageInfo_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString InFileNametoSave;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileNametoSave_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileNametoSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageInfo_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageInfo_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InFileNametoSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InFileNametoSave = { "InFileNametoSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageInfo_Parms, InFileNametoSave), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InFileNametoSave_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InFileNametoSave_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetImageInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetImageInfo_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_InFileNametoSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|ImageProcessing" },
		{ "Comment", "/**\n\x09* Get picture information\n\x09* @InBucketName\x09\x09\x09""Bucket name\n\x09* @ URLReferer\x09\x09\x09List of anti-theft chains\n\x09* @ bAllowEmptyRefere\x09""Allow empty chain\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Get picture information\n@InBucketName                 Bucket name\n@ URLReferer                  List of anti-theft chains\n@ bAllowEmptyRefere   Allow empty chain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetImageInfo", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::SimpleOSSFunctionLibrary_eventGetImageInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::SimpleOSSFunctionLibrary_eventGetImageInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetImageObjectByCascade_Parms
		{
			TArray<FString> CascadeCommand;
			FString InBucketName;
			FString InObjectName;
			FString InFileNametoSave;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_CascadeCommand_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CascadeCommand_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CascadeCommand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileNametoSave_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileNametoSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_CascadeCommand_Inner = { "CascadeCommand", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_CascadeCommand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_CascadeCommand = { "CascadeCommand", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByCascade_Parms, CascadeCommand), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_CascadeCommand_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_CascadeCommand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByCascade_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByCascade_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InFileNametoSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InFileNametoSave = { "InFileNametoSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByCascade_Parms, InFileNametoSave), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InFileNametoSave_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InFileNametoSave_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetImageObjectByCascade_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetImageObjectByCascade_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_CascadeCommand_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_CascadeCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_InFileNametoSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|ImageProcessing" },
		{ "Comment", "/**\n\x09* Cascade processing\n\x09* @ CascadeCommand\x09\x09Multilayer command\n\x09* @ InBucketName\x09\x09""Bucket name\n\x09* @ URLReferer\x09\x09\x09List of anti-theft chains\n\x09* @ bAllowEmptyRefere\x09""Allow empty chain\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Cascade processing\n@ CascadeCommand              Multilayer command\n@ InBucketName                Bucket name\n@ URLReferer                  List of anti-theft chains\n@ bAllowEmptyRefere   Allow empty chain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetImageObjectByCascade", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectByCascade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectByCascade_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetImageObjectByCrop_Parms
		{
			FVector4 Size;
			int32 Ratio;
			FString InBucketName;
			FString InObjectName;
			FString InFileNametoSave;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileNametoSave_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileNametoSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByCrop_Parms, Size), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_Size_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_Size_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByCrop_Parms, Ratio), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByCrop_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByCrop_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InFileNametoSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InFileNametoSave = { "InFileNametoSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByCrop_Parms, InFileNametoSave), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InFileNametoSave_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InFileNametoSave_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetImageObjectByCrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetImageObjectByCrop_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_Ratio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_InFileNametoSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|ImageProcessing" },
		{ "Comment", "/**\n\x09* Crop downloaded pictures\n\x09* @ Size\x09\x09\x09\x09""Cropped picture information\n\x09* @ InBucketName\x09\x09""Bucket name\n\x09* @ URLReferer\x09\x09\x09List of anti-theft chains\n\x09* @ bAllowEmptyRefere\x09""Allow empty chain\n\x09*/" },
		{ "CPP_Default_InBucketName", "" },
		{ "CPP_Default_InFileNametoSave", "" },
		{ "CPP_Default_InObjectName", "" },
		{ "CPP_Default_Ratio", "1" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Crop downloaded pictures\n@ Size                                Cropped picture information\n@ InBucketName                Bucket name\n@ URLReferer                  List of anti-theft chains\n@ bAllowEmptyRefere   Allow empty chain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetImageObjectByCrop", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectByCrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectByCrop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetImageObjectByResize_Parms
		{
			FVector2D Size;
			FString InBucketName;
			FString InObjectName;
			FString InFileNametoSave;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileNametoSave_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileNametoSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByResize_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_Size_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_Size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByResize_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByResize_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InFileNametoSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InFileNametoSave = { "InFileNametoSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByResize_Parms, InFileNametoSave), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InFileNametoSave_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InFileNametoSave_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetImageObjectByResize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetImageObjectByResize_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_InFileNametoSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|ImageProcessing" },
		{ "Comment", "/**\n\x09* Zoom downloaded pictures\n\x09* @ Size\x09\x09\x09\x09Scaled picture size\n\x09* @ InBucketName\x09\x09""Bucket name\n\x09* @ URLReferer\x09\x09\x09List of anti-theft chains\n\x09* @ bAllowEmptyRefere\x09""Allow empty chain\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Zoom downloaded pictures\n@ Size                                Scaled picture size\n@ InBucketName                Bucket name\n@ URLReferer                  List of anti-theft chains\n@ bAllowEmptyRefere   Allow empty chain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetImageObjectByResize", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectByResize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectByResize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetImageObjectByRotate_Parms
		{
			int32 Rotate;
			FString InBucketName;
			FString InObjectName;
			FString InFileNametoSave;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rotate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileNametoSave_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileNametoSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_Rotate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByRotate_Parms, Rotate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_Rotate_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_Rotate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByRotate_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByRotate_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InFileNametoSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InFileNametoSave = { "InFileNametoSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByRotate_Parms, InFileNametoSave), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InFileNametoSave_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InFileNametoSave_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetImageObjectByRotate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetImageObjectByRotate_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_Rotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_InFileNametoSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|ImageProcessing" },
		{ "Comment", "/**\n\x09* Rotate downloaded pictures\n\x09* @ Rotate\x09\x09\x09\x09""Euler angle of picture rotation\n\x09* @ InBucketName\x09\x09""Bucket name\n\x09* @ URLReferer\x09\x09\x09List of anti-theft chains\n\x09* @ bAllowEmptyRefere\x09""Allow empty chain\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Rotate downloaded pictures\n@ Rotate                              Euler angle of picture rotation\n@ InBucketName                Bucket name\n@ URLReferer                  List of anti-theft chains\n@ bAllowEmptyRefere   Allow empty chain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetImageObjectByRotate", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectByRotate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectByRotate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetImageObjectBySharpen_Parms
		{
			int32 Sharpen;
			FString InBucketName;
			FString InObjectName;
			FString InFileNametoSave;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sharpen_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Sharpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileNametoSave_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileNametoSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_Sharpen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_Sharpen = { "Sharpen", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectBySharpen_Parms, Sharpen), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_Sharpen_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_Sharpen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectBySharpen_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectBySharpen_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InFileNametoSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InFileNametoSave = { "InFileNametoSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectBySharpen_Parms, InFileNametoSave), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InFileNametoSave_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InFileNametoSave_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetImageObjectBySharpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetImageObjectBySharpen_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_Sharpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_InFileNametoSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|ImageProcessing" },
		{ "Comment", "/**\n\x09* Sharpen download picture\n\x09* @ Sharpen\x09\x09\x09\x09Sharpen picture factor\n\x09* @ InBucketName\x09\x09""Bucket name\n\x09* @ URLReferer\x09\x09\x09List of anti-theft chains\n\x09* @ bAllowEmptyRefere\x09""Allow empty chain\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Sharpen download picture\n@ Sharpen                             Sharpen picture factor\n@ InBucketName                Bucket name\n@ URLReferer                  List of anti-theft chains\n@ bAllowEmptyRefere   Allow empty chain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetImageObjectBySharpen", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectBySharpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectBySharpen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetImageObjectByStyle_Parms
		{
			FString OSSStyleName;
			FString InBucketName;
			FString InObjectName;
			FString InFileNametoSave;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSStyleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSStyleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileNametoSave_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileNametoSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_OSSStyleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_OSSStyleName = { "OSSStyleName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByStyle_Parms, OSSStyleName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_OSSStyleName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_OSSStyleName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByStyle_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByStyle_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InFileNametoSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InFileNametoSave = { "InFileNametoSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByStyle_Parms, InFileNametoSave), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InFileNametoSave_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InFileNametoSave_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetImageObjectByStyle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetImageObjectByStyle_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_OSSStyleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_InFileNametoSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|ImageProcessing" },
		{ "Comment", "/**\n\x09* Use OSS template style\n\x09* @ OSSStyleName\x09\x09OSS style name\n\x09* @ InBucketName\x09\x09""Bucket name\n\x09* @ URLReferer\x09\x09\x09List of anti-theft chains\n\x09* @ bAllowEmptyRefere\x09""Allow empty chain\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Use OSS template style\n@ OSSStyleName                OSS style name\n@ InBucketName                Bucket name\n@ URLReferer                  List of anti-theft chains\n@ bAllowEmptyRefere   Allow empty chain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetImageObjectByStyle", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectByStyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectByStyle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetImageObjectByWaterMark_Parms
		{
			FString WaterMarkObjectName;
			FString InBucketName;
			FString InObjectName;
			FString InFileNametoSave;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterMarkObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WaterMarkObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileNametoSave_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileNametoSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_WaterMarkObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_WaterMarkObjectName = { "WaterMarkObjectName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByWaterMark_Parms, WaterMarkObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_WaterMarkObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_WaterMarkObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByWaterMark_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByWaterMark_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InFileNametoSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InFileNametoSave = { "InFileNametoSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetImageObjectByWaterMark_Parms, InFileNametoSave), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InFileNametoSave_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InFileNametoSave_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetImageObjectByWaterMark_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetImageObjectByWaterMark_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_WaterMarkObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_InFileNametoSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|ImageProcessing" },
		{ "Comment", "/**\n\x09* Watermark download picture\n\x09* @ WaterMarkObjectName\x09Watermark image name\n\x09* @ InBucketName\x09\x09""Bucket name\n\x09* @ URLReferer\x09\x09\x09List of anti-theft chains\n\x09* @ bAllowEmptyRefere\x09""Allow empty chain\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Watermark download picture\n@ WaterMarkObjectName Watermark image name\n@ InBucketName                Bucket name\n@ URLReferer                  List of anti-theft chains\n@ bAllowEmptyRefere   Allow empty chain" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetImageObjectByWaterMark", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectByWaterMark_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::SimpleOSSFunctionLibrary_eventGetImageObjectByWaterMark_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetObjectAcl_Parms
		{
			FString InBucketName;
			FString InObjectName;
			EAcl ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectAcl_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectAcl_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_InObjectName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectAcl_Parms, ReturnValue), Z_Construct_UEnum_SimpleOSS_EAcl, METADATA_PARAMS(0, nullptr) }; // 239129401
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* Get read and write permissions for objects\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Get read and write permissions for objects\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetObjectAcl", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::SimpleOSSFunctionLibrary_eventGetObjectAcl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::SimpleOSSFunctionLibrary_eventGetObjectAcl_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetObjectByteToMemory_Parms
		{
			FString InBucketName;
			FString InObjectName;
			TArray<uint8> OutData;
			FRange Range;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectByteToMemory_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectByteToMemory_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_InObjectName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_OutData_Inner = { "OutData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectByteToMemory_Parms, OutData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectByteToMemory_Parms, Range), Z_Construct_UScriptStruct_FRange, METADATA_PARAMS(0, nullptr) }; // 2882621238
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetObjectByteToMemory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetObjectByteToMemory_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_OutData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_OutData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get" },
		{ "Comment", "/**\n\x09* Download Memory\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ ContextString\x09\x09\x09""Data\n\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Download Memory\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ ContextString                       Data\n@ PartSize                            Part Size\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetObjectByteToMemory", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::SimpleOSSFunctionLibrary_eventGetObjectByteToMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::SimpleOSSFunctionLibrary_eventGetObjectByteToMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetObjectByteToMemoryByURL_Parms
		{
			FString URL;
			TArray<uint8> ContextString;
			FRange Range;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContextString_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectByteToMemoryByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_ContextString_Inner = { "ContextString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_ContextString = { "ContextString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectByteToMemoryByURL_Parms, ContextString), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectByteToMemoryByURL_Parms, Range), Z_Construct_UScriptStruct_FRange, METADATA_PARAMS(0, nullptr) }; // 2882621238
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetObjectByteToMemoryByURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetObjectByteToMemoryByURL_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_ContextString_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_ContextString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get" },
		{ "Comment", "/**\n\x09* Download Memory By URL\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Download Memory By URL\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ PartSize                            Part Size\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetObjectByteToMemoryByURL", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventGetObjectByteToMemoryByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventGetObjectByteToMemoryByURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetObjectMeta_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FOSSObjectMeta OSSObjectInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OSSObjectInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectMeta_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectMeta_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_InObjectName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_OSSObjectInfo = { "OSSObjectInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectMeta_Parms, OSSObjectInfo), Z_Construct_UScriptStruct_FOSSObjectMeta, METADATA_PARAMS(0, nullptr) }; // 4247557596
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetObjectMeta_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetObjectMeta_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_OSSObjectInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* Get metadata information\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @OSSObjectInfo\x09\x09\x09Object metadata information\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Get metadata information\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@OSSObjectInfo                        Object metadata information" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetObjectMeta", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::SimpleOSSFunctionLibrary_eventGetObjectMeta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::SimpleOSSFunctionLibrary_eventGetObjectMeta_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetObjectStringToMemory_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString ContextString;
			FRange Range;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContextString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectStringToMemory_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectStringToMemory_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_InObjectName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_ContextString = { "ContextString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectStringToMemory_Parms, ContextString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectStringToMemory_Parms, Range), Z_Construct_UScriptStruct_FRange, METADATA_PARAMS(0, nullptr) }; // 2882621238
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetObjectStringToMemory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetObjectStringToMemory_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_ContextString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get" },
		{ "Comment", "/**\n\x09* Download Memory\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ ContextString\x09\x09\x09""Data\n\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Download Memory\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ ContextString                       Data\n@ PartSize                            Part Size\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetObjectStringToMemory", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::SimpleOSSFunctionLibrary_eventGetObjectStringToMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::SimpleOSSFunctionLibrary_eventGetObjectStringToMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetObjectStringToMemoryByURL_Parms
		{
			FString URL;
			FString ContextString;
			FRange Range;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContextString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectStringToMemoryByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_ContextString = { "ContextString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectStringToMemoryByURL_Parms, ContextString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectStringToMemoryByURL_Parms, Range), Z_Construct_UScriptStruct_FRange, METADATA_PARAMS(0, nullptr) }; // 2882621238
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetObjectStringToMemoryByURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetObjectStringToMemoryByURL_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_ContextString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get" },
		{ "Comment", "/**\n\x09* Download Memory By URL\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Download Memory By URL\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ PartSize                            Part Size\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetObjectStringToMemoryByURL", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventGetObjectStringToMemoryByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventGetObjectStringToMemoryByURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetObjectToLocal_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString InLocalPaths;
			FRange Range;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLocalPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectToLocal_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectToLocal_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InLocalPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InLocalPaths = { "InLocalPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectToLocal_Parms, InLocalPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InLocalPaths_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InLocalPaths_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_Range_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectToLocal_Parms, Range), Z_Construct_UScriptStruct_FRange, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_Range_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_Range_MetaData) }; // 2882621238
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetObjectToLocal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetObjectToLocal_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_InLocalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get" },
		{ "Comment", "/**\n\x09* Download locl\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Download locl\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ PartSize                            Part Size\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetObjectToLocal", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::SimpleOSSFunctionLibrary_eventGetObjectToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::SimpleOSSFunctionLibrary_eventGetObjectToLocal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetObjectToLocalByURL_Parms
		{
			FString URL;
			FString InLocalPaths;
			FRange Range;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLocalPaths;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectToLocalByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_InLocalPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_InLocalPaths = { "InLocalPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectToLocalByURL_Parms, InLocalPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_InLocalPaths_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_InLocalPaths_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetObjectToLocalByURL_Parms, Range), Z_Construct_UScriptStruct_FRange, METADATA_PARAMS(0, nullptr) }; // 2882621238
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventGetObjectToLocalByURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventGetObjectToLocalByURL_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_InLocalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get" },
		{ "Comment", "/**\n\x09\x09* Download locl By URL\n\x09\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09\x09* @ InObjectName\x09\x09\x09Object name\n\x09\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Download locl By URL\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ PartSize                            Part Size\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetObjectToLocalByURL", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::SimpleOSSFunctionLibrary_eventGetObjectToLocalByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::SimpleOSSFunctionLibrary_eventGetObjectToLocalByURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics
	{
		struct SimpleOSSFunctionLibrary_eventGetSymlink_Parms
		{
			FString InBucketName;
			FString InLinkName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLinkName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLinkName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetSymlink_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::NewProp_InLinkName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::NewProp_InLinkName = { "InLinkName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetSymlink_Parms, InLinkName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::NewProp_InLinkName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::NewProp_InLinkName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventGetSymlink_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::NewProp_InLinkName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09*Get the file content pointed to by the soft link\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Get the file content pointed to by the soft link\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "GetSymlink", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::SimpleOSSFunctionLibrary_eventGetSymlink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::SimpleOSSFunctionLibrary_eventGetSymlink_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics
	{
		struct SimpleOSSFunctionLibrary_eventInitAccounts_Parms
		{
			FString InAccessKeyId;
			FString InAccessKeySecret;
			FString InEndpoint;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAccessKeyId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAccessKeyId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAccessKeySecret_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAccessKeySecret;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InEndpoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InAccessKeyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InAccessKeyId = { "InAccessKeyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventInitAccounts_Parms, InAccessKeyId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InAccessKeyId_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InAccessKeyId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InAccessKeySecret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InAccessKeySecret = { "InAccessKeySecret", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventInitAccounts_Parms, InAccessKeySecret), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InAccessKeySecret_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InAccessKeySecret_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InEndpoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InEndpoint = { "InEndpoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventInitAccounts_Parms, InEndpoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InEndpoint_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InEndpoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InAccessKeyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InAccessKeySecret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::NewProp_InEndpoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|InitOSS" },
		{ "Comment", "/**\n\x09* Initialize oss account\n\x09* @InAccessKeyId\x09\x09Key ID accessed\n\x09* @InAccessKeySecret\x09Secret\n\x09* @InEndpoint\x09\x09\x09Geographical node\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Initialize oss account\n@InAccessKeyId                Key ID accessed\n@InAccessKeySecret    Secret\n@InEndpoint                   Geographical node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "InitAccounts", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::SimpleOSSFunctionLibrary_eventInitAccounts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::SimpleOSSFunctionLibrary_eventInitAccounts_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics
	{
		struct SimpleOSSFunctionLibrary_eventInitConf_Parms
		{
			FClientConfiguration InConf;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InConf_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InConf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::NewProp_InConf_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::NewProp_InConf = { "InConf", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventInitConf_Parms, InConf), Z_Construct_UScriptStruct_FClientConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::NewProp_InConf_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::NewProp_InConf_MetaData) }; // 3060290458
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::NewProp_InConf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|InitOSS" },
		{ "Comment", "/**\n\x09* Initialize configuration\n\x09* InConf OSS configuration\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Initialize configuration\nInConf OSS configuration" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "InitConf", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::SimpleOSSFunctionLibrary_eventInitConf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::SimpleOSSFunctionLibrary_eventInitConf_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics
	{
		struct SimpleOSSFunctionLibrary_eventListBuckets_Parms
		{
			TArray<FString> InBucketName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBucketName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::NewProp_InBucketName_Inner = { "InBucketName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventListBuckets_Parms, InBucketName), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventListBuckets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventListBuckets_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::NewProp_InBucketName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Bucket" },
		{ "Comment", "/**\n\x09* Enumerated bucket\n\x09* @InBucketName Can get bucket name set\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Enumerated bucket\n@InBucketName Can get bucket name set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "ListBuckets", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::SimpleOSSFunctionLibrary_eventListBuckets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::SimpleOSSFunctionLibrary_eventListBuckets_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics
	{
		struct SimpleOSSFunctionLibrary_eventListMultipartUploads_Parms
		{
			FString InBucketName;
			TArray<FMultipartPartsUploadsInfo> MultipartPartsInfo;
			int32 MaxParts;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultipartPartsInfo_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MultipartPartsInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxParts;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventListMultipartUploads_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_InBucketName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_MultipartPartsInfo_Inner = { "MultipartPartsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMultipartPartsUploadsInfo, METADATA_PARAMS(0, nullptr) }; // 720230920
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_MultipartPartsInfo = { "MultipartPartsInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventListMultipartUploads_Parms, MultipartPartsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 720230920
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_MaxParts = { "MaxParts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventListMultipartUploads_Parms, MaxParts), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventListMultipartUploads_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventListMultipartUploads_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_MultipartPartsInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_MultipartPartsInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_MaxParts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* List upload segments\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ MultipartPartsInfo\x09\x09List upload segments\n\x09* @ MaxParts\x09\x09\x09\x09Maximum number of segments listed\n\x09*/" },
		{ "CPP_Default_MaxParts", "1000" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "List upload segments\n@ InBucketName                        Bucket name\n@ MultipartPartsInfo          List upload segments\n@ MaxParts                            Maximum number of segments listed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "ListMultipartUploads", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::SimpleOSSFunctionLibrary_eventListMultipartUploads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::SimpleOSSFunctionLibrary_eventListMultipartUploads_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics
	{
		struct SimpleOSSFunctionLibrary_eventListObjects_Parms
		{
			FString InBucketName;
			TArray<FOSSObjectInfo> ObjectName;
			int32 MaxNumber;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectName_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumber;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventListObjects_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_InBucketName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_ObjectName_Inner = { "ObjectName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOSSObjectInfo, METADATA_PARAMS(0, nullptr) }; // 3913869572
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventListObjects_Parms, ObjectName), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3913869572
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_MaxNumber = { "MaxNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventListObjects_Parms, MaxNumber), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventListObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventListObjects_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_ObjectName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_MaxNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* Enumerating objects are recursive\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InKeyPrefix\x09\x09\x09\x09List prefixes such as folder names\n\x09* @ InMarker \x09\x09\x09\x09List files after the specified marker\n\x09* @ MaxNumber\x09\x09\x09\x09Maximum number of enumerations\n\x09*/" },
		{ "CPP_Default_MaxNumber", "100" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Enumerating objects are recursive\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InKeyPrefix                         List prefixes such as folder names\n@ InMarker                            List files after the specified marker\n@ MaxNumber                           Maximum number of enumerations" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "ListObjects", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::SimpleOSSFunctionLibrary_eventListObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::SimpleOSSFunctionLibrary_eventListObjects_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics
	{
		struct SimpleOSSFunctionLibrary_eventListObjectsByFilePaths_Parms
		{
			FString InBucketName;
			FString ServerFileRelativePaths;
			TArray<FOSSObjectInfo> ObjectName;
			int32 MaxNumber;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerFileRelativePaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerFileRelativePaths;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectName_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumber;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventListObjectsByFilePaths_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ServerFileRelativePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ServerFileRelativePaths = { "ServerFileRelativePaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventListObjectsByFilePaths_Parms, ServerFileRelativePaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ServerFileRelativePaths_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ServerFileRelativePaths_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ObjectName_Inner = { "ObjectName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOSSObjectInfo, METADATA_PARAMS(0, nullptr) }; // 3913869572
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventListObjectsByFilePaths_Parms, ObjectName), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3913869572
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_MaxNumber = { "MaxNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventListObjectsByFilePaths_Parms, MaxNumber), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventListObjectsByFilePaths_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventListObjectsByFilePaths_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ServerFileRelativePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ObjectName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_MaxNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* The relative path of the server needs to be specified \n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ ServerFileRelativePaths\x09Server file relative path\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InKeyPrefix\x09\x09\x09\x09List prefixes such as folder names\n\x09* @ InMarker \x09\x09\x09\x09List files after the specified marker\n\x09* @ MaxNumber\x09\x09\x09\x09Maximum number of enumerations\n\x09*/" },
		{ "CPP_Default_MaxNumber", "100" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "The relative path of the server needs to be specified\n@ InBucketName                        Bucket name\n@ ServerFileRelativePaths     Server file relative path\n@ InObjectName                        Object name\n@ InKeyPrefix                         List prefixes such as folder names\n@ InMarker                            List files after the specified marker\n@ MaxNumber                           Maximum number of enumerations" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "ListObjectsByFilePaths", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::SimpleOSSFunctionLibrary_eventListObjectsByFilePaths_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::SimpleOSSFunctionLibrary_eventListObjectsByFilePaths_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics
	{
		struct SimpleOSSFunctionLibrary_eventPutByteObjectByMemory_Parms
		{
			FString InBucketName;
			FString InObjectName;
			TArray<uint8> Data;
			TMap<FString,FString> OSSMeta;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutByteObjectByMemory_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutByteObjectByMemory_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_InObjectName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutByteObjectByMemory_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutByteObjectByMemory_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_OSSMeta_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventPutByteObjectByMemory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventPutByteObjectByMemory_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_OSSMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put" },
		{ "Comment", "/**\n\x09* Upload resources memory byte\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ Data\x09\x09\x09\x09\x09""Data to upload, which exists in memory.\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Upload resources memory byte\n@ InBucketName                        Bucket name\n@ Data                                        Data to upload, which exists in memory.\n@ InObjectName                        Object name\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "PutByteObjectByMemory", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::SimpleOSSFunctionLibrary_eventPutByteObjectByMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::SimpleOSSFunctionLibrary_eventPutByteObjectByMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics
	{
		struct SimpleOSSFunctionLibrary_eventPutByteObjectMemoryByURL_Parms
		{
			FString URL;
			TArray<uint8> Data;
			TMap<FString,FString> OSSMeta;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutByteObjectMemoryByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutByteObjectMemoryByURL_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutByteObjectMemoryByURL_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_OSSMeta_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventPutByteObjectMemoryByURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventPutByteObjectMemoryByURL_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_OSSMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put" },
		{ "Comment", "/**\n\x09* Upload resources locally Byte\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Upload resources locally Byte\n@ InBucketName                        Bucket name\n@ InLocalPaths                        Local path\n@ InObjectName                        Object name\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "PutByteObjectMemoryByURL", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventPutByteObjectMemoryByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventPutByteObjectMemoryByURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics
	{
		struct SimpleOSSFunctionLibrary_eventPutObject_Parms
		{
			FString InBucketName;
			FString InLocalPaths;
			FString InObjectName;
			TMap<FString,FString> OSSMeta;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLocalPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutObject_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InLocalPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InLocalPaths = { "InLocalPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutObject_Parms, InLocalPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InLocalPaths_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InLocalPaths_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutObject_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InObjectName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutObject_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_OSSMeta_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventPutObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventPutObject_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InLocalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_OSSMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put" },
		{ "Comment", "/**\n\x09* Upload resources locally\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Upload resources locally\n@ InBucketName                        Bucket name\n@ InLocalPaths                        Local path\n@ InObjectName                        Object name\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "PutObject", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::SimpleOSSFunctionLibrary_eventPutObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::SimpleOSSFunctionLibrary_eventPutObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics
	{
		struct SimpleOSSFunctionLibrary_eventPutObjectByURL_Parms
		{
			FString URL;
			FString InLocalPaths;
			TMap<FString,FString> OSSMeta;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLocalPaths;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutObjectByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_InLocalPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_InLocalPaths = { "InLocalPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutObjectByURL_Parms, InLocalPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_InLocalPaths_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_InLocalPaths_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutObjectByURL_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_OSSMeta_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventPutObjectByURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventPutObjectByURL_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_InLocalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_OSSMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put" },
		{ "Comment", "/**\n\x09* Upload resources locally\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Upload resources locally\n@ InBucketName                        Bucket name\n@ InLocalPaths                        Local path\n@ InObjectName                        Object name\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "PutObjectByURL", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::SimpleOSSFunctionLibrary_eventPutObjectByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::SimpleOSSFunctionLibrary_eventPutObjectByURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics
	{
		struct SimpleOSSFunctionLibrary_eventPutStringObjectByMemory_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString Data;
			TMap<FString,FString> OSSMeta;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutStringObjectByMemory_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutStringObjectByMemory_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutStringObjectByMemory_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutStringObjectByMemory_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_OSSMeta_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventPutStringObjectByMemory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventPutStringObjectByMemory_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_OSSMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put" },
		{ "Comment", "/**\n\x09* Upload resources memory\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ Data\x09\x09\x09\x09\x09""Data to upload, which exists in memory.\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Upload resources memory\n@ InBucketName                        Bucket name\n@ Data                                        Data to upload, which exists in memory.\n@ InObjectName                        Object name\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "PutStringObjectByMemory", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::SimpleOSSFunctionLibrary_eventPutStringObjectByMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::SimpleOSSFunctionLibrary_eventPutStringObjectByMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics
	{
		struct SimpleOSSFunctionLibrary_eventPutStringObjectMemoryByURL_Parms
		{
			FString URL;
			FString Data;
			TMap<FString,FString> OSSMeta;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutStringObjectMemoryByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutStringObjectMemoryByURL_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventPutStringObjectMemoryByURL_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_OSSMeta_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventPutStringObjectMemoryByURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventPutStringObjectMemoryByURL_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_OSSMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put" },
		{ "Comment", "/**\n\x09* Upload resources locally\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Upload resources locally\n@ InBucketName                        Bucket name\n@ InLocalPaths                        Local path\n@ InObjectName                        Object name\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "PutStringObjectMemoryByURL", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventPutStringObjectMemoryByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::SimpleOSSFunctionLibrary_eventPutStringObjectMemoryByURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics
	{
		struct SimpleOSSFunctionLibrary_eventRecursiveListObjectsByFilePaths_Parms
		{
			FString InBucketName;
			FString ServerFileRelativePaths;
			TArray<FOSSObjectInfo> ObjectName;
			int32 MaxNumber;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerFileRelativePaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerFileRelativePaths;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectName_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumber;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventRecursiveListObjectsByFilePaths_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ServerFileRelativePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ServerFileRelativePaths = { "ServerFileRelativePaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventRecursiveListObjectsByFilePaths_Parms, ServerFileRelativePaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ServerFileRelativePaths_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ServerFileRelativePaths_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ObjectName_Inner = { "ObjectName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOSSObjectInfo, METADATA_PARAMS(0, nullptr) }; // 3913869572
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventRecursiveListObjectsByFilePaths_Parms, ObjectName), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3913869572
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_MaxNumber = { "MaxNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventRecursiveListObjectsByFilePaths_Parms, MaxNumber), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventRecursiveListObjectsByFilePaths_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventRecursiveListObjectsByFilePaths_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ServerFileRelativePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ObjectName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_MaxNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* Can get children\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ Prefix\x09\x09\x09\x09\x09Prefix\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InKeyPrefix\x09\x09\x09\x09List prefixes such as folder names\n\x09* @ InMarker \x09\x09\x09\x09List files after the specified marker\n\x09* @ MaxNumber\x09\x09\x09\x09Maximum number of enumerations\n\x09*/" },
		{ "CPP_Default_MaxNumber", "100" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Can get children\n@ InBucketName                        Bucket name\n@ Prefix                                      Prefix\n@ InObjectName                        Object name\n@ InKeyPrefix                         List prefixes such as folder names\n@ InMarker                            List files after the specified marker\n@ MaxNumber                           Maximum number of enumerations" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "RecursiveListObjectsByFilePaths", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::SimpleOSSFunctionLibrary_eventRecursiveListObjectsByFilePaths_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::SimpleOSSFunctionLibrary_eventRecursiveListObjectsByFilePaths_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics
	{
		struct SimpleOSSFunctionLibrary_eventResumableDownloadObject_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString InDownloadFilePath;
			int32 PartSize;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDownloadFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDownloadFilePath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventResumableDownloadObject_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventResumableDownloadObject_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InDownloadFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InDownloadFilePath = { "InDownloadFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventResumableDownloadObject_Parms, InDownloadFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InDownloadFilePath_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InDownloadFilePath_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_PartSize = { "PartSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventResumableDownloadObject_Parms, PartSize), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventResumableDownloadObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventResumableDownloadObject_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_InDownloadFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_PartSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Get" },
		{ "Comment", "/**\n\x09* Resume Download\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ PartSize\x09\x09\x09\x09Part Size\n\x09* @ Range\x09\x09\x09\x09\x09""Download scope\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09*/" },
		{ "CPP_Default_PartSize", "10485760" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Resume Download\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ PartSize                            Part Size\n@ Range                                       Download scope\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "ResumableDownloadObject", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::SimpleOSSFunctionLibrary_eventResumableDownloadObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::SimpleOSSFunctionLibrary_eventResumableDownloadObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics
	{
		struct SimpleOSSFunctionLibrary_eventResumableUploadObject_Parms
		{
			FString InBucketName;
			FString InObjectName;
			FString InUploadFilePath;
			int64 PartSize;
			TMap<FString,FString> OSSMeta;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUploadFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InUploadFilePath;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_PartSize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventResumableUploadObject_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventResumableUploadObject_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InUploadFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InUploadFilePath = { "InUploadFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventResumableUploadObject_Parms, InUploadFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InUploadFilePath_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InUploadFilePath_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_PartSize = { "PartSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventResumableUploadObject_Parms, PartSize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventResumableUploadObject_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_OSSMeta_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventResumableUploadObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventResumableUploadObject_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_InUploadFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_PartSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_OSSMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put" },
		{ "Comment", "/**\n\x09* Resumable continue to prevent breakpoint, next upload will connect\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ InCheckpointFilePath\x09Resumable cache storage path\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Resumable continue to prevent breakpoint, next upload will connect\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ InCheckpointFilePath        Resumable cache storage path\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "ResumableUploadObject", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::SimpleOSSFunctionLibrary_eventResumableUploadObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::SimpleOSSFunctionLibrary_eventResumableUploadObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics
	{
		struct SimpleOSSFunctionLibrary_eventSetBucketAcl_Parms
		{
			FString InBucketName;
			EAcl BucketAcl;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BucketAcl_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BucketAcl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventSetBucketAcl_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_InBucketName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_BucketAcl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_BucketAcl = { "BucketAcl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventSetBucketAcl_Parms, BucketAcl), Z_Construct_UEnum_SimpleOSS_EAcl, METADATA_PARAMS(0, nullptr) }; // 239129401
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventSetBucketAcl_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventSetBucketAcl_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_BucketAcl_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_BucketAcl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Bucket" },
		{ "Comment", "/**\n\x09* Set bucket permission\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @BucketAcl\x09\x09\x09\x09permission\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Set bucket permission\n@ InBucketName                        Bucket name\n@BucketAcl                            permission" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "SetBucketAcl", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::SimpleOSSFunctionLibrary_eventSetBucketAcl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::SimpleOSSFunctionLibrary_eventSetBucketAcl_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics
	{
		struct SimpleOSSFunctionLibrary_eventSetBucketReferer_Parms
		{
			FString InBucketName;
			TArray<FString> URLReferer;
			bool bAllowEmptyRefere;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_URLReferer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URLReferer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_URLReferer;
		static void NewProp_bAllowEmptyRefere_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowEmptyRefere;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventSetBucketReferer_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_InBucketName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_URLReferer_Inner = { "URLReferer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_URLReferer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_URLReferer = { "URLReferer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventSetBucketReferer_Parms, URLReferer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_URLReferer_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_URLReferer_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_bAllowEmptyRefere_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventSetBucketReferer_Parms*)Obj)->bAllowEmptyRefere = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_bAllowEmptyRefere = { "bAllowEmptyRefere", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventSetBucketReferer_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_bAllowEmptyRefere_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventSetBucketReferer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventSetBucketReferer_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_URLReferer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_URLReferer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_bAllowEmptyRefere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Bucket" },
		{ "Comment", "/**\n\x09* Setting up the anti-theft chain\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ URLReferer\x09\x09\x09\x09Referer\x09list\n\x09* @ bAllowEmptyRefere\x09\x09""Allow empty Referer\n\x09*/" },
		{ "CPP_Default_bAllowEmptyRefere", "false" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Setting up the anti-theft chain\n@ InBucketName                        Bucket name\n@ URLReferer                          Referer list\n@ bAllowEmptyRefere           Allow empty Referer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "SetBucketReferer", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::SimpleOSSFunctionLibrary_eventSetBucketReferer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::SimpleOSSFunctionLibrary_eventSetBucketReferer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics
	{
		struct SimpleOSSFunctionLibrary_eventSetObjectAcl_Parms
		{
			FString InBucketName;
			FString InObjectName;
			EAcl InAcl;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InAcl_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InAcl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventSetObjectAcl_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventSetObjectAcl_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InObjectName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InAcl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InAcl = { "InAcl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventSetObjectAcl_Parms, InAcl), Z_Construct_UEnum_SimpleOSS_EAcl, METADATA_PARAMS(0, nullptr) }; // 239129401
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventSetObjectAcl_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventSetObjectAcl_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InAcl_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_InAcl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Objects" },
		{ "Comment", "/**\n\x09* Set read and write permissions for objects\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InAcl\x09\x09\x09\x09\x09read-write permission\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Set read and write permissions for objects\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InAcl                                       read-write permission" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "SetObjectAcl", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::SimpleOSSFunctionLibrary_eventSetObjectAcl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::SimpleOSSFunctionLibrary_eventSetObjectAcl_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics
	{
		struct SimpleOSSFunctionLibrary_eventUploadPart_Parms
		{
			FString InUploadId;
			FString InBucketName;
			FString InObjectName;
			FString InLocalPaths;
			int32 PartSize;
			TMap<FString,FString> OSSMeta;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InUploadId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBucketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBucketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLocalPaths;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartSize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OSSMeta;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InUploadId = { "InUploadId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventUploadPart_Parms, InUploadId), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InBucketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InBucketName = { "InBucketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventUploadPart_Parms, InBucketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InBucketName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InBucketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InObjectName = { "InObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventUploadPart_Parms, InObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InObjectName_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InLocalPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InLocalPaths = { "InLocalPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventUploadPart_Parms, InLocalPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InLocalPaths_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InLocalPaths_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_PartSize = { "PartSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventUploadPart_Parms, PartSize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_OSSMeta_ValueProp = { "OSSMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_OSSMeta_Key_KeyProp = { "OSSMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_OSSMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_OSSMeta = { "OSSMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleOSSFunctionLibrary_eventUploadPart_Parms, OSSMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_OSSMeta_MetaData), Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_OSSMeta_MetaData) };
	void Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleOSSFunctionLibrary_eventUploadPart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleOSSFunctionLibrary_eventUploadPart_Parms), &Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InUploadId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InBucketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_InLocalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_PartSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_OSSMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_OSSMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_OSSMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleOSS|Put" },
		{ "Comment", "/**\n\x09* Upload scheme for large files by segment upload\n\x09* @ InUploadId\x09\x09\x09\x09Upload ID\n\x09* @ InBucketName\x09\x09\x09""Bucket name\n\x09* @ InObjectName\x09\x09\x09Object name\n\x09* @ InLocalPaths\x09\x09\x09Local path\n\x09* @ PartSize\x09\x09\x09\x09Size of segments\n\x09* @ InProgressCallback\x09\x09""Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n\x09* @ OSSMeta\x09\x09\x09\x09\x09OSS metadata can be customized or used. Please refer to oss_define.c for details\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ToolTip", "Upload scheme for large files by segment upload\n@ InUploadId                          Upload ID\n@ InBucketName                        Bucket name\n@ InObjectName                        Object name\n@ InLocalPaths                        Local path\n@ PartSize                            Size of segments\n@ InProgressCallback          Callback is used for asynchrony. No callback is required for synchronization. This interface is for compatibility with asynchronous requests\n@ OSSMeta                                     OSS metadata can be customized or used. Please refer to oss_define.c for details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleOSSFunctionLibrary, nullptr, "UploadPart", nullptr, nullptr, Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::SimpleOSSFunctionLibrary_eventUploadPart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::SimpleOSSFunctionLibrary_eventUploadPart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleOSSFunctionLibrary);
	UClass* Z_Construct_UClass_USimpleOSSFunctionLibrary_NoRegister()
	{
		return USimpleOSSFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USimpleOSSFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleOSSFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleOSS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleOSSFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleOSSFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AbortMultipartUpload, "AbortMultipartUpload" }, // 4218236408
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectBytesToMemory, "AsyncGetObjectBytesToMemory" }, // 4173414159
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectByteToMemoryByURL, "AsyncGetObjectByteToMemoryByURL" }, // 135169133
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemory, "AsyncGetObjectStringToMemory" }, // 1586244317
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectStringToMemoryByURL, "AsyncGetObjectStringToMemoryByURL" }, // 2657982216
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocal, "AsyncGetObjectToLocal" }, // 1595824951
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncGetObjectToLocalByURL, "AsyncGetObjectToLocalByURL" }, // 714882821
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObject, "AsyncPutObject" }, // 1991044490
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByteMemoryByURL, "AsyncPutObjectByteMemoryByURL" }, // 2365737
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectBytesByMemory, "AsyncPutObjectBytesByMemory" }, // 375300852
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectByURL, "AsyncPutObjectByURL" }, // 3024539874
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringByMemory, "AsyncPutObjectStringByMemory" }, // 4171688360
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncPutObjectStringMemoryByURL, "AsyncPutObjectStringMemoryByURL" }, // 267965219
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableDownloadObject, "AsyncResumableDownloadObject" }, // 3042815380
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncResumableUploadObject, "AsyncResumableUploadObject" }, // 1097613957
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_AsyncUploadPart, "AsyncUploadPart" }, // 3763840574
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_CopyObject, "CopyObject" }, // 4011841960
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateBucket, "CreateBucket" }, // 295663003
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_CreateSymlink, "CreateSymlink" }, // 3324452149
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucket, "DeleteBucket" }, // 244225936
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteBucketReferer, "DeleteBucketReferer" }, // 111415872
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObject, "DeleteObject" }, // 3391203864
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByFilePath, "DeleteObjectByFilePath" }, // 2190668390
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjectByPrefix, "DeleteObjectByPrefix" }, // 1450670735
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DeleteObjects, "DeleteObjects" }, // 1716863471
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesBucketExist, "DoesBucketExist" }, // 3428268847
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_DoesObjectExist, "DoesObjectExist" }, // 937089669
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GeneratePresignedUrl, "GeneratePresignedUrl" }, // 2697509803
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketAcl, "GetBucketAcl" }, // 930536835
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketLocation, "GetBucketLocation" }, // 627419701
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketReferer, "GetBucketReferer" }, // 2413895959
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetBucketsInfo, "GetBucketsInfo" }, // 1011544569
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetEndpoint, "GetEndpoint" }, // 1796227200
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageInfo, "GetImageInfo" }, // 3055614608
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCascade, "GetImageObjectByCascade" }, // 173377747
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByCrop, "GetImageObjectByCrop" }, // 1388760795
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByResize, "GetImageObjectByResize" }, // 518624252
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByRotate, "GetImageObjectByRotate" }, // 2008073054
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectBySharpen, "GetImageObjectBySharpen" }, // 2838293871
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByStyle, "GetImageObjectByStyle" }, // 2048921958
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetImageObjectByWaterMark, "GetImageObjectByWaterMark" }, // 492900959
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectAcl, "GetObjectAcl" }, // 2862883301
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemory, "GetObjectByteToMemory" }, // 3509471788
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectByteToMemoryByURL, "GetObjectByteToMemoryByURL" }, // 3726075050
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectMeta, "GetObjectMeta" }, // 3767703476
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemory, "GetObjectStringToMemory" }, // 2504323859
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectStringToMemoryByURL, "GetObjectStringToMemoryByURL" }, // 2919173513
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocal, "GetObjectToLocal" }, // 2204041602
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetObjectToLocalByURL, "GetObjectToLocalByURL" }, // 2366090494
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_GetSymlink, "GetSymlink" }, // 3842394296
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitAccounts, "InitAccounts" }, // 2681498362
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_InitConf, "InitConf" }, // 438842468
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListBuckets, "ListBuckets" }, // 4085167114
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListMultipartUploads, "ListMultipartUploads" }, // 3819282037
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjects, "ListObjects" }, // 2640591610
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_ListObjectsByFilePaths, "ListObjectsByFilePaths" }, // 2069590246
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectByMemory, "PutByteObjectByMemory" }, // 3455866412
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutByteObjectMemoryByURL, "PutByteObjectMemoryByURL" }, // 485831102
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObject, "PutObject" }, // 4177305370
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutObjectByURL, "PutObjectByURL" }, // 289818173
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectByMemory, "PutStringObjectByMemory" }, // 225655526
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_PutStringObjectMemoryByURL, "PutStringObjectMemoryByURL" }, // 4052016418
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_RecursiveListObjectsByFilePaths, "RecursiveListObjectsByFilePaths" }, // 3795271303
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableDownloadObject, "ResumableDownloadObject" }, // 1105734199
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_ResumableUploadObject, "ResumableUploadObject" }, // 2025836494
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketAcl, "SetBucketAcl" }, // 1856410176
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetBucketReferer, "SetBucketReferer" }, // 1383103449
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_SetObjectAcl, "SetObjectAcl" }, // 4123022737
		{ &Z_Construct_UFunction_USimpleOSSFunctionLibrary_UploadPart, "UploadPart" }, // 1682470158
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleOSSFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleOSSFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "SimpleOSSFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleOSSFunctionLibrary.h" },
		{ "ScriptName", "OSSLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleOSSFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleOSSFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleOSSFunctionLibrary_Statics::ClassParams = {
		&USimpleOSSFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleOSSFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleOSSFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleOSSFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USimpleOSSFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleOSSFunctionLibrary.OuterSingleton, Z_Construct_UClass_USimpleOSSFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleOSSFunctionLibrary.OuterSingleton;
	}
	template<> SIMPLEOSS_API UClass* StaticClass<USimpleOSSFunctionLibrary>()
	{
		return USimpleOSSFunctionLibrary::StaticClass();
	}
	USimpleOSSFunctionLibrary::USimpleOSSFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleOSSFunctionLibrary);
	USimpleOSSFunctionLibrary::~USimpleOSSFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleOSSFunctionLibrary, USimpleOSSFunctionLibrary::StaticClass, TEXT("USimpleOSSFunctionLibrary"), &Z_Registration_Info_UClass_USimpleOSSFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleOSSFunctionLibrary), 1592092539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_4062781797(TEXT("/Script/SimpleOSS"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
