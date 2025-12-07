#include "GlobalSelectedObjectManagers.h"
#include "SelectedObjectManager.h"

bool FRegisteredObjectManager::IsEqual(const FName& InOwner) const
{
	return this->Owner == InOwner;
}

UGlobalSelectedObjectManagers* UGlobalSelectedObjectManagers::GlobalSelectedObjectManagers = nullptr;

UGlobalSelectedObjectManagers* UGlobalSelectedObjectManagers::Get()
{
	if (GlobalSelectedObjectManagers == nullptr)
	{
		GlobalSelectedObjectManagers = NewObject<UGlobalSelectedObjectManagers>();
		GlobalSelectedObjectManagers->AddToRoot();
		check(GlobalSelectedObjectManagers);
	}
	return GlobalSelectedObjectManagers;
}

void UGlobalSelectedObjectManagers::Destory()
{
	if (GlobalSelectedObjectManagers)
	{
		GlobalSelectedObjectManagers = nullptr;
	}
}

USelectedObjectManager* UGlobalSelectedObjectManagers::RegisterManager(const FName& InOwner)
{
	if(InOwner != NAME_None)
	{
		
		FRegisteredObjectManager RegisteredObjectManager;
		FName SelectedObjectManagerName = MakeUniqueObjectName(this, USelectedObjectManager::StaticClass(), FName(TEXT("SelectedObjectManager")));
		USelectedObjectManager* SelectedObjectManager = NewObject<USelectedObjectManager>(this, SelectedObjectManagerName);
		
		RegisteredObjectManager.Owner = InOwner;
		RegisteredObjectManager.Manager = SelectedObjectManager;

		int32 Index = Managers.AddUnique(RegisteredObjectManager);
		return Managers[Index].Manager;
	}
	return nullptr;
}

void UGlobalSelectedObjectManagers::UnregisterManager(const FName& InOwner)
{
	if(InOwner != NAME_None)
	{
		FRegisteredObjectManager RegisteredObjectManager;
		RegisteredObjectManager.Owner = InOwner;
		Managers.RemoveSingleSwap(RegisteredObjectManager, false);
	}
}

USelectedObjectManager* UGlobalSelectedObjectManagers::GetSelectedObjectManager(const FName& InOwner)
{
	FRegisteredObjectManager RegisteredObjectManager;
	RegisteredObjectManager.Owner = InOwner;
	int32 Index = Managers.Find(RegisteredObjectManager);
	return Managers[Index].Manager;
}

