#if UNITY_ANDROID || UNITY_IOS
using System;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Mediation.Tests
{
    public class DataPrivacyTests
    {
        [TestCase(DataPrivacyLaw.CCPA, ConsentStatus.Denied)]
        [TestCase(DataPrivacyLaw.CCPA, ConsentStatus.Given)]
        [TestCase(DataPrivacyLaw.CCPA, ConsentStatus.NotDetermined)]
        [TestCase(DataPrivacyLaw.GDPR, ConsentStatus.Denied)]
        [TestCase(DataPrivacyLaw.GDPR, ConsentStatus.Given)]
        [TestCase(DataPrivacyLaw.GDPR, ConsentStatus.NotDetermined)]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void PrivacyTest(DataPrivacyLaw law, ConsentStatus consent)
        {
            DataPrivacy.UserGaveConsent(consent, law);
            ConsentStatus status = DataPrivacy.GetConsentStatusForLaw(law);
            Assert.AreEqual(consent, status, "Consent status set and retrieved differed.");
        }
    }
}
#endif
