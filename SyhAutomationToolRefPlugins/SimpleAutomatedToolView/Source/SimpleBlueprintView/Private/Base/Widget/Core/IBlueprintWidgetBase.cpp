#include "Base/Widget/Core/IBlueprintWidgetBase.h"
#include "Base/Widget/Panel/SBlueprintEntryPanelWidget.h"
#include "Base/Entry/BlueprintEntryBase.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

void IBlueprintWidgetBase::SetDisplayNameText(const FText& InTitle, ETextCommit::Type InTextCommitType)
{
	if (InTextCommitType == ETextCommit::OnEnter)
	{
		this->SetDisplayName(InTitle.ToString());
	}

}

void IBlueprintWidgetBase::SetRealName(const FString& InName) noexcept
{
	if (TSharedPtr<FBlueprintEntryBase> EntryBase = GetEntry(); EntryBase.IsValid())
	{
		EntryBase->SetName(InName);
	}
}

FString IBlueprintWidgetBase::GetRealName() const noexcept
{

	if (TSharedPtr<const FBlueprintEntryBase> EntryBase = GetEntry(); EntryBase.IsValid())
	{
		return EntryBase->GetName();
	}
	return FString();
}

void IBlueprintWidgetBase::SetRealNameText(const FText& InTitle, ETextCommit::Type InTextCommitType)
{
	if (InTextCommitType == ETextCommit::OnEnter)
	{
		this->SetRealName(InTitle.ToString());
	}
}

TSharedPtr<const IBlueprintWidgetBase> IBlueprintWidgetBase::GetRoot() const noexcept
{
	return Root.IsValid() ? Root.Pin() : nullptr;
}

TSharedPtr<const IBlueprintWidgetBase> IBlueprintWidgetBase::GetOuter() const noexcept
{
	return Outer.IsValid() ? Outer.Pin() : nullptr;
}

TSharedPtr<IBlueprintWidgetBase> IBlueprintWidgetBase::GetRoot() noexcept
{
	return Root.IsValid() ? Root.Pin() : nullptr;
}

TSharedPtr<IBlueprintWidgetBase> IBlueprintWidgetBase::GetOuter() noexcept
{
	return Outer.IsValid() ? Outer.Pin() : nullptr;
}

void IBlueprintWidgetBase::InitializeRoot(TSharedPtr<IBlueprintWidgetBase> InRoot) noexcept
{
	if (!Root.IsValid() && InRoot.IsValid() && InRoot->IsRoot())
	{
		Root = InRoot;
	}
}

void IBlueprintWidgetBase::InitializeOuter(TSharedPtr<IBlueprintWidgetBase> InOuter) noexcept
{
	if (!Outer.IsValid() && InOuter.IsValid() && CanBeValidOuter(InOuter, this->GetWidgetBase()))
	{
		Outer = InOuter;
	}
}

void IBlueprintWidgetBase::InitializeEntry(TSharedPtr<FBlueprintEntryBase> InEntry)
{
	if (!Entry.IsValid() && InEntry.IsValid() && InEntry->GetBlueprintEntryType() == this->GetBlueprintWidgetType())
	{
		Entry = InEntry;
	}
}

bool IBlueprintWidgetBase::CanBeValidOuter(TSharedPtr<IBlueprintWidgetBase> InOuter, TSharedPtr<IBlueprintWidgetBase> InInner) const
{
	if (!InInner.IsValid()) return false;

	EBlueprintWidgetType InnerType = InInner->GetBlueprintWidgetType();

	if (InOuter.IsValid())
	{
		EBlueprintWidgetType OuterType = InOuter->GetBlueprintWidgetType();

		bool Result = false;
		switch (InnerType)
		{
		case EBlueprintWidgetType::None:
			Result = false;
			break;
		case EBlueprintWidgetType::Node:
			Result = OuterType == EBlueprintWidgetType::Panel ? true : false;
			break;
		case EBlueprintWidgetType::Pin:
			Result = OuterType == EBlueprintWidgetType::Node ? true : false;
			break;
		case EBlueprintWidgetType::Panel:
		default:
			break;
		}
		return Result;
	}
	else
	{	//EBlueprintWidgetType::Graph的outer一般为nullptr, 需要设置一个非nullptr的outer吗？
		if (InnerType == EBlueprintWidgetType::Panel)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

bool IBlueprintWidgetBase::IsInitialized() const
{
	return Entry.IsValid() && Root.IsValid() && (Outer.IsValid() || this->IsRoot());
}

bool IBlueprintWidgetBase::CheckChildLink(TSharedPtr<IBlueprintWidgetBase> InChildWidget, bool bCheckInChildren) const
{
	if (InChildWidget.IsValid())
	{
		if (bCheckInChildren)
		{
			if (FindChildWidget(InChildWidget) == INDEX_NONE)
			{
				return false;
			}
		}

		if (!InChildWidget->GetOuter().IsValid() 
			|| InChildWidget->GetOuter().Get() != this
			|| !GetEntry().IsValid() 
			|| GetEntry()->FindChild(InChildWidget->GetEntry()) == INDEX_NONE
			|| !GetRoot().IsValid() 
			|| GetRoot() != InChildWidget->GetRoot()
		)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool IBlueprintWidgetBase::CheckLink(bool bCheckTotalLinks)
{
	if (GetEntry().IsValid())
	{
		bool bIsInLink = false;
		return GetEntry()->CheckLink(true, bCheckTotalLinks, bIsInLink);
	}
	return false;
}

void IBlueprintWidgetBase::ClearRoot()
{
	Root.Reset();
}

void IBlueprintWidgetBase::ClearOuter()
{
	Outer.Reset();
}

void IBlueprintWidgetBase::ClearEntry()
{
	Entry.Reset();
}

void IBlueprintWidgetBase::Initialize(TSharedPtr<FBlueprintEntryBase> InEntry, TSharedPtr<IBlueprintWidgetBase> InOuter, TSharedPtr<IBlueprintWidgetBase> InRoot)
{
	if (!IsInitialized())
	{
		InitializeBase(InEntry, InOuter, InRoot);
		InitializeSelf();
	}
}

void IBlueprintWidgetBase::Deinitialize()
{
	DeinitializeSelf();
	DeinitializeBase();
}

bool IBlueprintWidgetBase::InitializeBase(TSharedPtr<FBlueprintEntryBase> InEntry, TSharedPtr<IBlueprintWidgetBase> InOuter,
	TSharedPtr<IBlueprintWidgetBase> InRoot)
{
	//需要IsInitialize();
	InitializeEntry(InEntry);
	InitializeRoot(InRoot);
	InitializeOuter(InOuter);
	GetDisplayName().IsEmpty() ? SetDisplayName(Entry->GetName()) : (void)0;
	return IsInitialized();
}

void IBlueprintWidgetBase::DeinitializeBase()
{
	Root = nullptr;
	Entry = nullptr;
	Outer = nullptr;
}



#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
