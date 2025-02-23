// Copyright (C) RenZhai.2020.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SimpleUEViewConfigurationInfor.generated.h"


/**
 * 
 */
UCLASS(config = UEViewConfigurationInfor)
class SIMPLEUNREALPAKVIEW_API USimpleUEViewConfigurationInfor : public UObject
{
	GENERATED_BODY()
	
public:
	USimpleUEViewConfigurationInfor();

	UPROPERTY(config, EditAnywhere, Category = UEViewInfo, meta = (ToolTip = "xxx."))
	FString PakPath;

	UPROPERTY(config, EditAnywhere, Category = UEViewInfo, meta = (ToolTip = "xxx."))
	FString AES;

	UPROPERTY(config, EditAnywhere, Category = UEViewInfo, meta = (ToolTip = "xxx."))
	FString MountPoint;
};
