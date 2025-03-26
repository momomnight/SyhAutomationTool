#pragma once


#include "SyhAutomationToolTypeFwd.h"


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", off)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT

template <class EnumType, uint8 EnumMemberNameNumber>
struct FEnumData
{
	static_assert(EnumMemberNameNumber > 0, "EnumMemberNameNumber must be greater to 0.");
	const TCHAR* Prefix;
	const int32	PrefixLength;
	const TCHAR* NameKey;
	const TCHAR* const (&EnumMemberName)[EnumMemberNameNumber];
};

template <class EnumType, uint8 EnumMemberNameNumber>
struct FEnumRelatedBase
{
public:
	static_assert(EnumMemberNameNumber > 0, "EnumMemberNameNumber must be greater to 0.");
	static_assert(std::is_enum_v<EnumType>, "EnumType must be enum type.");


	constexpr FEnumRelatedBase(const FEnumData<EnumType, EnumMemberNameNumber>& InData) : Data(InData){}
	const FEnumData<EnumType, EnumMemberNameNumber>& Data;
public:

	template<EnumType EnumValue>
	constexpr const TCHAR* GetEnumValueNameKey() const noexcept
	{
		static_assert((uint8)EnumValue >= (uint8)0 && (uint8)EnumValue < (uint8)EnumMemberNameNumber, "EnumValue must be greater or equal to 0 and less to EnumMemberNameNumber.");
		return Data.EnumMemberName[static_cast<uint8>(EnumValue)];
	}
	constexpr const TCHAR* GetEnumNameKey() const noexcept
	{
		return Data.NameKey;
	}


public:
	//不会检查是否具有前缀
	FString GetEnumValueFullName(const FString& InShortName) const
	{
		FString Temp = GetEnumValueNormalName(InShortName);
		if (Temp.IsEmpty())
		{
			return {};
		}
		else
		{
			return Data.Prefix + Temp;
		}
	}

	//不会检查是否具有前缀
	FString GetEnumValueShortName(const FString& InLongName) const
	{
		return GetEnumValueNormalName(InLongName.RightChop(Data.PrefixLength));
	}

	//遍历NameKey, 返回标准短名, 不会检查
	FString TraverseNameKey(const FString& InShortName, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase) const
	{
		for (auto& Temp : Data.EnumMemberName)
		{
			if (InShortName.Equals(Temp, SearchCase))
			{
				return Temp;
			}
		}
		return {};
	}

	bool IsWithPrefix(const FString& InName) const { return InName.StartsWith(Data.Prefix); }

	//标准：符合格式为标准
	bool IsWithNormalPrefix(const FString& InName) const { return InName.StartsWith(Data.Prefix, ESearchCase::CaseSensitive); }

	bool IsNormalShortName(const FString& InShortName) const
	{
		if (InShortName.IsEmpty()) return false;
		if (!FChar::IsUpper(InShortName[0])) return false;

		for (int32 i = 1; i < InShortName.Len(); i++)
		{
			//逐字符检查，除去第一个字符，如果是大写，前一个字符必须是下划线
			TCHAR Ch = InShortName[i];

			if (FChar::IsUpper(Ch))
			{
				if (InShortName[i - 1] != TEXT('_'))
				{
					return false;
				}
			}
			else if (Ch == TEXT('_'))
			{
				if (InShortName.IsValidIndex(i + 1) && FChar::IsUpper(InShortName[i + 1]))
				{
					continue;
				}
				else
				{
					return false;
				}
			}
		}
		return true;
	}

	bool IsNormalLongName(const FString& InLongName) const
	{
		if (IsWithNormalPrefix(InLongName))
		{
			if (IsNormalShortName(ErasePrefix(InLongName)))
			{
				return true;
			}
		}
		return false;
	}

	//合法：与命令名相同为合法，不区分大小写
	bool IsValidShortName(const FString& InShortName) const { return !TraverseNameKey(InShortName).IsEmpty(); }

	bool IsValidLongName(const FString& InLongName) const { return IsWithPrefix(InLongName) && IsValidShortName(ErasePrefix(InLongName)); }

	FString ErasePrefix(const FString& InLongName) const { return InLongName.RightChop(Data.PrefixLength); }

	// 带下划线区分xxx_xxx_xxx、大写小写区分XxxXxxXxx、带空格区分Xxx xxx Xxx，统一格式：xxx_Xxx_xxx, 非标准, xxxyyyzzz找不到
	FString NormalizeShortName(const FString& InShortName) const
	{


		FString Name = InShortName;
		if (Name.Contains(TEXT(" ")))
		{
			Name.ReplaceInline(TEXT(" "), TEXT("_"));
		}
		else if (Name.Contains(TEXT("_")))
		{
		}
		else
		{
			FString Temp;
			int32 Start = 0;
			for (int32 i = 1; i < InShortName.Len(); i++)
			{
				if (FChar::IsUpper(InShortName[i]))
				{
					Temp.AppendChars(*InShortName + Start, i - Start);
					Temp.AppendChar(TEXT('_'));
					Start = i;
				}
			}
			Name = MoveTemp(Temp);
		}
		return Name;
	}

