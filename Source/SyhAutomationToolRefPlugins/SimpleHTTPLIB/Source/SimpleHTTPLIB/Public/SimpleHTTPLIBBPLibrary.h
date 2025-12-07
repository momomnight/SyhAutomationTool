// Copyright (C) RenZhai.2023.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SimpleHTTPLIBBPLibrary.generated.h"

UCLASS()
class SIMPLEHTTPLIB_API USimpleHTTPLIBBPLibrary : public UObject
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "SimpleuWebSocket sample test testing"), Category = "SimpleuWebSocketTesting")
	static float SimpleuWebSocketSampleFunction(float Param);
};
