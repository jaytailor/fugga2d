using System;
using System.Text.RegularExpressions;
using NUnit.Framework;

namespace Unity.Mediation.EditorTests
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
    }
}
