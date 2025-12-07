#pragma once
#include "DllExport/SimpleBlueprintViewType.h"

//Pin
struct SIMPLEBLUEPRINTVIEW_API FSimpleBlueprintPinSpawner
{
	virtual ~FSimpleBlueprintPinSpawner() {}

	FSimpleBlueprintPinSpawner(EBlueprintPinType InPinType) : PinType(InPinType){}

	void SetDisplayName(const FString& InDisplayName) noexcept { PinDisplayName = InDisplayName; }
	void SetValueType(EBlueprintPinValueType InValueType) noexcept { ValueType = InValueType; }
	void SetPinIoType(EBlueprintPinType InPinType) noexcept
	{
		if (EnumHasAnyFlags(InPinType, EBlueprintPinType::Input))
		{
			PinType |= EBlueprintPinType::Input;
		}
		else if (EnumHasAnyFlags(InPinType, EBlueprintPinType::Output))
		{
			PinType |= EBlueprintPinType::Output;
		}
	}

	const FString& GetDisplayName() const noexcept { return PinDisplayName; }
	EBlueprintPinValueType GetValueType() const noexcept { return ValueType; }
	EBlueprintPinType GetPinType() const noexcept { return PinType; }

	virtual bool IsNormalSpawner() const noexcept = 0;

protected:
	//只供继承类使用
	void SetPinType(EBlueprintPinType InPinType) noexcept { PinType  = InPinType;}

private:
	FString PinDisplayName{};
	EBlueprintPinType PinType{ EBlueprintPinType::None };
	EBlueprintPinValueType ValueType{ EBlueprintPinValueType::None };
};

struct SIMPLEBLUEPRINTVIEW_API FSimpleBlueprintNormalPinSpawner : public FSimpleBlueprintPinSpawner
{
	FSimpleBlueprintNormalPinSpawner() : FSimpleBlueprintPinSpawner(EBlueprintPinType::Param) {}
	virtual bool IsNormalSpawner()  const noexcept { return true; }
};

struct SIMPLEBLUEPRINTVIEW_API FSimpleBlueprintCustomPinSpawner : public FSimpleBlueprintPinSpawner
{
	FSimpleBlueprintCustomPinSpawner(EBlueprintPinType InPinType) : FSimpleBlueprintPinSpawner(InPinType) {}
	void SetPinType(EBlueprintPinType InPinType) { FSimpleBlueprintPinSpawner::SetPinType(InPinType);}
	virtual bool IsNormalSpawner()  const noexcept { return false; }
};


//Node
struct SIMPLEBLUEPRINTVIEW_API FSimpleBlueprintNodeSpawner
{
	FSimpleBlueprintNodeSpawner(){}
	
	virtual ~FSimpleBlueprintNodeSpawner(){}
	void SetRealName(const FString& InRealName) { NodeRealName = InRealName; }
	void SetDisplayName(const FString& InDisplayName) { NodeDisplayName = InDisplayName; }
	virtual void AddPin(const FSimpleBlueprintPinSpawner&) = 0;
	virtual bool IsNormalSpawner() const noexcept = 0;
private:
	FString NodeRealName;
	FString NodeDisplayName;
};

template <EBlueprintNodeType InNodeType>
struct SIMPLEBLUEPRINTVIEW_API FSimpleBlueprintNormalNodeSpawner : public FSimpleBlueprintNodeSpawner
{
	FSimpleBlueprintNormalNodeSpawner() : FSimpleBlueprintNodeSpawner(){}

	virtual void AddPin(const FSimpleBlueprintPinSpawner& InPinSpawner) override
	{
		if (CanAddPin() && InPinSpawner.IsNormalSpawner())
		{
			ParamPins.Add(static_cast<const FSimpleBlueprintNormalPinSpawner&>(InPinSpawner));
		}
	}

	bool CanAddPin() const noexcept 
	{
		return CanAddPinOnNode<InNodeType>;
	};

	virtual bool IsNormalSpawner() const noexcept override { return true; }

private:
	TArray<FSimpleBlueprintNormalPinSpawner> ParamPins;
};

struct SIMPLEBLUEPRINTVIEW_API FSimpleBlueprintCustomNodeSpawner : public FSimpleBlueprintNodeSpawner
{
	FSimpleBlueprintCustomNodeSpawner() : FSimpleBlueprintNodeSpawner() {}

	virtual void AddPin(const FSimpleBlueprintPinSpawner& InPinSpawner) override
	{
		if (!InPinSpawner.IsNormalSpawner())
		{
			CustomPins.Add(static_cast<const FSimpleBlueprintCustomPinSpawner&>(InPinSpawner));
		}
	}
	virtual bool IsNormalSpawner() const noexcept override { return false; }
private:
	TArray<FSimpleBlueprintCustomPinSpawner> CustomPins;
};