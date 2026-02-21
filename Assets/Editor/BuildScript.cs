using UnityEditor;
using UnityEngine;
using System.Reflection;

public class BuildScript
{
    public static void BuildAndroid()
    {
        BuildAndroidInternal(true, false);
    }

    public static void BuildAndroidRelease()
    {
        BuildAndroidInternal(false, false);
    }

    public static void BuildAndroidBundle()
    {
        BuildAndroidInternal(false, true);
    }

    private static void BuildAndroidInternal(bool developmentBuild, bool buildAppBundle)
    {
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
        string extension = buildAppBundle ? ".aab" : ".apk";
        string buildPath = developmentBuild ? "Builds/Android/Fugga-Debug" + extension : "Builds/Android/Fugga-Release" + extension;

        // Increment version code for new release
        if (!developmentBuild)
        {
            int currentVersionCode = PlayerSettings.Android.bundleVersionCode;
            PlayerSettings.Android.bundleVersionCode = currentVersionCode + 1;
            UnityEngine.Debug.Log("Incremented version code from " + currentVersionCode + " to " + PlayerSettings.Android.bundleVersionCode);
        }

        if (developmentBuild)
        {
            // Development build with debug keystore
            UnityEngine.Debug.Log("Building DEVELOPMENT version...");
            PlayerSettings.Android.useCustomKeystore = false;
            EditorUserBuildSettings.development = true;
            EditorUserBuildSettings.androidBuildType = AndroidBuildType.Debug;
        }
        else
        {
            // Release build - use custom keystore for signing
            UnityEngine.Debug.Log("Building RELEASE version with custom keystore...");

            // Always try to load passwords from environment variables for batch mode builds
            // (Passwords aren't persisted in ProjectSettings for security reasons)
            string keystorePass = System.Environment.GetEnvironmentVariable("ANDROID_KEYSTORE_PASS");
            string keyaliasPass = System.Environment.GetEnvironmentVariable("ANDROID_KEYALIAS_PASS");

            if (!string.IsNullOrEmpty(keystorePass) && !string.IsNullOrEmpty(keyaliasPass))
            {
                PlayerSettings.Android.keystorePass = keystorePass;
                PlayerSettings.Android.keyaliasPass = keyaliasPass;
                UnityEngine.Debug.Log("Keystore passwords loaded from environment variables");
            }
            else
            {
                UnityEngine.Debug.LogError("Keystore passwords not found in environment variables!");
                UnityEngine.Debug.LogError("Set: ANDROID_KEYSTORE_PASS and ANDROID_KEYALIAS_PASS");
            }

            // If keystore path not set in Editor, try environment variables
            if (string.IsNullOrEmpty(PlayerSettings.Android.keystoreName))
            {
                string keystorePath = System.Environment.GetEnvironmentVariable("ANDROID_KEYSTORE_PATH");
                string keyaliasName = System.Environment.GetEnvironmentVariable("ANDROID_KEYALIAS_NAME");

                if (!string.IsNullOrEmpty(keystorePath) && !string.IsNullOrEmpty(keyaliasName))
                {
                    PlayerSettings.Android.useCustomKeystore = true;
                    PlayerSettings.Android.keystoreName = keystorePath;
                    PlayerSettings.Android.keyaliasName = keyaliasName;
                    UnityEngine.Debug.Log("Keystore path and alias loaded from environment variables");
                }
            }

            UnityEngine.Debug.Log("Using keystore: " + PlayerSettings.Android.keystoreName);
            UnityEngine.Debug.Log("Key alias: " + PlayerSettings.Android.keyaliasName);

            EditorUserBuildSettings.development = false;
            EditorUserBuildSettings.androidBuildType = AndroidBuildType.Release;
        }

        BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
        buildPlayerOptions.scenes = scenes;
        buildPlayerOptions.locationPathName = buildPath;
        buildPlayerOptions.target = BuildTarget.Android;
        buildPlayerOptions.options = developmentBuild ? BuildOptions.Development : BuildOptions.None;

        // Set to build App Bundle for release
        if (buildAppBundle)
        {
            EditorUserBuildSettings.buildAppBundle = true;
            UnityEngine.Debug.Log("Building Android App Bundle (.aab)");
        }
        else
        {
            EditorUserBuildSettings.buildAppBundle = false;
            UnityEngine.Debug.Log("Building Android APK");
        }

        UnityEngine.Debug.Log("Starting Android build...");
        var report = BuildPipeline.BuildPlayer(buildPlayerOptions);

        if (report.summary.result == UnityEditor.Build.Reporting.BuildResult.Succeeded)
        {
            UnityEngine.Debug.Log("Build succeeded: " + buildPath);
            UnityEngine.Debug.Log("Build size: " + report.summary.totalSize + " bytes");
            string buildType = developmentBuild ? "Development" : "Release";
            string format = buildAppBundle ? "App Bundle" : "APK";
            UnityEngine.Debug.Log("Build type: " + buildType + " (" + format + ")");
            UnityEngine.Debug.Log("Version code: " + PlayerSettings.Android.bundleVersionCode);
        }
        else
        {
            UnityEngine.Debug.LogError("Build failed!");
        }
    }
}
