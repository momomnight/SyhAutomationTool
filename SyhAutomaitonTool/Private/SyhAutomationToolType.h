#pragma once
#include "CoreMinimal.h"

#include "SyhAutomationToolType.generated.h"

static const FString ProtocolStringPrefix = TEXT("ECommandProtocol::CMD_");
static const int32 ProtocolStringPrefixLength = ProtocolStringPrefix.Len();

static const FString CommandKey = TEXT("Command");

UENUM(BlueprintType)
enum class ECommandProtocol : uint8
{
	CMD_None = 0	UMETA(DisplayName = "None"),
	CMD_Call		UMETA(DisplayName = "Call"),	//用于呼叫某些程序
};


static const FString CallTypeKey = TEXT("CallType");
static const FString CallPathKey = TEXT("CallPath");
static const FString ParametersKey = TEXT("Parameters");
//呼叫配置
USTRUCT(BlueprintType)
struct FAutomatedCallConfig
{
	GENERATED_USTRUCT_BODY()

	FAutomatedCallConfig() : CallType(TEXT("bat")){}
	
	UPROPERTY()
	FString CallType;

	UPROPERTY()
	FString Parameters;

	UPROPERTY()
	FString CallPath;

};



