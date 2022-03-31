
/**
 * Enum Indicating the states of the Data Privacy Laws.
 */
typedef NS_ENUM (NSInteger, UMSConsentStatus) {
    ///The user has not explicitly given consent and has not explicitly denied consent.
    UMSConsentStatusNotDetermined,
    ///The user has explicitly given consent for the law.
    UMSConsentStatusGiven,
    ///The user has explicitly denied consent for the law.
    UMSConsentStatusDenied
};
