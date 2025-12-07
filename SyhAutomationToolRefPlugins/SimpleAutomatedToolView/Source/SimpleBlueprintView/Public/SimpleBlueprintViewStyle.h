// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateStyle.h"

/**  */
class FSimpleBlueprintViewStyle
{
public:

	static void Initialize();

	static void Shutdown();

	/** reloads textures used by slate renderer */
	static void ReloadTextures();

	/** @return The Slate style set for the Shooter game */
	static const ISlateStyle& Get();

	static FName GetStyleSetName();

	class FSimpleBlueprintEditorStyleSet : public FSlateStyleSet
	{
	public:
		FSimpleBlueprintEditorStyleSet();
		~FSimpleBlueprintEditorStyleSet();

		void Initialize();
	};

private:

	static void Create();
	static TSharedRef< class FSimpleBlueprintEditorStyleSet > CreateEditorStyle();

private:

	static TSharedPtr< class FSimpleBlueprintEditorStyleSet > EditorStyleInstance;
};