#include "Base/Entry/BlueprintEntryBase.h"
#include "SimpleBlueprintViewLog.h"
#include "Base/Widget/Core/IBlueprintWidgetBase.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FBlueprintEntryBase::FBlueprintEntryBase()
	: TSharedFromThis<FBlueprintEntryBase>(), Guid()
{
}

FBlueprintEntryBase::~FBlueprintEntryBase() noexcept
{

}

void FBlueprintEntryBase::Initialize(TSharedPtr<FBlueprintEntryBase> InOuter,TSharedPtr<FBlueprintEntryBase> InRoot, const FString& InName)
{
	if (!IsInitialized())
	{
		InitializeBase(InOuter, InRoot, InName);
		InitializeSelf();
	}
}

void FBlueprintEntryBase::Deinitialize(bool bBatchDeinitialization)
{
	DeinitializeSelf();
	DeinitializeBase(bBatchDeinitialization);
}

bool FBlueprintEntryBase::InitializeBase(TSharedPtr<FBlueprintEntryBase> InOuter, 
	TSharedPtr<FBlueprintEntryBase> InRoot, const FString& InName)
{
	InitializeRoot(InRoot);
	InitializeOuter(InOuter);
	SetName(InName);

	if (Guid.IsValid())
	{
		GetGlobalTable().Remove(Guid);
		Guid.Invalidate();
	}

	Guid = FGuid::NewGuid();
	GetGlobalTable().Add({ Guid, this->AsShared() });
	return IsInitialized();
}

bool FBlueprintEntryBase::DeinitializeBase(bool bSelfDeinitialization)
{
	TSharedPtr<FBlueprintEntryBase> SharedThis = this->AsShared();

	if (bSelfDeinitialization)
	{	
		TSharedPtr<IBlueprintWidgetBase> SharedView = GetView();
		TSharedPtr<FBlueprintEntryBase> SharedOuter = GetOuter();
		View = nullptr;
		Outer = nullptr;

		//先处理View
		if (SharedView.IsValid())
		{
			check(SharedView->GetOuter().IsValid());
			SharedView->GetOuter()->RemoveChildWidget(SharedView);
		}

		//处理Outer
		if (SharedOuter.IsValid())
		{
			SharedOuter->RemoveChild(this->AsShared());
		}

		Root = nullptr;
	}
	else
	{
		check(!View.IsValid() && TEXT("First must clear widget."));
		View = nullptr;
		Root = nullptr;
		Outer = nullptr;		
	}


	GetGlobalTable().Remove(Guid);
	Guid.Invalidate();
	return true;
}

const TSharedPtr<FBlueprintEntryBase> FBlueprintEntryBase::GetRoot() const noexcept
{
	return Root.IsValid() ? Root.Pin() : nullptr;
}

const TSharedPtr<FBlueprintEntryBase> FBlueprintEntryBase::GetOuter() const noexcept
{ 
	return Outer.IsValid() ? Outer.Pin() : nullptr; 
}

const TSharedPtr<IBlueprintWidgetBase> FBlueprintEntryBase::GetView() const noexcept
{
	return View.IsValid() ? View.Pin() : nullptr;
}

void FBlueprintEntryBase::SetName(const FString& InName) noexcept
{
	if (InName.IsEmpty())
	{
		if (Name.IsEmpty())
		{
			Name = GetDefaultName();
		}
	}
	else
	{
		Name = InName;
	}
}

TSharedPtr<FBlueprintEntryBase> FBlueprintEntryBase::GetRoot() noexcept
{
	return Root.IsValid() ? Root.Pin() : nullptr;
}

TSharedPtr<FBlueprintEntryBase> FBlueprintEntryBase::GetOuter() noexcept
{
	return Outer.IsValid() ? Outer.Pin() : nullptr;
}

TSharedPtr<IBlueprintWidgetBase> FBlueprintEntryBase::GetView() noexcept
{
	return View.IsValid() ? View.Pin() : nullptr;
}

void FBlueprintEntryBase::InitializeRoot(TSharedPtr<FBlueprintEntryBase> InRoot) noexcept
{
	if(Root.IsValid()) return;

	if (InRoot.IsValid() && InRoot->IsRoot())
	{
		Root = InRoot;
	}
}

void FBlueprintEntryBase::InitializeOuter(TSharedPtr<FBlueprintEntryBase> InOuter)
{
	if (Outer.IsValid()) return;

	if (InOuter.IsValid() && InOuter->CanBeValidChild(this))
	{
		Outer = InOuter;
	}
}

void FBlueprintEntryBase::InitializeView(TSharedPtr<IBlueprintWidgetBase> InView)
{
	if (View.IsValid()) return;

	if (InView.IsValid() && InView->GetBlueprintWidgetType() == this->GetBlueprintEntryType())
	{
		View = InView;
	}
}

