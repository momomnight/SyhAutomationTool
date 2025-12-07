#include "SimpleAutomatedToolViewType.h"
#include "FileTreeTool.h"
#include "Misc/LazySingleton.h"
#include "SimpleAutomatedToolViewEditorID.h"

#define LOCTEXT_NAMESPACE "SimpleAutomatedToolViewType"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

FSimpleAutomatedToolViewWorkMode& FSimpleAutomatedToolViewWorkMode::Get()
{
	return TLazySingleton<FSimpleAutomatedToolViewWorkMode>::Get();
}

void FSimpleAutomatedToolViewWorkMode::TearDown()
{
	TLazySingleton<FSimpleAutomatedToolViewWorkMode>::TearDown();
}

bool FSimpleAutomatedToolViewWorkMode::CheckConsistency(const FText& InModeName) const
{
	return (GetWorkModeNameList().Contains(InModeName) && GetPageButtonMap().Contains(InModeName))
		|| (!GetWorkModeNameList().Contains(InModeName) && !GetPageButtonMap().Contains(InModeName));
}

bool FSimpleAutomatedToolViewWorkMode::CheckConsistency(int32 InModeIndex) const
{
	if (GetWorkModeNameList().IsValidIndex(InModeIndex))
	{
		const FText& WorkModeName = GetWorkModeNameList()[InModeIndex];
		return GetWorkModeNameList().Contains(WorkModeName) && GetPageButtonMap().Contains(WorkModeName);
	}
	return true;
}

FString FSimpleAutomatedToolViewWorkMode::GetDefaultLayoutName(const FText& InModeName, const FText& InPageButtonName)
{
	return InModeName.ToString() + TEXT("_") + InPageButtonName.ToString();
}

int32 FSimpleAutomatedToolViewWorkMode::GetWorkModeNum() const
{
	return GetWorkModeNameList().Num();
}

int32 FSimpleAutomatedToolViewWorkMode::GetPageButtonInfoNum(const FText& InModeName) const
{
	int32 Index = FindWorkModeIndex(InModeName);
	if (Index != INDEX_NONE)
	{
		return GetPageButtonMap().Find(InModeName)->Num();
	}

	return 0;
}

int32 FSimpleAutomatedToolViewWorkMode::GetPageButtonInfoNum(int32 InModeIndex) const
{
	FText WorkModeName = FindWorkMode(InModeIndex);
	if (!WorkModeName.IsEmpty())
	{
		return GetPageButtonMap().Find(WorkModeName)->Num();
	}

	return 0;
}

void FSimpleAutomatedToolViewWorkMode::CreateTabManagers(TSharedRef<SDockTab> InOwnerTab, FTabManager::FOnPersistLayout OnPersistLayout)
{
	GetTabManagers().Empty(GetWorkModeNum());
	TMap<int32, TArray<TSharedPtr<FTabManager>>>& TabManagerMap = GetTabManagers();

	int32 WorkModeNum = GetWorkModeNum();
	TabManagerMap.Empty(WorkModeNum);

	for (int32 I = 0; I < WorkModeNum; I++)
	{
		TabManagerMap.Add(I, TArray<TSharedPtr<FTabManager>>());
		const FText& WorkModeName = GetWorkModeNameList()[I];
		int32 PageButtonInfoNum = GetPageButtonInfoNum(WorkModeName);

		TArray<TSharedPtr<FTabManager>> TabManagers;	
		TabManagers.Reserve(PageButtonInfoNum);

		for (int32 J = 0; J < PageButtonInfoNum; J++)
		{
			TSharedPtr<FTabManager> Manager = FGlobalTabmanager::Get()->NewTabManager(InOwnerTab);

			if (OnPersistLayout.IsBound())
			{
				Manager->SetOnPersistLayout(OnPersistLayout);
			}
			TabManagers.Add(Manager);
		}
		(*TabManagerMap.Find(I)) = MoveTempIfPossible(TabManagers);
	}
}

