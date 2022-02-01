using System.IO;
using NUnit.Framework;
using PlayServicesResolver.Installer.Editor;

namespace Unity.Services.Mediation.EditorTests
{
    public class PlayServicesResolverInstallerTests
    {
        static string[] s_PlayServicesResolverFiles =
        {
            "Google.IOSResolver.dll",
            "Google.IOSResolver.dll.meta",
            "Google.JarResolver.dll",
            "Google.JarResolver.dll.meta",
            "Google.VersionHandler.dll",
            "Google.VersionHandler.dll.meta",
            "Google.VersionHandlerImpl_v1.2.135.0.dll",
            "Google.VersionHandlerImpl_v1.2.135.0.dll.meta",
            "play-services-resolver_v1.2.135.0.txt",
            "play-services-resolver_v1.2.135.0.txt.meta"
        };

        [Test]
        public void PlayServicesResolverDetectionTest()
        {
            //Only relevant for test projects. It's possible to run package tests in isolation, inside a new project
            //Where play services resolver is not installed
            EditorTestUtils.IgnoreIfNotInTestProject("Not running inside a test project");

            //Ensuring that the test project actually have PlayServicesResolver
            foreach (var file in s_PlayServicesResolverFiles)
            {
                var filePath = Path.Combine("Assets/PlayServicesResolver/Editor", file);
                Assert.That(() => File.Exists(filePath), $"File missing: {filePath}");
            }

            Assert.IsTrue(PlayServicesResolverInstaller.IsPlayServicesResolverInstalled(), "PlayServicesResolver is supposed to be installed.");
        }
    }
}
