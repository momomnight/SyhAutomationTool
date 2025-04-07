#pragma once

#include "CoreMinimal.h"


namespace SimpleSlateFileTree
{
	enum class EFileType : uint8
	{
		None,
		Invalid,
		File,
		Folder
	};

	template <class FileTreeType>
	struct SIMPLESLATEFILETREE_API FFileTypeTrait
	{
		constexpr static EFileType Type = EFileType::None;
	};

	DECLARE_DELEGATE_OneParam(FOperationWidget, TSharedPtr<SWidget>);
	
	struct FFileTree_Folder;
	struct FFileTree_File;
	struct SIMPLESLATEFILETREE_API FFileTreeBase : TSharedFromThis<FFileTreeBase>
	{
	public:
		FFileTreeBase() :Name(TEXT("")), Path(TEXT("")), FileType(EFileType::None) {}
		FFileTreeBase(const FString& InName, const FString& InPath, TSharedPtr<FFileTreeBase> InParent = nullptr, EFileType InFileType = EFileType::None)
			: Name(InName), Path(InPath), Parent(InParent), FileType(InFileType){ }

		virtual ~FFileTreeBase() noexcept {}
	private:
		FString Name;
		FString Path;
		TWeakPtr<FFileTreeBase> Parent{nullptr};
		EFileType FileType;
		TWeakPtr<SWidget> Widget{ nullptr };	//用于操控
	
	public:
		FORCEINLINE const FString& GetName() const noexcept {return Name;}
		virtual FString GetFullName() const noexcept { return Name; }

		FORCEINLINE const FString& GetPath() const noexcept { return Path; }
		FORCEINLINE void SetPath(const FString& InPath) noexcept { Path = InPath; }

		FORCEINLINE TWeakPtr<FFileTreeBase> GetParent() noexcept {return Parent;}

		FORCEINLINE EFileType GetFileType() const noexcept {return FileType;}
		FORCEINLINE bool IsFolder() const noexcept { return FileType == EFileType::Folder; }

		//文件类型由派生类构造决定
		FORCEINLINE void SetName(const FString& InName) noexcept {Name = InName;}
		FORCEINLINE void SetParent(TSharedPtr<FFileTreeBase> InParent) noexcept {Parent = InParent;}

		FORCEINLINE void SetWidget(TSharedPtr<SWidget> InWidget){Widget = InWidget;}
		FORCEINLINE TSharedPtr<SWidget> GetWidget() { return Widget.Pin(); }
		void OperationWidget(FOperationWidget InOp)
		{
			InOp.ExecuteIfBound(Widget.Pin());
		}


		template<class To>
		TSharedPtr<To> CastTo()
		{
			check((GetFileType() == FFileTypeTrait<To>::Type)&&TEXT("This is not correct cast."))
			return StaticCastSharedPtr<To>(this->AsShared().ToSharedPtr());
		}

	public:
		FORCEINLINE friend bool operator==(const FFileTreeBase& Lhs, const FFileTreeBase& Rhs) noexcept
		{
			//由路径决定
			return Lhs.GetPath() == Rhs.GetPath();
		}
	};

	struct SIMPLESLATEFILETREE_API FFileTree_None : public FFileTreeBase
	{
	public:
		FFileTree_None(const FString& InPath, TSharedPtr<FFileTreeBase> InParent = nullptr) 
			: FFileTreeBase(TEXT("None"), InPath, InParent, EFileType::None)
		{
		}
		void SetName(const FString& InName) noexcept = delete;
	};

	struct SIMPLESLATEFILETREE_API FFileTree_Invalid : public FFileTreeBase
	{
	public:
		FFileTree_Invalid() : FFileTreeBase(TEXT("Invalid Tree Node"), TEXT("None"), nullptr, EFileType::Invalid) {}
		FFileTree_Invalid(const FString& InName, const FString& InPath, TSharedPtr<FFileTreeBase> InParent = nullptr)
			: FFileTreeBase(InName, InPath, InParent, EFileType::Invalid){}
	};

	struct SIMPLESLATEFILETREE_API FFileTree_File : public FFileTreeBase
	{
	private:
		FString Extension;
	public:
		FFileTree_File() : FFileTreeBase(TEXT("File"), TEXT("None"), nullptr, EFileType::File), Extension(){}
		FFileTree_File(const FString& InName, const FString& InPath, const FString InExtension, TSharedPtr<FFileTreeBase> InParent = nullptr)
			: FFileTreeBase(InName, InPath, InParent, EFileType::File), Extension(InExtension){}
	public:
		virtual FString GetFullName() const noexcept { return GetName() + TEXT(".") + Extension; }
		FORCEINLINE const FString& GetExtension() const noexcept {return Extension;}
		FORCEINLINE void SetExtension(const FString InExtension) noexcept {Extension =InExtension;}
	};

