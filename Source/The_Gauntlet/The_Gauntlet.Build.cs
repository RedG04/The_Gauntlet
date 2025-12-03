// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class The_Gauntlet : ModuleRules
{
	public The_Gauntlet(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"The_Gauntlet",
			"The_Gauntlet/Variant_Platforming",
			"The_Gauntlet/Variant_Platforming/Animation",
			"The_Gauntlet/Variant_Combat",
			"The_Gauntlet/Variant_Combat/AI",
			"The_Gauntlet/Variant_Combat/Animation",
			"The_Gauntlet/Variant_Combat/Gameplay",
			"The_Gauntlet/Variant_Combat/Interfaces",
			"The_Gauntlet/Variant_Combat/UI",
			"The_Gauntlet/Variant_SideScrolling",
			"The_Gauntlet/Variant_SideScrolling/AI",
			"The_Gauntlet/Variant_SideScrolling/Gameplay",
			"The_Gauntlet/Variant_SideScrolling/Interfaces",
			"The_Gauntlet/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
