#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Interface for a publisher to be able to set custom data for the S2S reward callback feature.
 */
@interface UMSS2SRedeemData : NSObject

/**
 * The publisher's user id. This will be passed along in the S2S reward callback feature to the publisher's S2S server.
 */
@property (nonatomic, strong, nullable) NSString *userId;

/**
 * The publisher's custom data in whatever string format they wish (ex. JSON).
 * This can be any data that the publisher wants forwarded to their S2S server.
 */
@property (nonatomic, strong, nullable) NSString *customData;

@end

NS_ASSUME_NONNULL_END
