#include "Widget/DetailPanel/Automated/SAutomatedDetailEditorWidget.h"
#include "Widget/DetailPanel/Automated/SAutomatedBlueprintOutline.h"
#include "Widget/DetailPanel/Automated/SAutomatedFileDirectory.h"
#include "Widgets/SOverlay.h"
SAutomatedDetailEditorWidget::SAutomatedDetailEditorWidget()
{
}

void SAutomatedDetailEditorWidget::Construct(const FArguments& InArgs)
{

	TSharedRef<SWidget> FileDirectory = 
		SNew(SAutomatedFileDirectory);

	TSharedRef<SWidget> ViewGraph =
		SNew(SScrollBox)
		+ SScrollBox::Slot()
		[
			SNew(SImage)
		];


	TSharedRef<SWidget> BlueprintOutline = 
		SNew(SAutomatedBlueprintOutline)
		.OnCommandButtonClicked(this, &SAutomatedDetailEditorWidget::OnCommandButtonClicked);

	ChildSlot
	[
		SNew(SOverlay)
		+ SOverlay::Slot()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				FileDirectory
			]
			+ SHorizontalBox::Slot()
			.FillWidth(1.f)
			[
				ViewGraph
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				BlueprintOutline
			]
		]
	];
}

void SAutomatedDetailEditorWidget::OnCommandButtonClicked(ECommandProtocol InProtocol)
{
}
