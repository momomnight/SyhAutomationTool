#pragma once
#include "CoreMinimal.h"
#include "SimpleAutomatedToolTypeBase.h"
#include "Misc/AutomationToolCommonMethod.h"
#include "SimpleAutomatedToolType.h"

// 添加自己命令时:
// 需要修改SyhAutomationToolType.h和SyhAutomationToolType.cpp文件
// 需要修改AutomationJson.h和AutomationJson.cpp文件

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//枚举相关字符串及操作，如添加自定义枚举需要实现

struct FEnumTrait
{
	consteval bool HasEnumTool()
	{
		return true;
	}
};

template <>
struct FEnumInitialValueImpl<ECommandProtocol>
{
private:
	static constexpr const TCHAR* EnumMemberName[] =
	{
	TEXT("None"),					//0
	TEXT("Call"),					//1
	TEXT("Call_Custom_Content"),	//2
	TEXT("Ue_Project_Refresh"),		//3
	TEXT("Command_Nesting"),		//4
	TEXT("Deployment_Copy"),		//5
	TEXT("Deployment_Delete"),		//6
	TEXT("Vs_Compile"),				//7
	TEXT("Git"),					//8
	TEXT("Ue_Packaging"),			//9
	TEXT("Ue_Plugin_Packaging"),	//10
	TEXT("Condition_Command"),		//11
	TEXT("Oss"),					//12
	TEXT("Http"),					//13
	TEXT("Compress"),				//14
	TEXT("Mysql"),				//15


	TEXT("Max")
	};

	constexpr static uint32 EnumMemberNumber = UE_ARRAY_COUNT(EnumMemberName);
	constexpr static FEnumData<ECommandProtocol, EnumMemberNumber> EnumData = {
		TEXT("ECommandProtocol::CMD_"),
		UE_ARRAY_COUNT(TEXT("ECommandProtocol::CMD_")),
		TEXT("Command"),
		EnumMemberName
	};
	constexpr static FEnumRelatedBase<ECommandProtocol, EnumMemberNumber> InitialValue{ EnumData };
public:
	consteval static uint32 GetMemberNumber()
	{
		return EnumMemberNumber;
	}

	consteval static const FEnumRelatedBase<ECommandProtocol, EnumMemberNumber>* GetInitialValue()
	{
		return &InitialValue;
	}
};

template <>
struct FEnumInitialValueImpl<EComparisionType>
{
private:
	static constexpr const TCHAR* EnumMemberName[] =
	{
		TEXT("None"),
		TEXT("Sequence"),
		TEXT("Break"),

		TEXT("Max")
	};

	constexpr static uint32 EnumMemberNumber = UE_ARRAY_COUNT(EnumMemberName);

	constexpr static FEnumData<EComparisionType, EnumMemberNumber> EnumData = {
		TEXT("EComparisionType::COMPARISION_"),
		UE_ARRAY_COUNT(TEXT("EComparisionType::COMPARISION_")),
		TEXT("ComparisionType"),
		EnumMemberName
	};
	constexpr static FEnumRelatedBase<EComparisionType, EnumMemberNumber> InitialValue{ EnumData };

public:
	consteval static uint32 GetMemberNumber()
	{
		return EnumMemberNumber;
	}

	consteval static const FEnumRelatedBase<EComparisionType, EnumMemberNumber>* GetInitialValue()
	{
		return &InitialValue;
	}
};

template <>
struct FEnumInitialValueImpl<ESimpleHTTPVerbType>
{
private:
	static constexpr const TCHAR* EnumMemberName[] =
	{
		TEXT("Post"),
		TEXT("Put"),
		TEXT("Get"),
		TEXT("Delete"),

		TEXT("Max")
	};

	constexpr static uint32 EnumMemberNumber = UE_ARRAY_COUNT(EnumMemberName);

