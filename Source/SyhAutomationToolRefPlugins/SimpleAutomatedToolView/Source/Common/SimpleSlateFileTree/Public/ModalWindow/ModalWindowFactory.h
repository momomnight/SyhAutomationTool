#pragma once
#include "Internationalization/Text.h"
#include "Templates/SharedPointer.h"
#include "ModalWindow/SMessageModalWindow.h"
#include "ModalWindow/SSelectModalWindow.h"
#include "Framework/Application/SlateApplication.h"

#define LOCTEXT_NAMESPACE "ModalWindowFactory"

namespace ModalWindowFactory
{
	enum EMessageType
	{
		None,
		Display,
		Warning,
		Error
	};

	template <EMessageType MsgType = EMessageType::None>
	void SIMPLESLATEFILETREE_API CreateMessage(const FText& InExplain)
	{
		TSharedRef<SWindow> Window =
			SNew(SMessageModalWindow)
			.EventExplain(InExplain);
		FSlateApplication::Get().AddModalWindow(Window, nullptr, false);
	}
	template <> void SIMPLESLATEFILETREE_API CreateMessage<EMessageType::Display>(const FText& InExplain)
	{
		TSharedRef<SWindow> Window =
			SNew(SMessageModalWindow)
			.EventExplain(FText::Format(LOCTEXT("Message.Display","Display: {0}"), InExplain));
		FSlateApplication::Get().AddModalWindow(Window, nullptr, false);
	}
	template <> void SIMPLESLATEFILETREE_API CreateMessage<EMessageType::Warning>(const FText& InExplain)
	{
		TSharedRef<SWindow> Window =
			SNew(SMessageModalWindow)
			.EventExplain(FText::Format(LOCTEXT("Message.Warning", "Warning: {0}"), InExplain))
			.ColorAndOpacity(FLinearColor::Yellow);
		FSlateApplication::Get().AddModalWindow(Window, nullptr, false);
	}
	template <> void SIMPLESLATEFILETREE_API CreateMessage<EMessageType::Error>(const FText& InExplain)
	{
		TSharedRef<SWindow> Window =
			SNew(SMessageModalWindow)
			.EventExplain(FText::Format(LOCTEXT("Message.Error", "Error: {0}"), InExplain))
			.ColorAndOpacity(FLinearColor::Red);
		FSlateApplication::Get().AddModalWindow(Window, nullptr, false);
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	constexpr auto Cancel = [](TSharedPtr<SWidget> InWidget, TSharedPtr<FString> OutResult) { OutResult->Empty(); };


	template<class ResultType>
	void SIMPLESLATEFILETREE_API ClearTemplateVariable(TSharedPtr<ResultType> OutResult);

	template <> void SIMPLESLATEFILETREE_API ClearTemplateVariable<FString>(TSharedPtr<FString> OutResult){ OutResult->Empty(); }
	template <> void SIMPLESLATEFILETREE_API ClearTemplateVariable<bool>(TSharedPtr<bool> OutResult) { *OutResult = false; }


	template<class ResultType>
	constexpr auto CancelLambda = [](TSharedPtr<SWidget> InWidget, TSharedPtr<ResultType> OutResult)
		{
			ClearTemplateVariable<ResultType>(OutResult);
		};



	template <class ResultType>
	void SIMPLESLATEFILETREE_API CreateSelect(const FText& InTitile, const FText& InExplain, TSharedPtr<ResultType> OutResult);

	//内部链接性


	//从模态窗口获取字符串
	template <>
	void SIMPLESLATEFILETREE_API CreateSelect<FString>(const FText& InTitile, const FText& InHintText, TSharedPtr<FString> OutResult)
	{
		constexpr auto GetText = [](TSharedPtr<SWidget> InWidget, TSharedPtr<FString> OutResult)
			{
				OutResult->Empty();
				if (TSharedPtr<SEditableTextBox> Box = StaticCastSharedPtr<SEditableTextBox>(InWidget))
				{
					*OutResult = Box->GetText().ToString();
				}
			};

		TSharedPtr<SEditableTextBox> Box = SNew(SEditableTextBox).MinDesiredWidth(50.f).HintText(InHintText);

		TSharedRef<SWindow> Window =
			SNew(SSelectModalWindow<FString>, OutResult)
			.Title(InTitile)
			.ShowWidget(Box)
			.OnLeftButtonClicked(SSelectModalWindow<FString>::FOnLeftButtonClicked::CreateLambda(GetText))
			.OnRightButtonClicked(SSelectModalWindow<FString>::FOnRightButtonClicked::CreateLambda(CancelLambda<FString>));
		FSlateApplication::Get().AddModalWindow(Window, nullptr, false);
	}

	template <>
	void SIMPLESLATEFILETREE_API CreateSelect<bool>(const FText& InTitile, const FText& InExplain, TSharedPtr<bool> OutResult)
	{
		constexpr auto GetText = [](TSharedPtr<SWidget> InWidget, TSharedPtr<bool> OutResult)
			{
				*OutResult = true;
			};

		TSharedPtr<SBorder> Border =
			SNew(SBorder)
			[
				SNew(STextBlock)
				.Text(InExplain)
			];

		TSharedRef<SWindow> Window =
			SNew(SSelectModalWindow<bool>, OutResult)
			.Title(InTitile)
			.ShowWidget(Border)
			.OnLeftButtonClicked(SSelectModalWindow<bool>::FOnLeftButtonClicked::CreateLambda(GetText))
			.OnRightButtonClicked(SSelectModalWindow<bool>::FOnRightButtonClicked::CreateLambda(CancelLambda<bool>));
		FSlateApplication::Get().AddModalWindow(Window, nullptr, false);
	}
}

#undef LOCTEXT_NAMESPACE