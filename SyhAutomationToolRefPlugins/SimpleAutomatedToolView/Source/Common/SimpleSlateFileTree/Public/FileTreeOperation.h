#pragma once
#include "HAL/PlatformFileManager.h"
#include "FileTreeType.h"

namespace SlateFileTree
{
	enum EFileOperationType : uint16
	{
		None,
		Open,
		Rename,
		Cut,
		Copy,
		Paste,
		Duplicate,
		Delete,
		MoveTo,
		CopyTo,
	};

	struct SIMPLESLATEFILETREE_API FFileTreeOperationData
	{
		bool bFirstOperateData{true};
		EFileOperationType OperationType{ EFileOperationType::None};
		TSharedPtr<FFileTreeBase> First{nullptr};
		TSharedPtr<FFileTreeBase> Second{ nullptr };

		bool IsFirstEmpty() const noexcept { return First.IsValid(); }
		bool IsSecondEmpty() const noexcept { return Second.IsValid(); }
		bool IsEmpty()  const noexcept { return IsFirstEmpty() && IsSecondEmpty(); }
		bool IsFull() const noexcept { return !IsFirstEmpty() && !IsSecondEmpty(); }
		void Clear() noexcept 
		{
			OperationType = EFileOperationType::None;
			First.Reset();
			Second.Reset();
			bFirstOperateData = true;
		}
		bool IsFirstOperateData() { return bFirstOperateData;}
	};

	#define COMPILER_PROVIDE_CONSTRUCTOR(ClassName)\
	ClassName(const ClassName& Other) = default;\
	ClassName(ClassName&& Other) noexcept = default;\
	ClassName& operator=(const ClassName&) = default;\
	ClassName& operator=(ClassName&&) noexcept = default


	struct SIMPLESLATEFILETREE_API FFileOperation
	{
		EFileOperationType FileOperationType{ EFileOperationType::None };
		FString SourcePath{};

		FFileOperation() = default;

		COMPILER_PROVIDE_CONSTRUCTOR(FFileOperation);

		FFileOperation(const FString& InSourcePath, EFileOperationType InType = EFileOperationType::None) 
			: FileOperationType(InType), SourcePath(InSourcePath) {}

		virtual ~FFileOperation(){}

		EFileOperationType GetOperationType() const noexcept { return FileOperationType; }
		void SetOperationType(EFileOperationType InType) noexcept { FileOperationType = InType; }
		const FString& GetSourcePath() const noexcept { return SourcePath; }
		void SetSourcePath(const FString& InSourcePath) noexcept { SourcePath = InSourcePath;}

		virtual bool Execute(){ return true;}
	};

	struct SIMPLESLATEFILETREE_API FFileOperationWithTarget : public FFileOperation
	{
		FString TargetPath{};
		FFileOperationWithTarget() = default;

		COMPILER_PROVIDE_CONSTRUCTOR(FFileOperationWithTarget);

		FFileOperationWithTarget(const FString& InSourcePath, const FString& InTargetPath, EFileOperationType InType = EFileOperationType::None)
			: FFileOperation(InSourcePath, InType), TargetPath(InTargetPath) {
		}

		FFileOperationWithTarget(const FFileOperation& Other)
			: FFileOperation(Other) {
		}

		FFileOperationWithTarget(FFileOperation&& Other)
			: FFileOperation(MoveTemp(Other)) {
		}

		const FString& GetTargetPath() const noexcept { return TargetPath; }
		void SetTargetPath(const FString& InTargetPath) noexcept { TargetPath = InTargetPath; }

		virtual bool Execute(){ return true;}
	};

	struct SIMPLESLATEFILETREE_API FFileOperation_CopyTo : public FFileOperationWithTarget
	{
		FFileOperation_CopyTo() : FFileOperationWithTarget({}, {}, EFileOperationType::Copy) {}

		COMPILER_PROVIDE_CONSTRUCTOR(FFileOperation_CopyTo);

		FFileOperation_CopyTo(const FString& InSourcePath, const FString& InTargetPath)
			: FFileOperationWithTarget(InSourcePath, InTargetPath, EFileOperationType::Copy) {
		}

		FFileOperation_CopyTo(const FFileOperation& Other)
			: FFileOperationWithTarget(Other) {
		}
		FFileOperation_CopyTo(FFileOperation&& Other)
			: FFileOperationWithTarget(MoveTemp(Other)) {
		}

