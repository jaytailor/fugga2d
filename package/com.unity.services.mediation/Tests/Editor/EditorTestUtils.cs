using System;
using System.Reflection;
using System.Text.RegularExpressions;
using NUnit.Framework;
using UnityEditor;

namespace Unity.Services.Mediation.EditorTests
{
    class EditorTestUtils
    {
        public static void IgnoreIfNotInTestProject(string message)
        {
            if (!IsRunningOnTestProject())
            {
                Assert.Ignore(message);
            }
        }

        public static bool IsRunningOnTestProject()
        {
            var regex = new Regex("TestProjects[\\\\/]UnityMediation20[0-9]{2}");
            return regex.IsMatch(Environment.CurrentDirectory);
        }

        public static void SetProject(string projectId, string projectName, string orgId){
            Type typeConnect = typeof(CloudProjectSettings).Assembly.GetType("UnityEditor.Connect.UnityConnect");
            var connectInstance = typeConnect.GetRuntimeProperty("instance").GetValue(null);
            var bindMethod = typeConnect.GetMethod("BindProject");
            bindMethod.Invoke(connectInstance, new object[] { projectId, projectName, orgId });
        }
    }
}
