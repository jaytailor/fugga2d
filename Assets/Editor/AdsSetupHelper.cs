using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;

public class AdsSetupHelper
{
    [MenuItem("Fugga/Setup Ads System")]
    static void SetupAds()
    {
        // Check if we're in the menu scene
        Scene currentScene = SceneManager.GetActiveScene();
        if (currentScene.name != "menu")
        {
            if (!EditorUtility.DisplayDialog("Wrong Scene",
                "You should be in the 'menu' scene to setup ads. Open menu scene now?",
                "Yes", "Cancel"))
            {
                return;
            }

            // Open menu scene
            EditorSceneManager.OpenScene("Assets/menu.unity");
        }

        // Check if UnityAds already exists
        UnityAds existingAds = GameObject.FindObjectOfType<UnityAds>();
        if (existingAds != null)
        {
            EditorUtility.DisplayDialog("Already Setup",
                "UnityAds GameObject already exists in the scene!",
                "OK");
            Selection.activeGameObject = existingAds.gameObject;
            return;
        }

        // Create UnityAds GameObject
        GameObject adsObj = new GameObject("UnityAds");
        adsObj.AddComponent<UnityAds>();

        // Mark scene as dirty
        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());

        // Select the new GameObject
        Selection.activeGameObject = adsObj;

        EditorUtility.DisplayDialog("Setup Complete",
            "UnityAds has been added to your menu scene!\n\n" +
            "The ads system will now initialize when the game starts.",
            "OK");

        Debug.Log("Ads: UnityAds GameObject created successfully in menu scene");
    }

    [MenuItem("Fugga/Setup Ads System", true)]
    static bool ValidateSetupAds()
    {
        // Only enable if we're not in play mode
        return !EditorApplication.isPlaying;
    }
}