TSharedPtr<FTabManager> FSimpleAutomatedToolViewWorkMode::GetTabManager(int32 InModeIndex, int32 InPageButtonIndex)
{
	FPageButtonInfo ButtonInfo = FindPageButtonInfo(InModeIndex, InPageButtonIndex);
	if (!ButtonInfo.Name.IsEmpty())
	{
		return (*GetTabManagers().Find(InModeIndex))[InPageButtonIndex];
	}
	return nullptr;
}

void FSimpleAutomatedToolViewWorkMode::RegisterTabSpawner()
{
	int32 WorkModeNum = GetWorkModeNum();
	for (int32 I = 0; I < WorkModeNum; I++)
	{
		check(GetTabManagers().Find(I));
		TArray<TSharedPtr<FTabManager>>& TabManagers = (*GetTabManagers().Find(I));
		int32 TabManagerNum = TabManagers.Num();
		for (int32 J = 0; J < TabManagerNum; J++)
		{
			FPageButtonInfo PageButtonInfo = FindPageButtonInfo(I, J);
			check(!PageButtonInfo.Name.IsEmpty());
			for (int32 K = 0; K < PageButtonInfo.LayoutTabType.Num(); K++)
			{
				FEditorTabType::RegisterTabSpawner(TabManagers[J].ToSharedRef(), PageButtonInfo.LayoutTabType[K]);
			}
		}
	}
}

void FSimpleAutomatedToolViewWorkMode::InvokeLayoutTab(TSharedRef<FTabManager> TabManager, const FText& InModeName, const FText& InPageButtonName)
{
	int32 WorkModeIndex = FindWorkModeIndex(InModeName);
	if (WorkModeIndex == INDEX_NONE) return;

	int32 PageButtonIndex = FindPageButtonIndex(InModeName, InPageButtonName);
	if (PageButtonIndex == INDEX_NONE) return;

	FPageButtonInfo Button = FindPageButtonInfo(InModeName, PageButtonIndex);
	for (auto& TabType : Button.LayoutTabType)
	{
		TabManager->TryInvokeTab(FTabId(FEditorTabType::GetTabName(TabType), HashCombine(WorkModeIndex, PageButtonIndex)));
	}
}

TArray<FText> FSimpleAutomatedToolViewWorkMode::GatherWorkMode()
{
	return GetWorkModeNameList();
}

int32 FSimpleAutomatedToolViewWorkMode::FindPageButtonIndexInArray(const TArray<FPageButtonInfo>& PageButtons, 
	const FText& InPageButtonName) const
{ 
	int32 PageButtonsNum = PageButtons.Num();
	for (int32 I = 0; I < PageButtonsNum; I++)
	{
		const FPageButtonInfo& Info = PageButtons[I];
		if (Info.Name == InPageButtonName)
		{
			return I;
		}
	}
	return INDEX_NONE;
}

FPageButtonInfo FSimpleAutomatedToolViewWorkMode::FindPageButtonInArray(const TArray<FPageButtonInfo>& PageButtons,
	const FText& InPageButtonName) const
{
	int32 PageButtonsNum = PageButtons.Num();
	for (int32 I = 0; I < PageButtonsNum; I++)
	{
		const FPageButtonInfo& Info = PageButtons[I];
		if (Info.Name == InPageButtonName)
		{
			return Info;
		}
	}
	return FPageButtonInfo();
}

TArray<FPageButtonInfo> FSimpleAutomatedToolViewWorkMode::GetPageButtonInfosByModeName(const FText& InModeName) const
{
	if (FindWorkModeIndex(InModeName) != INDEX_NONE)
	{
		return *GetPageButtonMap().Find(InModeName);
	}
	return TArray<FPageButtonInfo>();
}

TArray<FPageButtonInfo> FSimpleAutomatedToolViewWorkMode::GetPageButtonInfosByModeIndex(int32 Index) const
{
	FText WorkModeName = FindWorkMode(Index);
	if (!WorkModeName.IsEmpty())
	{
		return *GetPageButtonMap().Find(WorkModeName);
	}
	return TArray<FPageButtonInfo>();
}

