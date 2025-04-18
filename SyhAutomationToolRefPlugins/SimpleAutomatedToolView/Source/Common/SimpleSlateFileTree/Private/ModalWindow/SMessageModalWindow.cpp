#include "ModalWindow/SMessageModalWindow.h"

#define LOCTEXT_NAMESPACE "SMessageModalWindow"

void SMessageModalWindow::Construct(const FArguments& InArgs)
{
	TSharedRef<SWidget> Show = 
		SNew(SBox)
		[
			SNew(STextBlock)
				.Text(InArgs._EventExplain)
				.ColorAndOpacity(InArgs._ColorAndOpacity)
		];

	TSharedRef<SWidget> Ensure =
		SNew(SButton).OnClicked(FOnClicked::CreateSP(this, &SMessageModalWindow::Ok))
		[
			SNew(STextBlock)
				.Text(LOCTEXT("MessageModalWindow.EnsureArea", "Ok"))
		];;
	SModalWindowBase::Construct(SModalWindowBase::FArguments()
		.Title(LOCTEXT("MessageModalWindow.Title","Message"))
		.ShowArea(Show)
		.EnsureArea(Ensure)
	);
}


FReply SMessageModalWindow::Ok()
{
	CloseWindow();
	return FReply::Handled();
}


#undef LOCTEXT_NAMESPACE