#if UNITY_IOS
using System.IO;
using NUnit.Framework;
using Unity.Services.Mediation.Build.Editor;

namespace Unity.Services.Mediation.EditorTests
{
    public class IosAmendPodfilePostBuildTests
    {
        string m_TestPodfilesBasePath;

        [SetUp]
        public void SetUp()
        {
            // The path will vary if the tests are in a separate package
            if (Directory.Exists("Packages/com.unity.services.mediation.tests/Tests"))
            {
                m_TestPodfilesBasePath = @"Packages/com.unity.services.mediation.tests/Tests/Editor/Podfiles/";
            }
            else
            {
                m_TestPodfilesBasePath = @"Packages/com.unity.services.mediation/Tests/Editor/Podfiles/";
            }
        }


        [Test]
        [TestCase("Podfile-Static")]
        [TestCase("Podfile-Dynamic-NoPostInstall")]
        [TestCase("Podfile-Dynamic-PostInstall")]
        [TestCase("Podfile-Dynamic-OneTarget")]
        [TestCase("Podfile-Static-Linkage")]
        public void GetInstalledAdaptersTest(string podfileName)
        {
            string inputPodfilePath = m_TestPodfilesBasePath+ "Inputs/" + podfileName;
            string expectedOutputPodfilePath = m_TestPodfilesBasePath+ "ExpectedOutputs/" + podfileName;

            var inputPodfileContent = File.ReadAllText(inputPodfilePath);
            var amendedPodfileContents = IosAmendPodfilePostBuild.AmendPodfileContent(inputPodfileContent);
            var expectedOutputPodfileContent = File.ReadAllText(expectedOutputPodfilePath);
            StringAssert.Contains(expectedOutputPodfileContent, amendedPodfileContents);
        }
    }
}

#endif
