using System.IO;
using UnityEditor.Android;
using UnityEngine;

public class AndroidPostBuildProcessor : IPostGenerateGradleAndroidProject
{
    public int callbackOrder => 999;

    public void OnPostGenerateGradleAndroidProject(string path)
    {
        Debug.Log("Build path : " + path);
        string gradlePropertiesFile = path + "/gradle.properties";
        if (File.Exists(gradlePropertiesFile))
        {
            File.Delete(gradlePropertiesFile);
        }
        StreamWriter writer = File.CreateText(gradlePropertiesFile);
        writer.WriteLine("org.gradle.jvmargs=-Xmx4096M");
        writer.WriteLine("android.useAndroidX=true");
        writer.WriteLine("android.enableJetifier=true");
        writer.WriteLine("artifactory_username=monish@unity3d.com");
        writer.WriteLine("artifactory_password=AKCp5emRWZSbxpWGLJNGLvjczRcspMzG6mjAN858Ld4wS3Ht8xfGhzQAEwMaoMJNH2ToLtmLm");
        writer.Flush();
        writer.Close();
    }
}