// Copyright (C) RenZhai.2023.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SimpleConfigBPLibrary.generated.h"

UCLASS()
class SIMPLECONFIG_API USimpleConfigBPLibrary : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Config")
	static bool GetSection(const FString& Section, UPARAM(ref) TArray<FString>& Result, const FString& Filename);
	
	UFUNCTION(BlueprintCallable, Category = "Config")
	static bool DoesSectionExist(const FString& Section, const FString& Filename);

public:
	UFUNCTION(BlueprintCallable, Category = "Config")
	static void GetString(const FString& Section, const FString& Key,FString& Value,const FString &InPath);
	
	UFUNCTION(BlueprintCallable, Category = "Config")
	static void GetText(const FString& Section, const FString& Key,FText& Value, const FString& InPath);
	
	UFUNCTION(BlueprintCallable, Category = "Config")
	static void GetInt(const FString& Section, const FString& Key,int32& Value, const FString& InPath);
	
	UFUNCTION(BlueprintCallable, Category = "Config")
	static void GetFloat(const FString& Section, const FString& Key, float& Value, const FString& InPath);
	
	UFUNCTION(BlueprintCallable, Category = "Config")
	static void GetBool(const FString& Section, const FString& Key,bool &Value, const FString& InPath);
	
	UFUNCTION(BlueprintCallable, Category = "Config")
	static void GetDouble(const FString& Section, const FString& Key, double& Value, const FString& InPath);
	
	UFUNCTION(BlueprintCallable, Category = "Config")
	static void GetArray(const FString& Section, const FString& Key,TArray<FString>& Value, const FString& InPath);
	
	UFUNCTION(BlueprintCallable, Category = "Config")
	static void GetVector(const FString& Section, const FString& Key, FVector& Value, const FString& InPath);

	UFUNCTION(BlueprintCallable, Category = "Config")
	static void GetVector4(const FString& Section, const FString& Key,FVector4& Value, const FString& InPath);
	
	UFUNCTION(BlueprintCallable, Category = "Config")
	static void GetRotator(const FString& Section, const FString& Key, FRotator& Value, const FString& InPath);

public:
	UFUNCTION(BlueprintCallable, Category = "Config")
	static void SetRotator(const FString& Section, const FString& Key, UPARAM(ref) FRotator& Value, const FString& InPath);

	UFUNCTION(BlueprintCallable, Category = "Config")
	static void SetString(const FString& Section, const FString& Key, UPARAM(ref) FString& Value, const FString& InPath);

	UFUNCTION(BlueprintCallable, Category = "Config")
	static void SetText(const FString& Section, const FString& Key, UPARAM(ref) FText& Value, const FString& InPath);

	UFUNCTION(BlueprintCallable, Category = "Config")
	static void SetInt(const FString& Section, const FString& Key, UPARAM(ref) int32& Value, const FString& InPath);

	UFUNCTION(BlueprintCallable, Category = "Config")
	static void SetFloat(const FString& Section, const FString& Key, UPARAM(ref) float& Value, const FString& InPath);

	UFUNCTION(BlueprintCallable, Category = "Config")
	static void SetBool(const FString& Section, const FString& Key, UPARAM(ref) bool& Value, const FString& InPath);

	UFUNCTION(BlueprintCallable, Category = "Config")
	static void SetDouble(const FString& Section, const FString& Key, UPARAM(ref) double& Value, const FString& InPath);

	UFUNCTION(BlueprintCallable, Category = "Config")
	static void SetArray(const FString& Section, const FString& Key, UPARAM(ref) TArray<FString>& Value, const FString& InPath);

	UFUNCTION(BlueprintCallable, Category = "Config")
	static void SetVector(const FString& Section, const FString& Key, UPARAM(ref) FVector& Value, const FString& InPath);

	UFUNCTION(BlueprintCallable, Category = "Config")
	static void SetVector4(const FString& Section, const FString& Key, UPARAM(ref) FVector4& Value, const FString& InPath);
};
