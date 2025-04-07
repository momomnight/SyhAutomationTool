#include "FileTree/FileParse.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

namespace SimpleSlateFileTree
{
	void FindFilesRecursive(TArray<TSharedPtr<FFileTreeBase>>& OutChildren, TSharedPtr<FFileTree_Folder> Parent, 
		TFunction<bool(const FString&)> Filter)
	{
		TArray<FString> Result;
		IFileManager::Get().FindFiles(Result, *(Parent->GetPath() / TEXT("*")), true, true);


		if (Result.Num() <= 0)
		{
			OutChildren.Add(MakeShareable(new FFileTree_None{ Parent->GetPath() / TEXT("Empty"), Parent }));
			return;
		}

		for (auto FoundPath : Result)
		{
			FString CombinePath = Parent->GetPath() / FoundPath;
			//筛选掉不需要的
			if (!Filter(CombinePath))
			{
				continue;
			}

			FFileStatData FileStatData = IFileManager::Get().GetStatData(*CombinePath);
			if(FileStatData.bIsValid)
			{
				if (FileStatData.bIsDirectory)
				{
					TSharedPtr<FFileTree_Folder> FolderChild = MakeShareable(new FFileTree_Folder{ FoundPath, CombinePath, Parent });
					OutChildren.Add(FolderChild);
					FindFilesRecursive(FolderChild->GetChildren(), FolderChild, Filter);
				}
				else
				{
					//文件名和拓展名分开存放
					FString Extension = FPaths::GetExtension(FoundPath);
					FoundPath.RemoveFromEnd(TEXT(".") + Extension);
					OutChildren.Add(MakeShareable(new FFileTree_File{ FoundPath, CombinePath, Extension, Parent }));
				}
			}
			else
			{
				OutChildren.Add(MakeShareable(new FFileTree_Invalid{ FoundPath, CombinePath, Parent }));
			}
		}
	}

	void FindFiles(TArray<TSharedPtr<FFileTreeBase>>& OutChildren, TSharedPtr<FFileTree_Folder> Parent,
		TFunction<bool(const FString&)> Filter)
	{
		TArray<FString> Result;
		IFileManager::Get().FindFiles(Result, *(Parent->GetPath() / TEXT("*")), true, true);

		if (Result.Num() <= 0)
		{
			OutChildren.Add(MakeShareable(new FFileTree_None{ Parent->GetPath() / TEXT("Empty"), Parent}));
			return;
		}

		for (auto FoundPath : Result)
		{
			FString CombinePath = Parent->GetPath() / FoundPath;
			//筛选掉不需要的
			if (!Filter(CombinePath))
			{
				continue;
			}

			FFileStatData FileStatData = IFileManager::Get().GetStatData(*CombinePath);

			TSharedPtr<FFileTreeBase> Child;
			if (FileStatData.bIsValid)
			{
				if (FileStatData.bIsDirectory)
				{
					Child = MakeShareable(new FFileTree_Folder{ FoundPath, CombinePath, Parent });
				}
				else
				{
					//文件名和拓展名分开存放
					FString Extension = FPaths::GetExtension(FoundPath);
					FoundPath.RemoveFromEnd(TEXT(".") + Extension);
					Child = MakeShareable(new FFileTree_File{ FoundPath, CombinePath, Extension, Parent });
				}
			}
			else
			{
				Child = MakeShareable(new FFileTree_Invalid{ FoundPath, CombinePath, Parent });
			}

			OutChildren.Add(Child);
		}
	}


	bool ParseFileTreeRecursive(const FFileTree& InFileTree, TSharedPtr<FFileTree_Folder> InFolder, TFunction<bool(const FString&)> Filter)
	{
		if(!InFileTree.IsValid()) return false;

		FFileStatData FileStatData = IFileManager::Get().GetStatData(*InFileTree.GetRootPath());
		if (FileStatData.bIsValid && FileStatData.bIsDirectory)
		{
			InFolder->SetName(FPaths::GetCleanFilename(InFileTree.GetRootPath()));
			InFolder->SetPath(InFileTree.GetRootPath());
			FindFilesRecursive(InFolder->GetChildren(), InFolder, Filter);
		}
		return false;
	}

	bool ParseFileTree(const FFileTree& InFileTree, TSharedPtr<FFileTree_Folder> InFolder, TFunction<bool(const FString&)> Filter)
	{
		if (!InFileTree.IsValid()) return false;

		FFileStatData FileStatData = IFileManager::Get().GetStatData(*InFileTree.GetRootPath());
		if (FileStatData.bIsValid && FileStatData.bIsDirectory)
		{
			InFolder->SetName(FPaths::GetCleanFilename(InFileTree.GetRootPath()));
			InFolder->SetPath(InFileTree.GetRootPath());
			FindFiles(InFolder->GetChildren(), InFolder, Filter);
		}
		return false;
	}

}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT