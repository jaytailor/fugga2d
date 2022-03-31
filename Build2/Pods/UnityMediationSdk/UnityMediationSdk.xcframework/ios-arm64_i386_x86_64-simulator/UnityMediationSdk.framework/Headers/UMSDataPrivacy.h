#import <Foundation/Foundation.h>
#import "UMSDataPrivacyLaw.h"
#import "UMSConsentStatus.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * UMSDataPrivacy handles consent information for various data privacy laws.
 * The laws that this class handles are detailed in `UMSDataPrivacyLaw`.
 */
@interface UMSDataPrivacy : NSObject

/**
 * Set the `UMSConsentStatus` for a specific `UMSDataPrivacyLaw`.
 *
 * `UMSConsentStatus.UMSConsentStatusNotDetermined` should be used if the user has not explicitly given consent and has not explicitly denied consent.
 *
 * `UMSConsentStatus.UMSConsentStatusGiven` should be used if the user has explicitly given consent for the law.
 *
 * `UMSConsentStatus.UMSConsentStatusDenied` should be used if the user has explicitly denied consent for the law.
 *
 * @param consent The `UMSConsentStatus` to set.
 * @param law The `UMSDataPrivacyLaw` to update consent for.
 */
+ (void)userGaveConsent:(UMSConsentStatus)consent toLaw:(UMSDataPrivacyLaw)law;

/**
 * Retrieve the current `UMSConsentStatus` for a specific `UMSDataPrivacyLaw`.
 *
 * @param law The `UMSDataPrivacyLaw` that we want to get the status of.
 * @return The current `UMSConsentStatus`.
 */
+ (UMSConsentStatus)getConsentStatusForLaw:(UMSDataPrivacyLaw)law;

@end

NS_ASSUME_NONNULL_END
