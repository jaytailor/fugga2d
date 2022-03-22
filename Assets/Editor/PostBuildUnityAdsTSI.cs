#if UNITY_ANDROID

using System.Xml;
using UnityEditor.Android;

namespace Unity.Services.Mediation.TestApp
{
    public class PostBuildUnityAdsTsi : IPostGenerateGradleAndroidProject
    {
        const string k_UnityAdsConfigVersionName = "com.unity3d.ads.configversion";

        const string k_UnityAdsConfigVersionValue = "configv2b";

        const string k_AndroidManifestPath = "/src/main/AndroidManifest.xml";

        const string k_AndroidUri = "http://schemas.android.com/apk/res/android";

        public int callbackOrder { get; }


        public void OnPostGenerateGradleAndroidProject(string path)
        {

            string manifestPath = path + k_AndroidManifestPath;
            var manifestDoc = new XmlDocument();
            manifestDoc.Load(manifestPath);

            var manifestNode = FindFirstChild(manifestDoc, "manifest");
            if (manifestNode == null)
                return;

            var applicationNode = FindFirstChild(manifestNode, "application");
            if (applicationNode == null)
                return;

            FindOrCreateTagWithAttributes(manifestDoc, applicationNode, "meta-data",
                "name", k_UnityAdsConfigVersionName,
                "value", k_UnityAdsConfigVersionValue);

            manifestDoc.Save(manifestPath);
        }

        XmlNode FindFirstChild(XmlNode node, string tag)
        {
            if (node.HasChildNodes)
            {
                for (int i = 0; i < node.ChildNodes.Count; ++i)
                {
                    var child = node.ChildNodes[i];
                    if (child.Name == tag)
                        return child;
                }
            }

            return null;
        }

        void FindOrCreateTagWithAttributes(XmlDocument doc, XmlNode containingNode, string tagName,
            string firstAttributeName, string firstAttributeValue, string secondAttributeName, string secondAttributeValue)
        {
            if (containingNode.HasChildNodes)
            {
                for (int i = 0; i < containingNode.ChildNodes.Count; ++i)
                {
                    var childNode = containingNode.ChildNodes[i];
                    if (childNode.Name == tagName)
                    {
                        var childElement = childNode as XmlElement;
                        if (childElement != null && childElement.HasAttributes)
                        {
                            var firstAttribute = childElement.GetAttributeNode(firstAttributeName, k_AndroidUri);
                            if (firstAttribute == null || firstAttribute.Value != firstAttributeValue)
                                continue;

                            var secondAttribute = childElement.GetAttributeNode(secondAttributeName, k_AndroidUri);
                            if (secondAttribute != null)
                            {
                                secondAttribute.Value = secondAttributeValue;
                                return;
                            }

                            // Create it
                            AppendNewAttribute(doc, childElement, secondAttributeName, secondAttributeValue);
                            return;
                        }
                    }
                }
            }

            // Didn't find it, so create it
            var element = doc.CreateElement(tagName);
            AppendNewAttribute(doc, element, firstAttributeName, firstAttributeValue);
            AppendNewAttribute(doc, element, secondAttributeName, secondAttributeValue);
            containingNode.AppendChild(element);
        }

        void AppendNewAttribute(XmlDocument doc, XmlElement element, string attributeName, string attributeValue)
        {
            var attribute = doc.CreateAttribute(attributeName, k_AndroidUri);
            attribute.Value = attributeValue;
            element.Attributes.Append(attribute);
        }
    }
}
#elif UNITY_IOS

using System.IO;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;

public class PostBuildUnityAdsTsi
{
    const string k_UnityAdsConfigKey = "UnityAdsConfigVersion";
    const string k_UnityAdsConfigValue = "configv2b";

    [PostProcessBuild(0)]
    public static void OnPostProcessBuild(BuildTarget buildTarget, string pathToXcode)
    {
        if (buildTarget == BuildTarget.iOS)
        {
            AddPListValues(pathToXcode);
        }
    }

    // Implement a function to read and write values to the plist file:
    static void AddPListValues(string pathToXcode)
    {
        // Retrieve the plist file from the XCode project directory:
        var plistPath = pathToXcode + "/Info.plist";
        var plistObj = new PlistDocument();

        // Read the values from the plist file:
        plistObj.ReadFromString(File.ReadAllText(plistPath));

        // Set values from the root object:
        PlistElementDict plistRoot = plistObj.root;

        // Set the description key-value in the plist:
        plistRoot.SetString(k_UnityAdsConfigKey, k_UnityAdsConfigValue);

        // Save changes to the plist:
        File.WriteAllText(plistPath, plistObj.WriteToString());
    }
}

#endif
