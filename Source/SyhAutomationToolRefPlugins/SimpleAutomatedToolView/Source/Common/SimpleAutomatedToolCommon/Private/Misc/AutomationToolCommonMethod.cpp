#include "Misc/AutomationToolCommonMethod.h"
#include "SimpleAutomatedToolCommonLog.h"
#include "DllExports/AutomatedExecutionPath.h"
#include "SimpleAutomatedToolType.h"
#include "SimpleAutomatedToolTypeRelated.h"

namespace AutomationToolCommonMethod
{
	template <class EnumType>
	FString GetEnumMemberName(EnumType InEnumValue)
	{
		return EnumTool<EnumType>::GetEnumMemberShortName(InEnumValue);
	}

	template <class EnumType>
	TArray<FString> GetEnumMemberNames()
	{
		return EnumTool<EnumType>::GetEnumMemberNames();
	}

	template FString GetEnumMemberName<ECommandProtocol>(ECommandProtocol InEnumValue);
	template FString GetEnumMemberName<EComparisionType>(EComparisionType InEnumValue);
	template FString GetEnumMemberName<ESimpleOSSCommand>(ESimpleOSSCommand InEnumValue);
	template FString GetEnumMemberName<ESimpleHTTPVerbType>(ESimpleHTTPVerbType InEnumValue);
	template FString GetEnumMemberName<EMysqlMethodType>(EMysqlMethodType InEnumValue);
	template FString GetEnumMemberName<ECompressType>(ECompressType InEnumValue);
	
	template TArray<FString> GetEnumMemberNames<ECommandProtocol>();
	template TArray<FString> GetEnumMemberNames<EComparisionType>();
	template TArray<FString> GetEnumMemberNames<ESimpleOSSCommand>();
	template TArray<FString> GetEnumMemberNames<ESimpleHTTPVerbType>();
	template TArray<FString> GetEnumMemberNames<ECompressType>();

	struct FPackagingSaveFileName
	{
		//打包的文件路径，以时间为名
		static FString& Get()
		{
			static FString PackagingSaveFileName;
			return PackagingSaveFileName;
		}
	};

	void SetPackagingSaveFileName(const FString& InFileName)
	{
		FPackagingSaveFileName::Get() = InFileName;
	}

	const FString& GetPackagingSaveFileName()
	{
		return FPackagingSaveFileName::Get();
	}

	void RecognizePathSyntax(FString& InPath)
	{
		if (InPath.Contains(TEXT("%~Time")))
		{
			InPath.ReplaceInline(TEXT("%~Time"), *FPackagingSaveFileName::Get());
		}

		if (InPath.Contains(TEXT("%~AutoPath")))
		{
			InPath.ReplaceInline(TEXT("%~AutoPath"), *AutomatedExecutionPath::GetAutomatedPath());
		}

		if (InPath.Contains(TEXT("%~ProjectPath")))
		{
			InPath.ReplaceInline(TEXT("%~ProjectPath"), *AutomatedExecutionPath::GetProjectPath());
		}

		if (InPath.Contains(TEXT("%~ProjectSavePath")))
		{
			InPath.ReplaceInline(TEXT("%~ProjectSavePath"), *AutomatedExecutionPath::GetProjectSavePath());
		}

		if (InPath.Contains(TEXT("%~ProjectConfigPath")))
		{
			InPath.ReplaceInline(TEXT("%~ProjectConfigPath"), *AutomatedExecutionPath::GetProjectConfigPath());
		}

		if (InPath.Contains(TEXT("%~ProjectBinariesPath")))
		{
			InPath.ReplaceInline(TEXT("%~ProjectBinariesPath"), *AutomatedExecutionPath::GetProjectBinariesPath());
		}

		if (InPath.Contains(TEXT("%~EnginePath")))
		{
			InPath.ReplaceInline(TEXT("%~EnginePath"), *AutomatedExecutionPath::GetEnginePath());
		}
		if (InPath.Contains(TEXT("%~EngineBinariesPath")))
		{
			InPath.ReplaceInline(TEXT("%~EngineBinariesPath"), *AutomatedExecutionPath::GetEngineBinariesPath());
		}
	}

	bool ParseCommandLineByKey(const FString& InKey, TArray<FString>& OutArray, bool bPath)
	{
		OutArray.Empty();
		FString NewString;

		FString MatchKey = IsMatchKey(InKey) ? InKey : GetMatchKey(InKey);

		if (!FParse::Value(FCommandLine::Get(), *MatchKey, NewString))
		{
			UE_LOG(SimpleAutomatedToolCommonLog, Display, TEXT("%s was not found the value."), *MatchKey);
			return false;
		}

		if (NewString.IsEmpty())
		{
			UE_LOG(SimpleAutomatedToolCommonLog, Error, TEXT("Value is empty."));
			return false;
		}

		if (NewString.ParseIntoArray(OutArray, TEXT("&&")))
		{
			if (bPath)
			{
				for (auto& Temp : OutArray)
				{
					FPaths::NormalizeDirectoryName(Temp);
					FPaths::RemoveDuplicateSlashes(Temp);
				}
			}
			return true;
		}
		else
		{
			UE_LOG(SimpleAutomatedToolCommonLog, Error, TEXT("Failure to parse %s string."), *MatchKey);
			return false;
		}
	}

	bool ParseCommandLineByKey(const FString& InKey, TMap<FString, FString>& OutMap, bool bPath)
	{
		OutMap.Empty();
		bool Result = true;
		TArray<FString> TempArray;
		//xxx||yyy数组
		if (!ParseCommandLineByKey(InKey, TempArray, false))
		{
			return false;
		}

		for (auto& Temp : TempArray)
		{
			FString Key;
			FString Value;

			if (Temp.Split(TEXT("||"), &Key, &Value))
			{
				if (bPath)
				{
					FPaths::NormalizeDirectoryName(Key);
					FPaths::RemoveDuplicateSlashes(Key);
					FPaths::NormalizeDirectoryName(Value);
					FPaths::RemoveDuplicateSlashes(Value);
				}
				OutMap.Add(Key, Value);
			}
			else
			{
				UE_LOG(SimpleAutomatedToolCommonLog, Error, TEXT("Failure to parse the string [%s]. Key=[%s] Target=[%s]"), *Temp, *Key, *Value);
				return false;
			}
		}
		return OutMap.Num() > 0;
	}

	void AdaptCommandArgsStringWithSpace(FString& InKey)
	{
		FString Result;
		int32 Pos = InKey.Find(TEXT("String("), ESearchCase::CaseSensitive);
		int32 StartPos = Pos + FCString::Strlen(TEXT("String("));
		int32 EndPos = InKey.Find(TEXT(")"), ESearchCase::CaseSensitive, ESearchDir::FromStart, Pos);

		if (Pos == INDEX_NONE || EndPos == INDEX_NONE || EndPos < StartPos)
		{
			//EndPos可以等于StartPos
			return;
		}

		Result.Append(*InKey, Pos);
		Result += TEXT("\"");
		Result.Append(*InKey + StartPos, EndPos - StartPos);
		Result += TEXT("\"");
		Result.Append(*InKey + EndPos + 1);
		InKey = MoveTempIfPossible(Result);
	}

	void GetBatPathString(FString& InPath)
	{
		if (InPath.StartsWith(TEXT("\"")) && InPath.EndsWith(TEXT("\"")))
		{
			return;
		}
		else
		{
			InPath = TEXT("\"") + InPath + TEXT("\"");
		}


	}


}
