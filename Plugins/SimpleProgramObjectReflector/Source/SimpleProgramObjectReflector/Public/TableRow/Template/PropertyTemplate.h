#pragma once
#include "HAL/Platform.h"
#include "UObject/UnrealType.h"
#include <type_traits>

struct SIMPLEPROGRAMOBJECTREFLECTOR_API FPropertyMethod
{
public:

	template <class InType, bool = std::is_standard_layout_v<InType> && (sizeof(InType) <= 32)>
	struct FValueType
	{
		using Type = const std::remove_cvref_t<InType>&;
	};

	template <class InType>
	struct FValueType<InType, true>
	{
		using Type = std::remove_cvref_t<InType>;
	};

	template <class InType>
	using InputValueType = typename FValueType<InType>::Type;

	template <class InType>
	using OutputValueType = std::remove_cvref_t<InType>&;

	template <class InType>
	using ValueAddress = std::remove_cvref_t<InType>*;

	static void* GetValueAddress(FProperty* InProperty, void* InContainer, int32 StaticArrayIndex = 0)
	{
		if (InProperty && InContainer)
		{
			return InProperty->ContainerPtrToValuePtr<void>(InContainer, StaticArrayIndex);
		}
		return nullptr;
	}

	static void* GetValueAddress_Container(FProperty* InProperty, FProperty* InnerProperty, void* InContainer, int32 Index = 0)
	{
		void* Addr = GetValueAddress(InProperty, InContainer, 0);
		if (Addr && InnerProperty)
		{			
			return InProperty->GetValueAddressAtIndex_Direct(InnerProperty, Addr, Index);
		}
		return nullptr;
	}

public:
	//bool, byte, Numeric, enum, class, string, set, map, array

	//获取容器中的值地址, 支持UE的任意类型
	//1.普通变量(包括指针) 2.静态数组 3.引用变量
	// 普通变量：支持int32, UObjet*, TArray<int32>等类型		不支持int32*, UObject**等类型
	// 静态数组：支持int32 [5], UObject* [5]等类型			不支持TArray<int32>[5]等类型	
	// 不支持引用变量

public:
	template <class Type>
	static bool Check(FProperty* InProperty, int32 Index)
	{
		return InProperty && sizeof(std::remove_cvref_t<Type>) == InProperty->ElementSize && Index >= 0 && Index < InProperty->ArrayDim;
	}

	//void Test()
	//{
	//	std::remove_cvref_t<int32>;	//int32
	//	std::remove_cvref_t<int32*>;//int32*
	//	std::remove_cvref_t<int32&>;//int32

	//	std::remove_cvref_t<const int32>;	//int32
	//	std::remove_cvref_t<const int32*>;	//const int32*
	//	std::remove_cvref_t<const int32&>;	//int32

	//	std::remove_cvref_t<int32* const>;	//int32*
	//	
	//	std::remove_cvref_t<const int32[5]>;	//int32[5]
	//	std::remove_cvref_t<const int32* [5]>;	//const int32* [5]

	//	std::remove_cvref_t<const int32(*)[5]>;	//const int32(*)[5]
	//	std::remove_cvref_t<int32(* const)[5]>; //int32(*)[5]
	//	std::remove_cvref_t<const int32(&)[5]>;	//int32[5], 注意区别

	//}

	template <class Type>
	static bool GetPropertyValue(FProperty* InProperty, void* InContainer, OutputValueType<Type> OutValue,
		int32 StaticArrayIndex = 0)
	{
		void* ValueAddr = GetValueAddress(InProperty, InContainer, StaticArrayIndex);
		if (ValueAddr && ensure(Check<Type>(InProperty, StaticArrayIndex)))
		{
			OutValue = *(ValueAddress<Type>)ValueAddr;
			return true;
		}
		return false;
	}

