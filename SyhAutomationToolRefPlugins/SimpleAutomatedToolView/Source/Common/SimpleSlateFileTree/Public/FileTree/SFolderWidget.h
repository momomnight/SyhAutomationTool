#pragma once


#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "FileTree/FileParse.h"


class SFolderWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SFolderWidget){}


	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, const SimpleSlateFileTree::FFileTree_Folder& FileTree);

	const struct FSlateBrush* GetFileIcon() const;

private:
	TSharedPtr<class SExpandableArea> Area;
};