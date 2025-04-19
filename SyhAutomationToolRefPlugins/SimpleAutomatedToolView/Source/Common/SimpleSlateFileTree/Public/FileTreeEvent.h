
#pragma once
#include "Delegates/DelegateCombinations.h"//Core--DECLARE_DELEGATE
#include "Templates/SharedPointer.h"//Core--TSharedPtr
#include "Layout/Geometry.h"//SlateCore--FGeometry
#include "Input/Events.h"//SlateCore--FPointerEvent
#include "FileTreeTypeFwd.h"

//FFileTreeBase
DECLARE_DELEGATE_OneParam(FOperationWidget, TSharedPtr<SWidget>);

//拖拽
//DECLARE_DELEGATE(FOnStartDragDrop);
DECLARE_DELEGATE(FOnEndDragDrop);

//唤醒情景菜单等操作
DECLARE_DELEGATE_OneParam(FOnRefreshFileTree, TSharedPtr<SlateFileTree::FFileTreeBase>);

//填充情景菜单
DECLARE_DELEGATE_OneParam(FSpawnMenuEntry, FMenuBuilder&);

//用于延迟生成FUIAction，主要是为了传入TWeakPtr<SWidget>参数
DECLARE_DELEGATE_RetVal_OneParam(FUIAction, FUIActionGenerator, TWeakPtr<SWidget>);
