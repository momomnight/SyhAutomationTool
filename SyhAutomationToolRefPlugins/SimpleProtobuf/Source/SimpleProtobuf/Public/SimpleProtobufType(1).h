//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SimpleProtobufType.generated.h"

USTRUCT(BlueprintType)
struct SIMPLEPROTOBUF_API FProtoElement
{
	GENERATED_USTRUCT_BODY()

	FProtoElement()
	{}

	//变量的名字
	UPROPERTY()
	FString ElementName;

	//主类型 比如int32 float TMap
	UPROPERTY()
	FString ElementType;

	//主要针对多元素类型的情况 比如Array 的元素 Tmap key value
	UPROPERTY()
	TArray<FString> ElementTypes;
};

USTRUCT(BlueprintType)
struct SIMPLEPROTOBUF_API FProto
{
	GENERATED_USTRUCT_BODY()

	//proto名字 防止和本体名字重复
	UPROPERTY()
	FString Name;

	//原来的名字 映射UE的名字
	UPROPERTY()
	FString OriginalName;

	//元素名字
	UPROPERTY()
	TArray<FProtoElement>Elements;
};