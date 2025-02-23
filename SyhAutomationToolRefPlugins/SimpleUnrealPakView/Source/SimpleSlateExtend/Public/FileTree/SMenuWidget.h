// Copyright (C) RenZhai.2020.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTree/FileParsing.h"

class SIMPLESLATEEXTEND_API SMenuWidget :public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMenuWidget)
		{}

		SLATE_ARGUMENT(TArray<FText>,MenuNames)
		SLATE_ARGUMENT(SimpleSlateExtend::EFileType,FileType)

		SLATE_EVENT(FSimpleTwoStringParamDelegate, OnOneStringCliked)
	SLATE_END_ARGS()

	SMenuWidget();

	void Construct(const FArguments& InArgs);

	TSharedRef<SWidget> BuildMenuWidget(SimpleSlateExtend::EFileType InType,const TArray<FText> &InMenuNames);
	void SetNewAssetPath(const FString& InNewAssetPath) { AssetPath = InNewAssetPath; }

public:
	virtual FReply OnMenuClicked(SimpleSlateExtend::EFileType InType,const FString InMenuName);

public:
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent);

protected:
	FSimpleTwoStringParamDelegate OnOneStringCliked;
	TSharedPtr<SVerticalBox> VerticalBox;
	TArray<FText> MenuNames;
	FString AssetPath;
};