#pragma once

#include <type_traits>

template <typename ReturnWidget, typename InWidget>
concept TIsWidgetConvertible = requires() {

	{ std::is_base_of_v<TSharedFromThis<SWidget>, InWidget> };
	{ std::is_base_of_v<InWidget, ReturnWidget> || std::is_base_of_v<ReturnWidget, InWidget> };
};

//类型转换加指针类型转换
//SP
template <class ReturnWidget, class InWidget>
	requires TIsWidgetConvertible<ReturnWidget, InWidget>
static TSharedPtr<ReturnWidget> GetWidgetSP(InWidget* SmartPtr)
{
	return SmartPtr ? StaticCastSharedPtr<ReturnWidget>(SmartPtr->AsShared().ToSharedPtr()) : nullptr;
}

template <class ReturnWidget, class InWidget>
	requires TIsWidgetConvertible<ReturnWidget, InWidget>
static TSharedPtr<ReturnWidget> GetWidgetSP(TWeakPtr<InWidget> SmartPtr)
{
	return SmartPtr.IsValid() ? StaticCastSharedPtr<ReturnWidget>(SmartPtr.Pin()) : nullptr;
}

template <class ReturnWidget, class InWidget>
	requires TIsWidgetConvertible<ReturnWidget, InWidget>
static TSharedPtr<ReturnWidget> GetWidgetSP(TSharedPtr<InWidget> SmartPtr)
{
	return StaticCastSharedPtr<ReturnWidget>(SmartPtr);
}


//WP
template <class ReturnWidget, class InWidget>
	requires TIsWidgetConvertible<ReturnWidget, InWidget>
static TWeakPtr<ReturnWidget> GetWidgetWP(InWidget* SmartPtr)
{
	return SmartPtr ? StaticCastWeakPtr<ReturnWidget>(SmartPtr->AsShared().ToWeakPtr()) : nullptr;
}

template <class ReturnWidget, class InWidget>
	requires TIsWidgetConvertible<ReturnWidget, InWidget>
static TWeakPtr<ReturnWidget> GetWidgetWP(TWeakPtr<InWidget> SmartPtr)
{
	return StaticCastWeakPtr<ReturnWidget>(SmartPtr);
}

template <class ReturnWidget, class InWidget>
	requires TIsWidgetConvertible<ReturnWidget, InWidget>
static TWeakPtr<ReturnWidget> GetWidgetWP(TSharedPtr<InWidget> SmartPtr)
{
	return StaticCastSharedPtr<ReturnWidget>(SmartPtr);
}


//Raw
template <class ReturnWidget, class InWidget>
	requires TIsWidgetConvertible<ReturnWidget, InWidget>
static ReturnWidget* GetWidgetRaw(InWidget* SmartPtr)
{
	return static_cast<ReturnWidget*>(SmartPtr);
}

template <class ReturnWidget, class InWidget>
	requires TIsWidgetConvertible<ReturnWidget, InWidget>
static ReturnWidget* GetWidgetRaw(TWeakPtr<InWidget> SmartPtr)
{
	return SmartPtr.IsValid() ? static_cast<ReturnWidget*>(SmartPtr.Pin().Get()) : nullptr;

}

template <class ReturnWidget, class InWidget>
	requires TIsWidgetConvertible<ReturnWidget, InWidget>
static ReturnWidget* GetWidgetRaw(TSharedPtr<InWidget> SmartPtr)
{
	return static_cast<ReturnWidget*>(SmartPtr.Get());
}