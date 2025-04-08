#include "Widget/DetailPanel/Automated/SAutomatedDetailEditorWidget.h"
#include "Widget/DetailPanel/Automated/SAutomatedBlueprintOutline.h"
#include "Widget/DetailPanel/Automated/SAutomatedFileDirectory.h"
#include "Widgets/SOverlay.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

SAutomatedDetailEditorWidget::SAutomatedDetailEditorWidget()
{
}

void SAutomatedDetailEditorWidget::Construct(const FArguments& InArgs)
{

	TSharedRef<SWidget> FileDirectory = 
		SNew(SBorder)
		.Padding(3.f)
		[
			SNew(SAutomatedFileDirectory)
		];
	TSharedRef<SWidget> ViewGraph =
		SNew(SBorder)
		.Padding(3.f)
		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
			[
				SNew(SImage)
			]
		];



	TSharedRef<SWidget> BlueprintOutline = 
		SNew(SBorder)
		.Padding(3.f)
		[
			SNew(SAutomatedBlueprintOutline)
			.OnCommandButtonClicked(this, &SAutomatedDetailEditorWidget::OnCommandButtonClicked)
		];


	ChildSlot
	[
		SNew(SOverlay)
		+ SOverlay::Slot()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.HAlign(HAlign_Fill)
			.FillWidth(0.2f)
			[
				FileDirectory
			]
			+ SHorizontalBox::Slot()
			.HAlign(HAlign_Fill)
			.FillWidth(0.6f)
			[
				ViewGraph
			]
			+ SHorizontalBox::Slot()
			.HAlign(HAlign_Fill)
			.FillWidth(0.2f)
			[
				BlueprintOutline
			]
		]
	];
}

void SAutomatedDetailEditorWidget::OnCommandButtonClicked(ECommandProtocol InProtocol)
{
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
