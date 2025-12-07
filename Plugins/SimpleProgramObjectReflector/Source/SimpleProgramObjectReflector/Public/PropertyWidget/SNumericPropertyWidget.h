#pragma once
#include "PropertyWidget/SPropertyWidget.h"
#include "Widgets/Input/SNumericEntryBox.h"

template <class NumericType>
class SIMPLEPROGRAMOBJECTREFLECTOR_API SNumericPropertyWidget : public SPropertyWidget
{
public:
	using Super = SPropertyWidget;
	using OptionalValueAttribute = TAttribute<TOptional<NumericType>>;
	using OptionalValue = TOptional<NumericType>;

	DECLARE_DELEGATE_OneParam(FOnChangeValue, NumericType);
	DECLARE_DELEGATE_RetVal(TOptional<NumericType>, FOnGetValue);

	SNumericPropertyWidget()
	{
	}

	SLATE_BEGIN_ARGS(SNumericPropertyWidget)
		{

		}

	SLATE_EVENT(FOnChangeValue, OnChangeValue);

	SLATE_EVENT(FOnGetValue, OnGetValue);


	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs)
	{
		OnChangeValue = InArgs._OnChangeValue;
		OnGetValue = InArgs._OnGetValue;

		ChildSlot
		[
			SAssignNew(NumericEntryBox, SNumericEntryBox<NumericType>)
				.OnValueCommitted(SNumericEntryBox<NumericType>::FOnValueCommitted::CreateSP(this,
					&SNumericPropertyWidget<NumericType>::OnValueCommitted))
				.Value(OptionalValueAttribute::Create(OptionalValueAttribute::FGetter::CreateSP(this,
					&SNumericPropertyWidget<NumericType>::OnGetOptionalValue)))
		];
	}

	FOnChangeValue& GetOnChangeValue()
	{
		return OnChangeValue;
	}

	FOnGetValue& GetOnGetValue()
	{
		return OnGetValue;
	}

protected:
	void OnValueCommitted(NumericType NewValue, ETextCommit::Type InCommittedTextType)
	{
		OnChangeValue.ExecuteIfBound(NewValue);
	}

	OptionalValue OnGetOptionalValue()
	{
		if (OnGetValue.IsBound())
		{
			return OnGetValue.Execute();
		}
		return OptionalValue();
	}

protected:
	FOnChangeValue OnChangeValue;
	FOnGetValue OnGetValue;

private:
	TSharedPtr<SNumericEntryBox<NumericType>> NumericEntryBox;
};

template class SIMPLEPROGRAMOBJECTREFLECTOR_API SNumericPropertyWidget<uint8>;
template class SIMPLEPROGRAMOBJECTREFLECTOR_API SNumericPropertyWidget<int8>;
template class SIMPLEPROGRAMOBJECTREFLECTOR_API SNumericPropertyWidget<int16>;
template class SIMPLEPROGRAMOBJECTREFLECTOR_API SNumericPropertyWidget<uint16>;
template class SIMPLEPROGRAMOBJECTREFLECTOR_API SNumericPropertyWidget<int32>;
template class SIMPLEPROGRAMOBJECTREFLECTOR_API SNumericPropertyWidget<uint32>;
template class SIMPLEPROGRAMOBJECTREFLECTOR_API SNumericPropertyWidget<int64>;
template class SIMPLEPROGRAMOBJECTREFLECTOR_API SNumericPropertyWidget<uint64>;
template class SIMPLEPROGRAMOBJECTREFLECTOR_API SNumericPropertyWidget<float>;
template class SIMPLEPROGRAMOBJECTREFLECTOR_API SNumericPropertyWidget<double>;
