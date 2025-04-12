#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTreeTypeFwd.h"
#include "ContextMenu/Base/SContextMenuWidget.h"
#include "FileTreeEvent.h"

struct FFileTreeContextMenuData : FContextMenuData<FOnFileTreeContextMenuClicked, TWeakPtr<SimpleSlateFileTree::FFileTreeBase>>
{
};

//情景菜单，对不同Widget右键唤出
class SFileTreeContextMenu : public SContextMenuWidget<FFileTreeContextMenuData>
{
public:
	using Super = SContextMenuWidget<FFileTreeContextMenuData>;
	using FContextMenuCommandMap = typename SContextMenuWidget<FFileTreeContextMenuData>::FContextMenuCommandMap;

	SLATE_BEGIN_ARGS(SFileTreeContextMenu) {}

	//注意逗号
	SLATE_ARGUMENT(FContextMenuCommandMap, CommandMap);

	SLATE_ARGUMENT(TSharedPtr<SWidget>, ParentWidget);

	SLATE_END_ARGS()

	void SIMPLESLATEFILETREE_API Construct(const FArguments& InArgs);

};

