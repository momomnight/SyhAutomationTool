#pragma once
#include "CoreMinimal.h"
#include "UObject/StructOnScope.h"

struct SIMPLEPROGRAMOBJECTREFLECTOR_API IContainerDescription : public TSharedFromThis<IContainerDescription>
{
public:
	static TSharedPtr<IContainerDescription> CreateContainerDescriptionForUScriptStruct(uint8* InData, UScriptStruct* InScriptStruct);
	static TSharedPtr<IContainerDescription> CreateContainerDescriptionForUClass(UObject* InData);

	IContainerDescription(){}
	virtual ~IContainerDescription() {}
public:

	virtual bool IsValid() const { return false; }
	virtual bool IsUClassObject() const { return false; }
	virtual bool IsUStructData() const { return false; }
	//virtual bool IsValidContainerDescription() const { return false;}
	virtual bool IsValidProperty(FProperty* InProperty) const = 0;

	virtual void* GetRawPtr() const = 0;
};

struct SIMPLEPROGRAMOBJECTREFLECTOR_API FContainerDescriptionForUClass : public IContainerDescription
{
public:
	UObject* Object;

public:

	FContainerDescriptionForUClass(UObject* InObject = nullptr) :IContainerDescription(), Object(InObject){}
	void SetObject(UObject* InObject);
public:

	virtual bool IsValid() const override;
	virtual bool IsUClassObject() const override;
	virtual bool IsUStructData() const override;
	//virtual bool IsValidContainerDescription() const override;
	virtual bool IsValidProperty(FProperty* InProperty) const override;

	virtual void* GetRawPtr() const override;

	UClass* GetClass() const;
};

struct SIMPLEPROGRAMOBJECTREFLECTOR_API FContainerDescriptionForUScriptStruct : public IContainerDescription
{
public:
	uint8* StructData;
	UScriptStruct* StructClass;
	FStructOnScope CachedContainerDefaultValue;

public:
	FContainerDescriptionForUScriptStruct(uint8* InStructData = nullptr, UScriptStruct* InStructClass = nullptr);
	void SetStructData(uint8* InStructData, UScriptStruct* InStructClass);

public:

	virtual bool IsValid() const override;
	virtual bool IsUClassObject() const override;
	virtual bool IsUStructData() const override;
	//virtual bool IsValidContainerDescription() const override;
	virtual bool IsValidProperty(FProperty* InProperty) const override;

	virtual void* GetRawPtr() const override;

	UScriptStruct* GetStructClass() const;
	void InitializeStructDefaultValue();
};

//struct SIMPLEPROGRAMOBJECTREFLECTOR_API FInvalidContainerDescription : public IContainerDescription
//{
//	static FInvalidContainerDescription InvalidContainerDescription;
//
//	virtual bool IsValid() { return false; }
//	virtual bool IsUClassObject() const { return false; }
//	virtual bool IsUStructData() const { return false; }
//	virtual bool IsValidContainerDescription() const { return false; }
//	virtual bool IsValidProperty(FProperty* InProperty) const { return false; }
//
//	virtual void* GetRawPtr() const { return nullptr; }
//};
