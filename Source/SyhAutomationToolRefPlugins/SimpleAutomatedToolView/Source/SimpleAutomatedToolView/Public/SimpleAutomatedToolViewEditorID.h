
#pragma once
#include "CoreMinimal.h"
#include "SimpleAutomatedToolViewEditorID.generated.h"


UENUM(BlueprintType)
enum class ETabType : uint8
{
	DefaultTabName = 0		UMETA(DisplayName = "Automated Editor DefaultTabName"),
	FileDirectoryTabName	UMETA(DisplayName = "Automated Editor FileDirectoryTabName"),
	GraphTabName			UMETA(DisplayName = "Automated Editor GraphTabName"),
	NodeListTabName			UMETA(DisplayName = "Automated Editor NodeListTabName"),
};

#define LOCTEXT_NAMESPACE "AutomatedToolTabs"

struct SIMPLEAUTOMATEDTOOLVIEW_API FEditorTabType
{
	static const FName DefaultTabName;
	static const FName MainTabName;
	static const FName FileDirectoryTabName;
	static const FName GraphTabName;
	static const FName NodeListTabName;

	template <ETabType Type>
	static const FName& GetTabName() { return FEditorTabType::DefaultTabName; }

	template <>
	const FName& GetTabName<ETabType::FileDirectoryTabName>()
	{
		return FEditorTabType::FileDirectoryTabName;
	}

	template <>
	const FName& GetTabName<ETabType::GraphTabName>()
	{
		return FEditorTabType::GraphTabName;
	}

	template <>
	const FName& GetTabName<ETabType::NodeListTabName>()
	{
		return FEditorTabType::NodeListTabName;
	}

	static const FName& GetTabName(ETabType InTabType)
	{
		switch (InTabType)
		{
		case ETabType::FileDirectoryTabName:
			return GetTabName<ETabType::FileDirectoryTabName>();
		case ETabType::GraphTabName:
			return GetTabName<ETabType::GraphTabName>();
		case ETabType::NodeListTabName:
			return GetTabName<ETabType::NodeListTabName>();
		case ETabType::DefaultTabName:
		default:
			return GetTabName<ETabType::DefaultTabName>();
		}
	}




	static TSharedRef<FTabSpawnerEntry> GetDefaultTabSpawnerEntry();
	static TSharedRef<FTabSpawnerEntry> GetFileDirectoryTabSpawnerEntry();
	static TSharedRef<FTabSpawnerEntry> GetGraphTabSpawnerEntry();
	static TSharedRef<FTabSpawnerEntry> GetNodeListTabSpawnerEntry();


	template <ETabType Type>
	static TSharedRef<FTabSpawnerEntry> GetTabSpawnerEntry()
	{
		return GetDefaultTabSpawnerEntry();
	}

	template <>
	TSharedRef<FTabSpawnerEntry> GetTabSpawnerEntry<ETabType::FileDirectoryTabName>()
	{
		return GetFileDirectoryTabSpawnerEntry();
	}

	template <>
	TSharedRef<FTabSpawnerEntry> GetTabSpawnerEntry<ETabType::GraphTabName>()
	{
		return GetGraphTabSpawnerEntry();
	}

	template <>
	TSharedRef<FTabSpawnerEntry> GetTabSpawnerEntry<ETabType::NodeListTabName>()
	{
		return GetNodeListTabSpawnerEntry();
	}


	

	//主Tab注册至GlobalTabManager
	static void RegisterMainTabSpawner(TSharedPtr<class FUICommandList> UICommandList);
	static void UnregisterMainTabSpawner();
	static TSharedRef<SDockTab> SpawnMainTab(const FSpawnTabArgs&, TSharedPtr<FUICommandList> PluginCommands);

	template <ETabType Type>
	static void RegisterTabSpawner(TSharedRef<FTabManager> TabManager)
	{
		RegisterDefaultTabSpawner(TabManager);
	}

