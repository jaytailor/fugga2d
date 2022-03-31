#import <Foundation/Foundation.h>
#import "UMSS2SRedeemData.h"

/**
 * Rewarded show options.
 *
 * Use the publisherData object to pass your S2S callback data.
 *
 */
@interface UMSRewardedAdShowOptions : NSObject

/**
 * The `UMSS2SRedeemData` contains publisher provided data.
 */
@property (nonatomic, strong, readonly) UMSS2SRedeemData *publisherData;

@end