	struct SIMPLESLATEFILETREE_API FFileTree_Folder : public FFileTreeBase
	{
	private:
		TArray<TSharedPtr<FFileTreeBase>> Children;
		bool bIsExpanded = false;
		bool bLoading = false;
	public:
		FFileTree_Folder() : FFileTreeBase(TEXT("Folder"),TEXT("None"), nullptr, EFileType::Folder) {}
		FFileTree_Folder(const FString& InName, const FString& InPath, TSharedPtr<FFileTreeBase> InParent = nullptr) 
			: FFileTreeBase(InName, InPath, InParent, EFileType::Folder) {}

		FORCEINLINE void SetExpandedState(bool b) { bIsExpanded = b;}
		FORCEINLINE bool IsExpanded() { return bIsExpanded;}
		FORCEINLINE void SetLoadingState(bool b) { bLoading = b; }
		FORCEINLINE bool IsLoading() { return bLoading; }

		FORCEINLINE TArray<TSharedPtr<FFileTreeBase>>& GetChildren() noexcept {return Children;}
		FORCEINLINE const TArray<TSharedPtr<FFileTreeBase>>& GetChildren() const noexcept { return Children; }
	};

	struct SIMPLESLATEFILETREE_API FFileTree
	{
		FFileTree(){}
		FFileTree(const FString& InPath) : Root(InPath)
		{
			HandleRootPahts();
		}

	private:
		FString Root;

		void HandleRootPahts() {
			FPaths::NormalizeDirectoryName(Root);
			FPaths::RemoveDuplicateSlashes(Root);
			FFileStatData StatData = IFileManager::Get().GetStatData(*Root);
			if (!StatData.bIsValid || !StatData.bIsDirectory)
			{
				check(0&&TEXT("please provied a directory path."));
			}
		}

	public:
		FORCEINLINE const FString& GetRootPath() const noexcept {return Root;}
		FORCEINLINE void SetRootPath(const FString& InPath) noexcept {Root = InPath; HandleRootPahts();}
		FORCEINLINE void SetRootPath(const TCHAR* InPath) noexcept { Root = InPath; HandleRootPahts();}
		FORCEINLINE bool IsValid() const noexcept
		{		
			return !Root.IsEmpty() && IFileManager::Get().DirectoryExists(*Root);
		}
	};

	template <> struct SIMPLESLATEFILETREE_API FFileTypeTrait<FFileTreeBase> { constexpr static EFileType Type = EFileType::None; };
	template <> struct SIMPLESLATEFILETREE_API FFileTypeTrait<FFileTree_None> { constexpr static EFileType Type = EFileType::None; };
	template <> struct SIMPLESLATEFILETREE_API FFileTypeTrait<FFileTree_Invalid>{ constexpr static EFileType Type = EFileType::Invalid; };
	template <> struct SIMPLESLATEFILETREE_API FFileTypeTrait<FFileTree_File> { constexpr static EFileType Type = EFileType::File; };
	template <> struct SIMPLESLATEFILETREE_API FFileTypeTrait<FFileTree_Folder> { constexpr static EFileType Type = EFileType::Folder; };

	bool SIMPLESLATEFILETREE_API ParseFileTreeRecursive(const FFileTree& InFileTree, TSharedPtr<FFileTree_Folder> OutFolder,
		TFunction<bool(const FString&)> Filter);

	bool SIMPLESLATEFILETREE_API ParseFileTree(const FFileTree& InFileTree, TSharedPtr<FFileTree_Folder> OutFolder, 
		TFunction<bool(const FString&)> Filter);
	void SIMPLESLATEFILETREE_API FindFilesRecursive(TArray<TSharedPtr<FFileTreeBase>>& OutChildren, TSharedPtr<FFileTree_Folder> Parent,
		TFunction<bool(const FString&)> Filter);
	void SIMPLESLATEFILETREE_API FindFiles(TArray<TSharedPtr<FFileTreeBase>>& OutChildren, TSharedPtr<FFileTree_Folder> Parent,
			TFunction<bool(const FString&)> Filter);
	//void ParseFileTree(const TArray<FString>& FileNames, FFileTree& FileList)
	//{
	//	//FileName = G:/HotUpdate/Content/Geometry/Meshs/1M_Cube.uasset
	//	//FileName = G:/HotUpdate/Content/Geometry/Meshs/1M_Cube_Chamfer.uasset

	//	FFileTree InFileTree;




	//}

}