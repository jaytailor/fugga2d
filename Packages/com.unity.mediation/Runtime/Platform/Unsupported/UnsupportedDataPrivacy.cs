#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_EDITOR
using System;

namespace Unity.Mediation.Platform
{
    class UnsupportedDataPrivacy : IDataPrivacy
    {
        public void UserGaveConsent(ConsentStatus consent, DataPrivacyLaw dataPrivacyLaw) {}

        public ConsentStatus GetConsentStatusForLaw(DataPrivacyLaw dataPrivacyLaw)
        {
            return ConsentStatus.NotDetermined;
        }
    }
}
#endif
