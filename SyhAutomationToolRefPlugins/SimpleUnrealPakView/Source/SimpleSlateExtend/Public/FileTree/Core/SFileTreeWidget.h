// Copyright (C) RenZhai.2020.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "SimpleSlateExtendType.h"

class SIMPLESLATEEXTEND_API SFileTreeWidget :public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SFileTreeWidget)
		{}
		SLATE_EVENT(FSimpleDelegate, OnClickedDelegate)
		SLATE_EVENT(FSimpleOneStringParamDelegate, OnOneStringCliked)
		SLATE_EVENT(FSimpleGeometryDelegate, OnGeometryDelegate)
		SLATE_EVENT(FSimpleFileDragDelegate, OnFileDragDelegate)
		SLATE_EVENT(FSimpleDrawTwoStringParamDelegate,OnDragDelegate)

	SLATE_END_ARGS()

	SFileTreeWidget();

	virtual void Construct(const FArguments& InArgs, const SimpleSlateExtend::FFileList& FileList);

public:
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	
	virtual FReply OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent);

public:
	virtual void ResetDrag(bool bNewRrag);

protected:
	FSimpleDelegate OnClickedDelegate;
	FSimpleOneStringParamDelegate OnOneStringCliked;
	FSimpleFileDragDelegate OnFileDragDelegate;
	FSimpleGeometryDelegate OnGeometryDelegate;
	FSimpleDrawTwoStringParamDelegate OnDragDelegate;
	FString FullAssetPaths;
	bool bIsDrag;
};