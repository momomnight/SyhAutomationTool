// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleProtobufBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEPROTOBUF_SimpleProtobufBPLibrary_generated_h
#error "SimpleProtobufBPLibrary.generated.h already included, missing '#pragma once' in SimpleProtobufBPLibrary.h"
#endif
#define SIMPLEPROTOBUF_SimpleProtobufBPLibrary_generated_h

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateProtoCode);


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleProtobufBPLibrary(); \
	friend struct Z_Construct_UClass_USimpleProtobufBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USimpleProtobufBPLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleProtobuf"), NO_API) \
	DECLARE_SERIALIZER(USimpleProtobufBPLibrary)


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleProtobufBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleProtobufBPLibrary(USimpleProtobufBPLibrary&&); \
	USimpleProtobufBPLibrary(const USimpleProtobufBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleProtobufBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleProtobufBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleProtobufBPLibrary) \
	NO_API virtual ~USimpleProtobufBPLibrary();


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_23_PROLOG
#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEPROTOBUF_API UClass* StaticClass<class USimpleProtobufBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleProtobuf_Source_SimpleProtobuf_Public_SimpleProtobufBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
