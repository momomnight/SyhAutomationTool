#include "FileTree/SFolderWidget.h"

#include "Styling/SlateBrush.h"
#include "FileTree/SFileWidget.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SSpacer.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "Styling/AppStyle.h"


#define LOCTEXT_NAMESPACE "SFolderWidget"

void SFolderWidget::Construct(const FArguments& InArgs, const SimpleSlateFileTree::FFileTree_Folder& Root)
{
	TSharedPtr<SVerticalBox> FileArray = SNew(SVerticalBox);
	for (auto Temp : Root.GetChildren())
	{
		if (Temp->GetFileType() == SimpleSlateFileTree::EFileType::Folder)
		{
			FileArray->AddSlot()
				.AutoHeight()
				[
					SNew(SFolderWidget, *Temp->CastTo<SimpleSlateFileTree::FFileTree_Folder>())
				];
		}
		else if (Temp->GetFileType() == SimpleSlateFileTree::EFileType::File)
		{
			FileArray->AddSlot()
				.AutoHeight()
				[
					SNew(SFileWidget, *Temp->CastTo<SimpleSlateFileTree::FFileTree_File>())
				];
		}
	}

	TSharedRef<SWidget> Header =
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SNew(SImage)
			.Image(this, &SFolderWidget::GetFileIcon)
		]
		+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SNew(STextBlock)
			.Text(FText::Format(LOCTEXT("ParseFileTree", "{0}(folder)"), FText::FromString(Root.GetFullName())))
		];

	TSharedRef<SWidget> Body =
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SNew(SSpacer)
			.Size(FVector2D(20.f, 1.f))
		]
	+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			FileArray.ToSharedRef()
		];

	ChildSlot
		[
			SAssignNew(Area, SExpandableArea)
			.BorderBackgroundColor(FLinearColor::Transparent)
			.InitiallyCollapsed(false)
			.Padding(FMargin(0.f, 1.f, 0.f, 8.f))
			.HeaderContent()
			[
				Header
			]
			.BodyContent()
			[
				Body
			]
		];
}

const FSlateBrush* SFolderWidget::GetFileIcon() const
{
	return Area->IsExpanded() ? FAppStyle::Get().GetBrush(TEXT("SceneOutliner.FolderClosed"))
		: FAppStyle::Get().GetBrush(TEXT("SceneOutliner.FolderOpen"));
}



#undef LOCTEXT_NAMESPACE