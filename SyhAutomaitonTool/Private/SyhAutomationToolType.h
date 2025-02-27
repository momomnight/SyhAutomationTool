#pragma once
#include "CoreMinimal.h"

#include "SyhAutomationToolType.generated.h"

//命令枚举
UENUM(BlueprintType)
enum class ECommandProtocol : uint8
{
	CMD_None = 0				UMETA(DisplayName = "None"),
	CMD_Call					UMETA(DisplayName = "Call"),	//用于呼叫某些程序
	CMD_Call_Custom_Content		UMETA(DisplayName = "Call Custom Content"),
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

	FAutomatedCallCustomContentConfig() : WaitTime(10) {}

	UPROPERTY()
	FString Content;

	UPROPERTY()
	int32 WaitTime;
};


/// <summary>
/// Related Some things;
/// </summary>
struct FCommandProtocolRelated
{
	static const FString ProtocolStringPrefix;
	static const int32 ProtocolStringPrefixLength;
	static const FString CommandKey;

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

/// <summary>
///	Config Factory
/// </summary>

template <class ReturnType>
ReturnType* CreateConfig()
{
	return new ReturnType;
}

template <class ReturnType>
void DestoryConfig(ReturnType* P)
{
	if (P)
	{
		delete P;
		P = nullptr;
	}
}

