
#pragma once

#include "CoreMinimal.h"
#include "SimpleAutomatedToolViewType.generated.h"

//编辑器页面类型，根据类型创建不同页面
UENUM(BlueprintType)
enum class EToolViewModePages : uint8
{
	MP_Automated_Editor = 0		UMETA(DisplayName = "Automated Editor"),
	MP_L1						UMETA(DisplayName = "L1"),
	MP_L2						UMETA(DisplayName = "L2"),
	MP_Max 						UMETA(DisplayName = "Max"),
};

USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLVIEW_API FViewButtonInfo
{
	GENERATED_USTRUCT_BODY()

	//页面名，会显示在Button上
	UPROPERTY()
	FText Name;

	UPROPERTY()
	FString Style;

	//页面类型，根据类型创建页面
	UPROPERTY()
	EToolViewModePages PageType;

};

namespace SimpleAutomatedToolViewType
{
	const SIMPLEAUTOMATEDTOOLVIEW_API TArray<FViewButtonInfo>* FindButtonInfos(FText InText);
	void SIMPLEAUTOMATEDTOOLVIEW_API InitViewButtonInfo();
	void SIMPLEAUTOMATEDTOOLVIEW_API GatherModeName(TArray<FText>& OutName);
}