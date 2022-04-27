#if UNITY_ANDROID || UNITY_IOS
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Services.Mediation.Tests
{
    public class DataPrivacyTests
    {
        [SetUp]
        public async void Setup()
        {
            await MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId);
        }

        [TestCase(DataPrivacyLaw.CCPA, ConsentStatus.Denied)]
        [TestCase(DataPrivacyLaw.CCPA, ConsentStatus.Given)]
        [TestCase(DataPrivacyLaw.CCPA, ConsentStatus.NotDetermined)]
        [TestCase(DataPrivacyLaw.GDPR, ConsentStatus.Denied)]
        [TestCase(DataPrivacyLaw.GDPR, ConsentStatus.Given)]
        [TestCase(DataPrivacyLaw.GDPR, ConsentStatus.NotDetermined)]
        [TestCase(DataPrivacyLaw.PIPLAdPersonalization, ConsentStatus.Denied)]
        [TestCase(DataPrivacyLaw.PIPLAdPersonalization, ConsentStatus.Given)]
        [TestCase(DataPrivacyLaw.PIPLAdPersonalization, ConsentStatus.NotDetermined)]
        [TestCase(DataPrivacyLaw.PIPLDataTransport, ConsentStatus.Denied)]
        [TestCase(DataPrivacyLaw.PIPLDataTransport, ConsentStatus.Given)]
        [TestCase(DataPrivacyLaw.PIPLDataTransport, ConsentStatus.NotDetermined)]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void PrivacyTest(DataPrivacyLaw law, ConsentStatus consent)
        {
            MediationService.Instance.DataPrivacy.UserGaveConsent(consent, law);
            ConsentStatus status = MediationService.Instance.DataPrivacy.GetConsentStatusForLaw(law);
            Assert.AreEqual(consent, status, "Consent status set and retrieved differed.");
        }
    }
}
#endif
