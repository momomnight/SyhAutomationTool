#pragma once


namespace SlateFileTree
{
	struct SIMPLESLATEFILETREE_API FFileTree;
	struct SIMPLESLATEFILETREE_API FFileTree_Folder;
	struct SIMPLESLATEFILETREE_API FFileTree_File;
	struct SIMPLESLATEFILETREE_API FFileTreeBase;

	enum class EFileType : uint8
	{
		None,
		Invalid,
		File,
		Folder
	};


}