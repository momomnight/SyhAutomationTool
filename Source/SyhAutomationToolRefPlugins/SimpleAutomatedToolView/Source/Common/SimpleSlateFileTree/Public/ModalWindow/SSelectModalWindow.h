#pragma once
#include "ModalWindow/Base/SModalWindowBase.h"

#define LOCTEXT_NAMESPACE "SSelectModalWindow"


//用于文件树Copy、Rename、CopyTo等
template <class ResultType>
class SIMPLESLATEFILETREE_API SSelectModalWindow : public SModalWindowBase
{

public:
	DECLARE_DELEGATE_TwoParams(FOnLeftButtonClicked, TSharedPtr<SWidget>, TSharedPtr<ResultType>);
	DECLARE_DELEGATE_TwoParams(FOnRightButtonClicked, TSharedPtr<SWidget>, TSharedPtr<ResultType>);

	SLATE_BEGIN_ARGS(SSelectModalWindow) {}

	SLATE_ARGUMENT(FText, Title)

	SLATE_ARGUMENT(TSharedPtr<SWidget>, ShowWidget)

	SLATE_EVENT(FOnLeftButtonClicked, OnLeftButtonClicked)

	SLATE_EVENT(FOnRightButtonClicked, OnRightButtonClicked)

	SLATE_END_ARGS()



	void Construct(const FArguments& InArgs, TSharedPtr<ResultType> OutResult)
	{
		Result = OutResult;
		ExternalWidget = InArgs._ShowWidget;
		OnLeftButtonClicked = InArgs._OnLeftButtonClicked;
		OnRightButtonClicked = InArgs._OnRightButtonClicked;

		TSharedRef<SWidget> Ensure = SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.HAlign(HAlign_Center)
			[
				SNew(SButton)
					.Text(LOCTEXT("SSelectModalWindow.Yes", "Yes"))
					.OnClicked(FOnClicked::CreateSP(this, &SSelectModalWindow::Yes))
			]
			+ SHorizontalBox::Slot()
			.HAlign(HAlign_Center)
			[
				SNew(SButton)
					.Text(LOCTEXT("SSelectModalWindow.No", "No"))
					.OnClicked(FOnClicked::CreateSP(this, &SSelectModalWindow::No))
			];

		SModalWindowBase::Construct(SModalWindowBase::FArguments()
			.EnsureArea(Ensure)
			.ShowArea(InArgs._ShowWidget)
			.Title(InArgs._Title)
		);
	}

	FReply Yes()
	{
		OnLeftButtonClicked.ExecuteIfBound(ExternalWidget, Result);
		CloseWindow();
		return FReply::Handled();
	}

	FReply No()
	{
		OnRightButtonClicked.ExecuteIfBound(ExternalWidget, Result);
		CloseWindow();
		return FReply::Handled();
	}

protected:
	TSharedPtr<ResultType> Result;
	TSharedPtr<SWidget> ExternalWidget;
	FOnLeftButtonClicked OnLeftButtonClicked;
	FOnRightButtonClicked OnRightButtonClicked;
};

#undef LOCTEXT_NAMESPACE