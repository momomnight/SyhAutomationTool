// Copyright (C) RenZhai.2020.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FileTree/Core/SFileTreeWidget.h"

class SIMPLESLATEEXTEND_API SFolder :public SFileTreeWidget
{
public:
	virtual void Construct(const FArguments& InArgs, const SimpleSlateExtend::FFileList &FileList);

	const FSlateBrush* GetFileTypeICO() const;

public:
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);

public:
	void OnFileCliked(const FString InFilename);

private:
	TSharedPtr<class SExpandableArea> Area;
};