// Copyright (C) RenZhai.2020.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/SWindow.h"
#include "SimpleSlateExtendType.h"
#include "Widgets/Layout/SBox.h"

#define LOCTEXT_NAMESPACE "SWindowsWidgetBase.h"

class SBox;
class SIMPLESLATEEXTEND_API SWindowsWidgetBase :public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SWindowsWidgetBase)
		:_Explain(LOCTEXT("WindowsWidgetBase_Explain", "Here you can write the content that needs to be prompted."))
		,_SureName(LOCTEXT("WindowsWidgetBase_Sure", "Sure"))
		,_CancelName(LOCTEXT("WindowsWidgetBase_Cancel", "Cancel"))
		{}

		SLATE_ARGUMENT(TSharedPtr<SWindow>, WidgetWindow)
		SLATE_ARGUMENT(TSharedPtr<SBox>, BoxSlot)
		SLATE_ARGUMENT(FText, Explain)
		SLATE_ARGUMENT(FText, SureName)
		SLATE_ARGUMENT(FText, CancelName)
		
		SLATE_EVENT(FSimpleDelegate, OnSureDelegate)
		SLATE_EVENT(FSimpleDelegate, OnCancelDelegate)

	SLATE_END_ARGS()

	SWindowsWidgetBase();

	virtual void Construct(const FArguments& InArgs);

public:
	virtual FReply OnSure();
	virtual FReply OnCancel();

public:
	virtual void DestroyWindow();

protected:
	TSharedPtr<SBox> BoxSlot;
	TSharedPtr<SWindow> Window;
	FSimpleDelegate OnSureDelegate;
	FSimpleDelegate OnCancelDelegate;

public:
	template<class T>
	static void CreateMessage(
		const FText& InExplain,
		const FText& InSureName,
		const FText& InCancelName,
		const FSimpleDelegate &InSureDelegate,
		const FSimpleDelegate &InCancelDelegate);

	template<class T>
	static void CreateMessage(
		const FText &InExplain,
		const FText& InSureName, 
		const FText& InCancelName,
		const FSimpleDelegate &InSureDelegate,
		const FSimpleDelegate &InCancelDelegate,
		TSharedPtr<SBox> InBox,
		TSharedPtr<T>& OutFileWidnw);

	template<class T>
	static void CreateMessage(
		const FText& InExplain,
		TSharedPtr<SBox> InBox,
		TSharedPtr<T>& OutFileWidnw)
	{
		return CreateMessage<T>(
			InExplain,
			LOCTEXT("SWindowsWidgetBase_SureName", "Sure"),
			LOCTEXT("SWindowsWidgetBase_CancelName", "Cancel"),
			FSimpleDelegate::CreateLambda([]() {}),
			FSimpleDelegate::CreateLambda([]() {}),
			InBox,
			OutFileWidnw);
	}
};

template<class T>
static void SWindowsWidgetBase::CreateMessage(
	const FText& InExplain,
	const FText& InSureName,
	const FText& InCancelName,
	const FSimpleDelegate &InSureDelegate,
	const FSimpleDelegate &InCancelDelegate)
{
	TSharedPtr<T> OutFileWidnw;
	return CreateMessage<T>(
		InExplain,
		LOCTEXT("SWindowsWidgetBase_SureName", "Sure"),
		LOCTEXT("SWindowsWidgetBase_CancelName", "Cancel"),
		InSureDelegate,
		InCancelDelegate,
		nullptr,
		OutFileWidnw);
}

template<class T>
void SWindowsWidgetBase::CreateMessage(
	const FText& InExplain,
	const FText& InSureName,
	const FText& InCancelName,
	const FSimpleDelegate &InSureDelegate,
	const FSimpleDelegate &InCancelDelegate,
	TSharedPtr<SBox> InBox,TSharedPtr<T> &OutFileWidnw)
{
	TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(LOCTEXT("WindowsWidgetBase_Windows", "Generate specific windows"))
		.SizingRule(ESizingRule::Autosized);

	Window->SetContent
	(
		SAssignNew(OutFileWidnw, T)
		.WidgetWindow(Window)
		.Explain(InExplain)
		.SureName(InSureName)
		.CancelName(InCancelName)
		.OnSureDelegate(InSureDelegate)
		.OnCancelDelegate(InCancelDelegate)
		.BoxSlot(InBox)
	);

	FSlateApplication::Get().AddModalWindow(Window, nullptr, false);
}

#undef LOCTEXT_NAMESPACE