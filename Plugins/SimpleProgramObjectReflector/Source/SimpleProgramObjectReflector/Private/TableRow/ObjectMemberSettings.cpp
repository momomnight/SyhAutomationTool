#include "TableRow/ObjectMemberSettings.h"

FObjectMemberSettings::FObjectMemberSettings()
{
	CategoryToMemberName.Add({ NAME_None, TArray<FName>()});
}

void FObjectMemberSettings::AddSetting(const FObjectMemberSetting& InSetting)
{
	if(!InSetting.MemberName.IsNone() && !ObjectMemberSettingMap.Contains(InSetting.MemberName))
	{
		ObjectMemberSettingMap.Add({ InSetting.MemberName , InSetting});

		if (CategoryToMemberName.Contains(InSetting.Category))
		{
			CategoryToMemberName.Find(InSetting.Category)->Add(InSetting.MemberName);
		}
		else
		{
			CategoryToMemberName.Add({ InSetting.Category , TArray<FName>{InSetting.MemberName}});
		}
	}
}

void FObjectMemberSettings::RemoveSetting(const FName& InMemberName)
{
	if (!InMemberName.IsNone() && ObjectMemberSettingMap.Contains(InMemberName))
	{
		const FObjectMemberSetting& Setting = *ObjectMemberSettingMap.Find(InMemberName);
		TArray<FName>& MemberNames = *CategoryToMemberName.Find(Setting.Category);
		MemberNames.Remove(InMemberName);
		if (!Setting.Category.IsNone() && MemberNames.IsEmpty())
		{
			CategoryToMemberName.Remove(Setting.Category);
		}
		ObjectMemberSettingMap.Remove(InMemberName);
	}

}

void FObjectMemberSettings::GetCategories(TArray<FName>& OutCategories)
{
	CategoryToMemberName.GetKeys(OutCategories);
}
