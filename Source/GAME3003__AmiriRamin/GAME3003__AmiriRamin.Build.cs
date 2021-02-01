// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GAME3003__AmiriRamin : ModuleRules
{
	public GAME3003__AmiriRamin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
