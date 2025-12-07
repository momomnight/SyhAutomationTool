#include "ModalWindow/Base/SModalWindowBase.h"


#define LOCTEXT_NAMESPACE "SModalWindowBase"


void SModalWindowBase::Construct(const FArguments& InArgs)
{
	ShowArea = InArgs._ShowArea;
	EnsureArea = InArgs._EnsureArea;

	SWindow::Construct(
		SWindow::FArguments()
		.Title(InArgs._Title)
		.SizingRule(ESizingRule::Autosized)
		[
			SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.HAlign(HAlign_Left)
				.AutoHeight()
				[
					SNew(SScrollBox)
						+ SScrollBox::Slot()
						.HAlign(HAlign_Fill)
						[
							SNew(SBorder)		
							.BorderBackgroundColor(FLinearColor::Transparent)
							.Padding(FMargin(10.f, 0.f, 10.f, 0.f))
							[
								ShowArea.IsValid() ? ShowArea.ToSharedRef() : SNew(STextBlock).Text(LOCTEXT("ShowArea","Please add some widget."))
							]
						]
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					EnsureArea.IsValid() ? EnsureArea.ToSharedRef() : SNew(STextBlock).Text(LOCTEXT("ShowArea", "Please add a button."))
				]
		]
	);
}

void SModalWindowBase::CloseWindow()
{
	if (this->AsShared().ToSharedPtr() == FSlateApplication::Get().GetActiveModalWindow())
	{
		FSlateApplication::Get().GetActiveModalWindow()->RequestDestroyWindow();
	}
}


#undef LOCTEXT_NAMESPACE