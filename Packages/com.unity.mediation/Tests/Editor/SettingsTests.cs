using System.Linq;
using NUnit.Framework;
using Unity.Mediation.Adapters.Editor;
using Unity.Mediation.Settings.Editor;

namespace Unity.Mediation.EditorTests
{
    public class SettingsTests
    {
        [Test]
        public void AdapterSettingsVersionsTest()
        {
            var adapters = MediationSdkInfo.GetAllAdapters();
            var adapterSettings = MediationAdapterSettings.FindAdapterSettings(adapters);

            Assert.That(adapters.Select(info => info.Identifier),
                Is.EquivalentTo(adapterSettings.Select(settings => settings.AdapterId)));
        }

        [Test]
        [TestCase("world", "Hello, world", true)]
        [TestCase("test", "Hello, world", false)]
        public void MatchSearchGroupsTests(string searchContext, string label, bool expected)
        {
            //MatchSearchGroups uses reflection, and if it fails, it silently returns true.
            //It should be tested that it can return both values.
            Assert.AreEqual(expected, SettingsGUILayoutEx.MatchSearchGroups(searchContext, label));
        }
    }
}
