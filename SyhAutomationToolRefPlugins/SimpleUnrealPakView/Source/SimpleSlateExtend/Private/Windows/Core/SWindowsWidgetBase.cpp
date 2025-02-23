#include "Windows/Core/SWindowsWidgetBase.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "SWindowsWidgetBase"

SWindowsWidgetBase::SWindowsWidgetBase()
{

}

void SWindowsWidgetBase::Construct(const FArguments& InArgs)
{
	Window = InArgs._WidgetWindow;
	BoxSlot = InArgs._BoxSlot;
	OnSureDelegate = InArgs._OnSureDelegate;
	OnCancelDelegate = InArgs._OnCancelDelegate;

	if (!BoxSlot)
	{
		BoxSlot = SNew(SBox);
	}

	ChildSlot
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(2)
		[
			SNew(STextBlock)
			.Text(InArgs._Explain)
		]

		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(2)
		[
			SNew(SScrollBox)

			+ SScrollBox::Slot()
			[
				BoxSlot.ToSharedRef()
			]
		]

		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(2)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2)
			[
				SNew(SButton)
				.HAlign(HAlign_Left)
				.Text(InArgs._SureName)
				.OnClicked(this, &SWindowsWidgetBase::OnSure)
			]

			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2)
			[
				SNew(SButton)
				.HAlign(HAlign_Right)
				.Text(InArgs._CancelName)
				.OnClicked(this, &SWindowsWidgetBase::OnCancel)	
			]
		]
	];
}

FReply SWindowsWidgetBase::OnSure()
{
	OnSureDelegate.ExecuteIfBound();

	DestroyWindow();

	return FReply::Handled();
}

FReply SWindowsWidgetBase::OnCancel()
{
	OnCancelDelegate.ExecuteIfBound();

	DestroyWindow();

	return FReply::Handled();
}

void SWindowsWidgetBase::DestroyWindow()
{
	if (Window)
	{
		Window->RequestDestroyWindow();
	}
}

#undef LOCTEXT_NAMESPACE