	//for UObject*/TObjectPtr<UObject>/UClass*/TObjectPtr<UClass>
	template <>
	bool GetPropertyValue<TObjectPtr<UObject>>(FProperty* InProperty, void* InContainer, 
		OutputValueType<TObjectPtr<UObject>> OutValue,int32 StaticArrayIndex)
	{
		FObjectProperty* ObjectProperty = CastField<FObjectProperty>(InProperty);
		if (ObjectProperty && InContainer && ensure(Check<TObjectPtr<UObject>>(InProperty, StaticArrayIndex)))
		{
			void* ValueAddr = GetValueAddress(InProperty, InContainer, StaticArrayIndex);
			if (ValueAddr)
			{		
				OutValue = ObjectProperty->GetObjectPropertyValue(ValueAddr);
				return true;
			}
		}
		return false;
	}

	template <class Type>
	static bool GetPropertyValue_Array(FArrayProperty* InProperty, void* InContainer, OutputValueType<Type> OutValue,
		int32 InnerIndex = 0)
	{
		void* InnerAddr = GetValueAddress_Container(InProperty, InProperty->Inner, InContainer, InnerIndex);
		if (InnerAddr && ensure(Check<Type>(InProperty->Inner, InnerIndex)))
		{
			OutValue = *(ValueAddress<Type>)InnerAddr;
			return true;
		}
		return false;
	}

	template <class Type>
	static bool GetPropertyValue_Set(FSetProperty* InProperty, void* InContainer, OutputValueType<Type> OutValue,
		int32 InnerIndex = 0)
	{
		void* InnerAddr = GetValueAddress_Container(InProperty, InProperty->ElementProp, InContainer, InnerIndex);
		if (InnerAddr && ensure(Check<Type>(InProperty->ElementProp, InnerIndex)))
		{
			OutValue = *(ValueAddress<Type>)InnerAddr;
			return true;
		}
		return false;
	}

	template <class Type, bool bKey>
	static bool GetPropertyValue_Map(FMapProperty* InProperty, void* InContainer, OutputValueType<Type> OutValue,
		int32 InnerIndex = 0)
	{
		FProperty* InnerProp = nullptr;

		if constexpr (bKey)
		{
			InnerProp = InProperty->KeyProp;
		}
		else
		{
			InnerProp = InProperty->ValueProp;
		}

		void* InnerAddr = GetValueAddress_Container(InProperty, InnerProp, InContainer, InnerIndex);
		if (InnerAddr && ensure(Check<Type>(InnerProp, InnerIndex)))
		{
			OutValue = *(ValueAddress<Type>)InnerAddr;
			return true;
		}
		return false;
	}


	//ENamespaceEnum::Type 不支持
	//EClassEnum
	//TEnumAsByte<ENamespaceEnum::Type>
	static bool GetPropertyValue_Enum(FProperty* InProperty, void* InContainer, int64& OutValue)
	{
		FByteProperty* ByteProperty = CastField<FByteProperty>(InProperty);
		FEnumProperty* EnumProperty = CastField<FEnumProperty>(InProperty);
		if (ByteProperty && ByteProperty->IsEnum())
		{
			//TEnumAsByte<enum class EnumType>, 4.15被放弃
			//TEnumAsByte<ENamespaceEnum::Type>
			UEnum* EnumClass = ByteProperty->GetIntPropertyEnum();
			uint8 TempValue = 0;
			if (GetPropertyValue<uint8>(ByteProperty, InContainer, TempValue))
			{
				if (EnumClass->IsValidEnumValue(TempValue))
				{
					OutValue = (int64)TempValue;
					return true;
				}
			}			
		}
		else if (EnumProperty)
		{
			//EClassEnum
			UEnum* EnumClass = EnumProperty->GetEnum();
			FNumericProperty* NumericProperty = EnumProperty->GetUnderlyingProperty();
			if (EnumClass && NumericProperty)
			{
				void* ValueAddr = GetValueAddress(InProperty, InContainer);
				int64 TempValue = NumericProperty->GetSignedIntPropertyValue(ValueAddr);
				if (EnumClass->IsValidEnumValue(TempValue))
				{
					OutValue = TempValue;
					return true;
				}
			}
		}
		return false;
	}


