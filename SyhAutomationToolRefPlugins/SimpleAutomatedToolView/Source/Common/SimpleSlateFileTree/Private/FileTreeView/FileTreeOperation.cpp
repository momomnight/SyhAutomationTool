#include "FileTreeView/FileTreeOperation.h"


namespace SlateFileTree
{
	const EFileExecutionCode EFileExecutionCode::Empty =			{ FFileExecutionCode::Empty };
	const EFileExecutionCode EFileExecutionCode::NoEmpty =			{ FFileExecutionCode::NoEmpty };
	const EFileExecutionCode EFileExecutionCode::ImmediatelyExec =	{ FFileExecutionCode::ImmediatelyExec };
	const EFileExecutionCode EFileExecutionCode::DelayExec =		{ FFileExecutionCode::DelayExec };
	const EFileExecutionCode EFileExecutionCode::NoCombineExec =	{ FFileExecutionCode::NoCombineExec };
	const EFileExecutionCode EFileExecutionCode::CombineExec =		{ FFileExecutionCode::CombineExec };
	const EFileExecutionCode EFileExecutionCode::Open =				{ FFileExecutionCode::Open };
	const EFileExecutionCode EFileExecutionCode::Rename =			{ FFileExecutionCode::Rename };
	const EFileExecutionCode EFileExecutionCode::Delete =			{ FFileExecutionCode::Delete };
	const EFileExecutionCode EFileExecutionCode::CopyTo =			{ FFileExecutionCode::CopyTo };
	const EFileExecutionCode EFileExecutionCode::MoveTo =			{ FFileExecutionCode::MoveTo };
	const EFileExecutionCode EFileExecutionCode::Duplicate =		{ FFileExecutionCode::Duplicate };

	const EFileExecutionCode FReadyMadeExecutionCode::Open = { EFileExecutionCode::Open | EFileExecutionCode::NoEmpty
		| EFileExecutionCode::ImmediatelyExec | EFileExecutionCode::NoCombineExec };
	const EFileExecutionCode FReadyMadeExecutionCode::Rename = { EFileExecutionCode::Rename | EFileExecutionCode::NoEmpty
		| EFileExecutionCode::ImmediatelyExec | EFileExecutionCode::NoCombineExec };
	const EFileExecutionCode FReadyMadeExecutionCode::Delete = { EFileExecutionCode::Delete | EFileExecutionCode::NoEmpty
		| EFileExecutionCode::ImmediatelyExec | EFileExecutionCode::NoCombineExec };
	const EFileExecutionCode FReadyMadeExecutionCode::CopyTo = { EFileExecutionCode::CopyTo | EFileExecutionCode::NoEmpty
		| EFileExecutionCode::ImmediatelyExec | EFileExecutionCode::NoCombineExec };
	const EFileExecutionCode FReadyMadeExecutionCode::MoveTo = { EFileExecutionCode::MoveTo | EFileExecutionCode::NoEmpty
		| EFileExecutionCode::ImmediatelyExec | EFileExecutionCode::NoCombineExec };
	const EFileExecutionCode FReadyMadeExecutionCode::Duplicate = { EFileExecutionCode::Duplicate | EFileExecutionCode::NoEmpty
		| EFileExecutionCode::ImmediatelyExec | EFileExecutionCode::NoCombineExec };

	const EFileExecutionCode FReadyMadeExecutionCode::Paste = { EFileExecutionCode::NoEmpty | EFileExecutionCode::CombineExec
		| EFileExecutionCode::CopyTo | EFileExecutionCode::MoveTo };
	const EFileExecutionCode FReadyMadeExecutionCode::Copy = { EFileExecutionCode::NoEmpty | EFileExecutionCode::CombineExec
		| EFileExecutionCode::CopyTo | EFileExecutionCode::DelayExec };
	const EFileExecutionCode FReadyMadeExecutionCode::Cut = { EFileExecutionCode::NoEmpty | EFileExecutionCode::CombineExec
		| EFileExecutionCode::MoveTo | EFileExecutionCode::DelayExec };

