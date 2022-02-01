using NUnit.Framework;
using Unity.Services.Mediation.Dashboard.Editor;
using UnityEditor;

namespace Unity.Services.Mediation.EditorTests
{
    public class DashboardTests
    {
        static string s_StoredProjectId;
        static string s_StoredProjectName;
        static string s_StoredOrgId;

        const string k_TestProjectId        = "e7456c4f-9880-466a-bebc-34ef4873ae6f";
        const string k_TestProjectName      = "MediationTestApp";
        const string k_TestProjectOrgId     = "UnityMediation";
        const string k_TestProjectAndroidId = "4302165";
        const string k_TestProjectIosId     = "4302164";

        const string k_PlatformAndroid = "ANDROID";
        const string k_PlatformIos     = "IOS";

        [OneTimeSetUp]
        public void OneTimeSetUp()
        {
            //Store current project and link the test project
            s_StoredProjectId   = CloudProjectSettings.projectId;
            s_StoredProjectName = CloudProjectSettings.projectName;
            s_StoredOrgId       = CloudProjectSettings.organizationId;

            EditorTestUtils.SetProject(k_TestProjectId, k_TestProjectName, k_TestProjectOrgId);
            CloudProjectSettings.RefreshAccessToken(null);
        }

        [OneTimeTearDown]
        public void OneTimeTearDown()
        {
            //Restore initial project
            EditorTestUtils.SetProject(s_StoredProjectId, s_StoredProjectName, s_StoredOrgId);
        }

        [Test]
        public void RetrieveGameIdTest()
        {
            DashboardClient.GetGameIdAsyncOrWait((data) =>
            {
                Assert.NotNull(data, "Could not retrieve GameId from Dashboard.");

                string gameId = null;
                data.TryGetValue(k_PlatformAndroid, out gameId);
                Assert.AreEqual(k_TestProjectAndroidId, gameId, $"Could not find expected GameId; expected {k_TestProjectAndroidId}, retrieved {gameId}");

                gameId = null;
                data.TryGetValue(k_PlatformIos, out gameId);
                Assert.AreEqual(k_TestProjectIosId, gameId, $"Could not find expected GameId; expected {k_TestProjectIosId}, retrieved {gameId}");
            });
        }

        [Test]
        public void RetrieveAdUnitsTest()
        {
            DashboardClient.GetAdUnitsAsync((adUnitInfos)=>
            {
                Assert.NotNull(adUnitInfos, "Could not retrieve ad unit infos");
                Assert.Greater(adUnitInfos.Length, 0, "No Ad units returned");
            });
        }
    }
}
