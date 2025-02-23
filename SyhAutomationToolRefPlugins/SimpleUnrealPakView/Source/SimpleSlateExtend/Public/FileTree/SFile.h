// Copyright (C) RenZhai.2020.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FileTree/Core/SFileTreeWidget.h"

class SIMPLESLATEEXTEND_API SFile :public SFileTreeWidget
{
public:
	virtual void Construct(const FArguments& InArgs, const SimpleSlateExtend::FFileList &FileList);

	FReply OnButtonClicked();

public:
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
};