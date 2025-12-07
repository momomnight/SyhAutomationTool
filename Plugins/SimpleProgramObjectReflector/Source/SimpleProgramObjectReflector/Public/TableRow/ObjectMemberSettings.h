#pragma once
#include "Templates/SharedPointer.h"
#include "UObject/NameTypes.h"
#include "Containers/Map.h"
#include "Containers/Array.h"
#include "Containers/Set.h"

//描述成员属性的设置，如类别，嵌套显示等
struct FObjectMemberSetting
{
	FName MemberName{NAME_None};
	FName Category{ NAME_None };
	bool bDisplay = true;
	bool bNestedDisplay = false;
};

//针对单个对象的成员设置合集
class FObjectMemberSettings : public TSharedFromThis<FObjectMemberSettings>
{
public:
	FObjectMemberSettings();

	void AddSetting(const FObjectMemberSetting& InSetting);
	void RemoveSetting(const FName& InMemberName);

	void GetCategories(TArray<FName>& OutCategories);

private:
	TMap<FName, FObjectMemberSetting> ObjectMemberSettingMap;
	TMap<FName, TArray<FName>> CategoryToMemberName;
};

//
// TSharedPtr<FObjectMemberSettings> Settings = MakeShareable(new FObjectMemberSettings);
// 
// FObjectMemberSettingEnterDevice EnterDevice{Settings};
// EnterDevice << FObjectMemberSetting{...} << FObjectMemberSetting{...};
// 
//

//录入器
class FObjectMemberSettingEnterDevice
{
public:
	FObjectMemberSettingEnterDevice(){}
	FObjectMemberSettingEnterDevice(TSharedPtr<FObjectMemberSettings> InSettings) : Settings(InSettings) {}
	void Reset(TSharedPtr<FObjectMemberSettings> InSettings = nullptr){ Settings = InSettings; }
	
	FObjectMemberSettingEnterDevice& operator<<(const FObjectMemberSetting& InSetting)
	{
		check(Settings.IsValid());
		Settings->AddSetting(InSetting);
		return *this;
	}


#if !UE_BUILD_SHIPPING
	void Test()
	{
		TSharedPtr<FObjectMemberSettings> Settings = MakeShareable(new FObjectMemberSettings);
	 
		FObjectMemberSettingEnterDevice EnterDevice{Settings};
		EnterDevice << FObjectMemberSetting{ FName("1"),FName("1"), true, true} 
			<< FObjectMemberSetting{ FName("2"), FName("1"), false, false};

	}
#endif

private:
	TSharedPtr<FObjectMemberSettings> Settings;
};
