#pragma once


namespace SimpleSlateFileTree
{
	struct SIMPLESLATEFILETREE_API FFileTree;
	struct SIMPLESLATEFILETREE_API FFileTree_Folder;
	struct SIMPLESLATEFILETREE_API FFileTree_File;
	struct SIMPLESLATEFILETREE_API FFileTreeBase;

	struct SIMPLESLATEFILETREE_API FFileTreeDragDefinition
	{
		TSharedPtr<FFileTreeBase> File;
		TSharedPtr<SWidget> Widget;
	};
}