bool FBlueprintEntryBase::IsInitialized() const noexcept
{
	return !GetName().IsEmpty() && (*GetGlobalTable().Find(this->GetGuid())).Get() == this
		&& Root.IsValid() && (IsRoot() || Outer.IsValid());
}

bool FBlueprintEntryBase::CheckLink(bool bCheckView, bool bCheckTotalLinks, bool& bIsInLink) const
{
	bIsInLink = false;
	//先找到Root，从Root开始检查全链接
	TSharedPtr<FBlueprintEntryBase> TempRoot = GetRoot();

	if (!TempRoot.IsValid()
		||(IsRoot() && this != TempRoot.Get())	//当前Entry为Root
		|| !TempRoot->IsRoot()	//检查GetRoot()正确性
		|| (*GetGlobalTable().Find(TempRoot->GetGuid())) != TempRoot)	//在全局表中检查GetRoot()
	{
		return false;
	}

	TSharedPtr<IBlueprintWidgetBase> TempRootView = nullptr;
	if(bCheckView)
	{
		if (TempRootView = TempRoot->GetView(); TempRootView == nullptr 
			|| !TempRootView->IsRoot()
			|| TempRootView->GetEntry() != TempRoot)
		{
			return false;
		}
	}

	if (IsRoot())
	{
		bIsInLink = true;
		if (bCheckTotalLinks)
		{
			bool Temp = false;
			return CheckLink(TempRoot, TempRootView, TempRoot, bCheckTotalLinks, Temp);
		}
		else
		{
			return true;
		}
	}
	else
	{
		return CheckLink(TempRoot, TempRootView, TempRoot, bCheckTotalLinks, bIsInLink);
	}
}

bool FBlueprintEntryBase::CheckLink(TSharedPtr<FBlueprintEntryBase> InOuterEntry, TSharedPtr<IBlueprintWidgetBase> InOuterView, 
	TSharedPtr<FBlueprintEntryBase> InRoot, bool bCheckTotalLinks, bool& bIsInLink) const
{
	bIsInLink = false;
	if (InOuterEntry.IsValid() && InRoot.IsValid())
	{
		bool bCheckView = InOuterView.IsValid() ? true : false;

		TArray<TSharedPtr<FBlueprintEntryBase>> ChildrenArray = InOuterEntry->GetChildren();

		for (auto& ChildEntry : ChildrenArray)
		{
			//EntryOuter <----> EntryChild / 全局表中查找
			if (!ChildEntry.IsValid() 
				|| ChildEntry->GetRoot() != InRoot 
				|| (*GetGlobalTable().Find(ChildEntry->GetGuid())) != ChildEntry
				|| ChildEntry->GetOuter() != InOuterEntry)
			{
				return false;
			}

			TSharedPtr<IBlueprintWidgetBase> ChildView = nullptr;
			if(bCheckView)
			{
				//ViewChild <----> EntryChild	ViewOuter <---->  ViewChild
				if (ChildView = ChildEntry->GetView(); !ChildView.IsValid() 
					|| ChildView->GetEntry() != ChildEntry 
					|| ChildView->GetRoot() != InRoot->GetView()
					|| !ChildView->GetOuter().IsValid() 
					|| ChildView->GetOuter() != InOuterView 
					|| InOuterView->FindChildWidget(ChildView) == INDEX_NONE)
				{
					return false;
				}
			}

			if (ChildEntry.Get() == this)
			{
				//找到当前Entry
				bIsInLink = true;
				if (bCheckTotalLinks)
				{
					//检查全链
					bool Temp = false;
					if (!CheckLink(ChildEntry, ChildView, InRoot, bCheckTotalLinks, Temp))
					{
						return false;
					}
				}
				else
				{
					return true;
				}
			}
			else
			{
				if(bIsInLink)
				{
					bool Temp = false;
					//未找到当前Entry，递归检查
					if (!CheckLink(ChildEntry, ChildView, InRoot, bCheckTotalLinks, Temp))
					{
						return false;
					}
				}
				else
				{
					if (!CheckLink(ChildEntry, ChildView, InRoot, bCheckTotalLinks, bIsInLink))
					{
						return false;
					}
				}
			}
		}
		return true;
	}
	return false;
}

void FBlueprintEntryBase::DestoryChild(TSharedPtr<FBlueprintEntryBase> InNode)
{
	TSharedPtr<FBlueprintEntryBase> RemovedChild = RemoveChild(InNode);
	RemovedChild->Deinitialize();
}

void FBlueprintEntryBase::DestoryChild(int32 Index)
{
	TSharedPtr<FBlueprintEntryBase> RemovedChild = RemoveChild(Index);
	RemovedChild->Deinitialize();
}

