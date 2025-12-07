// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleHTTPFunctionLibrary.h"
#include "SimpleHTTPType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleHTTPFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLEHTTP_API UClass* Z_Construct_UClass_USimpleHTTPFunctionLibrary();
	SIMPLEHTTP_API UClass* Z_Construct_UClass_USimpleHTTPFunctionLibrary_NoRegister();
	SIMPLEHTTP_API UEnum* Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType();
	SIMPLEHTTP_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate();
	UPackage* Z_Construct_UPackage__Script_SimpleHTTP();
// End Cross Module References
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execDeleteObjects)
	{
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_GET_TARRAY_REF(FString,Z_Param_Out_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleHTTPFunctionLibrary::DeleteObjects(Z_Param_Out_BPResponseDelegate,Z_Param_Out_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execGetObjectsToMemory)
	{
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_GET_TARRAY_REF(FString,Z_Param_Out_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleHTTPFunctionLibrary::GetObjectsToMemory(Z_Param_Out_BPResponseDelegate,Z_Param_Out_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execGetObjectsToLocal)
	{
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_GET_TARRAY_REF(FString,Z_Param_Out_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_SavePaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleHTTPFunctionLibrary::GetObjectsToLocal(Z_Param_Out_BPResponseDelegate,Z_Param_Out_URL,Z_Param_SavePaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execPutObjectsFromLocal)
	{
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_LocalPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleHTTPFunctionLibrary::PutObjectsFromLocal(Z_Param_Out_BPResponseDelegate,Z_Param_URL,Z_Param_LocalPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execDeleteObject)
	{
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleHTTPFunctionLibrary::DeleteObject(Z_Param_Out_BPResponseDelegate,Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execPutObjectFromString)
	{
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleHTTPFunctionLibrary::PutObjectFromString(Z_Param_Out_BPResponseDelegate,Z_Param_URL,Z_Param_InBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execPutObjectFromBuffer)
	{
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleHTTPFunctionLibrary::PutObjectFromBuffer(Z_Param_Out_BPResponseDelegate,Z_Param_URL,Z_Param_Out_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execPutObjectFromLocal)
	{
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_LocalPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleHTTPFunctionLibrary::PutObjectFromLocal(Z_Param_Out_BPResponseDelegate,Z_Param_URL,Z_Param_LocalPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execGetObjectToLocal)
	{
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_SavePaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleHTTPFunctionLibrary::GetObjectToLocal(Z_Param_Out_BPResponseDelegate,Z_Param_URL,Z_Param_SavePaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execGetObjectToMemory)
	{
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleHTTPFunctionLibrary::GetObjectToMemory(Z_Param_Out_BPResponseDelegate,Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleHTTPFunctionLibrary::Tick(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execRequestByConentByte)
	{
		P_GET_ENUM(ESimpleHTTPVerbType,Z_Param_InType);
		P_GET_PROPERTY(FStrProperty,Z_Param_InURL);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_InHeadMeta);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes);
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleHTTPFunctionLibrary::RequestByConentByte(ESimpleHTTPVerbType(Z_Param_InType),Z_Param_InURL,Z_Param_Out_InHeadMeta,Z_Param_Out_InBytes,Z_Param_Out_BPResponseDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execRequestByConentString)
	{
		P_GET_ENUM(ESimpleHTTPVerbType,Z_Param_InType);
		P_GET_PROPERTY(FStrProperty,Z_Param_InURL);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_InHeadMeta);
		P_GET_PROPERTY(FStrProperty,Z_Param_InContent);
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleHTTPFunctionLibrary::RequestByConentString(ESimpleHTTPVerbType(Z_Param_InType),Z_Param_InURL,Z_Param_Out_InHeadMeta,Z_Param_InContent,Z_Param_Out_BPResponseDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execPostRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InURL);
		P_GET_PROPERTY(FStrProperty,Z_Param_InParam);
		P_GET_STRUCT_REF(FSimpleHTTPBPResponseDelegate,Z_Param_Out_BPResponseDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleHTTPFunctionLibrary::PostRequest(Z_Param_InURL,Z_Param_InParam,Z_Param_Out_BPResponseDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execGetHandleByLastExecutionRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=USimpleHTTPFunctionLibrary::GetHandleByLastExecutionRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execCancelByHandle)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleHTTPFunctionLibrary::CancelByHandle(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleHTTPFunctionLibrary::Cancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execAwaken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleHTTPFunctionLibrary::Awaken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleHTTPFunctionLibrary::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleHTTPFunctionLibrary::Pause();
		P_NATIVE_END;
	}
	void USimpleHTTPFunctionLibrary::StaticRegisterNativesUSimpleHTTPFunctionLibrary()
	{
		UClass* Class = USimpleHTTPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Awaken", &USimpleHTTPFunctionLibrary::execAwaken },
			{ "Cancel", &USimpleHTTPFunctionLibrary::execCancel },
			{ "CancelByHandle", &USimpleHTTPFunctionLibrary::execCancelByHandle },
			{ "DeleteObject", &USimpleHTTPFunctionLibrary::execDeleteObject },
			{ "DeleteObjects", &USimpleHTTPFunctionLibrary::execDeleteObjects },
			{ "GetHandleByLastExecutionRequest", &USimpleHTTPFunctionLibrary::execGetHandleByLastExecutionRequest },
			{ "GetObjectsToLocal", &USimpleHTTPFunctionLibrary::execGetObjectsToLocal },
			{ "GetObjectsToMemory", &USimpleHTTPFunctionLibrary::execGetObjectsToMemory },
			{ "GetObjectToLocal", &USimpleHTTPFunctionLibrary::execGetObjectToLocal },
			{ "GetObjectToMemory", &USimpleHTTPFunctionLibrary::execGetObjectToMemory },
			{ "Pause", &USimpleHTTPFunctionLibrary::execPause },
			{ "PostRequest", &USimpleHTTPFunctionLibrary::execPostRequest },
			{ "PutObjectFromBuffer", &USimpleHTTPFunctionLibrary::execPutObjectFromBuffer },
			{ "PutObjectFromLocal", &USimpleHTTPFunctionLibrary::execPutObjectFromLocal },
			{ "PutObjectFromString", &USimpleHTTPFunctionLibrary::execPutObjectFromString },
			{ "PutObjectsFromLocal", &USimpleHTTPFunctionLibrary::execPutObjectsFromLocal },
			{ "RequestByConentByte", &USimpleHTTPFunctionLibrary::execRequestByConentByte },
			{ "RequestByConentString", &USimpleHTTPFunctionLibrary::execRequestByConentString },
			{ "Tick", &USimpleHTTPFunctionLibrary::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Awaken_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Awaken_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP" },
		{ "Comment", "/**\n\x09 * awaken all downloading Pause content.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "awaken all downloading Pause content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Awaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "Awaken", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Awaken_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Awaken_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Awaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Awaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventCancel_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHTTPFunctionLibrary_eventCancel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHTTPFunctionLibrary_eventCancel_Parms), &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP" },
		{ "Comment", "/**\n\x09* Cancel all downloads.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Cancel all downloads." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "Cancel", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::SimpleHTTPFunctionLibrary_eventCancel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::SimpleHTTPFunctionLibrary_eventCancel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventCancelByHandle_Parms
		{
			FName Handle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventCancelByHandle_Parms, Handle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::NewProp_Handle_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::NewProp_Handle_MetaData) };
	void Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHTTPFunctionLibrary_eventCancelByHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHTTPFunctionLibrary_eventCancelByHandle_Parms), &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP" },
		{ "Comment", "/**\n\x09 * \x09""Cancel the specified Download.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Cancel the specified Download." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "CancelByHandle", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::SimpleHTTPFunctionLibrary_eventCancelByHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::SimpleHTTPFunctionLibrary_eventCancelByHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventDeleteObject_Parms
		{
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			FString URL;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventDeleteObject_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventDeleteObject_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_URL_MetaData) };
	void Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHTTPFunctionLibrary_eventDeleteObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHTTPFunctionLibrary_eventDeleteObject_Parms), &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|SingleAction" },
		{ "Comment", "/**\n\x09 * Remove a single object from the server .\n\x09 *\n\x09 * @param BPResponseDelegate\x09Proxy set relative to the blueprint.\n\x09 * @param URL\x09\x09\x09\x09\x09""domain name .\n\x09 * @Return\x09\x09\x09\x09\x09\x09Returns true if the request succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Remove a single object from the server .\n\n@param BPResponseDelegate    Proxy set relative to the blueprint.\n@param URL                                   domain name .\n@Return                                              Returns true if the request succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "DeleteObject", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::SimpleHTTPFunctionLibrary_eventDeleteObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::SimpleHTTPFunctionLibrary_eventDeleteObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventDeleteObjects_Parms
		{
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			TArray<FString> URL;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventDeleteObjects_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::NewProp_URL_Inner = { "URL", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventDeleteObjects_Parms, URL), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::NewProp_URL_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|MultpleAction" },
		{ "Comment", "/**\n\x09 * Multiple URLs need to be specified to remove multiple objects from the server .\n\x09 *\n\x09 * @param BPResponseDelegate\x09Proxy set relative to the blueprint.\n\x09 * @param URL\x09\x09\x09\x09\x09Need domain name .\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Multiple URLs need to be specified to remove multiple objects from the server .\n\n@param BPResponseDelegate    Proxy set relative to the blueprint.\n@param URL                                   Need domain name ." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "DeleteObjects", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::SimpleHTTPFunctionLibrary_eventDeleteObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::SimpleHTTPFunctionLibrary_eventDeleteObjects_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventGetHandleByLastExecutionRequest_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventGetHandleByLastExecutionRequest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP" },
		{ "Comment", "/**\n\x09 * Gets the handle of the last execution request\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Gets the handle of the last execution request" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "GetHandleByLastExecutionRequest", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::SimpleHTTPFunctionLibrary_eventGetHandleByLastExecutionRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::SimpleHTTPFunctionLibrary_eventGetHandleByLastExecutionRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventGetObjectsToLocal_Parms
		{
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			TArray<FString> URL;
			FString SavePaths;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavePaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavePaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventGetObjectsToLocal_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_URL_Inner = { "URL", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventGetObjectsToLocal_Parms, URL), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_SavePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_SavePaths = { "SavePaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventGetObjectsToLocal_Parms, SavePaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_SavePaths_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_SavePaths_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_URL_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::NewProp_SavePaths,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|MultpleAction" },
		{ "Comment", "/**\n\x09 * Download multiple data to local .\n\x09 *\n\x09 * @param BPResponseDelegate\x09Proxy set relative to the blueprint.\n\x09 * @param URL\x09\x09\x09\x09\x09Need domain name .\n\x09 * @param SavePaths\x09\x09\x09\x09Path to local storage .\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Download multiple data to local .\n\n@param BPResponseDelegate    Proxy set relative to the blueprint.\n@param URL                                   Need domain name .\n@param SavePaths                             Path to local storage ." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "GetObjectsToLocal", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::SimpleHTTPFunctionLibrary_eventGetObjectsToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::SimpleHTTPFunctionLibrary_eventGetObjectsToLocal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventGetObjectsToMemory_Parms
		{
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			TArray<FString> URL;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventGetObjectsToMemory_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::NewProp_URL_Inner = { "URL", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventGetObjectsToMemory_Parms, URL), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::NewProp_URL_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|MultpleAction" },
		{ "Comment", "/**\n\x09 * The data can be downloaded to local memory via the HTTP serverll.\n\x09 * Can download multiple at one time .\n\x09 *\n\x09 * @param BPResponseDelegate\x09Proxy set relative to the blueprint.\n\x09 * @param URL\x09\x09\x09\x09\x09Need domain name .\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "The data can be downloaded to local memory via the HTTP serverll.\nCan download multiple at one time .\n\n@param BPResponseDelegate    Proxy set relative to the blueprint.\n@param URL                                   Need domain name ." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "GetObjectsToMemory", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::SimpleHTTPFunctionLibrary_eventGetObjectsToMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::SimpleHTTPFunctionLibrary_eventGetObjectsToMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventGetObjectToLocal_Parms
		{
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			FString URL;
			FString SavePaths;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavePaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavePaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventGetObjectToLocal_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventGetObjectToLocal_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_SavePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_SavePaths = { "SavePaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventGetObjectToLocal_Parms, SavePaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_SavePaths_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_SavePaths_MetaData) };
	void Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHTTPFunctionLibrary_eventGetObjectToLocal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHTTPFunctionLibrary_eventGetObjectToLocal_Parms), &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_SavePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|SingleAction" },
		{ "Comment", "/**\n\x09 * Download individual data locally.\n\x09 *\n\x09 * @param BPResponseDelegate\x09Proxy set relative to the blueprint.\n\x09 * @param URL\x09\x09\x09\x09\x09""domain name .\n\x09 * @param SavePaths\x09\x09\x09\x09Path to local storage .\n\x09 * @Return\x09\x09\x09\x09\x09\x09Returns true if the request succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Download individual data locally.\n\n@param BPResponseDelegate    Proxy set relative to the blueprint.\n@param URL                                   domain name .\n@param SavePaths                             Path to local storage .\n@Return                                              Returns true if the request succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "GetObjectToLocal", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::SimpleHTTPFunctionLibrary_eventGetObjectToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::SimpleHTTPFunctionLibrary_eventGetObjectToLocal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventGetObjectToMemory_Parms
		{
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			FString URL;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventGetObjectToMemory_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventGetObjectToMemory_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_URL_MetaData) };
	void Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHTTPFunctionLibrary_eventGetObjectToMemory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHTTPFunctionLibrary_eventGetObjectToMemory_Parms), &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|SingleAction" },
		{ "Comment", "/**\n\x09* The data can be downloaded to local memory via the HTTP serverll .\n\x09*\n\x09* @param BPResponseDelegate\x09Proxy set relative to the blueprint.\n\x09* @param URL\x09\x09\x09\x09\x09""domain name .\n\x09* @Return\x09\x09\x09\x09\x09\x09Returns true if the request succeeds\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "The data can be downloaded to local memory via the HTTP serverll .\n\n@param BPResponseDelegate     Proxy set relative to the blueprint.\n@param URL                                    domain name .\n@Return                                               Returns true if the request succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "GetObjectToMemory", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::SimpleHTTPFunctionLibrary_eventGetObjectToMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::SimpleHTTPFunctionLibrary_eventGetObjectToMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Pause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP" },
		{ "Comment", "/**\n\x09 * Pause all downloading content.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Pause all downloading content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Pause_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventPostRequest_Parms
		{
			FString InURL;
			FString InParam;
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_InURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_InURL = { "InURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPostRequest_Parms, InURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_InURL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_InURL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPostRequest_Parms, InParam), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_InParam_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_InParam_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPostRequest_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
	void Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHTTPFunctionLibrary_eventPostRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHTTPFunctionLibrary_eventPostRequest_Parms), &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_InURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_InParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|SingleAction" },
		{ "Comment", "/**\n\x09 * Submit form to server.\n\x09 *\n\x09 * @param InURL\x09\x09\x09\x09\x09\x09""Address to visit.\n\x09 * @param InParam\x09\x09\x09\x09\x09Parameters passed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Submit form to server.\n\n@param InURL                                         Address to visit.\n@param InParam                                       Parameters passed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "PostRequest", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::SimpleHTTPFunctionLibrary_eventPostRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::SimpleHTTPFunctionLibrary_eventPostRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventPutObjectFromBuffer_Parms
		{
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			FString URL;
			TArray<uint8> Buffer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPutObjectFromBuffer_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPutObjectFromBuffer_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPutObjectFromBuffer_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_Buffer_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_Buffer_MetaData) };
	void Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHTTPFunctionLibrary_eventPutObjectFromBuffer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHTTPFunctionLibrary_eventPutObjectFromBuffer_Parms), &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|SingleAction" },
		{ "Comment", "/**\n\x09 * Can upload byte data .\n\x09 *\n\x09 * @param BPResponseDelegate\x09Proxy set relative to the blueprint.\n\x09 * @param URL\x09\x09\x09\x09\x09""domain name .\n\x09 * @param Buffer\x09\x09\x09\x09""Byte code data.\n\x09 * @Return\x09\x09\x09\x09\x09\x09Returns true if the request succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Can upload byte data .\n\n@param BPResponseDelegate    Proxy set relative to the blueprint.\n@param URL                                   domain name .\n@param Buffer                                Byte code data.\n@Return                                              Returns true if the request succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "PutObjectFromBuffer", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::SimpleHTTPFunctionLibrary_eventPutObjectFromBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::SimpleHTTPFunctionLibrary_eventPutObjectFromBuffer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventPutObjectFromLocal_Parms
		{
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			FString URL;
			FString LocalPaths;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalPaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPutObjectFromLocal_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPutObjectFromLocal_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_LocalPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_LocalPaths = { "LocalPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPutObjectFromLocal_Parms, LocalPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_LocalPaths_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_LocalPaths_MetaData) };
	void Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHTTPFunctionLibrary_eventPutObjectFromLocal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHTTPFunctionLibrary_eventPutObjectFromLocal_Parms), &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_LocalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|SingleAction" },
		{ "Comment", "/**\n\x09 * Upload single file from disk to server .\n\x09 *\n\x09 * @param BPResponseDelegate\x09Proxy set relative to the blueprint.\n\x09 * @param URL\x09\x09\x09\x09\x09""domain name .\n\x09 * @param LocalPaths\x09\x09\x09Specify the Path where you want to upload the file.\n\x09 * @Return\x09\x09\x09\x09\x09\x09Returns true if the request succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Upload single file from disk to server .\n\n@param BPResponseDelegate    Proxy set relative to the blueprint.\n@param URL                                   domain name .\n@param LocalPaths                    Specify the Path where you want to upload the file.\n@Return                                              Returns true if the request succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "PutObjectFromLocal", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::SimpleHTTPFunctionLibrary_eventPutObjectFromLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::SimpleHTTPFunctionLibrary_eventPutObjectFromLocal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventPutObjectFromString_Parms
		{
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			FString URL;
			FString InBuffer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBuffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPutObjectFromString_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPutObjectFromString_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_InBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_InBuffer = { "InBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPutObjectFromString_Parms, InBuffer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_InBuffer_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_InBuffer_MetaData) };
	void Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHTTPFunctionLibrary_eventPutObjectFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHTTPFunctionLibrary_eventPutObjectFromString_Parms), &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_InBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|SingleAction" },
		{ "Comment", "/**\n\x09 * Can upload string data .\n\x09 *\n\x09 * @param BPResponseDelegate\x09Proxy set relative to the blueprint.\n\x09 * @param URL\x09\x09\x09\x09\x09""domain name .\n\x09 * @param Buffer\x09\x09\x09\x09string data.\n\x09 * @Return\x09\x09\x09\x09\x09\x09Returns true if the request succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Can upload string data .\n\n@param BPResponseDelegate    Proxy set relative to the blueprint.\n@param URL                                   domain name .\n@param Buffer                                string data.\n@Return                                              Returns true if the request succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "PutObjectFromString", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::SimpleHTTPFunctionLibrary_eventPutObjectFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::SimpleHTTPFunctionLibrary_eventPutObjectFromString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventPutObjectsFromLocal_Parms
		{
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			FString URL;
			FString LocalPaths;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalPaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPutObjectsFromLocal_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPutObjectsFromLocal_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_LocalPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_LocalPaths = { "LocalPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventPutObjectsFromLocal_Parms, LocalPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_LocalPaths_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_LocalPaths_MetaData) };
	void Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHTTPFunctionLibrary_eventPutObjectsFromLocal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHTTPFunctionLibrary_eventPutObjectsFromLocal_Parms), &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_LocalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|MultpleAction" },
		{ "Comment", "/**\n\x09 * Upload duo files from disk to server  .\n\x09 *\n\x09 * @param BPResponseDelegate\x09Proxy set relative to the blueprint.\n\x09 * @param URL\x09\x09\x09\x09\x09""domain name .\n\x09 * @param LocalPaths\x09\x09\x09Specify the Path where you want to upload the file.\n\x09 * @Return\x09\x09\x09\x09\x09\x09Returns true if the request succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "Upload duo files from disk to server  .\n\n@param BPResponseDelegate    Proxy set relative to the blueprint.\n@param URL                                   domain name .\n@param LocalPaths                    Specify the Path where you want to upload the file.\n@Return                                              Returns true if the request succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "PutObjectsFromLocal", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::SimpleHTTPFunctionLibrary_eventPutObjectsFromLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::SimpleHTTPFunctionLibrary_eventPutObjectsFromLocal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventRequestByConentByte_Parms
		{
			ESimpleHTTPVerbType InType;
			FString InURL;
			TMap<FString,FString> InHeadMeta;
			TArray<uint8> InBytes;
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InURL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InHeadMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InHeadMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHeadMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InHeadMeta;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventRequestByConentByte_Parms, InType), Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType, METADATA_PARAMS(0, nullptr) }; // 10049799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InURL = { "InURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventRequestByConentByte_Parms, InURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InURL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InURL_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InHeadMeta_ValueProp = { "InHeadMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InHeadMeta_Key_KeyProp = { "InHeadMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InHeadMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InHeadMeta = { "InHeadMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventRequestByConentByte_Parms, InHeadMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InHeadMeta_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InHeadMeta_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventRequestByConentByte_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InBytes_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InBytes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventRequestByConentByte_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
	void Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHTTPFunctionLibrary_eventRequestByConentByte_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHTTPFunctionLibrary_eventRequestByConentByte_Parms), &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InHeadMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InHeadMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InHeadMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_InBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|SingleAction" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "RequestByConentByte", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::SimpleHTTPFunctionLibrary_eventRequestByConentByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::SimpleHTTPFunctionLibrary_eventRequestByConentByte_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventRequestByConentString_Parms
		{
			ESimpleHTTPVerbType InType;
			FString InURL;
			TMap<FString,FString> InHeadMeta;
			FString InContent;
			FSimpleHTTPBPResponseDelegate BPResponseDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InURL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InHeadMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InHeadMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHeadMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InHeadMeta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPResponseDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BPResponseDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventRequestByConentString_Parms, InType), Z_Construct_UEnum_SimpleHTTP_ESimpleHTTPVerbType, METADATA_PARAMS(0, nullptr) }; // 10049799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InURL = { "InURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventRequestByConentString_Parms, InURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InURL_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InURL_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InHeadMeta_ValueProp = { "InHeadMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InHeadMeta_Key_KeyProp = { "InHeadMeta_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InHeadMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InHeadMeta = { "InHeadMeta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventRequestByConentString_Parms, InHeadMeta), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InHeadMeta_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InHeadMeta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InContent = { "InContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventRequestByConentString_Parms, InContent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InContent_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InContent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_BPResponseDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_BPResponseDelegate = { "BPResponseDelegate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventRequestByConentString_Parms, BPResponseDelegate), Z_Construct_UScriptStruct_FSimpleHTTPBPResponseDelegate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_BPResponseDelegate_MetaData), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_BPResponseDelegate_MetaData) }; // 4276125514
	void Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleHTTPFunctionLibrary_eventRequestByConentString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleHTTPFunctionLibrary_eventRequestByConentString_Parms), &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InHeadMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InHeadMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InHeadMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_InContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_BPResponseDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|SingleAction" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "RequestByConentString", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::SimpleHTTPFunctionLibrary_eventRequestByConentString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::SimpleHTTPFunctionLibrary_eventRequestByConentString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics
	{
		struct SimpleHTTPFunctionLibrary_eventTick_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleHTTPFunctionLibrary_eventTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleHTTP|SingleAction" },
		{ "Comment", "/**\n\x09 *If platform is not turned PLATFORM_PROJECT macro, there is no need to manually put it in the tick of the project\n\x09 * @See SimpleHTTP.Build.cs\n\x09 */" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ToolTip", "If platform is not turned PLATFORM_PROJECT macro, there is no need to manually put it in the tick of the project\n@See SimpleHTTP.Build.cs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleHTTPFunctionLibrary, nullptr, "Tick", nullptr, nullptr, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::SimpleHTTPFunctionLibrary_eventTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::SimpleHTTPFunctionLibrary_eventTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleHTTPFunctionLibrary);
	UClass* Z_Construct_UClass_USimpleHTTPFunctionLibrary_NoRegister()
	{
		return USimpleHTTPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USimpleHTTPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleHTTPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleHTTP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleHTTPFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleHTTPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Awaken, "Awaken" }, // 2740600511
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Cancel, "Cancel" }, // 801466352
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_CancelByHandle, "CancelByHandle" }, // 2548339490
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObject, "DeleteObject" }, // 1540218630
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_DeleteObjects, "DeleteObjects" }, // 3467870472
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetHandleByLastExecutionRequest, "GetHandleByLastExecutionRequest" }, // 1514818377
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToLocal, "GetObjectsToLocal" }, // 652386007
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectsToMemory, "GetObjectsToMemory" }, // 4207520244
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToLocal, "GetObjectToLocal" }, // 3678924684
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_GetObjectToMemory, "GetObjectToMemory" }, // 3746830801
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Pause, "Pause" }, // 1088296975
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PostRequest, "PostRequest" }, // 3476745295
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromBuffer, "PutObjectFromBuffer" }, // 1936508517
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromLocal, "PutObjectFromLocal" }, // 2036720513
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectFromString, "PutObjectFromString" }, // 1598859773
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_PutObjectsFromLocal, "PutObjectsFromLocal" }, // 2643819050
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentByte, "RequestByConentByte" }, // 1747268613
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_RequestByConentString, "RequestByConentString" }, // 3955090177
		{ &Z_Construct_UFunction_USimpleHTTPFunctionLibrary_Tick, "Tick" }, // 1406295898
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleHTTPFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleHTTPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n * A simple set of HTTP interface functions can quickly perform HTTP code operations.\n * Only one interface is needed to interact with our HTTP server. Currently,\n * HTTP supports downloading, uploading, deleting and other operations.\n * See our API for details\n*/" },
		{ "IncludePath", "SimpleHTTPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleHTTPFunctionLibrary.h" },
		{ "ScriptName", "HTTPLibrary" },
		{ "ToolTip", "A simple set of HTTP interface functions can quickly perform HTTP code operations.\nOnly one interface is needed to interact with our HTTP server. Currently,\nHTTP supports downloading, uploading, deleting and other operations.\nSee our API for details" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleHTTPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleHTTPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleHTTPFunctionLibrary_Statics::ClassParams = {
		&USimpleHTTPFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleHTTPFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleHTTPFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleHTTPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USimpleHTTPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleHTTPFunctionLibrary.OuterSingleton, Z_Construct_UClass_USimpleHTTPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleHTTPFunctionLibrary.OuterSingleton;
	}
	template<> SIMPLEHTTP_API UClass* StaticClass<USimpleHTTPFunctionLibrary>()
	{
		return USimpleHTTPFunctionLibrary::StaticClass();
	}
	USimpleHTTPFunctionLibrary::USimpleHTTPFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleHTTPFunctionLibrary);
	USimpleHTTPFunctionLibrary::~USimpleHTTPFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleHTTPFunctionLibrary, USimpleHTTPFunctionLibrary::StaticClass, TEXT("USimpleHTTPFunctionLibrary"), &Z_Registration_Info_UClass_USimpleHTTPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleHTTPFunctionLibrary), 249919407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_1806270551(TEXT("/Script/SimpleHTTP"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
