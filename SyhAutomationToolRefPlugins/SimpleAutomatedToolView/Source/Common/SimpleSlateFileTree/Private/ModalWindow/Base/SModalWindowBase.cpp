#include "ModalWindow/Base/SModalWindowBase.h"


#define LOCTEXT_NAMESPACE "SModalWindowBase"


void SModalWindowBase::Construct(const FArguments& InArgs)
{
	CustomizeContent();

	ChildSlot
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			TitleArea.ToSharedRef()
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SScrollBox)
				+ SScrollBox::Slot()
				[
					ShowArea.ToSharedRef()
				]
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			EnsureArea.ToSharedRef()
		]

	];
}

void SModalWindowBase::CustomizeTitle()
{
	SAssignNew(TitleArea, STextBlock)
	.Text(LOCTEXT("ModalWindowBase.Title", "Title"));
}

void SModalWindowBase::CustomizeShowArea()
{
	SAssignNew(ShowArea, STextBlock)
		.Text(LOCTEXT("ModalWindowBase.ShowArea", "The area used to show some message."));
}

void SModalWindowBase::CustomizeEnsureArea()
{
	SAssignNew(EnsureArea, SButton)
		.Text(LOCTEXT("ModalWindowBase.EnsureArea", "Ok"));
}

void SModalWindowBase::CustomizeContent()
{
	CustomizeTitle();
	CustomizeShowArea();
	CustomizeEnsureArea();	

	if (!TitleArea.IsValid())
	{
		SModalWindowBase::CustomizeTitle();
	}

	if (!ShowArea.IsValid())
	{
		SModalWindowBase::CustomizeShowArea();
	}

	if (!EnsureArea.IsValid())
	{
		SModalWindowBase::CustomizeEnsureArea();
	}

}


#undef LOCTEXT_NAMESPACE