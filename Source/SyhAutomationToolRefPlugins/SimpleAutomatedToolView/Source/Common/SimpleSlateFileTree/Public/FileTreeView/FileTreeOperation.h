#pragma once
#include "FileTreeType.h"

namespace SlateFileTree
{
	namespace FFileExecutionCode
	{
		enum
		{
			Empty = 0,
			NoEmpty = 1,
			DelayExec = 1 << 1,		//储存命令，延迟执行
			ImmediatelyExec = 0,
			CombineExec = 1 << 2,	//查询上一个命令，执行
			NoCombineExec = 0,
			Open = 1 << 3,
			Rename = 1 << 4,
			Delete = 1 << 5,
			CopyTo = 1 << 6,
			MoveTo = 1 << 7,
			Duplicate = 1 << 8,
		};
	}



	struct EFileExecutionCode
	{
		static const EFileExecutionCode Empty;
		static const EFileExecutionCode NoEmpty;
		static const EFileExecutionCode ImmediatelyExec;
		static const EFileExecutionCode DelayExec;
		static const EFileExecutionCode NoCombineExec;
		static const EFileExecutionCode CombineExec;
		static const EFileExecutionCode Open;
		static const EFileExecutionCode Rename;
		static const EFileExecutionCode Delete;
		static const EFileExecutionCode CopyTo;
		static const EFileExecutionCode MoveTo;
		static const EFileExecutionCode Duplicate;


		EFileExecutionCode operator&(const EFileExecutionCode& Rhs) const
		{
			return EFileExecutionCode{ Value & Rhs.Value };
		}

		EFileExecutionCode operator|(const EFileExecutionCode& Rhs) const
		{
			return EFileExecutionCode{ Value | Rhs.Value };
		}

		EFileExecutionCode operator~() const
		{
			return EFileExecutionCode{ ~Value };
		}

		operator bool() const
		{
			return !!Value;
		}

		uint32 Value;
	};


	struct SIMPLESLATEFILETREE_API FFileTreeOperation
	{

		static bool Open(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode);

		static bool Rename(TSharedPtr<SlateFileTree::FFileTreeBase> InFileNode, const FString& NewName);

		static bool Delete(const TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>& InFileNodes);

		static bool CopyTo(const TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>& InFileNodes, TSharedPtr<SlateFileTree::FFileTreeBase> TargetFolder);

		static bool MoveTo(const TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>& InFileNodes, TSharedPtr<SlateFileTree::FFileTreeBase> TargetFolder);

		static bool Duplicate(const TArray<TSharedPtr<SlateFileTree::FFileTreeBase>>& InFileNodes);
	};


	struct FReadyMadeExecutionCode
	{

		const static EFileExecutionCode Open;
		const static EFileExecutionCode Rename;
		const static EFileExecutionCode Delete;
		const static EFileExecutionCode CopyTo;
		const static EFileExecutionCode MoveTo;
		const static EFileExecutionCode Duplicate;

		const static EFileExecutionCode Paste;
		const static EFileExecutionCode Copy;
		const static EFileExecutionCode Cut;
	};


}