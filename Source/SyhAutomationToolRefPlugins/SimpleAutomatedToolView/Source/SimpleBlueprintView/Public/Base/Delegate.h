#pragma once
#include "Delegates/DelegateCombinations.h"

class SBlueprintNodeWidget;

//用于收集被选择的节点，使用多播为的是应多用个管理
DECLARE_DELEGATE_OneParam(FOnAddThisNodeToOuter, SBlueprintNodeWidget*);
DECLARE_DELEGATE_OneParam(FOnDeleteThisNodeFromOuter, SBlueprintNodeWidget*);

DECLARE_DELEGATE_OneParam(FOnUpdateForSelectedNodes, TSharedPtr<SBlueprintNodeWidget>);

DECLARE_DELEGATE_TwoParams(FOnAllSelectedNodesStartMove, const FGeometry&, const FPointerEvent&);
DECLARE_DELEGATE_TwoParams(FOnAllSelectedNodesMove, const FGeometry&, const FPointerEvent&);
DECLARE_DELEGATE_TwoParams(FOnAllSelectedNodesEndMove, const FGeometry&, const FPointerEvent&);
