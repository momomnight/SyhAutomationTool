#include "SyhAutomationToolCommon.h"
#include "SyhAutomationToolLog.h"

namespace SimpleAutomationToolCommon
{
	FString PackagingSaveFileName;

	//xxx1&&xxx2
	bool ParseStrings(const FString& InKey, TArray<FString>& InArray, bool bPath)
	{
		FString NewString;

		FString MatchKey = IsMatchKey(InKey) ? InKey : GetMatchKey(InKey);

		if (!FParse::Value(FCommandLine::Get(), *MatchKey, NewString))
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("%s was not found the value."), *MatchKey);
			return false;
		}

		if (NewString.IsEmpty())
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Value is empty."));
			return false;
		}

		if (NewString.ParseIntoArray(InArray, TEXT("&&")))
		{
			if (bPath)
			{
				for (auto& Temp : InArray)
				{
					FPaths::NormalizeDirectoryName(Temp);
					FPaths::RemoveDuplicateSlashes(Temp);
				}
			}
			return true;
		}
		else
		{
			UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Failure to parse %s string."), *MatchKey);
			return false;
		}

	}

	//xxx1||yyy1&&xxx2||yyy2
	bool ParseStrings(const FString& InKey, TMap<FString, FString>& InArray, bool bPath)
	{
		bool Result = true;
		TArray<FString> TempArray;
		//xxx||yyy数组
		if (!ParseStrings(InKey, TempArray, false))
		{
			return false;
		}

		for (auto& Temp : TempArray)
		{
			FString Source;
			FString Target;

			if (Temp.Split(TEXT("||"), &Source, &Target))
			{
				if (bPath)
				{
					FPaths::NormalizeDirectoryName(Source);
					FPaths::RemoveDuplicateSlashes(Source);
					FPaths::NormalizeDirectoryName(Target);
					FPaths::RemoveDuplicateSlashes(Target);
				}
				InArray.Add(Source, Target);
			}
			else
			{
				UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Failure to parse the string [%s]. Source=[%s] Target=[%s]"), *Temp, *Source, *Target);
				return false;
			}
		}

		return InArray.Num() > 0;
	}

	bool DeleteFile(const FString& InPath)
	{
		if(IFileManager::Get().FileExists(*InPath))
		{
			if (IFileManager::Get().Delete(*InPath))
			{
				//存在，删除成功
				UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Exist the file : %s. Deleted the file."), *InPath);
				return true;
			}
			else
			{
				//存在，删除不成功
				UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Exist the file : %s. Failed to deleted the file."), *InPath);
				return false;
			}
		}
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("[%s] does not exist. Not need to delete."), *InPath);
		return true;
	}

	bool DeleteDirectory(const FString& InPath)
	{
		if (IFileManager::Get().DirectoryExists(*InPath))
		{
			if (IFileManager::Get().DeleteDirectory(*InPath, false, true))
			{
				//存在，删除成功
				UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Exist the directory: %s. Deleted the directory."), *InPath);
				return true;
			}
			else
			{
				//存在，删除不成功
				UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Exist the directory : %s. Failed to deleted the directory."), *InPath);
				return false;
			}
		}
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("[%s] does not exist. Not need to delete."), *InPath);
		return true;
	}

	bool DeletePath(const FFileStatData& InFileStatData, const FString& InPath)
	{
		if (InFileStatData.bIsValid)
		{
			if (InFileStatData.bIsDirectory)
			{
				return DeleteDirectory(InPath);
			}
			else
			{
				return DeleteFile(InPath);
			}
		}
		//不存在，无需删除
		UE_LOG(SyhAutomaitonToolLog, Log, TEXT("[%s] does not exist. Not need to delete."), *InPath);
		return true;
	}

	bool DeletePath(const FString& InPath)
	{
		FFileStatData FileStatData = IFileManager::Get().GetStatData(*InPath);
		return DeletePath(FileStatData, InPath);
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

	bool IsMatchKey(const FString& InKey)
	{
		if (InKey.StartsWith(TEXT("-")) && InKey.EndsWith(TEXT("=")))
		{
			return true;
		}
		return false;
	}

	void HandleTimePath(FString& InPath)
	{
		if (InPath.Contains(TEXT("%~Time")))
		{
			InPath.ReplaceInline(TEXT("%~Time"), *PackagingSaveFileName);
		}
	}

}