	FString GenerateCopyName(const FString& OldName, bool bFolder)
	{
		int32 Counter = 1;
		FString CleanFileName = FPaths::GetCleanFilename(OldName);
		FString Header = OldName;
		Header.RemoveFromEnd(CleanFileName);
		if (bFolder)
		{
			while (true)
			{
				FString Result = Header + FString::Printf(TEXT("%s(%i)"), *CleanFileName, Counter);
				if (!IFileManager::Get().DirectoryExists(*Result))
				{
					return Result;
				}
				Counter++;
			}
		}
		else
		{
			FString Extension = FPaths::GetExtension(OldName, true);
			CleanFileName.RemoveFromEnd(Extension);
			while (true)
			{
				FString Result = Header + FString::Printf(TEXT("%s(%i)"), *CleanFileName, Counter) + Extension;
				if (!IFileManager::Get().FileExists(*Result))
				{
					return Result;
				}
				Counter++;
			}
		}
	}
	//最直接的
	bool MoveFiles_CheckNum(const TArray<FString>& SourceFiles, const TArray<FString>& TargetFiles)
	{
		if (SourceFiles.Num() < 1 || SourceFiles.Num() != TargetFiles.Num())
			return false;

		bool Result = true;
		const int32 Number = SourceFiles.Num();
		for (int32 I = 0; I < Number; I++)
		{
			if (!IFileManager::Get().Move(*TargetFiles[I], *SourceFiles[I]))
			{
				Result = false;
			}
		}
		return Result;
	}

	bool CopyFiles_CheckNum(const TArray<FString>& SourceFiles, const TArray<FString>& TargetFiles)
	{
		if (SourceFiles.Num() < 1 || SourceFiles.Num() != TargetFiles.Num())
			return false;

		bool Result = true;
		const int32 Number = SourceFiles.Num();
		for (int32 I = 0; I < Number; I++)
		{
			if (IFileManager::Get().Copy(*TargetFiles[I], *SourceFiles[I]) != COPY_OK)
			{
				Result = false;
			}
		}
		return Result;
	}

	bool MoveTo(const FString& Source, const FString& TargetFolder)
	{
		if (TargetFolder.Equals(FPaths::GetPath(Source)))//移动到同目录下
			return true;

		FFileStatData SourceFileStatData = IFileManager::Get().GetStatData(*Source);
		FFileStatData TargeFileStatData = IFileManager::Get().GetStatData(*TargetFolder);

		if (SourceFileStatData.bIsValid && TargeFileStatData.bIsValid && TargeFileStatData.bIsDirectory)
		{
			if (SourceFileStatData.bIsDirectory)
			{
				FString CommonHeader = FPaths::GetPath(Source);

				TArray<FString> SourceFiles;
				TArray<FString> TargetFiles;
				IFileManager::Get().FindFilesRecursive(SourceFiles, *Source, TEXT("*"), true, true);
				for (const auto& File : SourceFiles)
				{
					//Target = C:\MyProgram\SimpleUnrealPakView
					//Source = C:\MyProgram\UnrealEngine-5.3.2-release
					//CommonHeader =  C:\MyProgram
					//Temp = C:\MyProgram\UnrealEngine-5.3.2-release\xxx.txt
					//TargetFiles = Target + Temp.RemoveFromStart(CommonHeader)
					FString Temp = File;
					Temp.RemoveFromStart(CommonHeader);
					TargetFiles.Add(TargetFolder + Temp);
				}

				return MoveFiles_CheckNum(SourceFiles, TargetFiles);
			}
			else
			{
				return IFileManager::Get().Move(*(TargetFolder / FPaths::GetCleanFilename(Source)), *Source);
			}
		}
		return false;
	}

