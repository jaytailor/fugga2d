using System;

namespace Unity.Mediation.Platform
{
    interface IDataPrivacy
    {
        void UserGaveConsent(ConsentStatus consent, DataPrivacyLaw dataPrivacyLaw);
        ConsentStatus GetConsentStatusForLaw(DataPrivacyLaw dataPrivacyLaw);
    }
}