	constexpr static FEnumData<ESimpleHTTPVerbType, EnumMemberNumber> EnumData = {
		TEXT("ESimpleHTTPVerbType::SIMPLE_"),
		UE_ARRAY_COUNT(TEXT("ESimpleHTTPVerbType::SIMPLE_")),
		TEXT("HTTPVerbType"),
		EnumMemberName
	};
	constexpr static FEnumRelatedBase<ESimpleHTTPVerbType, EnumMemberNumber> InitialValue{ EnumData };

public:
	consteval static uint32 GetMemberNumber()
	{
		return EnumMemberNumber;
	}

	consteval static const FEnumRelatedBase<ESimpleHTTPVerbType, EnumMemberNumber>* GetInitialValue()
	{
		return &InitialValue;
	}
};

template <>
struct FEnumInitialValueImpl<ESimpleOSSCommand>
{
private:
	static constexpr const TCHAR* EnumMemberName[] =
	{
		TEXT("Init"),
		TEXT("Bucket_Exist"),
		TEXT("Object_Exist"),
		TEXT("Copy_Object"),
		TEXT("Delete_Object"),
		TEXT("Get_Object"),
		TEXT("Resumable_Download_Object"),
		TEXT("Put_Object"),
		TEXT("Resumable_Upload_Object"),
		TEXT("Upload_Part"),
		TEXT("Max")
	};
	constexpr static uint32 EnumMemberNumber = UE_ARRAY_COUNT(EnumMemberName);

	constexpr static FEnumData<ESimpleOSSCommand, EnumMemberNumber> EnumData = {
		TEXT("ESimpleOSSCommand::OSS_"),
		UE_ARRAY_COUNT(TEXT("ESimpleOSSCommand::OSS_")),
		TEXT("OSSCommandType"),
		EnumMemberName
	};
	constexpr static FEnumRelatedBase<ESimpleOSSCommand, EnumMemberNumber> InitialValue{ EnumData };

public:
	consteval static uint32 GetMemberNumber()
	{
		return EnumMemberNumber;
	}

	consteval static const FEnumRelatedBase<ESimpleOSSCommand, EnumMemberNumber>* GetInitialValue()
	{
		return &InitialValue;
	}
};

template <>
struct FEnumInitialValueImpl<ECompressType>
{
private:
	static constexpr const TCHAR* EnumMemberName[] =
	{
		TEXT("None"),
		TEXT("Zip"),
		TEXT("Rz"),
	};
	constexpr static uint32 EnumMemberNumber = UE_ARRAY_COUNT(EnumMemberName);

	constexpr static FEnumData<ECompressType, EnumMemberNumber> EnumData = {
		TEXT("ECompressType::COMPRESS_"),
		UE_ARRAY_COUNT(TEXT("ECompressType::COMPRESS_")),
		TEXT("CompressType"),
		EnumMemberName
	};
	constexpr static FEnumRelatedBase<ECompressType, EnumMemberNumber> InitialValue{ EnumData };

public:
	consteval static uint32 GetMemberNumber()
	{
		return EnumMemberNumber;
	}

	consteval static const FEnumRelatedBase<ECompressType, EnumMemberNumber>* GetInitialValue()
	{
		return &InitialValue;
	}
};

template <>
struct FEnumInitialValueImpl<EMysqlMethodType>
{
private:
	static constexpr const TCHAR* EnumMemberName[] =
	{
		TEXT("None"),
		TEXT("Get"),
		TEXT("Post"),
	};
	constexpr static uint32 EnumMemberNumber = UE_ARRAY_COUNT(EnumMemberName);

	constexpr static FEnumData<EMysqlMethodType, EnumMemberNumber> EnumData = {
		TEXT("EMysqlMethodType::MYSQLMETHOD_"),
		UE_ARRAY_COUNT(TEXT("EMysqlMethodType::MYSQLMETHOD_")),
		TEXT("MysqlMethodType"),
		EnumMemberName
	};
	constexpr static FEnumRelatedBase<EMysqlMethodType, EnumMemberNumber> InitialValue{ EnumData };

public:
	consteval static uint32 GetMemberNumber()
	{
		return EnumMemberNumber;
	}

