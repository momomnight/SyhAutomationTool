#pragma once
#include "Widgets/SWidget.h"

class SIMPLESLATEFILETREE_API FFileTreeContextMenu
{
	friend class SFileTreeView;

	static void InitializeContextMenu(TWeakPtr<SWidget> FileTreeView);
	static TSharedPtr<SWidget> MakeWidget();
	static bool IsDragDroping();
	static void StartDragDrop();
	static void EndDragDrop();


	static bool bIsDragDroping;
};