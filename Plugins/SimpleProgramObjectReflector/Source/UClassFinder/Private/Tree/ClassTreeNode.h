#pragma once

#include "Templates/SharedPointer.h"
#include "UObject/WeakObjectPtrTemplates.h"


class FClassTreeNode : public TSharedFromThis<FClassTreeNode>
{

public:
	FClassTreeNode(UClass* InClass);

	void AddChild(TSharedPtr<FClassTreeNode> InChild);

	TWeakObjectPtr<UClass> GetUClass() const { return Class; }

	FName GetClassName() const;
	FText GetDisplayClassName() const;

	TSharedPtr<FClassTreeNode> GetChildByName(const FName& InChildName);
	TSharedPtr<FClassTreeNode> GetChildByDisplayName(const FText& InChildName);
	TSharedPtr<FClassTreeNode> GetParent() const;

private:
	TWeakObjectPtr<UClass> Class;

	TArray<TSharedPtr<FClassTreeNode>> DerivedChildren;
	TWeakPtr<FClassTreeNode> InheritedParent;
};