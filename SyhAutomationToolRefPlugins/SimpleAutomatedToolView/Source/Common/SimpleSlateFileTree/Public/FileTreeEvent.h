
#pragma once
#include "Delegates/DelegateCombinations.h"//Core--DECLARE_DELEGATE
#include "Templates/SharedPointer.h"//Core--TSharedPtr
#include "Layout/Geometry.h"//SlateCore--FGeometry
#include "Input/Events.h"//SlateCore--FPointerEvent
#include "FileTreeTypeFwd.h"

//FFileTreeBase
DECLARE_DELEGATE_OneParam(FOperationWidget, TSharedPtr<SWidget>);


DECLARE_DELEGATE_OneParam(FOnLeftMouseKeyClick, TSharedPtr<SimpleSlateFileTree::FFileTreeBase>);
DECLARE_DELEGATE_ThreeParams(FOnRightMouseKeyClick, TSharedPtr<SimpleSlateFileTree::FFileTreeBase>, const FGeometry&, const FPointerEvent&);

DECLARE_DELEGATE_FourParams(FOnFileTreeWidgetDrag, const FGeometry&, const FDragDropEvent&, SimpleSlateFileTree::FFileTreeDragDefinition, 
	SimpleSlateFileTree::FFileTreeDragDefinition);