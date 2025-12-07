#include "SyhAutomationToolCommon.h"
#include "SyhAutomationToolLog.h"

namespace SyhAutomationToolCommon
{

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

}
