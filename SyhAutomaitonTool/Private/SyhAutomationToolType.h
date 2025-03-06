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

struct FAutomatedDeploymentRelated
{
	static const FString  FilesKey;
};

struct FAutomatedDeploymentCopyRelated : public FAutomatedDeploymentRelated
{
	static const FString  DeleteMovedFiles_BooleanKey;
	static const FString  SourceKey;
	static const FString  DestinationKey;
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
	CMD_VS_Compile				UMETA(DisplayName = "VS Compile"),
	CMD_Git						UMETA(DisplayName = "Git"),



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

	FAutomatedCallConfig()
	{
		CallType = TEXT("bat、exe、sh");
		Parameters = TEXT("some input program parameters");
		CallPath = TEXT("the path of the file of bat or exe.");
	}
	
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

	FAutomatedCallCustomContentConfig()
	{
		CallType = TEXT("bat");
		CallPath = TEXT("autofill");
		Parameters = TEXT("autofill");
		Content = TEXT("Generate automatedly a bat file and call it. In content, input batch processing language you need.");
		WaitTime = 10;
	}

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
		CallType = TEXT("autofill");
		CallPath = TEXT("autofill");
		Parameters = TEXT("autofill");
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

	FAutomatedCommandNestingConfig() 
	{
		CommandList.Add(TEXT("CommandFile1.json"));
		CommandList.Add(TEXT("CommandFile2"));
	}

	UPROPERTY()
	TArray<FString> CommandList;
};

USTRUCT(BlueprintType)
struct FAutomatedDeploymentCopyConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;
	typedef FAutomatedDeploymentCopyRelated RelatedString;

	FAutomatedDeploymentCopyConfig() : bDeleteMovedFiles(true)
	{
		Files.Add(TEXT("SourcePath_1"), TEXT("DestinationPath_1"));
		Files.Add(TEXT("SourcePath_2"), TEXT("DestinationPath_2"));
	}

	UPROPERTY()
	bool bDeleteMovedFiles;			//是否删除Source文件

	UPROPERTY()
	TMap<FString, FString> Files;	//<dest, src>
};

USTRUCT(BlueprintType)
struct FAutomatedDeploymentDeleteConfig : public FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedConfigBase Super;
	typedef FAutomatedDeploymentDeleteRelated RelatedString;

	FAutomatedDeploymentDeleteConfig()
	{
		Files.Add(TEXT("Path_1"));
		Files.Add(TEXT("Path_2"));
	}

	UPROPERTY()
	TArray<FString> Files;	//<src>
};

USTRUCT(BlueprintType)
struct FAutomatedVSCompileConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;
	typedef FAutomatedVSCompileRelated RelatedString;

	FAutomatedVSCompileConfig()
	{
		CallType = TEXT("autofill");
		CallPath = TEXT("the path of devenv.exe");
		Parameters = TEXT("autofill");
		BuildState = TEXT("development or others");
		SlnProjectPath = TEXT(".sln file path");
		Project = TEXT("project name");
	}

	UPROPERTY()
	FString BuildState;

	UPROPERTY()
	FString SlnProjectPath;

	UPROPERTY()
	FString Project;//子项

};

USTRUCT(BlueprintType)
struct FAutomatedGitConfig : public FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	typedef FAutomatedCallConfig Super;
	typedef FAutomatedGitRelated RelatedString;

	FAutomatedGitConfig()
	{
		CallType = TEXT("bat");
		CallPath = TEXT("autofill");
		Parameters = TEXT("autofill");
		ProjectPath = TEXT("");
		GitCommands.Add(TEXT("command 1"));
		GitCommands.Add(TEXT("command 2"));
	}

	UPROPERTY()
	FString ProjectPath;

	UPROPERTY()
	TArray<FString> GitCommands;


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

template <>
struct FCommandProtocol_ConfigType<FAutomatedDeploymentDeleteConfig>
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Deployment_Delete;
};

template <>
struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Deployment_Delete>
{
	using ConfigType = FAutomatedDeploymentDeleteConfig;
};

template <>
struct FCommandProtocol_ConfigType<FAutomatedVSCompileConfig>
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_VS_Compile;
};

template <>
struct FCommandProtocol_EnumType<ECommandProtocol::CMD_VS_Compile>
{
	using ConfigType = FAutomatedVSCompileConfig;
};

template <>
struct FCommandProtocol_ConfigType<FAutomatedGitConfig>
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Git;
};

template <>
struct FCommandProtocol_EnumType<ECommandProtocol::CMD_Git>
{
	using ConfigType = FAutomatedGitConfig;
};