	bool Rename(const FString& Source, const FString& NewName)
	{
		FFileStatData SourceFileStatData = IFileManager::Get().GetStatData(*Source);

		if (SourceFileStatData.bIsValid)
		{
			FString Header = FPaths::GetPath(Source);
			if (SourceFileStatData.bIsDirectory)
			{
				if (FPaths::GetCleanFilename(Source).Equals(NewName))
					return true;

				Header += NewName;
				TArray<FString> FoundFiles;
				TArray<FString> NewNamedFiles;

				IFileManager::Get().FindFilesRecursive(FoundFiles, *Source, TEXT("*"), true, true);
				for (const auto& File : FoundFiles)
				{
					FString Temp = File;
					//不能替换，可能会有重复, 不能通过获取纯净文件名，因为是递归
					Temp.RemoveFromStart(Source);
					NewNamedFiles.Add(Header + Temp);
				}
				return MoveFiles_CheckNum(FoundFiles, NewNamedFiles);
			}
			else
			{
				if (NewName.Contains("."))
				{
					//拓展名也是文件名的一部分，同名不同拓展名的文件不是重复文件名
					if (FPaths::GetCleanFilename(Source).Equals(NewName))
						return true;
					Header = Header + NewName;
				}
				else
				{
					if (FPaths::GetCleanFilename(Source).Equals(NewName + FPaths::GetExtension(Source, true)))
						return true;
					Header = Header / NewName + FPaths::GetExtension(Source, true);
				}
				return IFileManager::Get().Move(*Header, *Source);
			}
		}
		return false;
	}

	bool Delete(const FString& Source)
	{
		FFileStatData SourceFileStatData = IFileManager::Get().GetStatData(*Source);

		if (SourceFileStatData.bIsValid)
		{
			if (SourceFileStatData.bIsDirectory)
			{
				return IFileManager::Get().DeleteDirectory(*Source, false, true);
			}
			else
			{
				return IFileManager::Get().Delete(*Source);
			}
			return false;
		}
		return true;
	}

	bool CopyTo(const FString& Source, const FString& TargetFolder)
	{
		if (FPaths::GetPath(Source).Equals(TargetFolder))
			return true;

		FFileStatData SourceFileStatData = IFileManager::Get().GetStatData(*Source);
		FFileStatData TargeFileStatData = IFileManager::Get().GetStatData(*TargetFolder);

		if (SourceFileStatData.bIsValid && TargeFileStatData.bIsValid && TargeFileStatData.bIsDirectory)
		{
			if (SourceFileStatData.bIsDirectory)
			{
				FString CommonHeader = FPaths::GetPath(Source);

				TArray<FString> SourceFiles;
				TArray<FString> TargetFiles;
				IFileManager::Get().FindFilesRecursive(SourceFiles, *Source, TEXT("*"), true, true);
				for (const auto& File : SourceFiles)
				{
					//Target = C:\MyProgram\SimpleUnrealPakView
					//Source = C:\MyProgram\UnrealEngine-5.3.2-release -> C:\MyProgram\SimpleUnrealPakView\UnrealEngine-5.3.2-release
					//CommonHeader =  C:\MyProgram
					//Temp = C:\MyProgram\UnrealEngine-5.3.2-release\xxx.txt
					//TargetFiles = Target + Temp.RemoveFromStart(CommonHeader)
					FString Temp = File;
					Temp.RemoveFromStart(CommonHeader);
					TargetFiles.Add(TargetFolder + Temp);
				}
				return CopyFiles_CheckNum(SourceFiles, TargetFiles);
			}
			else
			{
				//Target = C:\MyProgram\SimpleUnrealPakView
				//Source = C:\MyProgram\UnrealEngine-5.3.2-release\xxx.txt -> C:\MyProgram\SimpleUnrealPakView\xxx.txt
				return IFileManager::Get().Copy(*(TargetFolder / FPaths::GetCleanFilename(Source)), *Source) == COPY_OK;
			}


		}
		return false;
	}