		virtual bool Execute() override
		{
			FFileStatData TargetFileStatData = IFileManager::Get().GetStatData(*GetTargetPath());
			FFileStatData SourceFileStatData = IFileManager::Get().GetStatData(*GetSourcePath());

			FString TempTarget = GetTargetPath();
			//获取文件夹路径，复制到文件夹下
			if (TargetFileStatData.bIsValid)
			{
				if (!TargetFileStatData.bIsDirectory)
				{
					TempTarget.RemoveFromEnd(TEXT("/") + FPaths::GetCleanFilename(GetTargetPath()));
				}
			}
			else
			{
				return false;
			}

			if (SourceFileStatData.bIsValid)
			{

				if (SourceFileStatData.bIsDirectory)
				{
					TArray<FString> CollectedPaths;
					IFileManager::Get().FindFilesRecursive(CollectedPaths, *GetSourcePath(), TEXT("*"), true, true, false);


					for (auto& TempSource : CollectedPaths)
					{
						FString Temp = TempSource;
						Temp.RemoveFromStart(GetSourcePath()); //C:/xxx C:/xxx/yyy/a.txt -> D:/zzz/yyy/a.txt
						Temp = TempTarget + Temp;
						IFileManager::Get().Copy(*Temp, *TempSource);
					}
				}
				else
				{
					IFileManager::Get().Copy(*(TempTarget / FPaths::GetCleanFilename(GetSourcePath())), *GetSourcePath());
				}
				return true;
			}
			return false;
		}
	};

	struct SIMPLESLATEFILETREE_API FFileOperation_Rename : public FFileOperationWithTarget
	{

		FFileOperation_Rename() : FFileOperationWithTarget({}, {}, EFileOperationType::Rename) {}

		COMPILER_PROVIDE_CONSTRUCTOR(FFileOperation_Rename);

		FFileOperation_Rename(const FString& InOriginalName, const FString& InNewName)
			: FFileOperationWithTarget(InOriginalName, InNewName, EFileOperationType::Rename) {
		}

		FFileOperation_Rename(const FFileOperation& Other)
			: FFileOperationWithTarget(Other) {
		}
		FFileOperation_Rename(FFileOperation&& Other)
			: FFileOperationWithTarget(MoveTemp(Other)) {
		}

		const FString& GetOriginalName() const noexcept { return GetSourcePath(); }
		void SetOriginalName(const FString& InOriginalName) noexcept { SetSourcePath(InOriginalName); }

		const FString& GetNewName() const noexcept { return GetTargetPath(); }
		void SetNewName(const FString& InNewName) noexcept { SetTargetPath(InNewName); }

		virtual bool Execute() override
		{
			FFileStatData OriginalFileStatDat = IFileManager::Get().GetStatData(*GetOriginalName());
			IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

			if (OriginalFileStatDat.bIsValid)
			{
				FString OriginalSuperiorPath = GetOriginalName();
				OriginalSuperiorPath.RemoveFromEnd(FPaths::GetCleanFilename(OriginalSuperiorPath));

				FString NewSuperiorPath = GetNewName();
				NewSuperiorPath.RemoveFromEnd(FPaths::GetCleanFilename(NewSuperiorPath));

				if (NewSuperiorPath.Equals(OriginalSuperiorPath, ESearchCase::CaseSensitive))
				{
					PlatformFile.MoveFile(*GetNewName(), *GetOriginalName());//???????????
				}

			}

			return false;
		}
	};

	struct SIMPLESLATEFILETREE_API FFileOperation_Delete : public FFileOperation
	{
		FFileOperation_Delete() : FFileOperation({}, EFileOperationType::Delete) {}
		COMPILER_PROVIDE_CONSTRUCTOR(FFileOperation_Delete);
		FFileOperation_Delete(const FString& InSourcePath, EFileOperationType InType = EFileOperationType::Delete)
			: FFileOperation(InSourcePath, InType) {
		}

		FFileOperation_Delete(const FFileOperation& Other)
			: FFileOperation(Other) {
		}
		FFileOperation_Delete(FFileOperation&& Other)
			: FFileOperation(MoveTemp(Other)) {
		}

		virtual bool Execute() override
		{
			FFileStatData SourceFileStatData = IFileManager::Get().GetStatData(*GetSourcePath());
			if (SourceFileStatData.bIsValid)
			{
				if (SourceFileStatData.bIsDirectory)
				{
					IFileManager::Get().DeleteDirectory(*GetSourcePath(), false, true);
				}
				else
				{
					IFileManager::Get().Delete(*GetSourcePath());
				}
				return true;
			}
			else
			{
				return false;
			}
		}
	};

}