const TArray<FPageButtonInfo>& FSimpleAutomatedToolViewWorkMode::FindPageButtonInfosByModeName(const FText& InModeName) const
{
	return const_cast<FSimpleAutomatedToolViewWorkMode*>(this)->FindPageButtonInfosByModeName(InModeName);
}

const TArray<FPageButtonInfo>& FSimpleAutomatedToolViewWorkMode::FindPageButtonInfosByModeIndex(int32 ModeIndex) const
{
	return const_cast<FSimpleAutomatedToolViewWorkMode*>(this)->FindPageButtonInfosByModeIndex(ModeIndex);
}

int32 FSimpleAutomatedToolViewWorkMode::FindWorkModeIndex(const FText& InModeName) const
{
	check(CheckConsistency(InModeName));
	return GetWorkModeNameList().Find(InModeName);
}

FText FSimpleAutomatedToolViewWorkMode::FindWorkMode(int32 Index) const
{
	check(CheckConsistency(Index));
	if (GetWorkModeNameList().IsValidIndex(Index))
	{
		return GetWorkModeNameList()[Index];
	}
	return FText::GetEmpty();
}

int32 FSimpleAutomatedToolViewWorkMode::FindPageButtonIndex(const FText& InModeName, const FText& InPageButtonName) const
{
	if (FindWorkModeIndex(InModeName) != INDEX_NONE)
	{
		return FindPageButtonIndexInArray(*GetPageButtonMap().Find(InModeName), InPageButtonName);
	}
	return INDEX_NONE;
}

int32 FSimpleAutomatedToolViewWorkMode::FindPageButtonIndex(int32 InModeIndex, const FText& InPageButtonName) const
{
	FText WorkModeName = FindWorkMode(InModeIndex);
	if (!WorkModeName.IsEmpty())
	{
		return FindPageButtonIndexInArray(*GetPageButtonMap().Find(WorkModeName), InPageButtonName);
	}
	return INDEX_NONE;
}

FPageButtonInfo FSimpleAutomatedToolViewWorkMode::FindPageButtonInfo(const FText& InModeName, const FText& InPageButtonName) const
{
	int32 PageButtonIndex = FindPageButtonIndex(InModeName, InPageButtonName);
	if (PageButtonIndex != INDEX_NONE)
	{
		return (*GetPageButtonMap().Find(InModeName))[PageButtonIndex];
	}
	return FPageButtonInfo();
}

FPageButtonInfo FSimpleAutomatedToolViewWorkMode::FindPageButtonInfo(const FText& InModeName, int32 InPageButtonIndex) const
{
	if (FindWorkModeIndex(InModeName) != INDEX_NONE && GetPageButtonMap().Find(InModeName)->IsValidIndex(InPageButtonIndex))
	{
		return (*GetPageButtonMap().Find(InModeName))[InPageButtonIndex];
	}

	return FPageButtonInfo();
}

FPageButtonInfo FSimpleAutomatedToolViewWorkMode::FindPageButtonInfo(int32 InModeIndex, const FText& InPageButtonName) const
{
	FText WorkModeName = FindWorkMode(InModeIndex);
	if (!WorkModeName.IsEmpty())
	{
		return FindPageButtonInArray(*GetPageButtonMap().Find(WorkModeName), InPageButtonName);
	}
	return FPageButtonInfo();
}

FPageButtonInfo FSimpleAutomatedToolViewWorkMode::FindPageButtonInfo(int32 InModeIndex, int32 InPageButtonIndex) const
{
	FText WorkModeName = FindWorkMode(InModeIndex);
	if (!WorkModeName.IsEmpty() && GetPageButtonMap().Find(WorkModeName)->IsValidIndex(InPageButtonIndex))
	{
		return (*GetPageButtonMap().Find(WorkModeName))[InPageButtonIndex];
	}
	return FPageButtonInfo();
}

