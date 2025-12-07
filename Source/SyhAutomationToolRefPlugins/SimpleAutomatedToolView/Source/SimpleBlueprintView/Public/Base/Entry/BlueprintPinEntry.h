#pragma once
#include "Base/Entry/BlueprintEntryBase.h"

struct SIMPLEBLUEPRINTVIEW_API FBlueprintPinEntry : public FBlueprintEntryBase
{
	using Super = FBlueprintEntryBase;

	FBlueprintPinEntry();
	FBlueprintPinEntry(EBlueprintPinType InPinType);

	//~Begin FBlueprintEntryBase
	//~Begin FBlueprintEntryBase
	//~Begin FBlueprintEntryBase
private:
	//初始化自己
	virtual bool InitializeSelf();
	virtual void DeinitializeSelf();
public:

	virtual EBlueprintEntryType GetBlueprintEntryType() const noexcept override { return EBlueprintEntryType::Pin;}

	//具有继承关系，可以使用协变，不要使用堆变量
	virtual const FPinWidgetFactory& GetWidgetFactory();

	virtual TArray<TSharedPtr<FBlueprintEntryBase>> GetChildren() override;
	virtual TArray<TSharedPtr<const FBlueprintEntryBase>> GetChildren() const override;

	virtual FString GetDefaultName() const noexcept { return TEXT("DefaultPinEntry"); }

	//~End FBlueprintEntryBase
	//~End FBlueprintEntryBase
	//~End FBlueprintEntryBase


	EBlueprintPinType GetPinType() const noexcept { return PinType; }

	EBlueprintPinValueType GetValueType() const noexcept { return ValueType; }
	void SetValueType(EBlueprintPinValueType InPinValueType) noexcept { ValueType = InPinValueType; }


	//virtual void LinkFrom(TSharedPtr<FBlueprintPinEntry> Pin);

protected:
	EBlueprintPinValueType ValueType {EBlueprintPinValueType::None};

private:
	EBlueprintPinType PinType{ EBlueprintPinType::None };
};
