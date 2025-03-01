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



//命令枚举
UENUM(BlueprintType)
enum class ECommandProtocol : uint8
{
	CMD_None = 0				UMETA(DisplayName = "None"),
	CMD_Call					UMETA(DisplayName = "Call"),	//用于呼叫某些程序
	CMD_Call_Custom_Content		UMETA(DisplayName = "Call Custom Content"),
	CMD_UE_Project_Refresh		UMETA(DisplayName = "UE Project Refresh"),
	CMD_Command_Nesting			UMETA(DisplayName = "Command Nesting"),
};

// FAutomatedConfigBase总的基类
USTRUCT(BlueprintType)
struct FAutomatedConfigBase
{
	GENERATED_USTRUCT_BODY()
};

//呼叫配置
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

//呼叫自定义配置
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

//呼叫自定义配置
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

/// <summary>
///	Traits
/// </summary>
template <class ConfigType>
struct FCommandProtocol
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_None;
};

template <>
struct FCommandProtocol<FAutomatedCallConfig>
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Call;
};

template <>
struct FCommandProtocol<FAutomatedCallCustomContentConfig>
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Call_Custom_Content;
};

template <>
struct FCommandProtocol<FAutomatedUEProjectRefreshConfig>
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_UE_Project_Refresh;
};

template <>
struct FCommandProtocol<FAutomatedCommandNestingConfig>
{
	constexpr static ECommandProtocol Value = ECommandProtocol::CMD_Command_Nesting;
};
