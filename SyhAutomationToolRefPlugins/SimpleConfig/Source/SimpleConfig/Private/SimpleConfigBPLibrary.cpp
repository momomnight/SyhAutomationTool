// Copyright (C) RenZhai.2023.All Rights Reserved.

#include "SimpleConfigBPLibrary.h"
#include "SimpleConfigType.h"

USimpleConfigBPLibrary::USimpleConfigBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

bool USimpleConfigBPLibrary::GetSection(const FString& Section, TArray<FString>& Result, const FString& Filename)
{
	return SimpleConfig::GetSection(*Section, Result, Filename);
}

bool USimpleConfigBPLibrary::DoesSectionExist(const FString& Section, const FString& Filename)
{
	return SimpleConfig::DoesSectionExist(*Section,Filename);
}

void USimpleConfigBPLibrary::GetString(const FString& Section, const FString& Key, FString& Value, const FString& InPath)
{
	SimpleConfig::GetString(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::GetText(const FString& Section, const FString& Key, FText& Value, const FString& InPath)
{
	SimpleConfig::GetText(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::GetInt(const FString& Section, const FString& Key, int32& Value, const FString& InPath)
{
	SimpleConfig::GetInt(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::GetFloat(const FString& Section, const FString& Key, float& Value, const FString& InPath)
{
	SimpleConfig::GetFloat(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::GetBool(const FString& Section, const FString& Key, bool& Value, const FString& InPath)
{
	SimpleConfig::GetBool(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::GetDouble(const FString& Section, const FString& Key, double& Value, const FString& InPath)
{
	SimpleConfig::GetDouble(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::GetArray(const FString& Section, const FString& Key, TArray<FString>& Value, const FString& InPath)
{
	SimpleConfig::GetArray(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::GetVector(const FString& Section, const FString& Key, FVector& Value, const FString& InPath)
{
	SimpleConfig::GetVector(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::GetVector4(const FString& Section, const FString& Key, FVector4& Value, const FString& InPath)
{
	SimpleConfig::GetVector4(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::GetRotator(const FString& Section, const FString& Key, FRotator& Value, const FString& InPath)
{
	SimpleConfig::GetRotator(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::SetRotator(const FString& Section, const FString& Key, FRotator& Value, const FString& InPath)
{
	SimpleConfig::SetRotator(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::SetString(const FString& Section, const FString& Key, FString& Value, const FString& InPath)
{
	SimpleConfig::SetString(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::SetText(const FString& Section, const FString& Key, FText& Value, const FString& InPath)
{
	SimpleConfig::SetText(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::SetInt(const FString& Section, const FString& Key, int32& Value, const FString& InPath)
{
	SimpleConfig::SetInt(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::SetFloat(const FString& Section, const FString& Key,  float& Value, const FString& InPath)
{
	SimpleConfig::SetFloat(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::SetBool(const FString& Section, const FString& Key,  bool& Value, const FString& InPath)
{
	SimpleConfig::SetBool(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::SetDouble(const FString& Section, const FString& Key,  double& Value, const FString& InPath)
{
	SimpleConfig::SetDouble(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::SetArray(const FString& Section, const FString& Key, TArray<FString>& Value, const FString& InPath)
{
	SimpleConfig::SetArray(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::SetVector(const FString& Section, const FString& Key, FVector& Value, const FString& InPath)
{
	SimpleConfig::SetVector(*Section, *Key, Value, InPath);
}

void USimpleConfigBPLibrary::SetVector4(const FString& Section, const FString& Key, FVector4& Value, const FString& InPath)
{
	SimpleConfig::SetVector4(*Section, *Key, Value, InPath);
}
