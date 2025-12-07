#pragma once

#include <type_traits>

//不适用于菱形继承

//用于判断两个类型是否具有继承关系
template <typename TypeOne, typename TypeTwo>
constexpr bool TIsInInheritance_Value = std::is_base_of_v<TypeOne, TypeTwo> || std::is_base_of_v<TypeTwo, TypeOne>;

template <typename TypeOne, typename TypeTwo, typename TypeThree>
constexpr bool TIsTotallyDifferentType_Value = !std::is_same_v<TypeOne, TypeTwo> && !std::is_same_v<TypeTwo, TypeThree> && !std::is_same_v<TypeOne, TypeThree>;


//用于判断三个类型是否具有单继承关系
template <typename TypeOne, typename TypeTwo, typename TypeThree>
	requires (TIsTotallyDifferentType_Value<TypeOne, TypeTwo, TypeThree>)
constexpr bool TIsSingleInheritance_Value = TIsInInheritance_Value<TypeOne, TypeTwo>&& TIsInInheritance_Value<TypeTwo, TypeThree>&& TIsInInheritance_Value<TypeOne, TypeThree>;


//用于判断TransitionType是否是派生于TypeOne和TypeTwo
template <typename TypeOne, typename TypeTwo, typename TransitionType, bool AllowSameType = false>
constexpr bool TIsTransitionTypeDerivedFrom = false;

template <typename TypeOne, typename TypeTwo, typename TransitionType>
constexpr bool TIsTransitionTypeDerivedFrom<TypeOne, TypeTwo, TransitionType, true> = (std::is_base_of_v<TypeOne, TransitionType>) && (std::is_base_of_v<TypeTwo, TransitionType>);

template <typename TypeOne, typename TypeTwo, typename TransitionType>
	requires (TIsTotallyDifferentType_Value<TypeOne, TypeTwo, TransitionType>)
constexpr bool TIsTransitionTypeDerivedFrom<TypeOne, TypeTwo, TransitionType, false> = TIsTransitionTypeDerivedFrom<TypeOne, TypeTwo, TransitionType, true>;


//用于获取多重继承中的低层派生类
template <typename TypeOne, typename TypeTwo, typename TypeThree>
struct TMultiplyInheritanceTypeTrait
{
	using TransitionType = void;
};

//用于判断三个类型是否是多重继承关系
template <typename TypeOne, typename TypeTwo, typename TypeThreeOrTransitionType, bool HasGivenTransitionType = true>
constexpr bool TIsMultiplyInheritance_Value = false;

template <typename TypeOne, typename TypeTwo, typename TypeThreeOrTransitionType>
	requires (TIsTransitionTypeDerivedFrom<TypeOne, TypeTwo, TypeThreeOrTransitionType, false> && !TIsInInheritance_Value<TypeOne, TypeTwo>)
constexpr bool TIsMultiplyInheritance_Value<TypeOne, TypeTwo, TypeThreeOrTransitionType, true> = true;

template <typename TypeOne, typename TypeTwo, typename TypeThreeOrTransitionType>
	requires (!std::is_same_v<typename TMultiplyInheritanceTypeTrait<TypeOne, TypeTwo, TypeThreeOrTransitionType>::TransitionType, void>)
constexpr bool TIsMultiplyInheritance_Value<TypeOne, TypeTwo, TypeThreeOrTransitionType, false> = true;

template <typename TypeOne, typename TypeTwo, typename TypeThree>
	requires (TIsMultiplyInheritance_Value<TypeTwo, TypeThree, TypeOne, true>)
struct TMultiplyInheritanceTypeTrait<TypeOne, TypeTwo, TypeThree>
{
	using TransitionType = TypeOne;
};

template <typename TypeOne, typename TypeTwo, typename TypeThree>
	requires (TIsMultiplyInheritance_Value<TypeOne, TypeThree, TypeTwo, true>)
struct TMultiplyInheritanceTypeTrait<TypeOne, TypeTwo, TypeThree>
{
	using TransitionType = TypeTwo;
};

