using UnityEditor;
using UnityEngine;
using System.Reflection;

public class BuildScript
{
    public static void BuildAndroid()
    {
        // Use debug keystore for signing
        PlayerSettings.Android.useCustomKeystore = false;
        PlayerSettings.Android.keystoreName = "";
        PlayerSettings.Android.keystorePass = "";
        PlayerSettings.Android.keyaliasName = "";
        PlayerSettings.Android.keyaliasPass = "";

        // Try to resolve dependencies before building
        UnityEngine.Debug.Log("Resolving Android dependencies...");
        try
        {
            var playServicesResolver = System.Type.GetType("GooglePlayServices.PlayServicesResolver, Google.VersionHandlerImpl");
            if (playServicesResolver != null)
            {
                var resolveMethod = playServicesResolver.GetMethod("ResolveSync", BindingFlags.Public | BindingFlags.Static);
                if (resolveMethod != null)
                {
                    resolveMethod.Invoke(null, new object[] { true });
                    UnityEngine.Debug.Log("Dependencies resolved successfully.");
                }
            }
        }
        catch (System.Exception e)
        {
            UnityEngine.Debug.LogWarning("Could not resolve dependencies: " + e.Message);
        }

        string[] scenes = { "Assets/menu.unity", "Assets/main.unity" };
        string buildPath = "Builds/Android/Fugga.apk";

        // Set to development build to avoid strict release checks
        EditorUserBuildSettings.development = true;
        EditorUserBuildSettings.androidBuildType = AndroidBuildType.Debug;

        BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
        buildPlayerOptions.scenes = scenes;
        buildPlayerOptions.locationPathName = buildPath;
        buildPlayerOptions.target = BuildTarget.Android;
        buildPlayerOptions.options = BuildOptions.Development;

        UnityEngine.Debug.Log("Starting Android build with debug keystore...");
        var report = BuildPipeline.BuildPlayer(buildPlayerOptions);

        if (report.summary.result == UnityEditor.Build.Reporting.BuildResult.Succeeded)
        {
            UnityEngine.Debug.Log("Build succeeded: " + buildPath);
            UnityEngine.Debug.Log("Build size: " + report.summary.totalSize + " bytes");
        }
        else
        {
            UnityEngine.Debug.LogError("Build failed!");
        }
    }
}