int32 FSimpleAutomatedToolViewWorkMode::AddWorkMode(const FText& InModeName)
{
	int32 Index = GetWorkModeNameList().Find(InModeName);

	if (Index == INDEX_NONE)
	{
		Index = GetWorkModeNameList().Add(InModeName);
		GetPageButtonMap().Add({ InModeName, TArray<FPageButtonInfo>() });

		if (OnWorkModeListChanged.IsBound())
		{
			OnWorkModeListChanged.Broadcast(EWorkModeListActionType::Add, InModeName, Index, FText::GetEmpty(), INDEX_NONE);
		}
	}

	return Index;
}

void FSimpleAutomatedToolViewWorkMode::RemoveWorkMode(const FText& InModeName)
{
	int32 Index = FindWorkModeIndex(InModeName);
	if (Index != INDEX_NONE)
	{
		GetPageButtonMap().Remove(InModeName);
		GetWorkModeNameList().RemoveAt(Index);
		if (OnWorkModeListChanged.IsBound())
		{
			OnWorkModeListChanged.Broadcast(EWorkModeListActionType::Remove, InModeName, Index, FText::GetEmpty(), INDEX_NONE);
		}
	}
}

void FSimpleAutomatedToolViewWorkMode::RemoveWorkMode(int32 Index)
{
	FText WorkModeName = FindWorkMode(Index);

	if (!WorkModeName.IsEmpty())
	{
		GetPageButtonMap().Remove(WorkModeName);
		GetWorkModeNameList().RemoveAt(Index);

		if (OnWorkModeListChanged.IsBound())
		{
			OnWorkModeListChanged.Broadcast(EWorkModeListActionType::Remove, WorkModeName, Index, FText::GetEmpty(), INDEX_NONE);
		}
	}
}

void FSimpleAutomatedToolViewWorkMode::ClearWorkMode()
{
	GetPageButtonMap().Empty(GetPageButtonMap().Num());
	GetWorkModeNameList().Empty(GetWorkModeNameList().Num());
	if (OnWorkModeListChanged.IsBound())
	{
		OnWorkModeListChanged.Broadcast(EWorkModeListActionType::ClearAll, FText::GetEmpty(), INDEX_NONE, FText::GetEmpty(), INDEX_NONE);
	}
}

int32 FSimpleAutomatedToolViewWorkMode::AddPageButtonInfo(const FText& InModeName, const FPageButtonInfo& InInfo)
{
	int32 WorkModeIndex = FindWorkModeIndex(InModeName);
	if (WorkModeIndex == INDEX_NONE)
	{
		WorkModeIndex = AddWorkMode(InModeName);
	}

	TArray<FPageButtonInfo>& ButtonInfos = *GetPageButtonMap().Find(InModeName);
	int32 Index = ButtonInfos.Find(InInfo);
	if (Index == INDEX_NONE)
	{
		Index = ButtonInfos.Add(InInfo);
		FPageButtonInfo& ButtonInfo = ButtonInfos[Index];

		//布局名为空，获取默认布局名
		if (ButtonInfo.LayoutName.IsEmpty())
		{
			ButtonInfo.LayoutName = GetDefaultLayoutName(InModeName, ButtonInfos[Index].Name);
		}
		GetDefaultLayoutMap().Add({ ButtonInfo.LayoutName , FTabManager::NewLayout(NAME_None)});

		if (OnWorkModeListChanged.IsBound())
		{
			OnWorkModeListChanged.Broadcast(EWorkModeListActionType::Add, InModeName, WorkModeIndex, InInfo.Name, Index);
		}
	}
	
	return Index;
}

void FSimpleAutomatedToolViewWorkMode::RemovePageButtonInMode(const FText& InModeName, const FText& InPageButtonName)
{
	int32 Index = FindPageButtonIndex(InModeName, InPageButtonName);

	if (Index != INDEX_NONE)
	{
		TArray<FPageButtonInfo>& ButtonInfos = *GetPageButtonMap().Find(InModeName);
		RemoveDefaultLayout(ButtonInfos[Index].LayoutName);
		ButtonInfos.RemoveAt(Index);
	
		if (OnWorkModeListChanged.IsBound())
		{
			OnWorkModeListChanged.Broadcast(EWorkModeListActionType::Remove, InModeName, FindWorkModeIndex(InModeName), InPageButtonName, Index);
		}
	}
}

