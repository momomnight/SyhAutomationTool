#pragma once
#include "Delegates/DelegateCombinations.h"

class SBlueprintNode;

//用于收集被选择的节点，使用多播为的是应多用个管理
DECLARE_DELEGATE_OneParam(FOnAddThisNodeToOuter, SBlueprintNode*);
DECLARE_DELEGATE_OneParam(FOnDeleteThisNodeFromOuter, SBlueprintNode*);

DECLARE_DELEGATE_OneParam(FOnUpdateForSelectedNodes, TSharedPtr<SBlueprintNode>);

DECLARE_DELEGATE_TwoParams(FOnAllSelectedNodesStartMove, const FGeometry&, const FPointerEvent&);
DECLARE_DELEGATE_TwoParams(FOnAllSelectedNodesMove, const FGeometry&, const FPointerEvent&);
DECLARE_DELEGATE_TwoParams(FOnAllSelectedNodesEndMove, const FGeometry&, const FPointerEvent&);
