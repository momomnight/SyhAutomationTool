#pragma once
#include "TableRow/Base/PropertyInfoRoot.h"
#include "TableRow/Base/PropertyInfoCategory.h"
#include "TableRow/SomePropertyInfos/BoolPropertyInfo.h"
#include "TableRow/SomePropertyInfos/ClassPropertyInfo.h"
//#include "TableRow/SomePropertyInfos/ContainerPropertyInfo.h"
#include "TableRow/SomePropertyInfos/EnumPropertyInfo.h"
#include "TableRow/SomePropertyInfos/NumericPropertyInfo.h"
#include "TableRow/SomePropertyInfos/StringPropertyInfo.h"

//enum class EPropertyInfoType : uint8
//{
//	None,
//	Root,
//	SingleItem,
//	ContainerItem,//Catetory/Array/Set/MapµÈ
//	Category
//};

struct SIMPLEPROGRAMOBJECTREFLECTOR_API FPropertyInfoFactory
{
	static void SetLink(TSharedPtr<FPropertyInfoRoot> InRoot, TSharedPtr<IPropertyInfoBase> InParent, TSharedPtr<IPropertyInfoBase> InPropertyInfo)
	{
		check(InRoot.IsValid() && InParent.IsValid() && InPropertyInfo.IsValid() 
			&& !InParent->IsLeaf() && InParent->GetRoot() == InRoot);
		InPropertyInfo->SetRoot(InRoot);
		InPropertyInfo->SetParent(InParent);
	}

	// 
	static TSharedPtr<FPropertyInfoRoot> CreatePropertyInfoRoot()
	{
		TSharedPtr<FPropertyInfoRoot> Root = MakeShareable(new FPropertyInfoRoot);
		return Root;
	}

	static TSharedPtr<FPropertyInfoCategory> CreatePropertyInfoCategory( const FName& InCategoryName)
	{
		TSharedPtr<FPropertyInfoCategory> Category = MakeShareable(new FPropertyInfoCategory(InCategoryName));
		return Category;
	}

	/// <summary>
	/// Creates a property info wrapper for the given property pointer. If InProperty is non-null and valid, a PropertyInfoWithStoredProperty is created, its stored property is set to InProperty, and the wrapper is returned; otherwise nullptr is returned.
	/// </summary>
	/// <typeparam name="PropertyType">The concrete property type of InProperty.</typeparam>
	/// <param name="InProperty">Pointer to the property to wrap. Must be non-null and pass IsValidLowLevel() for a PropertyInfo to be created.</param>
	/// <returns>A TSharedPtr<IPropertyInfoBase> referencing the created property info (with the stored property set), or nullptr if InProperty is null or invalid.</returns>
	template <class PropertyType>
	static TSharedPtr<IPropertyInfoBase> CreatePropertyInfo(PropertyType* InProperty, int32 Index = INDEX_NONE)
	{
		if (InProperty && InProperty->IsValidLowLevel())
		{
			TSharedPtr<IPropertyInfoWithStoredProperty> PropertyInfoWithStoredProperty =
				FPropertyInfoFactory::CreatePropertyInfoHelper<PropertyType>(InProperty);
			PropertyInfoWithStoredProperty->SetProperty(InProperty);

			if (!(PropertyInfoWithStoredProperty->GetPropertyInfoType() & EPropertyInfoType::HasChild) && Index != INDEX_NONE)
			{
				TSharedPtr<ISingleItemPropertyInfo> SingleItemPropertyInfo = StaticCastSharedPtr<ISingleItemPropertyInfo>(PropertyInfoWithStoredProperty);
				SingleItemPropertyInfo->SetIndex(Index);
			}

			return PropertyInfoWithStoredProperty;
		}
		return nullptr;
	}
	
