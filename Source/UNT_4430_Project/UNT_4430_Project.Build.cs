// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UNT_4430_Project : ModuleRules
{
	public UNT_4430_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