	consteval static const FEnumRelatedBase<EMysqlMethodType, EnumMemberNumber>* GetInitialValue()
	{
		return &InitialValue;
	}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//同上

struct FCommandProtocolRelated : public FEnumRelated<ECommandProtocol>
{
};

struct FComparisionTypeRelated : public FEnumRelated<EComparisionType>
{
};

struct FHttpVerbTypeRelated : public FEnumRelated<ESimpleHTTPVerbType, FEnumFunctionObjectRelated::InvalidEnumValueOperator_Error<ESimpleHTTPVerbType>>
{
	//ESimpleHTTPVerbType没有None值，所以需要一个错误处理
};

struct FOSSCommandTypeRelated : public FEnumRelated<ESimpleOSSCommand, FEnumFunctionObjectRelated::InvalidEnumValueOperator_Error<ESimpleOSSCommand>>
{
	//ESimpleHTTPVerbType没有None值，所以需要一个错误处理
};

struct FCompressTypeRelated : public FEnumRelated<ECompressType>
{
};

struct FMysqlMethodTypeRelated : public FEnumRelated<EMysqlMethodType>
{
};



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//配置相关属性序列化时的关键字名，可以不实现，只需要在Json相关操作中不使用即可
struct FAutomatedCallRelated
{
	static const FString CallTypeKey;
	static const FString CallPathKey;
	static const FString ParametersKey;
};

struct FAutomatedCallCustomContentRelated : public FAutomatedCallRelated
{
	static const FString ContentKey;
	static const FString WaitTime_IntKey;
};

struct FAutomatedUEProjectRefreshRelated : public FAutomatedCallRelated
{
	static const FString UnrealBuildToolPathKey;
	static const FString ProjectUProjectPathKey;


