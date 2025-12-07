#include "Tree/ClassTreeNode.h"

FClassTreeNode::FClassTreeNode(UClass* InClass) : Class(InClass)
{
}

void FClassTreeNode::AddChild(TSharedPtr<FClassTreeNode> InChild)
{
	if (InChild.IsValid() && !DerivedChildren.Contains(InChild))
	{
		InChild->InheritedParent = this->AsShared();
		DerivedChildren.Add(InChild);
	}
}

FName FClassTreeNode::GetClassName() const
{
	if (Class.IsValid())
	{
		return Class.Get()->GetFName();
	}
	else
	{
		return NAME_None;
	}
}

FText FClassTreeNode::GetDisplayClassName() const
{
	if (Class.IsValid())
	{
		return Class.Get()->GetDisplayNameText();
	}
	else
	{
		return FText::GetEmpty();
	}
}

TSharedPtr<FClassTreeNode> FClassTreeNode::GetChildByName(const FName& InChildName)
{
	for (auto Iter = DerivedChildren.CreateConstIterator(); Iter; ++Iter)
	{
		auto ChildNode = *Iter;
		if (ChildNode->GetClassName() == InChildName)
		{
			return ChildNode;
		}
	}
	return nullptr;
}

TSharedPtr<FClassTreeNode> FClassTreeNode::GetChildByDisplayName(const FText& InChildName)
{
	for (auto Iter = DerivedChildren.CreateConstIterator(); Iter; ++Iter)
	{
		auto ChildNode = *Iter;
		if (ChildNode->GetDisplayClassName().EqualTo(InChildName))
		{
			return ChildNode;
		}
	}
	return nullptr;
}

TSharedPtr<FClassTreeNode> FClassTreeNode::GetParent() const
{
	return InheritedParent.Pin();
}