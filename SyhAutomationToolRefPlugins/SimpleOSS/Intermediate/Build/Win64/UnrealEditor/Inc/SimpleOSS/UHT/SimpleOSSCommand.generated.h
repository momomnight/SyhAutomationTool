// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleOSSCommand.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEOSS_SimpleOSSCommand_generated_h
#error "SimpleOSSCommand.generated.h already included, missing '#pragma once' in SimpleOSSCommand.h"
#endif
#define SIMPLEOSS_SimpleOSSCommand_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleOSS_Source_SimpleOSS_Public_SimpleOSSCommand_h


#define FOREACH_ENUM_ESIMPLEOSSCOMMAND(op) \
	op(ESimpleOSSCommand::OSS_INIT) \
	op(ESimpleOSSCommand::OSS_BUCKET_EXIST) \
	op(ESimpleOSSCommand::OSS_OBJECT_EXIST) \
	op(ESimpleOSSCommand::OSS_COPY_OBJECT) \
	op(ESimpleOSSCommand::OSS_DELETE_OBJECT) \
	op(ESimpleOSSCommand::OSS_GET_OBJECT) \
	op(ESimpleOSSCommand::OSS_RESUMABLE_DOWNLOAD_OBJECT) \
	op(ESimpleOSSCommand::OSS_PUT_OBJECT) \
	op(ESimpleOSSCommand::OSS_RESUMABLE_UPLOAD_OBJECT) \
	op(ESimpleOSSCommand::OSS_UPLOAD_PART) 

enum class ESimpleOSSCommand : uint8;
template<> struct TIsUEnumClass<ESimpleOSSCommand> { enum { Value = true }; };
template<> SIMPLEOSS_API UEnum* StaticEnum<ESimpleOSSCommand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
