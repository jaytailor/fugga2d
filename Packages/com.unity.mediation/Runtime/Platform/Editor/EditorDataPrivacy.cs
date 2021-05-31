#if UNITY_EDITOR
using System;

namespace Unity.Mediation.Platform
{
    class EditorDataPrivacy : IDataPrivacy
    {
        public void UserGaveConsent(ConsentStatus consent, DataPrivacyLaw dataPrivacyLaw) {}

        public ConsentStatus GetConsentStatusForLaw(DataPrivacyLaw dataPrivacyLaw)
        {
            return ConsentStatus.NotDetermined;
        }
    }
}
#endif
