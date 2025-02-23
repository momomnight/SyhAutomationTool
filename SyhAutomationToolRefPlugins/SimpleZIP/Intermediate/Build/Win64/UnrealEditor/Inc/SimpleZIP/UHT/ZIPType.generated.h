// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZIPType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EZipType : uint8;
#ifdef SIMPLEZIP_ZIPType_generated_h
#error "ZIPType.generated.h already included, missing '#pragma once' in ZIPType.h"
#endif
#define SIMPLEZIP_ZIPType_generated_h

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleZIP_Source_SimpleZIP_Public_ZIPType_h_47_DELEGATE \
SIMPLEZIP_API void FOnZipFileCallbackFunction_DelegateWrapper(const FScriptDelegate& OnZipFileCallbackFunction, EZipType InType, int32 InTotal, int32 InProgress, const FString& InFileName);


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleZIP_Source_SimpleZIP_Public_ZIPType_h_48_DELEGATE \
SIMPLEZIP_API void FOnZipFileCallbackCompleteFunction_DelegateWrapper(const FScriptDelegate& OnZipFileCallbackCompleteFunction);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleZIP_Source_SimpleZIP_Public_ZIPType_h


#define FOREACH_ENUM_EZIPTYPE(op) \
	op(EZipType::E_ZIP) \
	op(EZipType::E_UNZIP) 

enum class EZipType : uint8;
template<> struct TIsUEnumClass<EZipType> { enum { Value = true }; };
template<> SIMPLEZIP_API UEnum* StaticEnum<EZipType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
