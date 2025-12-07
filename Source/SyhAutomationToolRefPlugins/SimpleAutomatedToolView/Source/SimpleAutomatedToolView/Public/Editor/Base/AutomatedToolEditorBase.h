#pragma once
#include "Templates/SharedPointer.h"
#include "Editor/Misc/CommonMethod.h"
#include "SimpleAutomatedToolViewEditorID.h"
#include "SimpleAutomatedToolViewLog.h"
#include "ToolMenuContext.h"
#include "ToolMenuSection.h"
#include "ToolMenus.h"

class FAutomatedToolMenu;
enum class ETabType : uint8;


DECLARE_DELEGATE_OneParam(FOnSerializeState, TSharedRef<FJsonObject>);
DECLARE_DELEGATE_OneParam(FOnDeserializeState, TSharedRef<FJsonObject>);

class FAutomatedToolEditorBase : public TSharedFromThis<FAutomatedToolEditorBase>
{
public:
	FAutomatedToolEditorBase(TSharedPtr<FAutomatedToolEditorBase> InParent, const FName& InName = NAME_None);

	virtual void Initialize();

	virtual ~FAutomatedToolEditorBase(){}

public:
	void BuildWorkspaceItemCategory(TSharedPtr<FWorkspaceItem> InParentItem);
	TSharedRef<FWorkspaceItem> GetWorkspaceItemCategory() const { return WorkspaceItemCategory.ToSharedRef(); }

	bool IsEditor() const { return !WorkspaceItemCategory->GetParent().IsValid(); }
	bool IsInitialized() const { return bIsInitialized;}

public:
	TSharedPtr<FUICommandList> GetCommandList() const { return CommandList;}

	FName GetRealName() const { return RealName; }
	FText GetRealNameText() const { return FText::FromName(RealName); }

	void SetDisplayName(TAttribute<FText> InDisplayName)
	{
		DisplayName = InDisplayName;
	}

	TAttribute<FText> GetDisplayName() const
	{
		return DisplayName.IsBound() || DisplayName.IsSet() ? DisplayName : GetRealNameText();
	}

	TSharedPtr<FUICommandList> GetCommondList() const { return CommandList;}

	//example: return FName(GetNameWithSerialNumber<FAutomatedToolEditorBase>(TEXT("AutomatedToolEditorBase")));
	virtual FName GetDefaultName() const = 0;
	virtual void RegisterMenuContextObject(FToolMenuContext& InMenuContext) = 0;

	virtual void RegisterCommand(){};
	virtual void BindCommand(){};

	struct FEditorStateStorageMap
	{
		struct FStateSection
		{
			bool ToJsonString();
			bool FromJsonString();
			FOnSerializeState OnSerializeState;
			FOnDeserializeState OnDeserializeState;
			FString Buffer;
		};

		void RegisterStateSection(const FString& InStateSectionName);
		//可以顶掉两个代理
		void RegisterStateSectionUsage(const FString& InStateSectionName, FOnSerializeState InSerializeMethod, FOnDeserializeState InDeserializeMethod);		
		void SetSerializationPath(const FString& InSerializationPath);

		void SaveSingleStateSection(const FString& InStateSectionName);
		void LoadSingleStateSection(const FString& InStateSectionName);

		void SaveStateSections();
		void LoadStateSections();

		static FEditorStateStorageMap& Get();
	private:
		FEditorStateStorageMap() = default;
		FEditorStateStorageMap(const FEditorStateStorageMap&) = default;
		FEditorStateStorageMap& operator=(const FEditorStateStorageMap&) = default;

		FString Path;
		TMap<FString, FStateSection> StateSectionMap;

	};

	//注册需要保存的编辑器状态，如：最后的WorkFlow/WorkMode
	virtual void RegisterEditorStateSection(){}
	FEditorStateStorageMap& GetEditorStateStorageMap() { return FEditorStateStorageMap::Get(); }

protected:
	static void AddCheckBoxInSection(FToolMenuSection& InSection, ETabType InTabType,
		FToolUIActionChoice InUIAction, FSlateIcon InSlateIcon = FSlateIcon());

protected:

	TAttribute<FText> DisplayName;

	TSharedPtr<FWorkspaceItem> WorkspaceItemCategory;

	TSharedPtr<FUICommandList> CommandList;

	TWeakPtr<FAutomatedToolEditorBase> ParentEditorBase;

private:
	FName RealName;
	bool bIsInitialized;
};