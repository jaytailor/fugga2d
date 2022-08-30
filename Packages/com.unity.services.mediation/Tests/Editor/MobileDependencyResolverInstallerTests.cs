using System.IO;
using NUnit.Framework;
using MobileDependencyResolver.Installer.Editor;

namespace Unity.Services.Mediation.EditorTests
{
    public class MobileDependencyResolverInstallerTests
    {
        static string[] s_MobileDependencyResolverFiles =
        {
            "Google.IOSResolver.dll",
            "Google.IOSResolver.dll.meta",
            "Google.JarResolver.dll",
            "Google.JarResolver.dll.meta",
            "Google.VersionHandler.dll",
            "Google.VersionHandler.dll.meta",
            "Google.VersionHandlerImpl.dll",
            "Google.VersionHandlerImpl.dll.meta",
            "mobile-dependency-resolver.txt",
            "mobile-dependency-resolver.txt.meta"
        };

        [Test]
        public void MobileDependencyResolverDetectionTest()
        {
            //Only relevant for test projects. It's possible to run package tests in isolation, inside a new project
            //Where MobileDependencyResolver is not installed
            EditorTestUtils.IgnoreIfNotInTestProject("Not running inside a test project");

            //Ensuring that the test project actually have PlayServicesResolver
            foreach (var file in s_MobileDependencyResolverFiles)
            {
                var filePath = Path.Combine("Assets/MobileDependencyResolver/Editor", file);
                Assert.That(() => File.Exists(filePath), $"File missing: {filePath}");
            }

            Assert.IsTrue(MobileDependencyResolverInstaller.IsPlayServicesResolverInstalled(), "MobileDependencyResolver is supposed to be installed.");
        }
    }
}
