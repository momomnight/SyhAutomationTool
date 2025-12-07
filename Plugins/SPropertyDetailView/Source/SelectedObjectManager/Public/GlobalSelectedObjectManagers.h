#pragma once
#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include "GlobalSelectedObjectManagers.generated.h"

class USelectedObjectManager;

//FGlobalSelectedObjectManagers管理所有Manager, 使用FRegisteredObjectManager结构映射Owner和Manager
//如：Editor与Manger的映射

USTRUCT()
struct SELECTEDOBJECTMANAGER_API FRegisteredObjectManager
{
	GENERATED_BODY()
public:
	FRegisteredObjectManager() = default;

	bool operator==(const FRegisteredObjectManager& Other) const
	{
		return IsEqual(Other.Owner);
	}

	bool operator==(const FName& OtherName) const
	{
		return IsEqual(OtherName);
	}

	bool IsEqual(const FName& InOwner) const;

	bool IsValid() const { return Owner != NAME_None && Manager != nullptr; }

	UPROPERTY()
	FName Owner;

	UPROPERTY()
	USelectedObjectManager* Manager;
};

UCLASS()
class SELECTEDOBJECTMANAGER_API UGlobalSelectedObjectManagers : public UObject
{
	GENERATED_BODY()

public:
	static UGlobalSelectedObjectManagers* Get();
	static void Destory();

public:
	USelectedObjectManager* RegisterManager(const FName& InOwner);
	void UnregisterManager(const FName& InOwner);

	USelectedObjectManager* GetSelectedObjectManager(const FName& InOwner);

private:
	UPROPERTY()
	TArray<FRegisteredObjectManager> Managers;

	static UGlobalSelectedObjectManagers* GlobalSelectedObjectManagers;
};