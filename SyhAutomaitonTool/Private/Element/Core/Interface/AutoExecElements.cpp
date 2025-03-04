#include "Element/Core/Interface/AutoExecElements.h"
#include "SyhAutomationToolCommon.h"

void FAutoExecElements::HandleTimePath(FString& InPath)
{
	if (InPath.Contains(TEXT("%~Time")))
	{
		InPath.ReplaceInline(TEXT("%~Time"), *PackagingSaveFileName);
	}
}

bool FAutoExecElements::ParseArrayStrings(const FString& InKey, TArray<FString>& InArray)
{
	FString NewString;

	if (!FParse::Value(FCommandLine::Get(), *InKey, NewString))
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("%s was not found the value."), *InKey);
		return false;
	}

	if (NewString.IsEmpty())
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Value is empty."));
		return false;
	}

	int32 Result = NewString.ParseIntoArray(InArray, TEXT("&&"));

	if (Result != 0)
	{
		return true;
	}
	else
	{
		UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Failure to parse %s string."), *InKey);
		return false;
	}

}

bool FAutoExecElements::DeletePath(const FFileStatData& InFileStatData, const FString& InPath)
{
	if (InFileStatData.bIsValid)
	{
		if (InFileStatData.bIsDirectory)
		{
			if (IFileManager::Get().DeleteDirectory(*InPath, false, true))
			{
				//存在，删除成功
				UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Exist the destination directory : %s. Deleted the folder."), *InPath);
				return true;
			}
			else
			{
				//存在，删除不成功
				UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Exist the destination directory : %s. Failure to deleted the folder."), *InPath);
				return false;
			}
		}
		else
		{

			if (IFileManager::Get().Delete(*InPath))
			{
				//存在，删除成功
				UE_LOG(SyhAutomaitonToolLog, Log, TEXT("Exist the destination file : %s. Deleted the file."), *InPath);
				return true;
			}
			else
			{
				//存在，删除不成功
				UE_LOG(SyhAutomaitonToolLog, Error, TEXT("Exist the destination file : %s. Failure to deleted the file."), *InPath);
				return false;
			}

		}
	}
	//不存在，无需删除
	UE_LOG(SyhAutomaitonToolLog, Log, TEXT("[%s] does not exist. Not need to delete."), *InPath);
	return true;
}
