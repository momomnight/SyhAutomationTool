#include "FileTreeType.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

namespace SlateFileTree
{
	void FindFilesRecursive(TArray<TSharedPtr<FFileTreeBase>>& OutChildren, TSharedPtr<FFileTree_Folder> Parent, 
		TFunction<bool(const FString&)> Filter)
	{
		TArray<FString> Result;
		IFileManager::Get().FindFiles(Result, *(Parent->GetPath() / TEXT("*")), true, true);


		if (Result.Num() <= 0)
		{
			OutChildren.Add(MakeShareable(new FFileTree_None{ Parent->GetPath() / TEXT("None"), Parent }));
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
			OutChildren.Add(MakeShareable(new FFileTree_None{ Parent->GetPath() / TEXT("None"), Parent}));
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

	uint32 GetTypeHash(const TSharedPtr<const FFileTreeBase>& Key)
	{
		uint32 Hash = 0;
		Hash = HashCombine(Hash, GetTypeHash(Key->GetPath()));
		return Hash;
	}

	struct FFileTreeSharedPtrKeyFuncs : public BaseKeyFuncs<TSharedPtr<FFileTreeBase>, TSharedPtr<FFileTreeBase>, true>
	{
		typedef typename TTypeTraits<TSharedPtr<FFileTreeBase>>::ConstPointerType KeyInitType;
		typedef typename TCallTraits<TSharedPtr<FFileTreeBase>>::ParamType ElementInitType;

		/**
		 * @return The key used to index the given element.
		 */
		static FORCEINLINE KeyInitType GetSetKey(ElementInitType Element)
		{
			return Element;
		}

		static FORCEINLINE uint32 GetKeyHash(KeyInitType Key)
		{
			return SlateFileTree::GetTypeHash(Key); // 调用自定义哈希函数
		}

		static FORCEINLINE bool Matches(KeyInitType A, KeyInitType B)
		{
			// 比较是否指向同一对象
			return A->GetPath() == B->GetPath();
		}
	};

	void UpdateFileData(const TArray<TSharedPtr<FFileTreeBase>>& InChildren, TArray<TSharedPtr<FFileTreeBase>>& OutChildren, TSharedPtr<FFileTree_Folder> Parent)
	{
		if(!Parent.IsValid() || !Parent->IsFolder()) return;

		TArray<TSharedPtr<FFileTreeBase>> Children;
		FindFiles(Children, Parent);

		if (Children.IsEmpty())
		{
			return;
		}

		TSet<TSharedPtr<FFileTreeBase>, FFileTreeSharedPtrKeyFuncs> OldChildren{ InChildren };
		for (auto& Temp : Children)
		{
			if (Temp->GetFileType() == EFileType::Folder)
			{		
				TSharedPtr<FFileTree_Folder> Folder = Temp->CastTo<FFileTree_Folder>();
				if (OldChildren.Contains(Temp))
				{
					//已有的
					TSharedPtr<FFileTree_Folder> OldChild = (*OldChildren.Find(Temp))->CastTo<FFileTree_Folder>();
					Folder->SetExpandedState(OldChild->IsExpanded());
					UpdateFileData(OldChild->GetChildren(), Folder->GetChildren(), Folder);
				}
				else
				{
					//新添加项
					FindFilesRecursive(Folder->GetChildren(), Folder);
				}
			}
		}
		OutChildren = MoveTemp(Children);
	}
	FText GetFileTypeText(EFileType InType)
	{	
		switch (InType)
		{
		case SlateFileTree::EFileType::None:
			return NSLOCTEXT("SlateFileTree", "FileType.None", "None");
		case SlateFileTree::EFileType::Invalid:
			return NSLOCTEXT("SlateFileTree", "FileType.Invalid", "Invalid");
		case SlateFileTree::EFileType::File:
			return NSLOCTEXT("SlateFileTree", "FileType.File", "File");
		case SlateFileTree::EFileType::Folder:
			return NSLOCTEXT("SlateFileTree", "FileType.Folder", "Folder");
		default:
			return FText::GetEmpty();
		}	
	}
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT