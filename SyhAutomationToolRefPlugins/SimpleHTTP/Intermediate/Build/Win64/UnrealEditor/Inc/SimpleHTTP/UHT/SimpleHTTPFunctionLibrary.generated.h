// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleHTTPFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
enum class ESimpleHTTPVerbType : uint8;
struct FSimpleHTTPBPResponseDelegate;
#ifdef SIMPLEHTTP_SimpleHTTPFunctionLibrary_generated_h
#error "SimpleHTTPFunctionLibrary.generated.h already included, missing '#pragma once' in SimpleHTTPFunctionLibrary.h"
#endif
#define SIMPLEHTTP_SimpleHTTPFunctionLibrary_generated_h

#define FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_SPARSE_DATA
#define FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteObjects); \
	DECLARE_FUNCTION(execGetObjectsToMemory); \
	DECLARE_FUNCTION(execGetObjectsToLocal); \
	DECLARE_FUNCTION(execPutObjectsFromLocal); \
	DECLARE_FUNCTION(execDeleteObject); \
	DECLARE_FUNCTION(execPutObjectFromString); \
	DECLARE_FUNCTION(execPutObjectFromBuffer); \
	DECLARE_FUNCTION(execPutObjectFromLocal); \
	DECLARE_FUNCTION(execGetObjectToLocal); \
	DECLARE_FUNCTION(execGetObjectToMemory); \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execRequestByConentByte); \
	DECLARE_FUNCTION(execRequestByConentString); \
	DECLARE_FUNCTION(execPostRequest); \
	DECLARE_FUNCTION(execGetHandleByLastExecutionRequest); \
	DECLARE_FUNCTION(execCancelByHandle); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execAwaken); \
	DECLARE_FUNCTION(execPause);


#define FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_ACCESSORS
#define FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleHTTPFunctionLibrary(); \
	friend struct Z_Construct_UClass_USimpleHTTPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USimpleHTTPFunctionLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleHTTP"), NO_API) \
	DECLARE_SERIALIZER(USimpleHTTPFunctionLibrary)


#define FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleHTTPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleHTTPFunctionLibrary(USimpleHTTPFunctionLibrary&&); \
	NO_API USimpleHTTPFunctionLibrary(const USimpleHTTPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleHTTPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleHTTPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleHTTPFunctionLibrary) \
	NO_API virtual ~USimpleHTTPFunctionLibrary();


#define FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_15_PROLOG
#define FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_SPARSE_DATA \
	FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_ACCESSORS \
	FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEHTTP_API UClass* StaticClass<class USimpleHTTPFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleHTTP_Source_SimpleHTTP_Public_SimpleHTTPFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
