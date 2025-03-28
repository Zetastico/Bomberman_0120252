// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Bomberman_0120252 : ModuleRules
{
	public Bomberman_0120252(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
