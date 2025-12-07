#pragma once
#include "PropertyWidget/SPropertyWidget.h"


class SIMPLEPROGRAMOBJECTREFLECTOR_API STextPropertyWidget : public SPropertyWidget
{
public:
	using Super = SPropertyWidget;

	STextPropertyWidget();

	DECLARE_DELEGATE_RetVal(FText, FOnGetTextValue);

	SLATE_BEGIN_ARGS(STextPropertyWidget)
		{
		}

		SLATE_EVENT(FOnGetTextValue, OnGetTextValue)

		SLATE_EVENT(FOnTextCommitted, OnTextValueCommitted)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

public:
	FOnGetTextValue& GetOnGetTextValue()
	{
		return OnGetTextValue;
	}

	FOnTextCommitted& GetOnTextValueCommitted()
	{
		return OnTextValueCommitted;
	}

protected:
	FText GetDisplayText() const;
	void OnTextCommitted(const FText& NewText, ETextCommit::Type CommitType);

protected:
	FOnGetTextValue OnGetTextValue;
	FOnTextCommitted OnTextValueCommitted;
};