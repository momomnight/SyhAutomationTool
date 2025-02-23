// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleNetChannelType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLENETCHANNEL_SimpleNetChannelType_generated_h
#error "SimpleNetChannelType.generated.h already included, missing '#pragma once' in SimpleNetChannelType.h"
#endif
#define SIMPLENETCHANNEL_SimpleNetChannelType_generated_h

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelType_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleAddr_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLENETCHANNEL_API UScriptStruct* StaticStruct<struct FSimpleAddr>();

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelType_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLENETCHANNEL_API UScriptStruct* StaticStruct<struct FSimpleAddrInfo>();

#define FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelType_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLENETCHANNEL_API UScriptStruct* StaticStruct<struct FSimpleConfigInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_RENZHAI_PLUGIN_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelType_h


#define FOREACH_ENUM_ESIMPLENETMANAGEPINGTYPE(op) \
	op(ESimpleNetManagePingType::OK) \
	op(ESimpleNetManagePingType::UNBOUND) \
	op(ESimpleNetManagePingType::UNREGISTERED) \
	op(ESimpleNetManagePingType::INCOMPLETELINK) \
	op(ESimpleNetManagePingType::OUTTIME) 

enum class ESimpleNetManagePingType : uint8;
template<> struct TIsUEnumClass<ESimpleNetManagePingType> { enum { Value = true }; };
template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleNetManagePingType>();

#define FOREACH_ENUM_ESIMPLENETMANAGECALLTYPE(op) \
	op(ESimpleNetManageCallType::INPROGRESS) \
	op(ESimpleNetManageCallType::PROGRESS_COMPLETE) 

enum class ESimpleNetManageCallType : uint8;
template<> struct TIsUEnumClass<ESimpleNetManageCallType> { enum { Value = true }; };
template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleNetManageCallType>();

#define FOREACH_ENUM_ESIMPLENETLINKSTATE(op) \
	op(ESimpleNetLinkState::LINKSTATE_LISTEN) \
	op(ESimpleNetLinkState::LINKSTATE_CONNET) 

enum class ESimpleNetLinkState : uint8;
template<> struct TIsUEnumClass<ESimpleNetLinkState> { enum { Value = true }; };
template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleNetLinkState>();

#define FOREACH_ENUM_ESIMPLECONNETIONTYPE(op) \
	op(ESimpleConnetionType::CONNETION_MAIN_LISTEN) \
	op(ESimpleConnetionType::CONNETION_LISTEN) 

enum class ESimpleConnetionType : uint8;
template<> struct TIsUEnumClass<ESimpleConnetionType> { enum { Value = true }; };
template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleConnetionType>();

#define FOREACH_ENUM_ESIMPLESOCKETTYPE(op) \
	op(ESimpleSocketType::SIMPLESOCKETTYPE_UDP) \
	op(ESimpleSocketType::SIMPLESOCKETTYPE_TCP) 

enum class ESimpleSocketType : uint8;
template<> struct TIsUEnumClass<ESimpleSocketType> { enum { Value = true }; };
template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleSocketType>();

#define FOREACH_ENUM_ESIMPLECONNETIONLINKTYPE(op) \
	op(ESimpleConnetionLinkType::LINK_UNINITIALIZED) \
	op(ESimpleConnetionLinkType::LINK_VERIFICATION) \
	op(ESimpleConnetionLinkType::LINK_LOGIN) \
	op(ESimpleConnetionLinkType::LINK_JOIN) 

enum class ESimpleConnetionLinkType : uint8;
template<> struct TIsUEnumClass<ESimpleConnetionLinkType> { enum { Value = true }; };
template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleConnetionLinkType>();

#define FOREACH_ENUM_ESIMPLENETERRORTYPE(op) \
	op(NET_NONE) \
	op(TIME_OUT) \
	op(INIT_FAIL) \
	op(INIT_SUCCESS) \
	op(HAND_SHAKE_SUCCESS) \
	op(HAND_SHAKE_FAIL) \
	op(INVALID_VALIDATION) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
