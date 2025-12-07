// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNetChannelType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleNetChannelType() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2();
	SIMPLENETCHANNEL_API UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionLinkType();
	SIMPLENETCHANNEL_API UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionType();
	SIMPLENETCHANNEL_API UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType();
	SIMPLENETCHANNEL_API UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState();
	SIMPLENETCHANNEL_API UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManageCallType();
	SIMPLENETCHANNEL_API UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManagePingType();
	SIMPLENETCHANNEL_API UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleSocketType();
	SIMPLENETCHANNEL_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleAddr();
	SIMPLENETCHANNEL_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleAddrInfo();
	SIMPLENETCHANNEL_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleConfigInfo();
	UPackage* Z_Construct_UPackage__Script_SimpleNetChannel();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleNetManagePingType;
	static UEnum* ESimpleNetManagePingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleNetManagePingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleNetManagePingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManagePingType, (UObject*)Z_Construct_UPackage__Script_SimpleNetChannel(), TEXT("ESimpleNetManagePingType"));
		}
		return Z_Registration_Info_UEnum_ESimpleNetManagePingType.OuterSingleton;
	}
	template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleNetManagePingType>()
	{
		return ESimpleNetManagePingType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManagePingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManagePingType_Statics::Enumerators[] = {
		{ "ESimpleNetManagePingType::OK", (int64)ESimpleNetManagePingType::OK },
		{ "ESimpleNetManagePingType::UNBOUND", (int64)ESimpleNetManagePingType::UNBOUND },
		{ "ESimpleNetManagePingType::UNREGISTERED", (int64)ESimpleNetManagePingType::UNREGISTERED },
		{ "ESimpleNetManagePingType::INCOMPLETELINK", (int64)ESimpleNetManagePingType::INCOMPLETELINK },
		{ "ESimpleNetManagePingType::OUTTIME", (int64)ESimpleNetManagePingType::OUTTIME },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManagePingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "INCOMPLETELINK.Comment", "//\xe6\x9c\xaa\xe6\xb3\xa8\xe5\x86\x8c\n" },
		{ "INCOMPLETELINK.Name", "ESimpleNetManagePingType::INCOMPLETELINK" },
		{ "INCOMPLETELINK.ToolTip", "\xe6\x9c\xaa\xe6\xb3\xa8\xe5\x86\x8c" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
		{ "OK.Name", "ESimpleNetManagePingType::OK" },
		{ "OUTTIME.Comment", "//\xe6\x9c\xaa\xe5\xae\x8c\xe6\x88\x90\xe9\x93\xbe\xe6\x8e\xa5\n" },
		{ "OUTTIME.Name", "ESimpleNetManagePingType::OUTTIME" },
		{ "OUTTIME.ToolTip", "\xe6\x9c\xaa\xe5\xae\x8c\xe6\x88\x90\xe9\x93\xbe\xe6\x8e\xa5" },
		{ "UNBOUND.Comment", "//\xe9\x93\xbe\xe6\x8e\xa5\n" },
		{ "UNBOUND.Name", "ESimpleNetManagePingType::UNBOUND" },
		{ "UNBOUND.ToolTip", "\xe9\x93\xbe\xe6\x8e\xa5" },
		{ "UNREGISTERED.Comment", "//\xe6\x9c\xaa\xe7\xbb\x91\xe5\xae\x9a\n" },
		{ "UNREGISTERED.Name", "ESimpleNetManagePingType::UNREGISTERED" },
		{ "UNREGISTERED.ToolTip", "\xe6\x9c\xaa\xe7\xbb\x91\xe5\xae\x9a" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManagePingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleNetChannel,
		nullptr,
		"ESimpleNetManagePingType",
		"ESimpleNetManagePingType",
		Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManagePingType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManagePingType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManagePingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManagePingType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManagePingType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleNetManagePingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleNetManagePingType.InnerSingleton, Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManagePingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleNetManagePingType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleNetManageCallType;
	static UEnum* ESimpleNetManageCallType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleNetManageCallType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleNetManageCallType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManageCallType, (UObject*)Z_Construct_UPackage__Script_SimpleNetChannel(), TEXT("ESimpleNetManageCallType"));
		}
		return Z_Registration_Info_UEnum_ESimpleNetManageCallType.OuterSingleton;
	}
	template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleNetManageCallType>()
	{
		return ESimpleNetManageCallType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManageCallType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManageCallType_Statics::Enumerators[] = {
		{ "ESimpleNetManageCallType::INPROGRESS", (int64)ESimpleNetManageCallType::INPROGRESS },
		{ "ESimpleNetManageCallType::PROGRESS_COMPLETE", (int64)ESimpleNetManageCallType::PROGRESS_COMPLETE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManageCallType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "INPROGRESS.Name", "ESimpleNetManageCallType::INPROGRESS" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
		{ "PROGRESS_COMPLETE.Name", "ESimpleNetManageCallType::PROGRESS_COMPLETE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManageCallType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleNetChannel,
		nullptr,
		"ESimpleNetManageCallType",
		"ESimpleNetManageCallType",
		Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManageCallType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManageCallType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManageCallType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManageCallType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManageCallType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleNetManageCallType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleNetManageCallType.InnerSingleton, Z_Construct_UEnum_SimpleNetChannel_ESimpleNetManageCallType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleNetManageCallType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleNetLinkState;
	static UEnum* ESimpleNetLinkState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleNetLinkState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleNetLinkState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState, (UObject*)Z_Construct_UPackage__Script_SimpleNetChannel(), TEXT("ESimpleNetLinkState"));
		}
		return Z_Registration_Info_UEnum_ESimpleNetLinkState.OuterSingleton;
	}
	template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleNetLinkState>()
	{
		return ESimpleNetLinkState_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState_Statics::Enumerators[] = {
		{ "ESimpleNetLinkState::LINKSTATE_LISTEN", (int64)ESimpleNetLinkState::LINKSTATE_LISTEN },
		{ "ESimpleNetLinkState::LINKSTATE_CONNET", (int64)ESimpleNetLinkState::LINKSTATE_CONNET },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LINKSTATE_CONNET.Name", "ESimpleNetLinkState::LINKSTATE_CONNET" },
		{ "LINKSTATE_LISTEN.Name", "ESimpleNetLinkState::LINKSTATE_LISTEN" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleNetChannel,
		nullptr,
		"ESimpleNetLinkState",
		"ESimpleNetLinkState",
		Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState()
	{
		if (!Z_Registration_Info_UEnum_ESimpleNetLinkState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleNetLinkState.InnerSingleton, Z_Construct_UEnum_SimpleNetChannel_ESimpleNetLinkState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleNetLinkState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleConnetionType;
	static UEnum* ESimpleConnetionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleConnetionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleConnetionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionType, (UObject*)Z_Construct_UPackage__Script_SimpleNetChannel(), TEXT("ESimpleConnetionType"));
		}
		return Z_Registration_Info_UEnum_ESimpleConnetionType.OuterSingleton;
	}
	template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleConnetionType>()
	{
		return ESimpleConnetionType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionType_Statics::Enumerators[] = {
		{ "ESimpleConnetionType::CONNETION_MAIN_LISTEN", (int64)ESimpleConnetionType::CONNETION_MAIN_LISTEN },
		{ "ESimpleConnetionType::CONNETION_LISTEN", (int64)ESimpleConnetionType::CONNETION_LISTEN },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CONNETION_LISTEN.Name", "ESimpleConnetionType::CONNETION_LISTEN" },
		{ "CONNETION_MAIN_LISTEN.Name", "ESimpleConnetionType::CONNETION_MAIN_LISTEN" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleNetChannel,
		nullptr,
		"ESimpleConnetionType",
		"ESimpleConnetionType",
		Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleConnetionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleConnetionType.InnerSingleton, Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleConnetionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleSocketType;
	static UEnum* ESimpleSocketType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleSocketType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleSocketType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleNetChannel_ESimpleSocketType, (UObject*)Z_Construct_UPackage__Script_SimpleNetChannel(), TEXT("ESimpleSocketType"));
		}
		return Z_Registration_Info_UEnum_ESimpleSocketType.OuterSingleton;
	}
	template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleSocketType>()
	{
		return ESimpleSocketType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleNetChannel_ESimpleSocketType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleNetChannel_ESimpleSocketType_Statics::Enumerators[] = {
		{ "ESimpleSocketType::SIMPLESOCKETTYPE_UDP", (int64)ESimpleSocketType::SIMPLESOCKETTYPE_UDP },
		{ "ESimpleSocketType::SIMPLESOCKETTYPE_TCP", (int64)ESimpleSocketType::SIMPLESOCKETTYPE_TCP },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleNetChannel_ESimpleSocketType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
		{ "SIMPLESOCKETTYPE_TCP.Name", "ESimpleSocketType::SIMPLESOCKETTYPE_TCP" },
		{ "SIMPLESOCKETTYPE_UDP.Name", "ESimpleSocketType::SIMPLESOCKETTYPE_UDP" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleNetChannel_ESimpleSocketType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleNetChannel,
		nullptr,
		"ESimpleSocketType",
		"ESimpleSocketType",
		Z_Construct_UEnum_SimpleNetChannel_ESimpleSocketType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleSocketType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleSocketType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleNetChannel_ESimpleSocketType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleSocketType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleSocketType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleSocketType.InnerSingleton, Z_Construct_UEnum_SimpleNetChannel_ESimpleSocketType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleSocketType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleConnetionLinkType;
	static UEnum* ESimpleConnetionLinkType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleConnetionLinkType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleConnetionLinkType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionLinkType, (UObject*)Z_Construct_UPackage__Script_SimpleNetChannel(), TEXT("ESimpleConnetionLinkType"));
		}
		return Z_Registration_Info_UEnum_ESimpleConnetionLinkType.OuterSingleton;
	}
	template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleConnetionLinkType>()
	{
		return ESimpleConnetionLinkType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionLinkType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionLinkType_Statics::Enumerators[] = {
		{ "ESimpleConnetionLinkType::LINK_UNINITIALIZED", (int64)ESimpleConnetionLinkType::LINK_UNINITIALIZED },
		{ "ESimpleConnetionLinkType::LINK_VERIFICATION", (int64)ESimpleConnetionLinkType::LINK_VERIFICATION },
		{ "ESimpleConnetionLinkType::LINK_LOGIN", (int64)ESimpleConnetionLinkType::LINK_LOGIN },
		{ "ESimpleConnetionLinkType::LINK_JOIN", (int64)ESimpleConnetionLinkType::LINK_JOIN },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionLinkType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LINK_JOIN.Comment", "//\n//\n//\n" },
		{ "LINK_JOIN.Name", "ESimpleConnetionLinkType::LINK_JOIN" },
		{ "LINK_LOGIN.Comment", "//\n//\n" },
		{ "LINK_LOGIN.Name", "ESimpleConnetionLinkType::LINK_LOGIN" },
		{ "LINK_UNINITIALIZED.Name", "ESimpleConnetionLinkType::LINK_UNINITIALIZED" },
		{ "LINK_VERIFICATION.Comment", "//\n" },
		{ "LINK_VERIFICATION.Name", "ESimpleConnetionLinkType::LINK_VERIFICATION" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionLinkType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleNetChannel,
		nullptr,
		"ESimpleConnetionLinkType",
		"ESimpleConnetionLinkType",
		Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionLinkType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionLinkType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionLinkType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionLinkType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionLinkType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleConnetionLinkType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleConnetionLinkType.InnerSingleton, Z_Construct_UEnum_SimpleNetChannel_ESimpleConnetionLinkType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleConnetionLinkType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleAddr;
class UScriptStruct* FSimpleAddr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleAddr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleAddr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleAddr, (UObject*)Z_Construct_UPackage__Script_SimpleNetChannel(), TEXT("SimpleAddr"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleAddr.OuterSingleton;
}
template<> SIMPLENETCHANNEL_API UScriptStruct* StaticStruct<FSimpleAddr>()
{
	return FSimpleAddr::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleAddr_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_IP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleAddr_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
		{ "Proto", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleAddr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleAddr>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleAddr_Statics::NewProp_IP_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSimpleAddr_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleAddr, IP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAddr_Statics::NewProp_IP_MetaData), Z_Construct_UScriptStruct_FSimpleAddr_Statics::NewProp_IP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleAddr_Statics::NewProp_Port_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSimpleAddr_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleAddr, Port), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAddr_Statics::NewProp_Port_MetaData), Z_Construct_UScriptStruct_FSimpleAddr_Statics::NewProp_Port_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleAddr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleAddr_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleAddr_Statics::NewProp_Port,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleAddr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleNetChannel,
		nullptr,
		&NewStructOps,
		"SimpleAddr",
		Z_Construct_UScriptStruct_FSimpleAddr_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAddr_Statics::PropPointers),
		sizeof(FSimpleAddr),
		alignof(FSimpleAddr),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAddr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleAddr_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAddr_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleAddr()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleAddr.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleAddr.InnerSingleton, Z_Construct_UScriptStruct_FSimpleAddr_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleAddr.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleAddrInfo;
class UScriptStruct* FSimpleAddrInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleAddrInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleAddrInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleAddrInfo, (UObject*)Z_Construct_UPackage__Script_SimpleNetChannel(), TEXT("SimpleAddrInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleAddrInfo.OuterSingleton;
}
template<> SIMPLENETCHANNEL_API UScriptStruct* StaticStruct<FSimpleAddrInfo>()
{
	return FSimpleAddrInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Addr_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Addr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
		{ "Proto", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleAddrInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::NewProp_Addr_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::NewProp_Addr = { "Addr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleAddrInfo, Addr), Z_Construct_UScriptStruct_FSimpleAddr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::NewProp_Addr_MetaData), Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::NewProp_Addr_MetaData) }; // 3951809404
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::NewProp_ChannelID_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::NewProp_ChannelID = { "ChannelID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleAddrInfo, ChannelID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::NewProp_ChannelID_MetaData), Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::NewProp_ChannelID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::NewProp_Addr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::NewProp_ChannelID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleNetChannel,
		nullptr,
		&NewStructOps,
		"SimpleAddrInfo",
		Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::PropPointers),
		sizeof(FSimpleAddrInfo),
		alignof(FSimpleAddrInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleAddrInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleAddrInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleAddrInfo.InnerSingleton, Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleAddrInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleConfigInfo;
class UScriptStruct* FSimpleConfigInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleConfigInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleConfigInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleConfigInfo, (UObject*)Z_Construct_UPackage__Script_SimpleNetChannel(), TEXT("SimpleConfigInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleConfigInfo.OuterSingleton;
}
template<> SIMPLENETCHANNEL_API UScriptStruct* StaticStruct<FSimpleConfigInfo>()
{
	return FSimpleConfigInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PortRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecvDataNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RecvDataNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendDataNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SendDataNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxConnections_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepackagingFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RepackagingFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberThreads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberThreads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintHeartBeat_MetaData[];
#endif
		static void NewProp_bPrintHeartBeat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintHeartBeat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSlidingWindow_MetaData[];
#endif
		static void NewProp_bSlidingWindow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlidingWindow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRepackaging_MetaData[];
#endif
		static void NewProp_bRepackaging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepackaging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCompletePackProtocolInfo_MetaData[];
#endif
		static void NewProp_bShowCompletePackProtocolInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCompletePackProtocolInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSendDebug_MetaData[];
#endif
		static void NewProp_bShowSendDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSendDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepackagingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RepackagingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutTimeLink_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTimeLink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutTimeSynchronizationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTimeSynchronizationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeartBeatTimeTnterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeartBeatTimeTnterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PingMaxOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PingMaxOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublicIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecretKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SecretKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleConfigInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, Version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_Version_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_Version_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_URL_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_URL_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_Port_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, Port), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_Port_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_Port_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PortRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PortRange = { "PortRange", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, PortRange), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PortRange_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PortRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RecvDataNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RecvDataNumber = { "RecvDataNumber", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, RecvDataNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RecvDataNumber_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RecvDataNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_SendDataNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_SendDataNumber = { "SendDataNumber", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, SendDataNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_SendDataNumber_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_SendDataNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_MaxConnections_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_MaxConnections = { "MaxConnections", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, MaxConnections), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_MaxConnections_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_MaxConnections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_MaxChannels_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_MaxChannels = { "MaxChannels", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, MaxChannels), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_MaxChannels_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_MaxChannels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RepackagingFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RepackagingFrequency = { "RepackagingFrequency", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, RepackagingFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RepackagingFrequency_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RepackagingFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_NumberThreads_MetaData[] = {
		{ "Comment", "//\xe6\x8c\x87\xe5\xae\x9a\xe7\xba\xbf\xe7\xa8\x8b\xe6\xb1\xa0\xe5\xba\x94\xe8\xaf\xa5\xe6\x9c\x89\xe5\xa4\x9a\xe5\xb0\x91\xe7\xba\xbf\xe7\xa8\x8b\n" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe7\xba\xbf\xe7\xa8\x8b\xe6\xb1\xa0\xe5\xba\x94\xe8\xaf\xa5\xe6\x9c\x89\xe5\xa4\x9a\xe5\xb0\x91\xe7\xba\xbf\xe7\xa8\x8b" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_NumberThreads = { "NumberThreads", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, NumberThreads), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_NumberThreads_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_NumberThreads_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bPrintHeartBeat_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bPrintHeartBeat_SetBit(void* Obj)
	{
		((FSimpleConfigInfo*)Obj)->bPrintHeartBeat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bPrintHeartBeat = { "bPrintHeartBeat", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleConfigInfo), &Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bPrintHeartBeat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bPrintHeartBeat_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bPrintHeartBeat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bSlidingWindow_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bSlidingWindow_SetBit(void* Obj)
	{
		((FSimpleConfigInfo*)Obj)->bSlidingWindow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bSlidingWindow = { "bSlidingWindow", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleConfigInfo), &Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bSlidingWindow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bSlidingWindow_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bSlidingWindow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bRepackaging_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bRepackaging_SetBit(void* Obj)
	{
		((FSimpleConfigInfo*)Obj)->bRepackaging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bRepackaging = { "bRepackaging", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleConfigInfo), &Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bRepackaging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bRepackaging_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bRepackaging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowCompletePackProtocolInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowCompletePackProtocolInfo_SetBit(void* Obj)
	{
		((FSimpleConfigInfo*)Obj)->bShowCompletePackProtocolInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowCompletePackProtocolInfo = { "bShowCompletePackProtocolInfo", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleConfigInfo), &Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowCompletePackProtocolInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowCompletePackProtocolInfo_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowCompletePackProtocolInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowSendDebug_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowSendDebug_SetBit(void* Obj)
	{
		((FSimpleConfigInfo*)Obj)->bShowSendDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowSendDebug = { "bShowSendDebug", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleConfigInfo), &Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowSendDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowSendDebug_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowSendDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RepackagingTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RepackagingTime = { "RepackagingTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, RepackagingTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RepackagingTime_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RepackagingTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_OutTimeLink_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_OutTimeLink = { "OutTimeLink", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, OutTimeLink), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_OutTimeLink_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_OutTimeLink_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_OutTimeSynchronizationTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_OutTimeSynchronizationTime = { "OutTimeSynchronizationTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, OutTimeSynchronizationTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_OutTimeSynchronizationTime_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_OutTimeSynchronizationTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_HeartBeatTimeTnterval_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_HeartBeatTimeTnterval = { "HeartBeatTimeTnterval", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, HeartBeatTimeTnterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_HeartBeatTimeTnterval_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_HeartBeatTimeTnterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PingMaxOutTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PingMaxOutTime = { "PingMaxOutTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, PingMaxOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PingMaxOutTime_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PingMaxOutTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PublicIP_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PublicIP = { "PublicIP", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, PublicIP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PublicIP_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PublicIP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_SecretKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_SecretKey = { "SecretKey", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleConfigInfo, SecretKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_SecretKey_MetaData), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_SecretKey_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PortRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RecvDataNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_SendDataNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_MaxConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_MaxChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RepackagingFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_NumberThreads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bPrintHeartBeat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bSlidingWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bRepackaging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowCompletePackProtocolInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_bShowSendDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_RepackagingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_OutTimeLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_OutTimeSynchronizationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_HeartBeatTimeTnterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PingMaxOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_PublicIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewProp_SecretKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleNetChannel,
		nullptr,
		&NewStructOps,
		"SimpleConfigInfo",
		Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::PropPointers),
		sizeof(FSimpleConfigInfo),
		alignof(FSimpleConfigInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleConfigInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleConfigInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleConfigInfo.InnerSingleton, Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleConfigInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleNetErrorType;
	static UEnum* ESimpleNetErrorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleNetErrorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleNetErrorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType, (UObject*)Z_Construct_UPackage__Script_SimpleNetChannel(), TEXT("ESimpleNetErrorType"));
		}
		return Z_Registration_Info_UEnum_ESimpleNetErrorType.OuterSingleton;
	}
	template<> SIMPLENETCHANNEL_API UEnum* StaticEnum<ESimpleNetErrorType>()
	{
		return ESimpleNetErrorType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType_Statics::Enumerators[] = {
		{ "NET_NONE", (int64)NET_NONE },
		{ "TIME_OUT", (int64)TIME_OUT },
		{ "INIT_FAIL", (int64)INIT_FAIL },
		{ "INIT_SUCCESS", (int64)INIT_SUCCESS },
		{ "HAND_SHAKE_SUCCESS", (int64)HAND_SHAKE_SUCCESS },
		{ "HAND_SHAKE_FAIL", (int64)HAND_SHAKE_FAIL },
		{ "INVALID_VALIDATION", (int64)INVALID_VALIDATION },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HAND_SHAKE_FAIL.Name", "HAND_SHAKE_FAIL" },
		{ "HAND_SHAKE_SUCCESS.Name", "HAND_SHAKE_SUCCESS" },
		{ "INIT_FAIL.Name", "INIT_FAIL" },
		{ "INIT_SUCCESS.Name", "INIT_SUCCESS" },
		{ "INVALID_VALIDATION.Name", "INVALID_VALIDATION" },
		{ "ModuleRelativePath", "Public/SimpleNetChannelType.h" },
		{ "NET_NONE.Name", "NET_NONE" },
		{ "TIME_OUT.Name", "TIME_OUT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleNetChannel,
		nullptr,
		"ESimpleNetErrorType",
		"ESimpleNetErrorType",
		Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleNetErrorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleNetErrorType.InnerSingleton, Z_Construct_UEnum_SimpleNetChannel_ESimpleNetErrorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleNetErrorType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelType_h_Statics::EnumInfo[] = {
		{ ESimpleNetManagePingType_StaticEnum, TEXT("ESimpleNetManagePingType"), &Z_Registration_Info_UEnum_ESimpleNetManagePingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 840263029U) },
		{ ESimpleNetManageCallType_StaticEnum, TEXT("ESimpleNetManageCallType"), &Z_Registration_Info_UEnum_ESimpleNetManageCallType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 349190016U) },
		{ ESimpleNetLinkState_StaticEnum, TEXT("ESimpleNetLinkState"), &Z_Registration_Info_UEnum_ESimpleNetLinkState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 59452332U) },
		{ ESimpleConnetionType_StaticEnum, TEXT("ESimpleConnetionType"), &Z_Registration_Info_UEnum_ESimpleConnetionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2099385490U) },
		{ ESimpleSocketType_StaticEnum, TEXT("ESimpleSocketType"), &Z_Registration_Info_UEnum_ESimpleSocketType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 636983585U) },
		{ ESimpleConnetionLinkType_StaticEnum, TEXT("ESimpleConnetionLinkType"), &Z_Registration_Info_UEnum_ESimpleConnetionLinkType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2192848461U) },
		{ ESimpleNetErrorType_StaticEnum, TEXT("ESimpleNetErrorType"), &Z_Registration_Info_UEnum_ESimpleNetErrorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4012382574U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelType_h_Statics::ScriptStructInfo[] = {
		{ FSimpleAddr::StaticStruct, Z_Construct_UScriptStruct_FSimpleAddr_Statics::NewStructOps, TEXT("SimpleAddr"), &Z_Registration_Info_UScriptStruct_SimpleAddr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleAddr), 3951809404U) },
		{ FSimpleAddrInfo::StaticStruct, Z_Construct_UScriptStruct_FSimpleAddrInfo_Statics::NewStructOps, TEXT("SimpleAddrInfo"), &Z_Registration_Info_UScriptStruct_SimpleAddrInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleAddrInfo), 3468547791U) },
		{ FSimpleConfigInfo::StaticStruct, Z_Construct_UScriptStruct_FSimpleConfigInfo_Statics::NewStructOps, TEXT("SimpleConfigInfo"), &Z_Registration_Info_UScriptStruct_SimpleConfigInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleConfigInfo), 1994689311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelType_h_3396137429(TEXT("/Script/SimpleNetChannel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelType_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_SyhAutomationToolRefPlugins_SimpleNetChannel_Source_SimpleNetChannel_Public_SimpleNetChannelType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
