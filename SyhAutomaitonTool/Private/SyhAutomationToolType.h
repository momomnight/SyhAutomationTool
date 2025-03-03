#pragma once
#include "CoreMinimal.h"
#include "SyhAutomationToolLog.h"
#include "SyhAutomationToolType.generated.h"

// 添加自己命令时:
// 需要修改SyhAutomationToolType.h和SyhAutomationToolType.cpp文件
// 需要修改AutomationJson.h和AutomationJson.cpp文件


/// <summary>
/// Related Some things;
/// </summary>
struct FCommandProtocolRelated
{
	static const FString ProtocolStringPrefix;
	static const int32 ProtocolStringPrefixLength;
	static const FString CommandKey;
	static const TArray<FString> CommandName;

	static FString GetProtocolFullName(const FString& InShortName);
};

struct FAutomatedCallRelated
{
	static const FString CallTypeKey;
	static const FString CallPathKey;
	static const FString ParametersKey;
};

struct FAutomatedCallCustomContentRelated : public FAutomatedCallRelated
{
	static const FString ContentKey;
	static const FString WaitTimeKey;
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

struct FAutomatedDeploymentCopyRelated
{
	static const FString  DeleteMovedFiles_BooleanKey;
	static const FString  FilesKey;
	static const FString  SourceKey;
	static const FString  DestinationKey;
};



//命令枚举
UENUM(BlueprintType)
enum class ECommandProtocol : uint8
{
	CMD_None = 0				UMETA(DisplayName = "None"),
	CMD_Call					UMETA(DisplayName = "Call"),	//用于呼叫某些程序
	CMD_Call_Custom_Content		UMETA(DisplayName = "Call Custom Content"),
	CMD_UE_Project_Refresh		UMETA(DisplayName = "UE Project Refresh"),
	CMD_Command_Nesting			UMETA(DisplayName = "Command Nesting"),
	CMD_Deployment_Copy			UMETA(DisplayName = "Deployment Copy"),
	CMD_Deployment_Delete		UMETA(DisplayName = "Deployment Delete"),

	CMD_Max						UMETA(DisplayName = "Max"),
};

// FAutomatedConfigBase总的基类
USTRUCT(BlueprintType)
struct FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()
};

//呼叫指定脚本
USTRUCT(BlueprintType)
struct FAutomatedCallConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;
	typedef FAutomatedCallRelated RelatedString;

	FAutomatedCallConfig() : CallType(TEXT("bat")){}
	
	UPROPERTY()
	FString CallType;

	UPROPERTY()
	FString Parameters;

	UPROPERTY()
	FString CallPath;

};

//输入脚本内容，自动生成bat脚本，并执行
USTRUCT(BlueprintType)
struct FAutomatedCallCustomContentConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;
	typedef FAutomatedCallCustomContentRelated RelatedString;

	FAutomatedCallCustomContentConfig() : WaitTime(10) {}

	UPROPERTY()
	FString Content;

	UPROPERTY()
	int32 WaitTime;
};

//
USTRUCT(BlueprintType)
struct FAutomatedUEProjectRefreshConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;
	typedef FAutomatedUEProjectRefreshRelated RelatedString;

	FAutomatedUEProjectRefreshConfig() 
	{
		UnrealBuildToolPath = RelatedString::GetUnrealBuildToolPath(FPaths::EngineDir());
		ProjectUProjectPath = RelatedString::GetProjectUProjectPath(FPaths::ProjectDir());
	}

	UPROPERTY()
	FString UnrealBuildToolPath;

	UPROPERTY()
	FString ProjectUProjectPath;
};


USTRUCT(BlueprintType)
struct FAutomatedCommandNestingConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;
	typedef FAutomatedCommandNestingRelated RelatedString;

	FAutomatedCommandNestingConfig() {}

	UPROPERTY()
	TArray<FString> CommandList;
};

USTRUCT(BlueprintType)
struct FAutomatedDeploymentCopyConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;
	typedef FAutomatedDeploymentCopyRelated RelatedString;

	FAutomatedDeploymentCopyConfig() : bDeleteMovedFiles(true){}

	UPROPERTY()
	bool bDeleteMovedFiles;			//是否删除Source文件

	UPROPERTY()
	TMap<FString, FString> Files;	//<dest, src>
};

/// <summary>
///	Traits
/// </summary>

//如果有配置类型，我们能拿到什么
template <class ConfigType>
struct FCommandProtocol_ConfigType
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_None;
};

//如果有枚举号，我们能拿到什么
template <ECommandProtocol Protocol>
struct FCommandProtocol_EnumType
{
	using ConfigType = FAutomatedConfigBase;
};

template <>
struct FCommandProtocol_ConfigType<FAutomatedCallConfig>
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Call;
};

template <>
struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Call>
{
	using ConfigType = FAutomatedCallConfig;
};

template <>
struct FCommandProtocol_ConfigType<FAutomatedCallCustomContentConfig>
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Call_Custom_Content;
};

template <>
struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Call_Custom_Content>
{
	using ConfigType = FAutomatedCallCustomContentConfig;
};

template <>
struct FCommandProtocol_ConfigType<FAutomatedUEProjectRefreshConfig>
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_UE_Project_Refresh;
};

template <>
struct FCommandProtocol_EnumType<ECommandProtocol::CMD_UE_Project_Refresh>
{
	using ConfigType = FAutomatedUEProjectRefreshConfig;
};

template <>
struct FCommandProtocol_ConfigType<FAutomatedCommandNestingConfig>
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Command_Nesting;
};

template <>
struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Command_Nesting>
{
	using ConfigType = FAutomatedCommandNestingConfig;
};

template <>
struct FCommandProtocol_ConfigType<FAutomatedDeploymentCopyConfig>
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Deployment_Copy;
};

template <>
struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Deployment_Copy>
{
	using ConfigType = FAutomatedDeploymentCopyConfig;
};



