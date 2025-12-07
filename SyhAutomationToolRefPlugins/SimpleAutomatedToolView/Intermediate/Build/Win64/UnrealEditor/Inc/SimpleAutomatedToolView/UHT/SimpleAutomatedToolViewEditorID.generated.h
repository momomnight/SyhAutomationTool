// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleAutomatedToolViewEditorID.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEAUTOMATEDTOOLVIEW_SimpleAutomatedToolViewEditorID_generated_h
#error "SimpleAutomatedToolViewEditorID.generated.h already included, missing '#pragma once' in SimpleAutomatedToolViewEditorID.h"
#endif
#define SIMPLEAUTOMATEDTOOLVIEW_SimpleAutomatedToolViewEditorID_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleAutomatedToolView_Source_SimpleAutomatedToolView_Public_SimpleAutomatedToolViewEditorID_h


#define FOREACH_ENUM_ETABTYPE(op) \
	op(ETabType::DefaultTabName) \
	op(ETabType::FileDirectoryTabName) \
	op(ETabType::GraphTabName) \
	op(ETabType::NodeListTabName) 

enum class ETabType : uint8;
template<> struct TIsUEnumClass<ETabType> { enum { Value = true }; };
template<> SIMPLEAUTOMATEDTOOLVIEW_API UEnum* StaticEnum<ETabType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