void FSimpleAutomatedToolViewWorkMode::RemovePageButtonInMode(const FText& InModeName, int32 Index)
{
	int32 WorkModeIndex = FindWorkModeIndex(InModeName);
	if(WorkModeIndex != INDEX_NONE)
	{
		TArray<FPageButtonInfo>& ButtonInfos = *GetPageButtonMap().Find(InModeName);
		if(ButtonInfos.IsValidIndex(Index))
		{
			FPageButtonInfo& ButtonInfo = ButtonInfos[Index];
			RemoveDefaultLayout(ButtonInfo.LayoutName);
			ButtonInfos.RemoveAt(Index);
			if (OnWorkModeListChanged.IsBound())
			{
				OnWorkModeListChanged.Broadcast(EWorkModeListActionType::Remove, InModeName, WorkModeIndex, ButtonInfo.Name, Index);
			}
		}
	}
}

void FSimpleAutomatedToolViewWorkMode::ClearPageButtonInMode(const FText& InModeName)
{
	int32 WorkModeIndex = FindWorkModeIndex(InModeName);
	if (WorkModeIndex != INDEX_NONE)
	{
		GetPageButtonMap().Find(InModeName)->Empty(GetPageButtonMap().Find(InModeName)->Num());
		ClearDefaultLayout();
		if (OnWorkModeListChanged.IsBound())
		{
			OnWorkModeListChanged.Broadcast(EWorkModeListActionType::ClearAll, InModeName, WorkModeIndex, FText::GetEmpty(), INDEX_NONE);
		}
	}
}

TSharedPtr<FTabManager::FLayout> FSimpleAutomatedToolViewWorkMode::FindDefualtLayout(const FString& InLayoutName) const
{
	if (auto LayoutPtr = GetDefaultLayoutMap().Find(InLayoutName))
	{
		return *LayoutPtr;
	}

	return nullptr;
}

TSharedPtr<FTabManager::FLayout> FSimpleAutomatedToolViewWorkMode::FindDefualtLayout(const FText& InModeName, const FText& InPageButtonName) const
{
	int32 Index = FindPageButtonIndex(InModeName, InPageButtonName);
	if (Index != INDEX_NONE)
	{
		FString LayoutName = (*GetPageButtonMap().Find(InModeName))[Index].LayoutName;
		TSharedRef<FTabManager::FLayout>* Layout = GetDefaultLayoutMap().Find(LayoutName);
		return Layout != nullptr ? (*Layout).ToSharedPtr() : nullptr;
	}

	return nullptr;
}

void FSimpleAutomatedToolViewWorkMode::AddDefaultLayout(const FString& InLayoutName, TSharedRef<FTabManager::FLayout> InLayout)
{
	TSharedRef<FTabManager::FLayout>* LayoutPtr = GetDefaultLayoutMap().Find(InLayoutName);

	//必须能够找到LayoutPtr，需要通过WorkMode和PageButton添加
	//或者直接通过WorkModeName和PageButtonName添加
	if (LayoutPtr)
	{
		(*LayoutPtr) = InLayout;
	}
}

void FSimpleAutomatedToolViewWorkMode::RemoveDefaultLayout(const FString& InLayoutName)
{
	TSharedRef<FTabManager::FLayout>* LayoutPtr = GetDefaultLayoutMap().Find(InLayoutName);
	if (LayoutPtr)
	{
		//并不直接移除
		(*LayoutPtr) = FTabManager::NewLayout(NAME_None);
	}
}

void FSimpleAutomatedToolViewWorkMode::AddDefaultLayout(const FText& InModeName, const FText& InPageButtonName, TSharedRef<FTabManager::FLayout> InLayout)
{
	int32 Index = FindPageButtonIndex(InModeName, InPageButtonName);
	if (Index != INDEX_NONE)
	{
		FPageButtonInfo ButtonInfo = FindPageButtonInfo(InModeName, Index);
		FString LayoutName = ButtonInfo.LayoutName;
		TSharedRef<FTabManager::FLayout>* LayoutPtr = GetDefaultLayoutMap().Find(LayoutName);
		check(LayoutPtr);//如果能够查到对应的PageButton, 那么LayoutPtr不能为nullptr， *LayoutPtr可以是一个空的布局
		*LayoutPtr = InLayout;
	}
	else
	{
		FPageButtonInfo ButtonInfo;
		ButtonInfo.Name = InPageButtonName;
		ButtonInfo.LayoutName = GetDefaultLayoutName(InModeName, InPageButtonName);
		AddPageButtonInfo(InModeName, ButtonInfo);
		AddDefaultLayout(ButtonInfo.LayoutName, InLayout);
	}
}

void FSimpleAutomatedToolViewWorkMode::RemoveDefaultLayout(const FText& InModeName, const FText& InPageButtonName)
{
	int32 Index = FindPageButtonIndex(InModeName, InPageButtonName);
	if (Index != INDEX_NONE)
	{
		FPageButtonInfo ButtonInfo = FindPageButtonInfo(InModeName, Index);
		TSharedRef<FTabManager::FLayout>* LayoutPtr = GetDefaultLayoutMap().Find(ButtonInfo.LayoutName);
		check(LayoutPtr);
		(*LayoutPtr) = FTabManager::NewLayout(NAME_None);
	}

}

TArray<FPageButtonInfo>& FSimpleAutomatedToolViewWorkMode::FindPageButtonInfosByModeName(const FText& InModeName)
{
	TArray<FText>& WorkModes = GetWorkModeNameList();
	int32 WorkModeIndex = WorkModes.Find(InModeName);
	check(WorkModeIndex != INDEX_NONE);

	TMap<FText, TArray<FPageButtonInfo>>& PageButtonMap = GetPageButtonMap();
	const FText& WorkModeName = WorkModes[WorkModeIndex];
	check(PageButtonMap.Contains(WorkModeName));

	return (*PageButtonMap.Find(WorkModeName));
}

TArray<FPageButtonInfo>& FSimpleAutomatedToolViewWorkMode::FindPageButtonInfosByModeIndex(int32 ModeIndex)
{
	TArray<FText>& WorkModes = GetWorkModeNameList();
	check(WorkModes.IsValidIndex(ModeIndex));

	const FText& WorkModeName = WorkModes[ModeIndex];
	TMap<FText, TArray<FPageButtonInfo>>& PageButtonMap = GetPageButtonMap();
	check(PageButtonMap.Contains(WorkModeName));

	return (*PageButtonMap.Find(WorkModeName));
}

TMap<FText, TArray<FPageButtonInfo>>& FSimpleAutomatedToolViewWorkMode::GetPageButtonMap()
{
	static TMap<FText, TArray<FPageButtonInfo>> ViewButtonMap;
	return ViewButtonMap;
}

TArray<FText>& FSimpleAutomatedToolViewWorkMode::GetWorkModeNameList()
{
	static TArray<FText> ModeNameList;
	return ModeNameList;
}

TMap<FString, TSharedRef<FTabManager::FLayout>>& FSimpleAutomatedToolViewWorkMode::GetDefaultLayoutMap()
{
	static TMap<FString, TSharedRef<FTabManager::FLayout>> DefaultLayoutMap;
	return DefaultLayoutMap;
}

TMap<int32, TArray<TSharedPtr<FTabManager>>>& FSimpleAutomatedToolViewWorkMode::GetTabManagers()
{
	static TMap<int32, TArray<TSharedPtr<FTabManager>>> TabManagers;
	return TabManagers;
}

void FSimpleAutomatedToolViewWorkMode::ClearDefaultLayout()
{
	GetDefaultLayoutMap().Empty();
}

namespace SimpleAutomatedToolViewTest
{

	void InitializeWorkMode(FSimpleAutomatedToolViewWorkMode& WorkModeInstance)
	{
		FText AutomationWorkMode = LOCTEXT("ModeName.Automation", "Automation");
		FText OtherWorkMode = LOCTEXT("ModeName.Other", "Other");
	
		{
			WorkModeInstance.AddWorkMode(AutomationWorkMode);
			WorkModeInstance.AddWorkMode(OtherWorkMode);
		}


		TSharedRef<FTabManager::FLayout> MainLayout = FTabManager::NewLayout(FEditorTabType::MainTabName)
			->AddArea(
				FTabManager::NewPrimaryArea()
				->Split
				(
					FTabManager::NewStack()
					->AddTab(FEditorTabType::MainTabName, ETabState::OpenedTab)
					->SetHideTabWell(false)
				)
			)
			->AddArea
			(
				FTabManager::NewArea(1280, 960)
				->Split
				(
					FTabManager::NewStack()
					->AddTab("SlateReflector", ETabState::ClosedTab)
				)
			);

		{
			{
				FPageButtonInfo TempInfo;
				TempInfo.Name = LOCTEXT("ModeName.Automation.Editor", "Editor");
				TempInfo.LayoutName = WorkModeInstance.GetDefaultLayoutName(AutomationWorkMode, TempInfo.Name);
				TempInfo.LayoutTabType.Add(ETabType::FileDirectoryTabName);
				TempInfo.LayoutTabType.Add(ETabType::GraphTabName);
				TempInfo.LayoutTabType.Add(ETabType::NodeListTabName);

				WorkModeInstance.AddPageButtonInfo(AutomationWorkMode, TempInfo);

				TSharedRef<FTabManager::FLayout> DefautlLayout = FTabManager::NewLayout(FName(TempInfo.LayoutName));
				DefautlLayout->AddArea(
					FTabManager::NewPrimaryArea()
					->Split(
						FTabManager::NewSplitter()
						->SetSizeCoefficient(0.2)
						->Split(
							FTabManager::NewStack()
							->AddTab(FEditorTabType::FileDirectoryTabName, ETabState::OpenedTab)
							->SetHideTabWell(false)
						)
					)
					->Split(
						FTabManager::NewSplitter()
						->SetSizeCoefficient(0.6)
						->Split(FTabManager::NewStack()
							->AddTab(FEditorTabType::GraphTabName, ETabState::OpenedTab)
							->SetHideTabWell(false)
						)
					)
					->Split(
						FTabManager::NewSplitter()
						->SetSizeCoefficient(0.2)
						->Split(
							FTabManager::NewStack()
							->AddTab(FEditorTabType::NodeListTabName, ETabState::OpenedTab)
							->SetHideTabWell(false)
						)
					)
				);

				WorkModeInstance.AddDefaultLayout(AutomationWorkMode, TempInfo.Name, DefautlLayout);

			}
			
			{
				FPageButtonInfo TempInfo;
				TempInfo.Name = LOCTEXT("ModeName.Automation.L1", "L1");
				TempInfo.LayoutName = WorkModeInstance.GetDefaultLayoutName(AutomationWorkMode, TempInfo.Name);
				TempInfo.LayoutTabType.Add(ETabType::DefaultTabName);

				WorkModeInstance.AddPageButtonInfo(AutomationWorkMode, TempInfo);

				TSharedRef<FTabManager::FLayout> DefautlLayout = FTabManager::NewLayout(FName(TempInfo.LayoutName));
				DefautlLayout->AddArea(
					FTabManager::NewPrimaryArea()
					->Split(
						FTabManager::NewSplitter()
						->Split(
							FTabManager::NewStack()
							->AddTab(FEditorTabType::DefaultTabName, ETabState::OpenedTab)
							->SetHideTabWell(false)
						)
					)
				);

				WorkModeInstance.AddDefaultLayout(AutomationWorkMode, TempInfo.Name, DefautlLayout);
			}

		}

		{
			{
				FPageButtonInfo TempInfo;
				TempInfo.Name = LOCTEXT("ModeName.Other.Editor", "Editor");
				TempInfo.LayoutName = WorkModeInstance.GetDefaultLayoutName(OtherWorkMode, TempInfo.Name);
				TempInfo.LayoutTabType.Add(ETabType::FileDirectoryTabName);
				TempInfo.LayoutTabType.Add(ETabType::GraphTabName);
				TempInfo.LayoutTabType.Add(ETabType::NodeListTabName);
				WorkModeInstance.AddPageButtonInfo(OtherWorkMode, TempInfo);

				TSharedRef<FTabManager::FLayout> DefautlLayout = FTabManager::NewLayout(FName(TempInfo.LayoutName));

				DefautlLayout->AddArea(
					FTabManager::NewPrimaryArea()
					->Split(
						FTabManager::NewSplitter()
						->SetSizeCoefficient(0.2)
						->Split(
							FTabManager::NewStack()
							->AddTab(FEditorTabType::FileDirectoryTabName, ETabState::OpenedTab)
							->SetHideTabWell(false)					
						)	
					)
					->Split(
						FTabManager::NewSplitter()
						->SetSizeCoefficient(0.6)
						->Split(FTabManager::NewStack()
							->AddTab(FEditorTabType::GraphTabName, ETabState::OpenedTab)
							->SetHideTabWell(false)		
						)
					)
					->Split(
						FTabManager::NewSplitter()
						->SetSizeCoefficient(0.2)
						->Split(
							FTabManager::NewStack()
							->AddTab(FEditorTabType::NodeListTabName, ETabState::OpenedTab)
							->SetHideTabWell(false)
						)
					)
				);

				WorkModeInstance.AddDefaultLayout(OtherWorkMode, TempInfo.Name, DefautlLayout);
			}
			{
				FPageButtonInfo TempInfo;
				TempInfo.Name = LOCTEXT("ModeName.Other.L1", "L1");
				TempInfo.LayoutName = WorkModeInstance.GetDefaultLayoutName(OtherWorkMode, TempInfo.Name);
				TempInfo.LayoutTabType.Add(ETabType::DefaultTabName);
				WorkModeInstance.AddPageButtonInfo(OtherWorkMode, TempInfo);

				TSharedRef<FTabManager::FLayout> DefautlLayout = FTabManager::NewLayout(FName(TempInfo.LayoutName));
				DefautlLayout->AddArea(
					FTabManager::NewPrimaryArea()
					
					->Split(
						FTabManager::NewSplitter()
						->Split(
							FTabManager::NewStack()
							->AddTab(FEditorTabType::DefaultTabName, ETabState::OpenedTab)
							->SetHideTabWell(false)
						)
					)			
				);
				
				WorkModeInstance.AddDefaultLayout(OtherWorkMode, TempInfo.Name, DefautlLayout);
			}
			{
				FPageButtonInfo TempInfo;
				TempInfo.Name = LOCTEXT("ModeName.Other.L2", "L2");
				TempInfo.LayoutName = WorkModeInstance.GetDefaultLayoutName(OtherWorkMode, TempInfo.Name);
				TempInfo.LayoutTabType.Add(ETabType::DefaultTabName);
				WorkModeInstance.AddPageButtonInfo(OtherWorkMode, TempInfo);

				TSharedRef<FTabManager::FLayout> DefautlLayout = FTabManager::NewLayout(FName(TempInfo.LayoutName));

				DefautlLayout->AddArea(
					FTabManager::NewPrimaryArea()
					->Split(
						FTabManager::NewSplitter()
						->Split(
							FTabManager::NewStack()
							->AddTab(FEditorTabType::DefaultTabName, ETabState::OpenedTab)
							->SetHideTabWell(false)
						)
					)
				);;
				
				WorkModeInstance.AddDefaultLayout(OtherWorkMode, TempInfo.Name, DefautlLayout);
			}
		}
	}
}

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#undef LOCTEXT_NAMESPACE