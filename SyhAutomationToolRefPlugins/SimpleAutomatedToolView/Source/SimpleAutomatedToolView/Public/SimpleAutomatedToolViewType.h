
#pragma once

#include "CoreMinimal.h"
#include "SimpleAutomatedToolViewEditorID.h"
#include "SimpleAutomatedToolViewType.generated.h"

USTRUCT(BlueprintType)
struct SIMPLEAUTOMATEDTOOLVIEW_API FPageButtonInfo
{
	GENERATED_USTRUCT_BODY()

	//页面名，会显示在Button上
	UPROPERTY()
	FText Name;

	UPROPERTY()
	FString LayoutName;

	UPROPERTY()
	FString Style;

	UPROPERTY()
	TArray<ETabType> LayoutTabType;
};

bool operator==(const FPageButtonInfo& Lhs, const FPageButtonInfo& Rhs)
{
	return Lhs.Name.ToString() == Rhs.Name.ToString();
}

enum EWorkModeListActionType : uint8
{
	None,
	Add,
	Remove,
	ClearAll
};

//ParamType1 -- WorkModeName
//ParamType2 -- WorkModeIndex
//ParamType3 -- PageButtonName
//ParamType4 -- PageButtonIndex
DECLARE_MULTICAST_DELEGATE_FiveParams(FOnWorkModeListChanged, EWorkModeListActionType, const FText&, int32, const FText&, int32);

class SIMPLEAUTOMATEDTOOLVIEW_API FSimpleAutomatedToolViewWorkMode
{

public:
	FSimpleAutomatedToolViewWorkMode(){}

	static FSimpleAutomatedToolViewWorkMode& Get();
	static void TearDown();

public:
	//检查WorkModeArray与PageButtonMap的一致性, 即WorkModeArray中有的，PageButtonMap也要有对应键值对，即使没有PageButtonInfo
	bool CheckConsistency(const FText& InModeName) const;
	bool CheckConsistency(int32 InModeIndex) const;

	FString GetDefaultLayoutName(const FText& InModeName, const FText& InPageButtonName);
	int32 GetWorkModeNum() const;
	int32 GetPageButtonInfoNum(const FText& InModeName) const;
	int32 GetPageButtonInfoNum(int32 InModeIndex) const;
	TArray<FText> GatherWorkMode();

public:
	void CreateTabManagers(TSharedRef<SDockTab> InOwnerTab, 
		FTabManager::FOnPersistLayout OnPersistLayout);

	TSharedPtr<FTabManager> GetTabManager(int32 InModeIndex, int32 InPageButtonIndex);

	void RegisterTabSpawner();

	void InvokeLayoutTab(TSharedRef<FTabManager> TabManager, const FText& InModeName, const FText& InPageButtonName);

public:
	int32 FindPageButtonIndexInArray(const TArray<FPageButtonInfo>& PageButtons, const FText& InPageButtonName) const;
	FPageButtonInfo FindPageButtonInArray(const TArray<FPageButtonInfo>& PageButtons, const FText& InPageButtonName) const;

	//只允许拷贝
	TArray<FPageButtonInfo> GetPageButtonInfosByModeName(const FText& InModeName) const;
	TArray<FPageButtonInfo> GetPageButtonInfosByModeIndex(int32 Index) const;

	//只允许const&, 会检查错误
	const TArray<FPageButtonInfo>& FindPageButtonInfosByModeName(const FText& InModeName) const;
	const TArray<FPageButtonInfo>& FindPageButtonInfosByModeIndex(int32 ModeIndex) const;

	int32 FindWorkModeIndex(const FText& InModeName) const;
	FText FindWorkMode(int32 Index) const;

	int32 FindPageButtonIndex(const FText& InModeName, const FText& InPageButtonName) const;
	int32 FindPageButtonIndex(int32 InModeIndex, const FText& InPageButtonName) const;

	FPageButtonInfo FindPageButtonInfo(const FText& InModeName, const FText& InPageButtonName) const;
	FPageButtonInfo FindPageButtonInfo(const FText& InModeName, int32 InPageButtonIndex) const;
	FPageButtonInfo FindPageButtonInfo(int32 InModeIndex, const FText& InPageButtonName) const;
	FPageButtonInfo FindPageButtonInfo(int32 InModeIndex, int32 InPageButtonIndex) const;

	int32 AddWorkMode(const FText& InModeName);
	void RemoveWorkMode(const FText& InModeName);
	void RemoveWorkMode(int32 Index);

	void ClearWorkMode();

	int32 AddPageButtonInfo(const FText& InModeName, const FPageButtonInfo& InPageButtonInfo);
	void RemovePageButtonInMode(const FText& InModeName, const FText& InPageButtonName);
	void RemovePageButtonInMode(const FText& InModeName, int32 Index);

	void ClearPageButtonInMode(const FText& InModeName);

	FOnWorkModeListChanged& GetOnWorkModeListChanged()
	{
		return OnWorkModeListChanged;
	}

	void RemoveOnWorkModeListChanged(FDelegateHandle InHandle)
	{
		OnWorkModeListChanged.Remove(InHandle);
	}

	//通过布局名直接查找
	TSharedPtr<FTabManager::FLayout> FindDefualtLayout(const FString& InLayoutName) const;

	//通过WorkMode和PageButtonName查找
	TSharedPtr<FTabManager::FLayout> FindDefualtLayout(const FText& InModeName, const FText& InPageButtonName) const;

	//覆盖已有的或者空的布局，如果没有找到则跳过
	void AddDefaultLayout(const FString& InLayoutName, TSharedRef<FTabManager::FLayout> InLayout);

	//将找到的布局替换为空布局
	void RemoveDefaultLayout(const FString& InLayoutName);

	//如果没有对应的WorkMode或PageButton，则创建一个
	void AddDefaultLayout(const FText& InModeName, const FText& InPageButtonName, TSharedRef<FTabManager::FLayout> InLayout);

	void RemoveDefaultLayout(const FText& InModeName, const FText& InPageButtonName);


private:	

	TArray<FPageButtonInfo>& FindPageButtonInfosByModeName(const FText& InModeName);
	TArray<FPageButtonInfo>& FindPageButtonInfosByModeIndex(int32 ModeIndex);

	static TMap<FText, TArray<FPageButtonInfo>>& GetPageButtonMap();
	static TArray<FText>& GetWorkModeNameList();
	static TMap<FString, TSharedRef<FTabManager::FLayout>>& GetDefaultLayoutMap();
	static TMap<int32, TArray<TSharedPtr<FTabManager>>>& GetTabManagers();

	void ClearDefaultLayout();

	//当WorkMode 和 PageButton容器发生变换时调用
	FOnWorkModeListChanged OnWorkModeListChanged;

	
};

namespace SimpleAutomatedToolViewTest
{
	//1.注册WorkMode
	//2.为WorkModes添加PageButtonInfo
	//3.为PageButtonInfos添加LayoutTabType
	void SIMPLEAUTOMATEDTOOLVIEW_API InitializeWorkMode(FSimpleAutomatedToolViewWorkMode& WorkModeInstance);
}