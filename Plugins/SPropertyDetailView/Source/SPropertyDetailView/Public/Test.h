#pragma once

#include "CoreMinimal.h"
#include "Delegates/DelegateCombinations.h"
#include "Test.generated.h"


UENUM(BlueprintType)
enum class ETestViewEnumByte : uint8
{
	Enum_1,
	Enum_2,
	All
};

UENUM(BlueprintType)
namespace ETestViewEnum1
{
	enum Type : int32
	{
		Enum_1,
		Enum_2,
		All
	};
}

DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(int32, FTestDynamicDelegate, bool, Boolean);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTestMulticastDynamicDelegate, bool, Boolean);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FTestDelegateClass, UTestDelegate, TestSparseDelegate, bool, Boolean);

DECLARE_DELEGATE_OneParam(FTestDelegate, int32);
DECLARE_DYNAMIC_DELEGATE_OneParam(FTestDynamic, int32, Int32);


UCLASS(BlueprintType)
class UTestDelegate : public UObject
{
	GENERATED_BODY()
public:
	DECLARE_DYNAMIC_DELEGATE_OneParam(FTestClassDynamic, int32, Int32);

	UPROPERTY()
	FTestDynamicDelegate TestDynamic;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FTestMulticastDynamicDelegate TestMulticastDynamic;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FTestDelegateClass TestSparseDelegate;

	UFUNCTION(BlueprintCallable)
	void FunTest()
	{
		TestSparseDelegate.Broadcast(true);
	}

	UPROPERTY()
	TFieldPath<FBoolProperty> TestFieldPath;
};

UCLASS(BlueprintType)
class UTestViewSubClass : public UObject
{
	GENERATED_BODY()
public:

	UPROPERTY()
	FString String;

	UPROPERTY()
	FName Name;

	UPROPERTY()
	FText Text;

	UPROPERTY(EditAnywhere)
	int32& StaticTArrayArray;

	UPROPERTY(EditAnywhere)
	int32 A[5]; 

	UPROPERTY(EditAnywhere)	
	TArray<int32> &B;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ETestViewEnum1::Type> EnumAsByte;

	UPROPERTY(EditAnywhere)
	ETestViewEnumByte TestViewEnumByteXXX;

	UPROPERTY(EditAnywhere)
	UObject* ObjArray[5];

	UPROPERTY(EditAnywhere)
	TArray<UObject*> ObjTArray;

	UPROPERTY(EditAnywhere)
	FString ObjTSet[5];

	UPROPERTY(EditAnywhere)
	FName ObjTMap[5];

	UPROPERTY(EditAnywhere)
	FText ObjText[5];
};


UCLASS(Blueprintable, BlueprintType)
class UTestViewClass : public UObject
{
	GENERATED_BODY()
public:
	UTestViewClass();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Boolean;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Int32;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 Int64;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Float;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Double;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<UTestViewSubClass> WeakObjectPtr;

	//UPROPERTY()
	//TStrongObjectPtr<UTestSubClass> StrongObjectPtr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UTestViewSubClass> ObjectPtr;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTestViewSubClass* Ptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString String;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Array;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FName> Set;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FString> Map;

	UFUNCTION(BlueprintCallable)
	void Fun() 
	{

	}
};

UCLASS(Blueprintable, BlueprintType)
class UTestViewDerivedClass : public UTestViewClass
{
	GENERATED_BODY()
public:
	UTestViewDerivedClass();
};


USTRUCT(Blueprintable, BlueprintType)
struct FTestViewSubStruct
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite)
	FString String;

	UPROPERTY(BlueprintReadWrite)
	FName Name;

	UPROPERTY(BlueprintReadWrite)
	FText Text;
};


USTRUCT(Blueprintable, BlueprintType)
struct FTestViewStruct
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Boolean;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Int32;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 Int64;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Float;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Double;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTestViewSubClass* Ptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UTestViewSubClass> ObjectPtr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<UTestViewSubClass> WeakObjectPtr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTestViewSubClass> SoftObjectPtr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UTestViewSubClass> SoftClassPtr;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UClass* ClassPtr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UClass> ObjectClassPtr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UTestViewSubClass> Subclass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString String;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Array;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FName> Set;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FString> Map;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTestViewSubStruct Struct;

	UPROPERTY(EditAnywhere)
	int32 MyStaticArray[5];

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Byte;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> ByteArray;

	UPROPERTY(EditAnywhere)
	uint8 MyStaticByteArray[5];



	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UObject> SoftClassClassPtr;

	UPROPERTY(EditAnywhere)
	int32& RefTest;

	UPROPERTY(EditAnywhere)
	FString& ConstRefTest;

	UPROPERTY(EditAnywhere)
	UObject* & ObjectRefTest;

	void Fun()
	{
	}
};

UCLASS(Blueprintable, BlueprintType)
class UTestFunction : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void TestFunction1(int32 Int32, float Float, FString String);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TestFunction2(int32 Int32, float Float, FString String);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TestFunction3(int32 Int32, float Float, FString String);
};