	template <class Type>
	static bool SetPropertyValue(FProperty* InProperty, void* InContainer, InputValueType<Type> InValue, int32 Index = 0)
	{
		ValueAddress<Type> Addr = (ValueAddress<Type>)GetValueAddress(InProperty, InContainer, Index);

		if (Addr && ensure(Check<Type>(InProperty, Index)))
		{
			*Addr = InValue;
			return true;
		}

		return false;
	}

	//for UObject*/TObjectPtr<UObject>/UClass*/TObjectPtr<UClass>
	template <>
	bool SetPropertyValue<TObjectPtr<UObject>>(FProperty* InProperty, void* InContainer,
		InputValueType<TObjectPtr<UObject>> InValue, int32 StaticArrayIndex)
	{
		FObjectProperty* ObjectProperty = CastField<FObjectProperty>(InProperty);
		if (ObjectProperty && InContainer && ensure(Check<TObjectPtr<UObject>>(InProperty, StaticArrayIndex)))
		{
			void* ValueAddr = GetValueAddress(InProperty, InContainer, StaticArrayIndex);
			if (ValueAddr)
			{
				ObjectProperty->SetObjectPropertyValue(ValueAddr, InValue);
				return true;
			}
		}
		return false;
	}

	template <class Type>
	static bool SetPropertyValue_Array(FArrayProperty* InProperty, void* InContainer, InputValueType<Type> InValue, int32 InnerIndex)
	{
		void* InnerAddr = GetValueAddress_Container(InProperty, InProperty->Inner, InContainer, InnerIndex);
		if (InnerAddr && ensure(Check<Type>(InProperty->Inner, InnerIndex)))
		{
			*(ValueAddress<Type>)InnerAddr = InValue;
			return true;
		}
		return false;
	}

	template <class Type>
	static bool SetPropertyValue_Set(FSetProperty* InProperty, void* InContainer, InputValueType<Type> InValue, int32 InnerIndex)
	{
		void* InnerAddr = GetValueAddress_Container(InProperty, InProperty->ElementProp, InContainer, InnerIndex);
		if (InnerAddr && ensure(Check<Type>(InProperty->ElementProp, InnerIndex)))
		{
			*(ValueAddress<Type>)InnerAddr = InValue;
			return true;
		}
		return false;
	}

	template <class Type, bool bKey>
	static bool SetPropertyValue_Map(FMapProperty* InProperty, void* InContainer, InputValueType<Type> InValue, int32 InnerIndex)
	{
		FProperty* InnerProp = nullptr;

		if constexpr (bKey)
		{
			InnerProp = InProperty->KeyProp;
		}
		else
		{
			InnerProp = InProperty->ValueProp;
		}

		void* InnerAddr = GetValueAddress_Container(InProperty, InnerProp, InContainer, InnerIndex);

		if (InnerAddr && ensure(Check<Type>(InnerProp, InnerIndex)))
		{
			*(ValueAddress<Type>)InnerAddr = InValue;
			return true;
		}
		return false;
	}

	static bool SetPropertyValue_Enum(FProperty* InProperty, void* InContainer, int64 InValue)
	{
		FByteProperty* ByteProperty = CastField<FByteProperty>(InProperty);
		FEnumProperty* EnumProperty = CastField<FEnumProperty>(InProperty);
		if (ByteProperty && ByteProperty->IsEnum())
		{
			//TEnumAsByte<enum class EnumType>, 4.15被放弃
			//TEnumAsByte<ENamespaceEnum::Type>
			UEnum* EnumClass = ByteProperty->GetIntPropertyEnum();
			if (EnumClass && EnumClass->IsValidEnumValue(InValue) && SetPropertyValue<uint8>(ByteProperty, InContainer, (uint8)InValue))
			{
				return true;
			}
		}
		else if (EnumProperty)
		{
			//EClassEnum
			UEnum* EnumClass = EnumProperty->GetEnum();
			FNumericProperty* NumericProperty = EnumProperty->GetUnderlyingProperty();
			if (EnumClass && NumericProperty && EnumClass->IsValidEnumValue(InValue))
			{
				void* ValueAddr = GetValueAddress(InProperty, InContainer);
				NumericProperty->SetIntPropertyValue(ValueAddr, InValue);
				return true;
			}
		}
		return false;
	}

};


