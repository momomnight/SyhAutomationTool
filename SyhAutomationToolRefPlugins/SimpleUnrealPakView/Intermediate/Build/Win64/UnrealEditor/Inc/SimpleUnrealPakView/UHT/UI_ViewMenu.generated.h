// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UMG/UI_ViewMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEUNREALPAKVIEW_UI_ViewMenu_generated_h
#error "UI_ViewMenu.generated.h already included, missing '#pragma once' in UI_ViewMenu.h"
#endif
#define SIMPLEUNREALPAKVIEW_UI_ViewMenu_generated_h

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnClickAnalysisPak); \
	DECLARE_FUNCTION(execOnClickLoadPath); \
	DECLARE_FUNCTION(execCommitMountPoint); \
	DECLARE_FUNCTION(execCommitAES); \
	DECLARE_FUNCTION(execCommitPakPath);


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUI_ViewMenu(); \
	friend struct Z_Construct_UClass_UUI_ViewMenu_Statics; \
public: \
	DECLARE_CLASS(UUI_ViewMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleUnrealPakView"), NO_API) \
	DECLARE_SERIALIZER(UUI_ViewMenu)


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUI_ViewMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUI_ViewMenu(UUI_ViewMenu&&); \
	UUI_ViewMenu(const UUI_ViewMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUI_ViewMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUI_ViewMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUI_ViewMenu) \
	NO_API virtual ~UUI_ViewMenu();


#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h_16_PROLOG
#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEUNREALPAKVIEW_API UClass* StaticClass<class UUI_ViewMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleUnrealPakView_Source_SimpleUnrealPakView_Public_UMG_UI_ViewMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
