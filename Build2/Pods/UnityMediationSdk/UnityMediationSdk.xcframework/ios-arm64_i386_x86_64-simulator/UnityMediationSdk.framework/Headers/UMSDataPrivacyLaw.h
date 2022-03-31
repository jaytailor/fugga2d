#import <Foundation/Foundation.h>

/**
 * Enum for various data privacy laws.
 */
typedef NS_ENUM (NSInteger, UMSDataPrivacyLaw) {
    ///General Data Privacy Regulation, applicable to users residing in the EEA
    UMSDataPrivacyLawGDPR,
    ///California Consumer Privacy Act, applicable to users residing in California
    UMSDataPrivacyLawCCPA,
    ///Personal Information Protection Law, regarding ad personalization, applicable to users residing in China
    UMSDataPrivacyLawPIPLAdPersonalization,
    ///Personal Information Protection Law, regarding moving data out of China, applicable to users residing in China
    UMSDataPrivacyLawPIPLDataTransport
};

/**
 * Utility function for converting from enum to string representation.
 *
 * @param dataPrivacyLaw The UMSDataPrivacyLaw enum to translate to string.
 * @return NSString representation of the UMSDataPrivacyLaw enum.
 */
NSString * NSStringFromUMSDataPrivacyLaw(UMSDataPrivacyLaw dataPrivacyLaw);