bool FBlueprintEntryBase::CanBeValidOuter(const FBlueprintEntryBase* InOuter) const
{
	EBlueprintEntryType InnerType = this->GetBlueprintEntryType();

	if (InOuter)
	{
		EBlueprintEntryType OuterType = InOuter->GetBlueprintEntryType();

		bool Result = false;
		switch (InnerType)
		{
		case EBlueprintEntryType::None:
			Result = false;
			break;
		case EBlueprintEntryType::Node:
			Result = OuterType == EBlueprintEntryType::Panel ? true : false;
			break;
		case EBlueprintEntryType::Pin:
			Result = OuterType == EBlueprintEntryType::Node ? true : false;
			break;
		case EBlueprintEntryType::Panel:
		default:
			break;
		}
		return Result;
	}
	else
	{	//EBlueprintEntryType::Graph的outer一般为nullptr, 需要设置一个非nullptr的outer吗？
		if (this->IsRoot() && InnerType == EBlueprintEntryType::Panel)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

TSharedRef<IBlueprintWidgetBase> FBlueprintEntryBase::MakeWidget()
{
#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
	check(IsInitialized());
#endif

	//尝试获取
	TSharedPtr<IBlueprintWidgetBase> Widget = GetView();
	
	TSharedPtr<FBlueprintEntryBase> SharedThis = this->AsShared();
	if (!Widget.IsValid())
	{
		const FWidgetFactory& Factory = GetWidgetFactory();
		Widget = Factory.CreateWidget(SharedThis);
		check(Widget);
		InitializeView(Widget);
	}

	TSharedPtr<IBlueprintWidgetBase> WidgetOuter = SharedThis->IsRoot() ? nullptr : this->GetOuter()->GetView();
	TSharedPtr<IBlueprintWidgetBase> WidgetRoot = SharedThis->IsRoot() ? Widget : this->GetRoot()->GetView();

	Widget->Initialize(SharedThis, WidgetOuter, WidgetRoot);

	
#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
	check(Widget->IsInitialized());
#endif

	TArray<TSharedPtr<FBlueprintEntryBase>> Children = GetChildren();
	for (auto& Child : Children)
	{
		TSharedPtr<IBlueprintWidgetBase> ChildWidget = Child->MakeWidget();
		Widget->AddChildWidget(ChildWidget);
	}
	
#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
	bool bIsInLink = false;
	check(CheckLink(SharedThis, Widget, SharedThis->GetRoot(), true, bIsInLink));
#endif

	return Widget.ToSharedRef();
}

TSharedRef<SWidget> FBlueprintEntryBase::MakeSWidget()
{
	return MakeWidget()->GetSWidget().ToSharedRef();
}

bool FBlueprintEntryBase::CanBeValidChild(const FBlueprintEntryBase* InChild) const
{
	return InChild && InChild->CanBeValidOuter(this);
}

TMap<FGuid, TSharedPtr<FBlueprintEntryBase>>& FBlueprintEntryBase::GetGlobalTable()
{
	static TMap<FGuid, TSharedPtr<FBlueprintEntryBase>> Table;
	return Table;
}

void FBlueprintEntryBase::ClearLonelyEntriesInGlobalTable()
{
	TMap<FGuid, TSharedPtr<FBlueprintEntryBase>>& Table = GetGlobalTable();
	TArray<FGuid> PendingClearedEntryGuids;
	for (auto Iter = Table.CreateConstIterator(); Iter; ++Iter)
	{
		if (Iter.Value().GetSharedReferenceCount() == 1)
		{
			PendingClearedEntryGuids.Add(Iter.Key());
		}
	}

	for (auto PendingClearedEntryGuid : PendingClearedEntryGuids)
	{
		Table.Remove(PendingClearedEntryGuid);
	}
}

int32 FBlueprintEntryBase::FindChildWidget(TSharedPtr<IBlueprintWidgetBase> InOuter, TSharedPtr<IBlueprintWidgetBase> InInner) const
{
	if (InOuter.IsValid() && InInner.IsValid())
	{
		return InOuter->FindChildWidget(InInner);
	}
	return INDEX_NONE;
}

void FBlueprintEntryBase::AddChildWidget(TSharedPtr<IBlueprintWidgetBase> InOuter, TSharedPtr<IBlueprintWidgetBase> InInner)
{
	if (InOuter.IsValid() && InInner.IsValid())
	{
		InOuter->AddChildWidget(InInner);
	}
}

void FBlueprintEntryBase::RemoveChildWidget(TSharedPtr<IBlueprintWidgetBase> InOuter, TSharedPtr<IBlueprintWidgetBase> InInner)
{
	if (InOuter.IsValid() && InInner.IsValid())
	{
		InOuter->RemoveChildWidget(InInner);
	}
}

void FBlueprintEntryBase::ClearChildrenWidget(TSharedPtr<IBlueprintWidgetBase> InOuter)
{
	if (InOuter.IsValid())
	{
		InOuter->ClearChildrenWidget();
	}
}


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT