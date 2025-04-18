#pragma once


namespace SlateFileTree
{
	struct SIMPLESLATEFILETREE_API FFileTree;
	struct SIMPLESLATEFILETREE_API FFileTree_Folder;
	struct SIMPLESLATEFILETREE_API FFileTree_File;
	struct SIMPLESLATEFILETREE_API FFileTreeBase;
	struct SIMPLESLATEFILETREE_API FFileTreeOperationData;
	struct SIMPLESLATEFILETREE_API FFileOperation;
	struct SIMPLESLATEFILETREE_API FFileOperationWithTarget;
	struct SIMPLESLATEFILETREE_API FFileOperation_CopyTo;
	struct SIMPLESLATEFILETREE_API FFileOperation_Rename;
	struct SIMPLESLATEFILETREE_API FFileOperation_Delete;

	enum class EFileType : uint8
	{
		None,
		Invalid,
		File,
		Folder
	};

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
			return EFileExecutionCode{Value & Rhs.Value};
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

}