	static FString GetUnrealBuildToolPath(const FString& InEnginePath);
	static FString GetProjectUProjectPath(const FString& InProjectPath);
};

struct FAutomatedCommandNestingRelated
{
	static const FString CommandListKey;
};

struct FAutomatedDeploymentRelated
{
	static const FString  FilesKey;
};

struct FAutomatedDeploymentCopyRelated : public FAutomatedDeploymentRelated
{
	static const FString  DeleteMovedFiles_BooleanKey;
	static const FString  SourceKey;
	static const FString  TargetKey;
};

struct FAutomatedDeploymentDeleteRelated : public FAutomatedDeploymentRelated
{
};

struct FAutomatedVSCompileRelated : public FAutomatedCallRelated
{
	static const FString  BuildStateKey;
	static const FString  SlnProjectPathKey;
	static const FString  ProjectKey;
};

struct FAutomatedGitRelated : public FAutomatedCallRelated
{
	static const FString  ProjectPathKey;
	static const FString  GitCommandsKey;
};

struct FAutomatedUEPackagingBaseRelated : public FAutomatedCallRelated
{
	static const FString EngineDirKey;
};

struct FAutomatedUEPackagingRelated : public FAutomatedUEPackagingBaseRelated
{
	static const FString UProjectPathKey;
	static const FString PlatformKey;
	static const FString BuildStateKey;
	static const FString BuildTargetKey;
	static const FString ArchiveDirectoryKey;
};

struct FAutomatedUEPluginPackagingRelated : public FAutomatedUEPackagingBaseRelated
{
	static const FString PathOfUPluginToTargetKey;
	static const FString SourceKey;
	static const FString TargetKey;
};

struct FAutomatedConditionCommandRelated : public FAutomatedCommandNestingRelated
{
	static const FString TrueCommandListKey;
	static const FString FalseCommandListKey;
};

struct FAutomatedOSSRelated
{
	static const FString OSSComandsKey;
	static const FString OSSComandTypeKey;
	static const FString OSSComandParameterKey;
};

struct FAutomatedHTTPRelated
{
	static const FString URLKey;
	static const FString CustomMetaDataKey;
	static const FString Sync_BooleanKey;
	static const FString Binaries_BooleanKey;
	static const FString ContentBodyKey;
	static const FString Timeout_FloatKey;
	static const FString SavePathKey;
};

struct FAutomatedHTTPServerRelated
{
	static const FString IPKey;
	static const FString Port_IntKey;
	static const FString Https_BooleanKey;
	static const FString CertificateKey;
	static const FString KeyKey;
	static const FString Timeout_FloatKey;
};

struct FAutomatedCompressRelated
{
	static const FString Compress_BooleanKey;
	static const FString CompressMethodKey;
	static const FString CompressEachFileUnderPath_BooleanKey;
	static const FString PasswordKey;
	static const FString PathOfSourceToTargetKey;
	static const FString SourceKey;
	static const FString TargetKey;
};

struct FAutomatedMysqlRelated
{
	static const FString UserKey;
	static const FString HostKey;
	static const FString Port_IntKey;
	static const FString PasswordKey;
	static const FString DataBaseKey;
	static const FString MethodKey;
	static const FString SavePathKey;
	static const FString SqlKey;
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//若要添加自定义的自动化元素，必须实现





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//在Json操作中及自动化元素基类方法中使用，必须实现
//如果有配置类型，我们能拿到什么
template <class ConfigType> struct FCommandProtocol_ConfigType	{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_None; };
template <> struct FCommandProtocol_ConfigType<FAutomatedCallConfig>				{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Call; };
template <> struct FCommandProtocol_ConfigType<FAutomatedCallCustomContentConfig>	{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Call_Custom_Content;};
template <> struct FCommandProtocol_ConfigType<FAutomatedUEProjectRefreshConfig>	{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_UE_Project_Refresh; };
template <> struct FCommandProtocol_ConfigType<FAutomatedCommandNestingConfig>		{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Command_Nesting; };
template <> struct FCommandProtocol_ConfigType<FAutomatedDeploymentCopyConfig>		{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Deployment_Copy; };
template <> struct FCommandProtocol_ConfigType<FAutomatedDeploymentDeleteConfig>	{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Deployment_Delete; };
template <> struct FCommandProtocol_ConfigType<FAutomatedVSCompileConfig>			{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_VS_Compile; };
template <> struct FCommandProtocol_ConfigType<FAutomatedGitConfig>					{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Git; };
template <> struct FCommandProtocol_ConfigType<FAutomatedUEPackagingConfig>			{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_UE_Packaging; };
template <> struct FCommandProtocol_ConfigType<FAutomatedUEPluginPackagingConfig>	{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_UE_Plugin_Packaging; };
template <> struct FCommandProtocol_ConfigType<FAutomatedConditionCommandConfig>	{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Condition_Command; };
template <> struct FCommandProtocol_ConfigType<FAutomatedOSSConfig>					{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_OSS; };
template <> struct FCommandProtocol_ConfigType<FAutomatedHTTPConfig>				{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_HTTP; };
template <> struct FCommandProtocol_ConfigType<FAutomatedCompressConfig>			{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Compress; };
template <> struct FCommandProtocol_ConfigType<FAutomatedMysqlConfig>				{ constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Mysql; };


//如果有枚举号，我们能拿到什么
template <ECommandProtocol Protocol> struct FCommandProtocol_EnumType{ using ConfigType = FAutomatedConfigBase; };
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Call>				{ using ConfigType = FAutomatedCallConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Call_Custom_Content>	{ using ConfigType = FAutomatedCallCustomContentConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_UE_Project_Refresh>	{ using ConfigType = FAutomatedUEProjectRefreshConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Command_Nesting>		{ using ConfigType = FAutomatedCommandNestingConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Deployment_Copy>		{ using ConfigType = FAutomatedDeploymentCopyConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Deployment_Delete>	{ using ConfigType = FAutomatedDeploymentDeleteConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_VS_Compile>			{ using ConfigType = FAutomatedVSCompileConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Git>					{ using ConfigType = FAutomatedGitConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_UE_Packaging>		{ using ConfigType = FAutomatedUEPackagingConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_UE_Plugin_Packaging>	{ using ConfigType = FAutomatedUEPluginPackagingConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Condition_Command>	{ using ConfigType = FAutomatedConditionCommandConfig;};
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_OSS>					{ using ConfigType = FAutomatedOSSConfig; };
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_HTTP>				{ using ConfigType = FAutomatedHTTPConfig; };
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Compress>			{ using ConfigType = FAutomatedCompressConfig; };
template <> struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Mysql>				{ using ConfigType = FAutomatedMysqlConfig; };


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//大量使用，但可以不实现
template <class RelatedType> struct FRelatedTool{ using Type = void; };
template <> struct FRelatedTool<ECommandProtocol>					{ using Type = FCommandProtocolRelated; };
template <> struct FRelatedTool<EComparisionType>					{ using Type = FComparisionTypeRelated; };
template <> struct FRelatedTool<ESimpleHTTPVerbType>				{ using Type = FHttpVerbTypeRelated; };
template <> struct FRelatedTool<ESimpleOSSCommand>					{ using Type = FOSSCommandTypeRelated; };
template <> struct FRelatedTool<ECompressType>						{ using Type = FCompressTypeRelated; };
template <> struct FRelatedTool<EMysqlMethodType>					{ using Type = FMysqlMethodTypeRelated; };
template <> struct FRelatedTool<FAutomatedCallConfig>				{ using Type = FAutomatedCallRelated; };
template <> struct FRelatedTool<FAutomatedCallCustomContentConfig>	{ using Type = FAutomatedCallCustomContentRelated; };
template <> struct FRelatedTool<FAutomatedUEProjectRefreshConfig>	{ using Type = FAutomatedUEProjectRefreshRelated; };
template <> struct FRelatedTool<FAutomatedCommandNestingConfig>		{ using Type = FAutomatedCommandNestingRelated; };
template <> struct FRelatedTool<FAutomatedDeploymentCopyConfig>		{ using Type = FAutomatedDeploymentCopyRelated; };
template <> struct FRelatedTool<FAutomatedDeploymentDeleteConfig>	{ using Type = FAutomatedDeploymentDeleteRelated; };
template <> struct FRelatedTool<FAutomatedVSCompileConfig>			{ using Type = FAutomatedVSCompileRelated; };
template <> struct FRelatedTool<FAutomatedGitConfig>				{ using Type = FAutomatedGitRelated; };
template <> struct FRelatedTool<FAutomatedUEPackagingConfig>		{ using Type = FAutomatedUEPackagingRelated; };
template <> struct FRelatedTool<FAutomatedUEPluginPackagingConfig>	{ using Type = FAutomatedUEPluginPackagingRelated; };
template <> struct FRelatedTool<FAutomatedConditionCommandConfig>	{ using Type = FAutomatedConditionCommandRelated; };
template <> struct FRelatedTool<FAutomatedOSSConfig>				{ using Type = FAutomatedOSSRelated; };
template <> struct FRelatedTool<FAutomatedHTTPConfig>				{ using Type = FAutomatedHTTPRelated; };
template <> struct FRelatedTool<FAutomatedHTTPServerConfig>			{ using Type = FAutomatedHTTPServerRelated; };
template <> struct FRelatedTool<FAutomatedCompressConfig>			{ using Type = FAutomatedCompressRelated; };
template <> struct FRelatedTool<FAutomatedMysqlConfig>				{ using Type = FAutomatedMysqlRelated; };

template <class AutomatedConfig, class = std::enable_if_t<std::is_base_of_v<FAutomatedConfigBase, AutomatedConfig>>>
using Tool = typename FRelatedTool<AutomatedConfig>::Type;

template <class EnumType>
struct HasEnumTool
{
	constexpr static bool Value = std::is_enum_v<EnumType> && (FEnumInitialValueImpl<EnumType>::GetInitialValue() != nullptr);
};

template <class EnumType, class = std::enable_if_t<HasEnumTool<EnumType>::Value, void>>
using EnumTool = typename FRelatedTool<EnumType>::Type;

