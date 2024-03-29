#if UNITY_ANDROID
using NUnit.Framework;
using Unity.Services.Mediation.Build.Editor;

namespace Unity.Services.Mediation.EditorTests
{
    public class AndroidNativeDependenciesPreBuildCheckTests
    {
        [Test]
        public void ValidateTest()
        {
            //This is not a test. This is merely a check to make sure test projects has correct dependencies.
            var check = new AndroidNativeDependenciesPreBuildCheck();
            Assert.DoesNotThrow(() => check.ValidateDependencies(true));
        }
    }
}
#endif
