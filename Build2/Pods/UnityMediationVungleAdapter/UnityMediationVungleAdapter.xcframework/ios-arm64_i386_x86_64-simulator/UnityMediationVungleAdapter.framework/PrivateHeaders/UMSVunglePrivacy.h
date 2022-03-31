#import <Foundation/Foundation.h>
#import <VungleSDK/VungleSDK.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMSVunglePrivacy : NSObject

+ (void)passDataPrivacyConsentWithDataPrivacyParameters:(UMSDataPrivacyParameters *_Nullable)dataPrivacyParameters
                                              vungleSdk:(VungleSDK *)vungleSdk;

@end

NS_ASSUME_NONNULL_END