	//获取标准名，如：输入：Call_Custom_Content、Call Custom Content、CallCustomContent，输出Call_Custom_Content
	FString GetEnumValueNormalName(const FString& InShortName) const
	{
		if (InShortName.Contains(TEXT("None")) || InShortName.Contains(TEXT("Max"))) return {};

		//先看是否能找到
		FString Name = TraverseNameKey(InShortName);

		if (Name.IsEmpty())
		{
			//如果没找可能需要规范化，规范化后再找，还没找到返回空字符串
			return TraverseNameKey(NormalizeShortName(InShortName));
		}
		else
		{
			return Name;
		}
	}

	FString GetEnumValueName(EnumType InEnumIndex) const
	{
		check((uint8)InEnumIndex >= 0 && (uint8)InEnumIndex < EnumMemberNameNumber && "EnumValue must be greater or equal to 0 and less to EnumMemberNameNumber.");
		return Data.EnumMemberName[static_cast<uint8>(InEnumIndex)];
	}
};

//用于给FEnumRelated初始化
template <class EnumType>
struct FEnumTrait
{
	constexpr static auto InitialValue = nullptr;
};

struct FEnumFunctionObjectRelated
{
	template <class EnumType>
	struct DefaultInvalidEnumValueOperator
	{
		virtual EnumType operator()()
		{
			return (EnumType)0;
		}
	};
	template <class EnumType>
	struct InvalidEnumValueOperator_Error : DefaultInvalidEnumValueOperator<EnumType>
	{
		virtual EnumType operator()()
		{
			check(0 && TEXT("Invalid Enum Value"));
			return (EnumType)0;
		}
	};
};

template <class EnumType, uint8 EnumMemberNameNumber, class InvalidEnumValueOperator = FEnumFunctionObjectRelated::DefaultInvalidEnumValueOperator<EnumType>>
struct FEnumRelated
{
	static_assert(EnumMemberNameNumber > 0, "EnumMemberNameNumber must be greater to 0.");
	static_assert(std::is_enum_v<EnumType>, "EnumType must be enum type.");
	static_assert(std::is_same_v<InvalidEnumValueOperator, FEnumFunctionObjectRelated::DefaultInvalidEnumValueOperator<EnumType>> || 
		std::is_base_of_v<FEnumFunctionObjectRelated::DefaultInvalidEnumValueOperator<EnumType>, InvalidEnumValueOperator>, 
		"EnumType must be enum type.");

public:
	static FString GetFullName(const FString& InName)
	{		
		check(Impl && "Impl can not be nullptr.");
		if (!InName.IsEmpty())
		{
			if (Impl->IsWithPrefix(InName))
			{
				return Impl->GetEnumValueFullName(Impl->ErasePrefix(InName));
			}
			else
			{
				return Impl->GetEnumValueFullName(InName);
			}
		}
		return {};	
	}

	static FString GetShortName(const FString& InName)
	{
		if (!InName.IsEmpty())
		{
			if (Impl->IsWithPrefix(InName))
			{
				//长名，去除前缀
				return Impl->GetEnumValueShortName(InName);
			}
			else
			{
				return Impl->GetEnumValueNormalName(InName);
			}
		}
		return {};
	}

	static FString GetFullName(EnumType InEnumIndex)
	{
		return Impl->GetEnumValueFullName(GetShortName(InEnumIndex));
	}

	static FString GetShortName(EnumType InEnumIndex)
	{
		check(Impl && "Impl can not be nullptr.");
		return Impl->GetEnumValueName(InEnumIndex);
	}

	static bool IsValid(const FString& InName)
	{
		check(Impl && "Impl can not be nullptr.");
		if (InName.IsEmpty()) return false;
		if (Impl->IsWithPrefix(InName))
		{	//带前缀
			return Impl->IsValidLongName(InName);
		}
		else
		{	//不带前缀
			return Impl->IsValidShortName(InName);
		}
	}

	static bool IsNormal(const FString& InName)
	{
		check(Impl && "Impl can not be nullptr.");
		if (InName.IsEmpty()) return false;

		if (Impl->IsWithNormalPrefix(InName))
		{	//带标准前缀
			return Impl->IsNormalShortName(Impl->ErasePrefix(InName));
		}

		return false;
	}

	template <EnumType EnumValue>
	constexpr static const TCHAR* ToCString()
	{
		check(Impl && "Impl can not be nullptr.");
		return Impl->GetEnumValueNameKey<EnumValue>();
	}

	template <EnumType EnumValue>
	static FString ToString()
	{
		check(Impl && "Impl can not be nullptr.");
		return Impl->GetEnumValueNameKey<EnumValue>();
	}

	constexpr static const TCHAR* GetEnumNameKeyCString()
	{
		check(Impl && "Impl can not be nullptr.");
		return Impl->GetEnumNameKey();
	}

	static FString GetEnumNameKey()
	{
		check(Impl && "Impl can not be nullptr.");
		return Impl->GetEnumNameKey();
	}

	static EnumType GetEnumValue(const FString& InName)
	{
		FString ProtocolName = GetFullName(InName);
		int64 Result = UEnum::LookupEnumName(FName(), *ProtocolName);
		if (Result == INDEX_NONE)
		{
			return InvalidEnumValueOperator()();
		}
		else
		{
			return (EnumType)Result;//无法使用模板，模板需要常量表达式输入
		}
	}

protected:
	constexpr static const FEnumRelatedBase<EnumType, EnumMemberNameNumber>* Impl = FEnumTrait<EnumType>::InitialValue;
};


#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
#if PLATFORM_WINDOWS
#pragma optimize("", on)
#endif
#endif // UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT