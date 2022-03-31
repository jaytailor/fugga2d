#import <Foundation/Foundation.h>
#import "UMSDataPrivacyParameters.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Object containing parameters to be passed to the ad network from a waterfall configuration.
 */
@interface UMSAdapterConfiguration : NSObject

/**
 * Returns the NSString value for the specified key from the parameters.
 *
 * @param key NSString key of the parameter to get.
 * @return NSString
 */
- (NSString *_Nullable)getAdapterParameter:(NSString *)key;

/**
 * Returns an object containing the consent state for each law.
 *
 * @return `UMSDataPrivacyParameters`
 */
- (UMSDataPrivacyParameters *)getDataPrivacyParameters;

@end

NS_ASSUME_NONNULL_END