	/// <summary>
	/// Explicit specialization that inspects the runtime type of the given FProperty, dispatches to the appropriate FPropertyInfoFactory::CreatePropertyInfo overload, and returns a property info object. Returns nullptr if the property type is not recognized.
	/// </summary>
	/// <param name="InProperty">Pointer to the FProperty to inspect. The function tests the property's concrete type (e.g., FBoolProperty, FClassProperty, FArrayProperty, FSetProperty, FMapProperty, FEnumProperty, FNumericProperty, FStrProperty, FNameProperty, FTextProperty) and delegates creation to the corresponding factory method.</param>
	/// <returns>TSharedPtr<IPropertyInfoBase> pointing to the created property info for the matched property type, or nullptr if no matching property type is handled.</returns>
	template <>
	TSharedPtr<IPropertyInfoBase> CreatePropertyInfo(FProperty* InProperty, int32 Index)
	{
		
		if (FBoolProperty* BoolProperty = CastField<FBoolProperty>(InProperty))
		{
			return FPropertyInfoFactory::CreatePropertyInfo<FBoolProperty>(BoolProperty, Index);
		}
		else if (FClassProperty* ClassProperty = CastField<FClassProperty>(InProperty))
		{
			return FPropertyInfoFactory::CreatePropertyInfo<FClassProperty>(ClassProperty, Index);
		}
		else if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(InProperty))
		{
			return FPropertyInfoFactory::CreatePropertyInfo<FArrayProperty>(ArrayProperty);
		}
		else if (FSetProperty* SetProperty = CastField<FSetProperty>(InProperty))
		{
			return FPropertyInfoFactory::CreatePropertyInfo<FSetProperty>(SetProperty);
		}
		else if (FMapProperty* MapProperty = CastField<FMapProperty>(InProperty))
		{
			return FPropertyInfoFactory::CreatePropertyInfo<FMapProperty>(MapProperty);
		}
		else if (FEnumProperty* EnumProperty = CastField<FEnumProperty>(InProperty))
		{
			return FPropertyInfoFactory::CreatePropertyInfo<FEnumProperty>(EnumProperty, Index);
		}
		else if (FNumericProperty* NumericProperty = CastField<FNumericProperty>(InProperty))
		{
			return FPropertyInfoFactory::CreatePropertyInfo<FNumericProperty>(NumericProperty, Index);
		}
		else if (FStrProperty* StrProperty = CastField<FStrProperty>(InProperty))
		{
			return FPropertyInfoFactory::CreatePropertyInfo<FStrProperty>(StrProperty, Index);
		}
		else if (FNameProperty* NameProperty = CastField<FNameProperty>(InProperty))
		{
			return FPropertyInfoFactory::CreatePropertyInfo<FNameProperty>(NameProperty, Index);
		}
		else if (FTextProperty* TextProperty = CastField<FTextProperty>(InProperty))
		{
			return FPropertyInfoFactory::CreatePropertyInfo<FTextProperty>(TextProperty, Index);
		}
		else
		{
			return nullptr;
		}
	}

