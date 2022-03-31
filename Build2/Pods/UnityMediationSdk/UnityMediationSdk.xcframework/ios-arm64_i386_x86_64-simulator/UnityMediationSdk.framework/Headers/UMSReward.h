#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Interface for giving details about a reward.
 */
@protocol UMSReward <NSObject>

/**
 * Returns the type of reward.
 *
 * Examples: "Ruby", "Gems", etc.
 *
 * @return NSString
 */
- (NSString *)getType;

/**
 * Returns the amount of reward to be given.
 *
 * @return NSString
 */
- (NSString *)getAmount;

@end

NS_ASSUME_NONNULL_END
