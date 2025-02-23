// Copyright (C) RenZhai.2023.All Rights Reserved.

#include "SimpleConfigType.h"

namespace SimpleConfig
{
	bool GetSection(const TCHAR* Section, TArray<FString>& Result, const FString& Filename)
	{
		return GConfig->GetSection(Section, Result, Filename);
	}

	bool DoesSectionExist(const TCHAR* Section, const FString& Filename)
	{
		return GConfig->DoesSectionExist(Section, Filename);
	}

	void GetString(const TCHAR* Section, const TCHAR* Key, FString& Value, const FString& InPath)
	{
		if (!GConfig->GetString(Section, Key, Value, InPath))
		{
			SetString(Section, Key, Value, InPath);
		}
	}

	void GetText(const TCHAR* Section, const TCHAR* Key, FText& Value, const FString& InPath)
	{
		if (!GConfig->GetText(Section, Key, Value, InPath))
		{
			SetText(Section, Key, Value, InPath);
		}
	}

	void GetInt(const TCHAR* Section, const TCHAR* Key, int32& Value, const FString& InPath)
	{
		if (!GConfig->GetInt(Section, Key, Value, InPath))
		{
			SetInt(Section, Key, Value, InPath);
		}
	}

	void GetFloat(const TCHAR* Section, const TCHAR* Key, float& Value, const FString& InPath)
	{
		if (!GConfig->GetFloat(Section, Key, Value, InPath))
		{
			SetFloat(Section, Key, Value, InPath);
		}
	}

	void GetBool(const TCHAR* Section, const TCHAR* Key, bool& Value, const FString& InPath)
	{
		if (!GConfig->GetBool(Section, Key, Value, InPath))
		{
			SetBool(Section, Key, Value, InPath);
		}
	}

	void GetDouble(const TCHAR* Section, const TCHAR* Key, double& Value, const FString& InPath)
	{
		if (!GConfig->GetDouble(Section, Key, Value, InPath))
		{
			SetDouble(Section, Key, Value, InPath);
		}
	}

	void GetArray(const TCHAR* Section, const TCHAR* Key, TArray<FString>& Value, const FString& InPath)
	{
		TArray<FString> CpyValue = Value;
		if (!GConfig->GetArray(Section, Key, CpyValue, InPath))
		{
			SetArray(Section, Key, Value, InPath);
		}
		else
		{
			Value = MoveTemp(CpyValue);
		}
	}

	void GetColor(const TCHAR* Section, const TCHAR* Key, FColor& Value, const FString& InPath)
	{
		if (!GConfig->GetColor(Section, Key, Value, InPath))
		{
			SetColor(Section, Key, Value, InPath);
		}
	}

	void GetVector(const TCHAR* Section, const TCHAR* Key, FVector& Value, const FString& InPath)
	{
		if (!GConfig->GetVector(Section, Key, Value, InPath))
		{
			SetVector(Section, Key, Value, InPath);
		}
	}

	void GetVector2D(const TCHAR* Section, const TCHAR* Key, FVector2D& Value, const FString& InPath)
	{
		if (!GConfig->GetVector2D(Section, Key, Value, InPath))
		{
			SetVector2D(Section, Key, Value, InPath);
		}
	}

	void GetVector4(const TCHAR* Section, const TCHAR* Key, FVector4& Value, const FString& InPath)
	{
		if (!GConfig->GetVector4(Section, Key, Value, InPath))
		{
			SetVector4(Section, Key, Value, InPath);
		}
	}

	void GetRotator(const TCHAR* Section, const TCHAR* Key, FRotator& Value, const FString& InPath)
	{
		if (!GConfig->GetRotator(Section, Key, Value, InPath))
		{
			SetRotator(Section, Key, Value, InPath);
		}
	}

	void SetVector2D(const TCHAR* Section, const TCHAR* Key, FVector2D& Value, const FString& InPath)
	{
		GConfig->SetVector2D(Section, Key, Value, InPath);

		GConfig->Flush(false, InPath);
	}

	void SetVector4(const TCHAR* Section, const TCHAR* Key, FVector4& Value, const FString& InPath)
	{
		GConfig->SetVector4(Section, Key, Value, InPath);

		GConfig->Flush(false, InPath);
	}

	void SetRotator(const TCHAR* Section, const TCHAR* Key, FRotator& Value, const FString& InPath)
	{
		GConfig->SetRotator(Section, Key, Value, InPath);

		GConfig->Flush(false, InPath);
	}

	void SetColor(const TCHAR* Section, const TCHAR* Key, FColor& Value, const FString& InPath)
	{
		GConfig->SetColor(Section, Key, Value, InPath);

		GConfig->Flush(false, InPath);
	}

	void SetVector(const TCHAR* Section, const TCHAR* Key, FVector& Value, const FString& InPath)
	{
		GConfig->SetVector(Section, Key, Value, InPath);

		GConfig->Flush(false, InPath);
	}

	void SetString(const TCHAR* Section, const TCHAR* Key, FString& Value, const FString& InPath)
	{
		GConfig->SetString(Section, Key, *Value, InPath);

		GConfig->Flush(false, InPath);
	}

	void SetText(const TCHAR* Section, const TCHAR* Key, FText& Value, const FString& InPath)
	{
		GConfig->SetText(Section, Key,Value, InPath);

		GConfig->Flush(false, InPath);
	}

	void SetInt(const TCHAR* Section, const TCHAR* Key, int32& Value, const FString& InPath)
	{
		GConfig->SetInt(Section, Key, Value, InPath);

		GConfig->Flush(false, InPath);
	}

	void SetFloat(const TCHAR* Section, const TCHAR* Key, float& Value, const FString& InPath)
	{
		GConfig->SetFloat(Section, Key, Value, InPath);

		GConfig->Flush(false, InPath);
	}

	void SetBool(const TCHAR* Section, const TCHAR* Key, bool& Value, const FString& InPath)
	{
		GConfig->SetBool(Section, Key, Value, InPath);

		GConfig->Flush(false, InPath);
	}

	void SetDouble(const TCHAR* Section, const TCHAR* Key, double& Value, const FString& InPath)
	{
		GConfig->SetDouble(Section, Key, Value, InPath);

		GConfig->Flush(false, InPath);
	}

	void SetArray(const TCHAR* Section, const TCHAR* Key, TArray<FString>& Value, const FString& InPath)
	{
		GConfig->SetArray(Section, Key, Value, InPath);

		GConfig->Flush(false, InPath);
	}
}