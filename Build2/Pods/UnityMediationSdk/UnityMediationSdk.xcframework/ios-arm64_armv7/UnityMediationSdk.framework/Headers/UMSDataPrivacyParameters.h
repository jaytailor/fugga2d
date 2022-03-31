#import <Foundation/Foundation.h>
#import "UMSDataPrivacyLaw.h"
#import "UMSConsentStatus.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Object containing data privacy parameters to be passed to the ad network from a waterfall configuration.
 */
@interface UMSDataPrivacyParameters : NSObject

/**
 * Function to get the map of privacy laws set by the user.
 *
 * @param law The `UMSDataPrivacyLaw` that we want to get the status of.
 * @return The current `UMSConsentStatus`.
 */
- (UMSConsentStatus)consentStatusForLaw:(UMSDataPrivacyLaw)law;

@end

NS_ASSUME_NONNULL_END