private:
	/// <summary>
	/// Disabled helper that prevents creating property info for unsupported property types. The function contains a static_assert that produces a compile-time error with the message "unallowed property type."
	/// </summary>
	/// <typeparam name="PropertyType">The type of the property. This template overload is intentionally invalid for all types and will trigger a compile-time assertion if instantiated.</typeparam>
	/// <param name="InProperty">Pointer to the property instance for which to create property info. This overload is intentionally disabled and should not be used for valid property types.</param>
	/// <returns>TSharedPtr<IPropertyInfoWithStoredProperty>. In practice this function is disabled by the static_assert and will not produce a usable value; the implementation returns nullptr if reached.</returns>
	template <class PropertyType>
	static TSharedPtr<IPropertyInfoWithStoredProperty> CreatePropertyInfoHelper(PropertyType* InProperty)
	{
		static_assert(false, "unallowed property type.")
		return nullptr;
	}
	
	/// <summary>
	/// Creates a property-info object for boolean properties (template specialization for FBoolProperty).
	/// </summary>
	/// <param name="InPropertPointer to the boolean property. Not used by this specialization but accepted for interface compatibility.y"></param>
	/// <returA TSharedPtr<IPropertyInfoWithStoredProperty> that owns a new FBoolPropertyInfo instance.ns></returns>
	template <>
	TSharedPtr<IPropertyInfoWithStoredProperty> CreatePropertyInfoHelper<FBoolProperty>(FBoolProperty* InProperty)
	{
		return MakeShareable(new FBoolPropertyInfo);
	}

	/// <summary>
	/// Specialized helper that creates a property info object for FClassProperty.
	/// </summary>
	/// <param name="InProperty">Pointer to the FClassProperty instance (provided for interface compatibility; this specialization does not use it).</param>
	/// <returns>A TSharedPtr<IPropertyInfoWithStoredProperty> owning a newly created FClassPropertyInfo instance (shared ownership via MakeShareable).</returns>
	template <>
	TSharedPtr<IPropertyInfoWithStoredProperty> CreatePropertyInfoHelper<FClassProperty>(FClassProperty* InProperty)
	{
		return MakeShareable(new FClassPropertyInfo);
	}

	/// <summary>
	/// Creates and returns a shared property-info object specialized for FArrayProperty.
	/// </summary>
	/// <param name="InProperty">Pointer to the FArrayProperty associated with the property info being created.</param>
	/// <returns>A TSharedPtr<IPropertyInfoWithStoredProperty> that owns a newly created FArrayPropertyInfo instance implementing property info for the FArrayProperty.</returns>
	template <>
	TSharedPtr<IPropertyInfoWithStoredProperty> CreatePropertyInfoHelper<FArrayProperty>(FArrayProperty* InProperty)
	{
		return MakeShareable(new FArrayPropertyInfo);
	}

	/// <summary>
	/// Creates a property-info object for set properties (explicit specialization for FSetProperty).
	/// </summary>
	/// <param name="InProperty">Pointer to the FSetProperty instance. This parameter selects the FSetProperty specialization and may not be used to initialize the returned FSetPropertyInfo in this specialization.</param>
	/// <returns>A TSharedPtr<IPropertyInfoWithStoredProperty> that owns a newly allocated FSetPropertyInfo instance (the shared pointer manages the FSetPropertyInfo lifetime).</returns>
	template <>
	TSharedPtr<IPropertyInfoWithStoredProperty> CreatePropertyInfoHelper<FSetProperty>(FSetProperty* InProperty)
	{
		return MakeShareable(new FSetPropertyInfo);
	}

	/// <summary>
	/// Creates a shared IPropertyInfoWithStoredProperty instance specialized for FMapProperty.
	/// </summary>
	/// <param name="InProperty">Pointer to the FMapProperty instance for which to create property info. (This implementation returns a new FMapPropertyInfo and may not use the pointer.)</param>
	/// <returns>A TSharedPtr<IPropertyInfoWithStoredProperty> that owns a newly created FMapPropertyInfo.</returns>
	template <>
	TSharedPtr<IPropertyInfoWithStoredProperty> CreatePropertyInfoHelper<FMapProperty>(FMapProperty* InProperty)
	{
		return MakeShareable(new FMapPropertyInfo);
	}

	/// <summary>
	/// Creates and returns a property info object for an FEnumProperty (explicit template specialization).
	/// </summary>
	/// <param name="InProperty">Pointer to the FEnumProperty for which to create the property info.</param>
	/// <returns>A TSharedPtr<IPropertyInfoWithStoredProperty> that owns a newly created FEnumPropertyInfo instance implementing IPropertyInfoWithStoredProperty.</returns>
	template <>
	TSharedPtr<IPropertyInfoWithStoredProperty> CreatePropertyInfoHelper<FEnumProperty>(FEnumProperty* InProperty)
	{
		return MakeShareable(new FEnumPropertyInfo);
	}

	/// <summary>
	/// Specialized helper that inspects an FNumericProperty and returns a corresponding IPropertyInfoWithStoredProperty implementation based on the property's concrete numeric type.
	/// </summary>
	/// <param name="InProperty">Pointer to the FNumericProperty to inspect. The function examines the concrete derived property type (e.g., FByteProperty, FInt16Property) to choose an appropriate property-info object.</param>
	/// <returns>A TSharedPtr to an IPropertyInfoWithStoredProperty appropriate for the concrete numeric property type (for example, FEnumPropertyInfo for enum byte properties, or FNumericPropertyInfo<uint8/int8/uint16/int16/uint32/int32/uint64/int64> for the corresponding integer sizes). Returns nullptr if the property type is not recognized.</returns>
	template <>
	TSharedPtr<IPropertyInfoWithStoredProperty> CreatePropertyInfoHelper<FNumericProperty>(FNumericProperty* InProperty)
	{
		if (FByteProperty* ByteProperty = CastField<FByteProperty>(InProperty))
		{
			if (ByteProperty->IsEnum())
			{
				return MakeShareable(new FEnumPropertyInfo);
			}
			else
			{
				return MakeShareable(new FNumericPropertyInfo<uint8>);
			}
		}
		else if (FInt8Property* Int8Property = CastField<FInt8Property>(InProperty))
		{
			return MakeShareable(new FNumericPropertyInfo<int8>);
		}
		else if (FUInt16Property* UInt16Property = CastField<FUInt16Property>(InProperty))
		{
			return MakeShareable(new FNumericPropertyInfo<uint16>);
		}
		else if (FInt16Property* Int16Property = CastField<FInt16Property>(InProperty))
		{
			return MakeShareable(new FNumericPropertyInfo<int16>);
		}
		else if (FUInt32Property* UInt32Property = CastField<FUInt32Property>(InProperty))
		{
			return MakeShareable(new FNumericPropertyInfo<uint32>);
		}
		else if (FIntProperty* IntProperty = CastField<FIntProperty>(InProperty))
		{
			return MakeShareable(new FNumericPropertyInfo<int32>);
		}
		else if (FUInt64Property* UInt64Property = CastField<FUInt64Property>(InProperty))
		{
			return MakeShareable(new FNumericPropertyInfo<uint64>);
		}
		else if (FInt64Property* Int64Property = CastField<FInt64Property>(InProperty))
		{
			return MakeShareable(new FNumericPropertyInfo<int64>);
		}
		else
		{
			return nullptr;
		}
	}


	/// <summary>
	/// Creates a property-info object for string properties (explicit specialization for FStrProperty).
	/// </summary>
	/// <param name="InProperty">Pointer to the FStrProperty instance for which to create property info. (Not used by this specialization.)</param>
	/// <returns>A TSharedPtr<IPropertyInfoWithStoredProperty> that owns a newly created FStringPropertyInfo.</returns>
	template <>
	TSharedPtr<IPropertyInfoWithStoredProperty> CreatePropertyInfoHelper<FStrProperty>(FStrProperty* InProperty)
	{
		return MakeShareable(new FStringPropertyInfo);
	}

	/// <summary>
	/// Creates a property info helper specialized for FNameProperty.
	/// </summary>
	/// <param name="InProperty">Pointer to the FNameProperty instance for which to create the property info (may be unused by this specialization).</param>
	/// <returns>A TSharedPtr<IPropertyInfoWithStoredProperty> that owns a new FNamePropertyInfo instance.</returns>
	template <>
	TSharedPtr<IPropertyInfoWithStoredProperty> CreatePropertyInfoHelper<FNameProperty>(FNameProperty* InProperty)
	{
		return MakeShareable(new FNamePropertyInfo);
	}

	/// <summary>
	/// Creates and returns a shared IPropertyInfoWithStoredProperty implementation (FTextPropertyInfo) for FTextProperty.
	/// </summary>
	/// <param name="InProperty">Pointer to the FTextProperty for which to create the property info. This parameter is not used by this specialization.</param>
	/// <returns>A TSharedPtr<IPropertyInfoWithStoredProperty> owning a newly created FTextPropertyInfo.</returns>
	template <>
	TSharedPtr<IPropertyInfoWithStoredProperty> CreatePropertyInfoHelper<FTextProperty>(FTextProperty* InProperty)
	{
		return MakeShareable(new FTextPropertyInfo);
	}
};