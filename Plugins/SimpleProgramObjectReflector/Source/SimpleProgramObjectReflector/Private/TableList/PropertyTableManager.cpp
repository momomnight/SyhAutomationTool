#include "TableList/PropertyTableManager.h"
#include "SimpleProgramObjectReflectorLog.h"
#include "TableRow/PropertyInfoFactory.h"

TSharedPtr<FPropertyTableManager> FPropertyTableManager::Instance = nullptr;

FPropertyTableManager::FPropertyTableManager()
{
	
}

TSharedPtr<FPropertyTableManager> FPropertyTableManager::Get()
{
	if (!Instance.IsValid())
	{
		Instance = MakeShareable(new FPropertyTableManager);
	}
	return Instance;
}

void FPropertyTableManager::Initialize()
{
	static bool bInitialized = false;

	if(!bInitialized)
	{
		bInitialized = true;
	}
}

TSharedPtr<FPropertyInfoRoot> FPropertyTableManager::RegisterOwner(FName InPropertyInfoOwner)
{
	TSharedPtr<FPropertyInfoRoot>* InfoPtr = Roots.Find(InPropertyInfoOwner);
	if (InfoPtr)
	{
		UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("The Owner has been registered."));
		return *InfoPtr;
	}
	else
	{
		TSharedPtr<FPropertyInfoRoot> Root = FPropertyInfoFactory::CreatePropertyInfoRoot();
		Roots.Add({ InPropertyInfoOwner, Root });
		return Root;
	}
}

TSharedPtr<FPropertyInfoRoot> FPropertyTableManager::FindRootByName(FName InPropertyInfoOwner) const
{
	if (Roots.Contains(InPropertyInfoOwner))
	{
		return *Roots.Find(InPropertyInfoOwner);
	}
	return nullptr;
}

bool FPropertyTableManager::ContainRootByName(FName InPropertyInfoOwner) const
{
	return Roots.Contains(InPropertyInfoOwner);
}

bool FPropertyTableManager::ContainRoot(TSharedPtr<FPropertyInfoRoot> InRoot) const
{
	for (auto Iter = Roots.CreateConstIterator(); Iter; ++Iter)
	{
		if (Iter->Value == InRoot)
		{
			return true;
		}
	}
	return false;
}

void FPropertyTableManager::GeneratePropertyInfoTree(FName OwnerName, const FPropertyInfoInitParam& InInitParam)
{
	TSharedPtr<FPropertyInfoRoot> Root = FindRootByName(OwnerName);
	if(!Root.IsValid())
	{
		Root = RegisterOwner(OwnerName);
	}
	GeneratePropertyInfoTree(Root, InInitParam);
}

void FPropertyTableManager::GeneratePropertyInfoTree(TSharedPtr<FPropertyInfoRoot> InRoot, 
	const FPropertyInfoInitParam& InInitParam)
{
	if (!InRoot.IsValid() || !ContainRoot(InRoot) ||
		!(InInitParam.ContainerDescription.IsValid() && InInitParam.ContainerDescription->IsValid()) ||
		!InInitParam.ObjectMemberSettings.IsValid())
	{
		UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("Invalid InitParam."));
		return;
	}

	UStruct* Class = nullptr;
	if (InInitParam.ContainerDescription->IsUClassObject())
	{
		Class = StaticCastSharedPtr<FContainerDescriptionForUClass>(InInitParam.ContainerDescription)->GetClass();
	}
	else if (InInitParam.ContainerDescription->IsUStructData())
	{
		Class = StaticCastSharedPtr<FContainerDescriptionForUScriptStruct>(InInitParam.ContainerDescription)->GetStructClass();
	}
	else
	{
		UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("Unknown ContainerDescription."));
		return;
	}

	if (Class)
	{
		//1.设置Root
		if (!SetupRoot(InRoot, InInitParam))
		{
			UE_LOG(LogSimpleProgramObjectReflector, Warning, TEXT("Failure to set up PropertyInfoRoot."));
			return;
		}


		//2.遍历属性
		for (TFieldIterator<FProperty> Iter(Class, InInitParam.Flags); Iter; ++Iter)
		{
			FProperty* Property = *Iter;

			//3.创建PropertyInfo

			TSharedPtr<IPropertyInfoBase> PropertyInfo = FPropertyInfoFactory::CreatePropertyInfo(Property);



			//4.关联PropertyInfo

			InRoot->AddChild(PropertyInfo);

		}
	}
}


bool FPropertyTableManager::SetupRoot(TSharedPtr<FPropertyInfoRoot> InRoot, const FPropertyInfoInitParam& InInitParam)
{
	if (InRoot.IsValid() && InInitParam.ContainerDescription.IsValid() && InInitParam.ContainerDescription->IsValid())
	{			
		InRoot->Clear();

		InRoot->ResetContainer(InInitParam.ContainerDescription);
		InRoot->ResetObjectMemberSettings(InInitParam.ObjectMemberSettings);

		InRoot->PreCreateCategory();

		return true;
	}
	return false;
}
