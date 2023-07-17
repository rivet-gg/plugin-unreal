using UnrealBuildTool; 

public class Rivet: ModuleRules 
{ 
    public Rivet(ReadOnlyTargetRules Target) : base(Target)
    {
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "HTTP", "Json", "JsonUtilities" });
    } 
}
