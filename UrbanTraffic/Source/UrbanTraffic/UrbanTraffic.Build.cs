// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UrbanTraffic : ModuleRules
{
	public UrbanTraffic(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "PhysXVehicles", "HeadMountedDisplay", "Networking", "Json", "Sockets" });

		PublicDefinitions.Add("HMD_MODULE_INCLUDED=1");
	}
}
