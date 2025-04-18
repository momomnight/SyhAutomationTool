#pragma once
#include "HAL/PlatformFileManager.h"
#include "FileTreeType.h"
#include "FileTreeTypeFwd.h"

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