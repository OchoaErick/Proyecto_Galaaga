// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Proyecto_Galaaga : ModuleRules
{
	public Proyecto_Galaaga(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
