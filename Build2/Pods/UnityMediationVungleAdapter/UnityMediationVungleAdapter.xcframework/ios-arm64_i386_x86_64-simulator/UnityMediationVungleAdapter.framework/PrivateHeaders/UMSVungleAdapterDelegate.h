#import <VungleSDK/VungleSDK.h>
#import <VungleSDK/VungleSDKHeaderBidding.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UMSVungleAdapterDelegate

- (void)vungleAdPlayabilityUpdate:(BOOL)isAdPlayable
                            error:(nullable NSError *)error;

- (void)vungleDidShowAd;

- (void)vungleAdViewed;

- (void)vungleDidCloseAd;

- (void)vungleTrackClick;

- (void)vungleRewardUser;

@end

NS_ASSUME_NONNULL_END
