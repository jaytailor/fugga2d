#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Interface for giving details about a reward.
 */
@protocol UMSReward <NSObject>

/**
 * Type of reward.
 *  Examples: "Ruby", "Gems", etc.
 * @return NSString describing the type.
 */
- (NSString *)getType;

/**
 * Amount of reward to be given
 * @return NSString describing the amount.
 */
- (NSString *)getAmount;

@end

NS_ASSUME_NONNULL_END
