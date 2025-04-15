
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
DECLARE_DELEGATE_OneParam(FOnRefreshFileTree, TSharedPtr<SlateFileTree::FFileTree_Folder>);

//用于执行具体操作
DECLARE_DELEGATE_TwoParams(FOnFileTreeContextMenuClicked, TSharedPtr<SWidget>, TWeakPtr<SlateFileTree::FFileTreeBase>);


//用于模态窗口
DECLARE_DELEGATE_RetVal(FReply, FOnLeftButtonClicked);
DECLARE_DELEGATE_RetVal(FReply, FOnRightButtonClicked);


//填充情景菜单
DECLARE_DELEGATE_OneParam(FSpawnMenuEntry, FMenuBuilder&);

//用于延迟生成FUIAction，主要是为了传入TWeakPtr<SWidget>参数
DECLARE_DELEGATE_RetVal_OneParam(FUIAction, FUIActionGenerator, TWeakPtr<SWidget>);
