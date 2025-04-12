#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTreeTypeFwd.h"
#include "ContextMenu/Base/SContextMenuWidget.h"
#include "FileTreeEvent.h"

struct FFileTreeDragDropContextMenuData : FContextMenuData<FOnFileTreeDragDropContextMenuClicked, 
	SimpleSlateFileTree::FFileTreeDragDropDefinition>
{
};

//情景菜单，对不同Widget右键唤出
class SFileTreeDragDropContextMenu : public SContextMenuWidget<FFileTreeDragDropContextMenuData>
{
public:
	using Super = SContextMenuWidget<FFileTreeDragDropContextMenuData>;
	using FContextMenuCommandMap = typename SContextMenuWidget<FFileTreeDragDropContextMenuData>::FContextMenuCommandMap;

	SLATE_BEGIN_ARGS(SFileTreeDragDropContextMenu) {}

	//注意逗号
	SLATE_ARGUMENT(FContextMenuCommandMap, CommandMap);

	SLATE_ARGUMENT(TSharedPtr<SWidget>, ParentWidget)

	SLATE_END_ARGS()

	void SIMPLESLATEFILETREE_API Construct(const FArguments& InArgs);

};

