#pragma once

#include "CoreMinimal.h"
#include "FileTreeType.h"

//多播绑定，可生成多个菜单按钮
DECLARE_MULTICAST_DELEGATE_OneParam(FSpawnMenuEntries, FMenuBuilder&);



namespace SimpleAutomatedToolViewDelegateFactory
{
	//WidgetReflector
	FMenuExtensionDelegate CreateMenuEntryDelegate_WidgetReflector(const FName& InExtensionHook, TSharedPtr<FUICommandInfo> InCommandInfo);
	FUIAction CreateUIActionDelegate_WidgetReflector();



	//ContextMenu
	FOnFileTreeContextMenuClicked CreateFileTreeContextMenuDelegate_Delete();
	FOnFileTreeContextMenuClicked CreateFileTreeContextMenuDelegate_Copy();
	FOnFileTreeContextMenuClicked CreateFileTreeContextMenuDelegate_Paste();

	FOnFileTreeDragDropContextMenuClicked CreateFileTreeDragDropContextMenuDelegate_MoveTo();
	FOnFileTreeDragDropContextMenuClicked CreateFileTreeDragDropContextMenuDelegate_CopyTo();

}