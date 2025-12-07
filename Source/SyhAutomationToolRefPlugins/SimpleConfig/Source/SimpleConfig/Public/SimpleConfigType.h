// Copyright (C) RenZhai.2023.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Misc/ConfigCacheIni.h"

namespace SimpleConfig
{
	bool SIMPLECONFIG_API GetSection(const TCHAR* Section, TArray<FString>& Result, const FString& Filename);
	bool SIMPLECONFIG_API DoesSectionExist(const TCHAR* Section, const FString& Filename);

	//获取值
	void SIMPLECONFIG_API GetString(const TCHAR* Section, const TCHAR* Key, FString& Value,const FString &InPath);
	void SIMPLECONFIG_API GetText(const TCHAR* Section, const TCHAR* Key, FText& Value, const FString& InPath);
	void SIMPLECONFIG_API GetInt(const TCHAR* Section, const TCHAR* Key, int32& Value, const FString& InPath);
	void SIMPLECONFIG_API GetFloat(const TCHAR* Section, const TCHAR* Key, float& Value, const FString& InPath);
	void SIMPLECONFIG_API GetBool(const TCHAR* Section, const TCHAR* Key, bool &Value, const FString& InPath);
	void SIMPLECONFIG_API GetDouble(const TCHAR* Section, const TCHAR* Key, double& Value, const FString& InPath);
	void SIMPLECONFIG_API GetArray(const TCHAR* Section, const TCHAR* Key, TArray<FString>& Value, const FString& InPath);
	void SIMPLECONFIG_API GetColor(const TCHAR* Section, const TCHAR* Key, FColor& Value, const FString& InPath);
	void SIMPLECONFIG_API GetVector(const TCHAR* Section, const TCHAR* Key, FVector& Value, const FString& InPath);
	void SIMPLECONFIG_API GetVector2D(const TCHAR* Section, const TCHAR* Key, FVector2D& Value, const FString& InPath);

	void SIMPLECONFIG_API GetVector4(const TCHAR* Section, const TCHAR* Key, FVector4& Value, const FString& InPath);
	void SIMPLECONFIG_API GetRotator(const TCHAR* Section, const TCHAR* Key, FRotator& Value, const FString& InPath);

	//设置值
	void SIMPLECONFIG_API SetVector2D(const TCHAR* Section, const TCHAR* Key, FVector2D& Value, const FString& InPath);
	void SIMPLECONFIG_API SetColor(const TCHAR* Section, const TCHAR* Key, FColor& Value, const FString& InPath);
						  
	void SIMPLECONFIG_API SetString(const TCHAR* Section, const TCHAR* Key, FString& Value, const FString& InPath);
	void SIMPLECONFIG_API SetText(const TCHAR* Section, const TCHAR* Key, FText& Value, const FString& InPath);
	void SIMPLECONFIG_API SetInt(const TCHAR* Section, const TCHAR* Key, int32& Value, const FString& InPath);
	void SIMPLECONFIG_API SetFloat(const TCHAR* Section, const TCHAR* Key, float& Value, const FString& InPath);
	void SIMPLECONFIG_API SetBool(const TCHAR* Section, const TCHAR* Key, bool& Value, const FString& InPath);
	void SIMPLECONFIG_API SetDouble(const TCHAR* Section, const TCHAR* Key, double& Value, const FString& InPath);
	void SIMPLECONFIG_API SetArray(const TCHAR* Section, const TCHAR* Key, TArray<FString>& Value, const FString& InPath);
	void SIMPLECONFIG_API SetColor(const TCHAR* Section, const TCHAR* Key, FColor& Value, const FString& InPath);
	void SIMPLECONFIG_API SetVector(const TCHAR* Section, const TCHAR* Key, FVector& Value, const FString& InPath);
	void SIMPLECONFIG_API SetVector2D(const TCHAR* Section, const TCHAR* Key, FVector2D& Value, const FString& InPath);
						  
	void SIMPLECONFIG_API SetVector4(const TCHAR* Section, const TCHAR* Key, FVector4& Value, const FString& InPath);
	void SIMPLECONFIG_API SetRotator(const TCHAR* Section, const TCHAR* Key, FRotator& Value, const FString& InPath);
						  
	void SIMPLECONFIG_API SetVector2D(const TCHAR* Section, const TCHAR* Key, FVector2D& Value, const FString& InPath);
	void SIMPLECONFIG_API SetColor(const TCHAR* Section, const TCHAR* Key, FColor& Value, const FString& InPath);

	template<class T>
	void GetEnum(const TCHAR* Section, const TCHAR* Key, const TCHAR* InHead, T& Value, const FString& InPath)
	{
		FString EnumString;

		if (!GConfig->GetString(Section, Key, EnumString, InPath))
		{
			EnumString = UEnum::GetValueAsString(Value).RightChop(FCString::Strlen(InHead));

			GConfig->SetString(Section, Key, *EnumString, InPath);

			GConfig->Flush(false, InPath);
		}
		else
		{
			FString NumFullName = *FString::Printf(TEXT("%s%s"), InHead, *EnumString);

			Value = (T)UEnum::LookupEnumName(FName(), *NumFullName);
		}
	}

	template<class T>
	void SetEnum(const TCHAR* Section, const TCHAR* Key, const TCHAR* InHead, T& Value, const FString& InPath)
	{
		FString EnumString = UEnum::GetValueAsString(Value).RightChop(FCString::Strlen(InHead));

		GConfig->SetString(Section, Key, *EnumString, InPath);

		GConfig->Flush(false, InPath);
	}
}