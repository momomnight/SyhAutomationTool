#include "Editor/Base/AutomatedToolEditorBase.h"
#include "ToolMenuSection.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

#define LOCTEXT_NAMESPACE "FAutomatedToolEditorBase"

FAutomatedToolEditorBase::FAutomatedToolEditorBase(TSharedPtr<FAutomatedToolEditorBase> InParentEditorBase, const FName& InName)
	:CommandList(nullptr), ParentEditorBase(InParentEditorBase), RealName(InName), bIsInitialized(false)
{
	CommandList = MakeShareable(new FUICommandList);
}

void FAutomatedToolEditorBase::Initialize()
{
	if(!bIsInitialized)
	{
		bIsInitialized = true;
		if (RealName == NAME_None)
		{
			RealName = GetDefaultName();
		}

		TSharedPtr<FWorkspaceItem> ParentWorkspaceItem = nullptr;
		if (ParentEditorBase.IsValid())
		{
			ParentWorkspaceItem = ParentEditorBase.Pin()->GetWorkspaceItemCategory();
		}
		BuildWorkspaceItemCategory(ParentWorkspaceItem);
	}

	RegisterEditorStateSection();
}

void FAutomatedToolEditorBase::BuildWorkspaceItemCategory(TSharedPtr<FWorkspaceItem> InParentItem)
{
	check(bIsInitialized);
	if (InParentItem.IsValid())
	{
		WorkspaceItemCategory = FWorkspaceItem::NewGroup(FText::Format(LOCTEXT("EditorWorkspaceItemCategory", "{0}_{1}")
			, InParentItem->GetDisplayName(), GetRealNameText()));
		InParentItem->AddItem(WorkspaceItemCategory.ToSharedRef());
	}
	else
	{
		WorkspaceItemCategory = FWorkspaceItem::NewGroup(GetRealNameText());
	}
}

void FAutomatedToolEditorBase::FEditorStateStorageMap::SetSerializationPath(const FString& InSerializationPath)
{
	Path = InSerializationPath;
}

void FAutomatedToolEditorBase::FEditorStateStorageMap::RegisterStateSection(const FString& InStateSectionName)
{
	Get().StateSectionMap.Add(InStateSectionName, FStateSection());
}

void FAutomatedToolEditorBase::FEditorStateStorageMap::RegisterStateSectionUsage(const FString& InStateSectionName, FOnSerializeState InSerializeMethod, FOnDeserializeState InDeserializeMethod)
{
	FStateSection& StateSection = Get().StateSectionMap.FindOrAdd(InStateSectionName);
	StateSection.OnSerializeState = InSerializeMethod;
	StateSection.OnDeserializeState = InDeserializeMethod;
}

void FAutomatedToolEditorBase::FEditorStateStorageMap::SaveSingleStateSection(const FString& InStateSectionName)
{
	ensure(!Path.IsEmpty());
	FStateSection* StateSectionPtr = Get().StateSectionMap.Find(InStateSectionName);
	if (StateSectionPtr && StateSectionPtr->ToJsonString())
	{
		FText StringText = FText::FromString(StateSectionPtr->Buffer);
		FLayoutSaveRestore::SaveSectionToConfig(Path, InStateSectionName, StringText);
	}
}

void FAutomatedToolEditorBase::FEditorStateStorageMap::LoadSingleStateSection(const FString& InStateSectionName)
{
	ensure(!Path.IsEmpty());
	FStateSection* StateSectionPtr = Get().StateSectionMap.Find(InStateSectionName);
	if (StateSectionPtr)
	{
		StateSectionPtr->Buffer = FLayoutSaveRestore::LoadSectionFromConfig(Path, InStateSectionName).ToString();
		StateSectionPtr->FromJsonString();
	}
}

void FAutomatedToolEditorBase::FEditorStateStorageMap::SaveStateSections()
{
	ensure(!Path.IsEmpty());
	for (auto Iter = Get().StateSectionMap.CreateConstIterator(); Iter; ++Iter)
	{
		SaveSingleStateSection(Iter.Key());
	}
}

void FAutomatedToolEditorBase::FEditorStateStorageMap::LoadStateSections()
{
	ensure(!Path.IsEmpty());
	for (auto Iter = Get().StateSectionMap.CreateConstIterator(); Iter; ++Iter)
	{
		LoadSingleStateSection(Iter.Key());
	}
}

FAutomatedToolEditorBase::FEditorStateStorageMap& FAutomatedToolEditorBase::FEditorStateStorageMap::Get()
{
	static FEditorStateStorageMap StorageMap;
	return StorageMap;
}

bool FAutomatedToolEditorBase::FEditorStateStorageMap::FStateSection::ToJsonString()
{
	Buffer.Empty();
	TSharedRef<FJsonObject> JsonObject = MakeShared<FJsonObject>();
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Buffer);
	ensure(OnSerializeState.ExecuteIfBound(JsonObject));
	return FJsonSerializer::Serialize(JsonObject, Writer);
}

bool FAutomatedToolEditorBase::FEditorStateStorageMap::FStateSection::FromJsonString()
{
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Buffer);
	TSharedPtr<FJsonObject> JsonObject = MakeShared<FJsonObject>();
	bool IsSuccessfullyDeserizlized = FJsonSerializer::Deserialize(Reader, JsonObject);
	if (IsSuccessfullyDeserizlized)
	{
		IsSuccessfullyDeserizlized = ensure(OnDeserializeState.ExecuteIfBound(JsonObject.ToSharedRef()));
	}

	return IsSuccessfullyDeserizlized;
}

void FAutomatedToolEditorBase::AddCheckBoxInSection(FToolMenuSection& InSection, ETabType InTabType, 
	FToolUIActionChoice InUIAction, FSlateIcon InSlateIcon)
{
	FName TabName = FEditorTabType::GetTabName(InTabType);
	FText Label = FText::Format(LOCTEXT("Tabs_Label", "{0}"), FText::FromName(TabName));
	FText ToolTip = FText::Format(LOCTEXT("Tabs_Tooltip", "Open or close the {0}"), FText::FromName(TabName));

	InSection.AddMenuEntry(
		TabName,
		Label,
		ToolTip,
		InSlateIcon,
		InUIAction,
		EUserInterfaceActionType::Check,
		TabName
	);
}

#undef LOCTEXT_NAMESPACE


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT