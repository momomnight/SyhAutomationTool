#include "ModalWindow/SFileTreeModalWindow.h"

#define LOCTEXT_NAMESPACE "SFileTreeModalWindow"

void SFileTreeModalWindow::Construct(const FArguments& InArgs)
{
	EventExplain = InArgs._EventExplain;
	Title = InArgs._Title;

	OnLeftButtonClicked = InArgs._OnLeftButtonClicked;
	OnRightButtonClicked = InArgs._OnRightButtonClicked;

	SModalWindowBase::Construct(SModalWindowBase::FArguments());
}

void SFileTreeModalWindow::CustomizeTitle()
{
	SAssignNew(TitleArea, STextBlock)
	.Text(Title);
}

void SFileTreeModalWindow::CustomizeShowArea()
{
	SAssignNew(ShowArea, SBox)
	[
		SNew(STextBlock)
		.Text(EventExplain)
	];
}

void SFileTreeModalWindow::CustomizeEnsureArea()
{
	SAssignNew(EnsureArea, SHorizontalBox)
	+ SHorizontalBox::Slot()
	.HAlign(HAlign_Center)
	[
		SNew(SButton)
		.Text(LOCTEXT("SFileTreeModalWindow","Yes"))
		.OnClicked(OnLeftButtonClicked)
	]
	+ SHorizontalBox::Slot()
	.HAlign(HAlign_Center)
	[
		SNew(SButton)
		.Text(LOCTEXT("SFileTreeModalWindow", "No"))
		.OnClicked(OnRightButtonClicked)
	];
}


#undef LOCTEXT_NAMESPACE