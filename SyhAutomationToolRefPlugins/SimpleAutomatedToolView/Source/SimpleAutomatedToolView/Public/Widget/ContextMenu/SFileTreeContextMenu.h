#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTreeTypeFwd.h"
#include "Widget/ContextMenu/Base/SContextMenuWidget.h"
#include "SimpleAutomatedToolViewDelegateFactory.h"

struct FFileTreeContextMenuData
{
	using DelegateType = FOnFileTreeContextMenuClicked;
	using DataType = SimpleSlateFileTree::FFileTreeBase;
};


//情景菜单，对不同Widget右键唤出
class SFileTreeContextMenu : public SContextMenuWidget<FFileTreeContextMenuData>
{
public:
	using FContextMenuCommandMap = TMap<FText, FOnFileTreeContextMenuClicked>;

	SLATE_BEGIN_ARGS(SFileTreeContextMenu) {}

	//注意逗号
	SLATE_ARGUMENT(FContextMenuCommandMap, CommandMap);

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);


};

