#pragma once
#include "HAL/Platform.h"
#include "UObject/UnrealType.h"
#include <type_traits>
#include <concepts>
#include "Containers/Array.h"
#include "Containers/Set.h"
#include "Containers/Map.h"


template <class Type, class... OtherType>
constexpr static bool Is_Any_Of = std::disjunction_v<std::is_same<std::remove_cv_t<Type>, OtherType>...>;

template <class Type>
concept Is_UE_Array_Impl = std::same_as<std::decay_t<Type>, TArray<typename Type::ElementType, typename Type::AllocatorType>>;

template <class Type>
concept Is_UE_Set_Impl = std::same_as<std::decay_t<Type>, TSet<typename Type::ElementType, typename Type::KeyFuncsType, typename Type::AllocatorType>>;

template <class Type>
concept Is_UE_Map_Impl = std::same_as<std::decay_t<Type>, TMap<typename Type::KeyType, typename Type::ValueType, typename Type::SetAllocatorType, typename Type::KeyFuncsType>>;


template <class Type> constexpr static bool Is_UE_Bool = std::is_same_v<Type, bool>;
template <class Type> constexpr static bool Is_UE_Byte = std::is_same_v<Type, uint8>;
template <class Type> constexpr static bool Is_UE_Enum = std::is_enum_v<Type>;
template <class Type> constexpr static bool Is_UE_Integral = Is_Any_Of<Type, int8, int16, uint16, uint32, int32, uint64, int64>;
template <class Type> constexpr static bool Is_UE_Floating = std::is_floating_point_v<Type> && !std::is_same_v<Type, long double>;
template <class Type> constexpr static bool Is_UE_Numeric = Is_UE_Integral<Type> || Is_UE_Floating<Type>;
template <class Type> constexpr static bool Is_UE_Object = std::is_base_of_v<UObject, Type>;
template <class Type> constexpr static bool Is_UE_Class = std::is_base_of_v<UClass, Type>;
template <class Type> constexpr static bool Is_UE_Array = Is_UE_Array_Impl<Type>;
template <class Type> constexpr static bool Is_UE_Set = Is_UE_Set_Impl<Type>;
template <class Type> constexpr static bool Is_UE_Map = Is_UE_Map_Impl<Type>;
template <class Type> constexpr static bool Is_UE_Struct = std::is_same_v<UScriptStruct, Type>;
template <class Type> constexpr static bool Is_UE_String = std::is_same_v<Type, FName>;
template <class Type> constexpr static bool Is_UE_Name = std::is_same_v<Type, FString>;
template <class Type> constexpr static bool Is_UE_Text = std::is_same_v<Type, FText>;

#if UE_BUILD_DEBUG || UE_BUILD_DEVELOPMENT
constexpr static bool Array1 = Is_UE_Array<TArray<uint16>>;
constexpr static bool Array2 = Is_UE_Array<TArray<TArray<uint16>>>;
constexpr static bool Set1 = Is_UE_Set<TSet<uint16>>;
constexpr static bool Set2 = Is_UE_Set<TSet<TArray<uint16>>>;
constexpr static bool Map1 = Is_UE_Map<TMap<uint16, int32>>;
constexpr static bool Map2 = Is_UE_Map<TMap<TArray<uint16>, int32>>;
#endif


template <class Type, typename = void>
struct TPropertyTrait {};

template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_Bool<Type>>> { using PropertyType = FBoolProperty; };
template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_Byte<Type>>> { using PropertyType = FByteProperty; };
template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_Numeric<Type>>> { using PropertyType = FNumericProperty; };
template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_Enum<Type>>> { using PropertyType = FEnumProperty; };

template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_Array<Type>>> { using PropertyType = FArrayProperty; };
template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_Set<Type>>> { using PropertyType = FSetProperty; };
template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_Map<Type>>> { using PropertyType = FMapProperty; };

template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_String<Type>>> { using PropertyType = FStrProperty; };
template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_Name<Type>>> { using PropertyType = FNameProperty; };
template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_Text<Type>>> { using PropertyType = FTextProperty; };

template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_Class<Type>>> { using PropertyType = FClassProperty; };
template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_Object<Type>>> { using PropertyType = FObjectProperty; };
template <class Type> struct TPropertyTrait<Type, std::enable_if_t<Is_UE_Struct<Type>>> { using PropertyType = FStructProperty; };

