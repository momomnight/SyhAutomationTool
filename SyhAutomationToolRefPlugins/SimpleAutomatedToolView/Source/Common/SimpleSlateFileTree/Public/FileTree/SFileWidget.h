#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"



class SFileWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SFileWidget) {}


	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, const struct SimpleSlateFileTree::FFileTree_File& InFile);

	FReply OnClicked();

private:
	FString AssetPaths;
};