template <typename TypeOne, typename TypeTwo, typename TypeThree>
	requires (TIsMultiplyInheritance_Value<TypeOne, TypeTwo, TypeThree, true>)
struct TMultiplyInheritanceTypeTrait<TypeOne, TypeTwo, TypeThree>
{
	using TransitionType = TypeThree;
};

template <typename TypeOne, typename TypeTwo, typename TypeThree>
constexpr bool TIsThereNoInheritance_Value = !TIsSingleInheritance_Value<TypeOne, TypeTwo, TypeThree> && 
	!TIsMultiplyInheritance_Value<TypeOne, TypeTwo, TypeThree, false>;


//用于判断给定类型是否继承于BastType<T>类型，对于非类型参数无法推导
template <typename InputType, template <typename> typename BaseType>
struct TIsDerivedFromTemplateClass
{
private:

	template <typename AnyType>
	static constexpr auto Check(const BaseType<AnyType>*) -> std::true_type;
	static constexpr auto Check(...) -> std::false_type;
public:
	constexpr static bool Value = decltype(Check(DeclVal<InputType*>()))::value;
};

template <class ReturnType, class TransitionType = void, class InputType = void>
static TSharedPtr<ReturnType> GetTypeSP(InputType* SmartPtr)
{
	if constexpr (std::is_same_v<TransitionType, void>)
	{
		return SmartPtr && SmartPtr->DoesSharedInstanceExist() ? StaticCastSharedRef<ReturnType>(SmartPtr->AsShared()) : nullptr;
	}
	else
	{
		TransitionType* TempPtr = static_cast<TransitionType*>(SmartPtr);
		return TempPtr && TempPtr->DoesSharedInstanceExist() ? StaticCastSharedRef<ReturnType>(StaticCastSharedRef<TransitionType>(TempPtr->AsShared())) : nullptr;
	}
}

template <class ReturnType, class TransitionType = void, class InputType = void>
static TSharedPtr<ReturnType> GetTypeSP(TWeakPtr<InputType> SmartPtr)
{
	if constexpr (std::is_same_v<TransitionType, void>)
	{
		return SmartPtr.IsValid() ? StaticCastSharedPtr<ReturnType>(SmartPtr.Pin()) : nullptr;
	}
	else
	{
		return SmartPtr.IsValid() ? StaticCastSharedPtr<ReturnType>(StaticCastSharedPtr<TransitionType>(SmartPtr.Pin())) : nullptr;
	}
}

template <class ReturnType, class TransitionType = void, class InputType = void>
static TSharedPtr<ReturnType> GetTypeSP(TSharedPtr<InputType> SmartPtr)
{
	if constexpr (std::is_same_v<TransitionType, void>)
	{
		return StaticCastSharedPtr<ReturnType>(SmartPtr);
	}
	else
	{
		return StaticCastSharedPtr<ReturnType>(StaticCastSharedPtr<TransitionType>(SmartPtr));
	}
}

template <class ReturnType, class TransitionType = void, class InputType = void>
static TSharedPtr<ReturnType> GetTypeSP(TSharedRef<InputType> SmartPtr)
{
	if constexpr (std::is_same_v<TransitionType, void>)
	{
		return StaticCastSharedRef<ReturnType>(SmartPtr);
	}
	else
	{
		return StaticCastSharedRef<ReturnType>(StaticCastSharedRef<TransitionType>(SmartPtr));
	}
}

//SR
template <class ReturnType, class TransitionType = void, class InputType = void>
static TSharedRef<ReturnType> GetTypeSR(InputType* SmartPtr)
{
	if constexpr (std::is_same_v<TransitionType, void>)
	{
		return SmartPtr && SmartPtr->DoesSharedInstanceExist() ? StaticCastSharedRef<ReturnType>(SmartPtr->AsShared()) : nullptr;
	}
	else
	{
		TransitionType* TempPtr = static_cast<TransitionType*>(SmartPtr);
		return TempPtr && TempPtr->DoesSharedInstanceExist() ? StaticCastSharedRef<ReturnType>(StaticCastSharedRef<TransitionType>(TempPtr->AsShared())) : nullptr;
	}
}

