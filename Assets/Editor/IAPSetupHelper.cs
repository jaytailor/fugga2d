using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;

public class IAPSetupHelper : EditorWindow
{
    [MenuItem("Fugga/Setup IAP System")]
    static void SetupIAP()
    {
        if (!EditorUtility.DisplayDialog("Setup IAP",
            "This will add the IAPManager to your menu scene and create sample IAP buttons. Continue?",
            "Yes", "Cancel"))
        {
            return;
        }

        // Load the menu scene
        Scene menuScene = EditorSceneManager.OpenScene("Assets/menu.unity");

        // Check if IAPManager already exists
        IAPManager existingManager = FindObjectOfType<IAPManager>();
        if (existingManager != null)
        {
            Debug.Log("IAP: IAPManager already exists in scene!");
            EditorUtility.DisplayDialog("Already Setup", "IAPManager already exists in the scene!", "OK");
            return;
        }

        // Create IAPManager GameObject
        GameObject iapManagerObj = new GameObject("IAPManager");
        iapManagerObj.AddComponent<IAPManager>();

        // Mark scene as dirty and save
        EditorSceneManager.MarkSceneDirty(menuScene);
        EditorSceneManager.SaveScene(menuScene);

        Debug.Log("IAP: IAPManager added to menu scene successfully!");
        EditorUtility.DisplayDialog("Setup Complete",
            "IAPManager has been added to your menu scene!\n\n" +
            "Next steps:\n" +
            "1. Add IAP purchase buttons to your UI\n" +
            "2. Attach the IAPButton script to each button\n" +
            "3. Configure which coin package each button purchases\n" +
            "4. Set up products in Google Play Console\n\n" +
            "See IAP_SETUP_GUIDE.md for details.",
            "OK");

        // Select the IAPManager in hierarchy
        Selection.activeGameObject = iapManagerObj;
        EditorGUIUtility.PingObject(iapManagerObj);
    }

    [MenuItem("Fugga/Create IAP Button")]
    static void CreateIAPButton()
    {
        // Create a canvas if one doesn't exist
        Canvas canvas = FindObjectOfType<Canvas>();
        if (canvas == null)
        {
            EditorUtility.DisplayDialog("No Canvas", "Please create a Canvas in your scene first!", "OK");
            return;
        }

        // Create button
        GameObject buttonObj = new GameObject("IAP Button - 500 Coins");
        buttonObj.transform.SetParent(canvas.transform, false);

        // Add RectTransform
        RectTransform rectTransform = buttonObj.AddComponent<RectTransform>();
        rectTransform.sizeDelta = new Vector2(200, 60);

        // Add Image component for background
        UnityEngine.UI.Image image = buttonObj.AddComponent<UnityEngine.UI.Image>();
        image.color = new Color(0.2f, 0.8f, 0.2f); // Green color

        // Add Button component
        UnityEngine.UI.Button button = buttonObj.AddComponent<UnityEngine.UI.Button>();

        // Add IAPButton script
        IAPButton iapButton = buttonObj.AddComponent<IAPButton>();
        iapButton.package = IAPButton.CoinPackage.Coins500; // Default to 500 coins

        // Create text child
        GameObject textObj = new GameObject("Text");
        textObj.transform.SetParent(buttonObj.transform, false);

        UnityEngine.UI.Text text = textObj.AddComponent<UnityEngine.UI.Text>();
        text.text = "Buy 500 Coins\n$0.99";
        text.alignment = TextAnchor.MiddleCenter;
        text.color = Color.white;
        text.font = Resources.GetBuiltinResource<Font>("Arial.ttf");
        text.fontSize = 18;

        RectTransform textRect = textObj.GetComponent<RectTransform>();
        textRect.anchorMin = Vector2.zero;
        textRect.anchorMax = Vector2.one;
        textRect.sizeDelta = Vector2.zero;

        // Set up button click event
        UnityEngine.Events.UnityAction action = new UnityEngine.Events.UnityAction(iapButton.OnPurchaseButtonClick);
        button.onClick.AddListener(action);

        // Assign price text to IAPButton
        iapButton.priceText = text;

        // Select the new button
        Selection.activeGameObject = buttonObj;
        EditorGUIUtility.PingObject(buttonObj);

        Debug.Log("IAP: Sample IAP button created! Customize it in the Inspector.");
        EditorUtility.DisplayDialog("Button Created",
            "IAP button created!\n\n" +
            "Customize in Inspector:\n" +
            "- Change coin package (500/1500/3000)\n" +
            "- Adjust position and size\n" +
            "- Modify button appearance\n\n" +
            "Create 2 more buttons for other coin packages.",
            "OK");

        // Mark scene as dirty
        EditorSceneManager.MarkSceneDirty(SceneManager.GetActiveScene());
    }

    [MenuItem("Fugga/IAP Documentation")]
    static void OpenDocumentation()
    {
        string path = Application.dataPath + "/../IAP_SETUP_GUIDE.md";
        Application.OpenURL("file://" + path);
    }

    [MenuItem("Fugga/Build Release Bundle")]
    static void BuildReleaseBundle()
    {
        if (!EditorUtility.DisplayDialog("Build Release",
            "This will build a release App Bundle (.aab) with version code auto-increment. Continue?",
            "Build", "Cancel"))
        {
            return;
        }

        // Call the build script
        BuildScript.BuildAndroidBundle();
    }
}