	bool Duplicate(const FString& Source)
	{
		FFileStatData SourceFileStatData = IFileManager::Get().GetStatData(*Source);

		if (SourceFileStatData.bIsValid)
		{
			if (SourceFileStatData.bIsDirectory)
			{
				//当前路径下复制一份
				//Source = C:\MyProgram\UnrealEngine-5.3.2-release -> C:\MyProgram\UnrealEngine-5.3.2-release(1)
				FString CopyName = GenerateCopyName(Source, true);//C:\MyProgram\UnrealEngine-5.3.2-release(1)

				TArray<FString> SourceFiles;
				TArray<FString> TargetFiles;
				IFileManager::Get().FindFilesRecursive(SourceFiles, *Source, TEXT("*"), true, true);
				for (const auto& File : SourceFiles)
				{
					//CopyName =  C:\MyProgram\UnrealEngine-5.3.2-release(1)
					//Temp = C:\MyProgram\UnrealEngine-5.3.2-release\xxx.txt -> C:\MyProgram\UnrealEngine-5.3.2-release(1)\xxx.txt
					//TargetFiles = Target + Temp.RemoveFromStart(CopyName)
					FString Temp = File;
					Temp.RemoveFromStart(Source);
					TargetFiles.Add(CopyName + Temp);
				}
				return CopyFiles_CheckNum(SourceFiles, TargetFiles);
			}
			else
			{
				//当前路径下复制一份
				//Source = C:\MyProgram\UnrealEngine-5.3.2-release\xxx.txt -> C:\MyProgram\UnrealEngine-5.3.2-release\xxx(1).txt
				FString CopyName = GenerateCopyName(Source, false);
				return IFileManager::Get().Copy(*CopyName, *Source) == COPY_OK;
			}
		}
		return false;
	}


	bool FFileTreeOperation::Open(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode)
	{
		if (InFileNode.IsValid() && InFileNode->GetFileType() == SlateFileTree::EFileType::File)
		{
			//打开逻辑
			return true;
		}
		return false;
	}

	bool FFileTreeOperation::Rename(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode, const FString& NewName)
	{
		if (InFileNode.IsValid() && InFileNode->IsValid())
		{
			return SlateFileTree::Rename(InFileNode->GetPath(), NewName);
		}
		return false;
	}

	bool FFileTreeOperation::Delete(const TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>& InFileNodes)
	{
		if (InFileNodes.Num() > 0)
		{
			bool Result = true;
			for (auto& FileNode : InFileNodes)
			{
				if (FileNode.IsValid() && FileNode->IsValid())
				{
					Result = SlateFileTree::Delete(FileNode->GetPath());
				}
				else
				{
					Result = false;
				}
			}
			return Result;
		}
		return false;
	}

	bool FFileTreeOperation::CopyTo(const TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>& InFileNodes, TSharedPtr<SlateFileTree::FFileTreeBase> TargetFolder)
	{
		if (InFileNodes.Num() > 0 && TargetFolder.IsValid())
		{
			bool Result = true;
			for (auto& FileNode : InFileNodes)
			{
				if (FileNode.IsValid() && FileNode->IsValid())
				{
					Result = SlateFileTree::CopyTo(FileNode->GetPath(), TargetFolder->GetPath());
				}
				else
				{
					Result = false;
				}
			}
			return Result;
		}
		return false;
	}

	bool FFileTreeOperation::MoveTo(const TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>& InFileNodes, TSharedPtr<SlateFileTree::FFileTreeBase> TargetFolder)
	{
		if (InFileNodes.Num() > 0 && TargetFolder.IsValid())
		{
			bool Result = true;
			for (auto& FileNode : InFileNodes)
			{
				if (FileNode.IsValid() && FileNode->IsValid())
				{
					Result = SlateFileTree::MoveTo(FileNode->GetPath(), TargetFolder->GetPath());
				}
				else
				{
					Result = false;
				}
			}
			return Result;
		}
		return false;
	}

	bool FFileTreeOperation::Duplicate(const TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>& InFileNodes)
	{
		if (InFileNodes.Num() > 0)
		{
			bool Result = true;
			for (auto& FileNode : InFileNodes)
			{
				if (FileNode.IsValid() && FileNode->IsValid())
				{
					Result = SlateFileTree::Duplicate(FileNode->GetPath());
				}
				else
				{
					Result = false;
				}
			}
			return Result;
		}
		return false;
	}

}