template <class ReturnType, class TransitionType = void, class InputType = void>
static TSharedRef<ReturnType> GetTypeSR(TWeakPtr<InputType> SmartPtr)
{
	if constexpr (std::is_same_v<TransitionType, void>)
	{
		return SmartPtr.IsValid() ? StaticCastSharedRef<ReturnType>(SmartPtr.Pin().ToSharedRef()) : nullptr;
	}
	else
	{
		return SmartPtr.IsValid() ? StaticCastSharedRef<ReturnType>(StaticCastSharedRef<TransitionType>(SmartPtr.Pin().ToSharedRef())) : nullptr;
	}
}

template <class ReturnType, class TransitionType = void, class InputType = void>
static TSharedRef<ReturnType> GetTypeSR(TSharedPtr<InputType> SmartPtr)
{
	if constexpr (std::is_same_v<TransitionType, void>)
	{
		return StaticCastSharedRef<ReturnType>(SmartPtr.ToSharedRef());
	}
	else
	{
		return StaticCastSharedRef<ReturnType>(StaticCastSharedRef<TransitionType>(SmartPtr.ToSharedRef()));
	}
}

template <class ReturnType, class TransitionType = void, class InputType = void>
static TSharedRef<ReturnType> GetTypeSR(TSharedRef<InputType> SmartPtr)
{
	if constexpr (std::is_same_v<TransitionType, void>)
	{
		return StaticCastSharedRef<ReturnType>(SmartPtr);
	}
	else
	{
		return StaticCastSharedRef<ReturnType>(StaticCastSharedRef<TransitionType>(SmartPtr));
	}
}

//WP
template <class ReturnType, class TransitionType = void, class InputType = void>
static TWeakPtr<ReturnType> GetTypeWP(InputType* SmartPtr)
{
	return GetTypeSP<ReturnType, TransitionType, InputType>(SmartPtr);
}

template <class ReturnType, class TransitionType = void, class InputType = void>
static TWeakPtr<ReturnType> GetTypeWP(TWeakPtr<InputType> SmartPtr)
{
	return GetTypeSP<ReturnType, TransitionType, InputType>(SmartPtr);
}

template <class ReturnType, class TransitionType = void, class InputType = void>
static TWeakPtr<ReturnType> GetTypeWP(TSharedPtr<InputType> SmartPtr)
{
	return GetTypeSP<ReturnType, TransitionType, InputType>(SmartPtr);
}

template <class ReturnType, class TransitionType = void, class InputType = void>
static TWeakPtr<ReturnType> GetTypeWP(TSharedRef<InputType> SmartPtr)
{
	return GetTypeSP<ReturnType, TransitionType, InputType>(SmartPtr);
}

//Raw
template <class ReturnType, class TransitionType = void, class InputType = void>
static ReturnType* GetTypeRaw(InputType* SmartPtr)
{
	return static_cast<ReturnType*>(SmartPtr);
}

template <class ReturnType, class TransitionType = void, class InputType = void>
static ReturnType* GetTypeRaw(TWeakPtr<InputType> SmartPtr)
{
	return SmartPtr.IsValid() ? static_cast<ReturnType*>(SmartPtr.Pin().Get()) : nullptr;

}

template <class ReturnType, class TransitionType = void, class InputType = void>
static ReturnType* GetTypeRaw(TSharedPtr<InputType> SmartPtr)
{
	return static_cast<ReturnType*>(SmartPtr.Get());
}

template <class ReturnType, class TransitionType = void, class InputType = void>
static ReturnType* GetTypeRaw(TSharedRef<InputType> SmartPtr)
{
	return static_cast<ReturnType*>(SmartPtr.ToSharedPtr().Get());
}