	template <>
	void RegisterTabSpawner<ETabType::FileDirectoryTabName>(TSharedRef<FTabManager> TabManager)
	{
		RegisterFileDirectoryTabSpawner(TabManager);
	}

	template <>
	void RegisterTabSpawner<ETabType::GraphTabName>(TSharedRef<FTabManager> TabManager)
	{
		RegisterGraphTabSpawner(TabManager);
	}

	template <>
	void RegisterTabSpawner<ETabType::NodeListTabName>(TSharedRef<FTabManager> TabManager)
	{
		RegisterNodeListTabSpawner(TabManager);
	}


	template <ETabType Type>
	static void UnregisterTabSpawner(TSharedRef<FTabManager> TabManager)
	{
		UnregisterDefaultTabSpawner(TabManager);
	}

	template <>
	void UnregisterTabSpawner<ETabType::FileDirectoryTabName>(TSharedRef<FTabManager> TabManager)
	{
		UnregisterFileDirectoryTabSpawner(TabManager);
	}

	template <>
	void UnregisterTabSpawner<ETabType::GraphTabName>(TSharedRef<FTabManager> TabManager)
	{
		UnregisterGraphTabSpawner(TabManager);
	}

	template <>
	void UnregisterTabSpawner<ETabType::NodeListTabName>(TSharedRef<FTabManager> TabManager)
	{
		UnregisterNodeListTabSpawner(TabManager);
	}

	static void RegisterTabSpawner(TSharedRef<FTabManager> TabManager, ETabType InTabType)
	{
		switch (InTabType)
		{
		case ETabType::FileDirectoryTabName:
		{
			RegisterTabSpawner<ETabType::FileDirectoryTabName>(TabManager);
			break;
		}
		case ETabType::GraphTabName:
		{
			RegisterTabSpawner<ETabType::GraphTabName>(TabManager);
			break;
		}
		case ETabType::NodeListTabName:
		{
			RegisterTabSpawner<ETabType::NodeListTabName>(TabManager);
			break;
		}
		case ETabType::DefaultTabName:
		default:
		{
			RegisterTabSpawner<ETabType::DefaultTabName>(TabManager);
			break;
		}
		}
	}

	//自选注册
	static void RegisterFileDirectoryTabSpawner(TSharedRef<FTabManager> TabManager);
	static void RegisterGraphTabSpawner(TSharedRef<FTabManager> TabManager);
	static void RegisterNodeListTabSpawner(TSharedRef<FTabManager> TabManager);
	static void RegisterDefaultTabSpawner(TSharedRef<FTabManager> TabManager);

	static void UnregisterFileDirectoryTabSpawner(TSharedRef<FTabManager> TabManager);
	static void UnregisterGraphTabSpawner(TSharedRef<FTabManager> TabManager);
	static void UnregisterNodeListTabSpawner(TSharedRef<FTabManager> TabManager);
	static void UnregisterDefaultTabSpawner(TSharedRef<FTabManager> TabManager);

	
	template <ETabType Type>
	static void InvokeTab(TSharedRef<FTabManager> TabManager)
	{
		TabManager->TryInvokeTab(FEditorTabType::DefaultTabName);
	}

	template <>
	void InvokeTab<ETabType::FileDirectoryTabName>(TSharedRef<FTabManager> TabManager)
	{
		TabManager->TryInvokeTab(FEditorTabType::FileDirectoryTabName);
	}

	template <>
	void InvokeTab<ETabType::GraphTabName>(TSharedRef<FTabManager> TabManager)
	{
		TabManager->TryInvokeTab(FEditorTabType::GraphTabName);
	}

	template <>
	void InvokeTab<ETabType::NodeListTabName>(TSharedRef<FTabManager> TabManager)
	{
		TabManager->TryInvokeTab(FEditorTabType::NodeListTabName);
	}

	//static TSharedRef<SDockTab> SpawnGraphTab(const FSpawnTabArgs&);
	//static TSharedRef<SDockTab> SpawnNodeListTab(const FSpawnTabArgs&);
};



#undef LOCTEXT_NAMESPACE