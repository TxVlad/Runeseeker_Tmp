// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Runeseeker_Tmp : ModuleRules
{
	public Runeseeker_Tmp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
