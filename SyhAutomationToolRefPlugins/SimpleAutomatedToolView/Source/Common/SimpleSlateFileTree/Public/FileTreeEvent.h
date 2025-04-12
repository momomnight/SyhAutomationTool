
#pragma once
#include "Delegates/DelegateCombinations.h"//Core--DECLARE_DELEGATE
#include "Templates/SharedPointer.h"//Core--TSharedPtr
#include "Layout/Geometry.h"//SlateCore--FGeometry
#include "Input/Events.h"//SlateCore--FPointerEvent
#include "FileTreeTypeFwd.h"

//FFileTreeBase
DECLARE_DELEGATE_OneParam(FOperationWidget, TSharedPtr<SWidget>);


//唤醒情景菜单等操作
DECLARE_DELEGATE_RetVal_OneParam(FTransform2D, FOnGetCurrentContextMenuTransform, const FPointerEvent&);

//用于执行具体操作
DECLARE_DELEGATE_TwoParams(FOnFileTreeContextMenuClicked, TWeakPtr<SWidget>, TWeakPtr<SimpleSlateFileTree::FFileTreeBase>);
DECLARE_DELEGATE_TwoParams(FOnFileTreeDragDropContextMenuClicked, TWeakPtr<SWidget>, SimpleSlateFileTree::FFileTreeDragDropDefinition);


//用于操作父级控件

