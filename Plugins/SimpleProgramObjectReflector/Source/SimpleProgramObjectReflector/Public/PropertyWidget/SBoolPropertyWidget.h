#pragma once
#include "PropertyWidget/SPropertyWidget.h"

class SIMPLEPROGRAMOBJECTREFLECTOR_API SBoolPropertyWidget : public SPropertyWidget
{
public:
	using Super = SPropertyWidget;

	SBoolPropertyWidget();

	DECLARE_DELEGATE_OneParam(FOnBoolValueChanged, bool);
	DECLARE_DELEGATE_RetVal(bool, FOnGetBoolValue);

	SLATE_BEGIN_ARGS(SBoolPropertyWidget)
		{

		}
	SLATE_EVENT(FOnBoolValueChanged, OnBoolValueChanged)
	SLATE_EVENT(FOnGetBoolValue, OnGetBoolValue)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

public:
	FOnBoolValueChanged& GetOnBoolValueChanged()
	{
		return OnBoolValueChanged;
	}

	FOnGetBoolValue& GetOnGetBoolValue()
	{
		return OnGetBoolValue;
	}

protected:
	void OnCheckStateChanged(ECheckBoxState InCheckState);
	ECheckBoxState GetCheckState();

protected:

	FOnGetBoolValue OnGetBoolValue;
	FOnBoolValueChanged OnBoolValueChanged;
};