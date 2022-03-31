#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSAdColonyAdapterState.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSAdColonyInitializationAdapter : NSObject <UMSAdNetworkAdapterProtocol>

- (instancetype)initWithState:(UMSAdColonyAdapterState *)adColonyAdapterState;

- (void)passDataPrivacyConsentToAdColonyAppOptions:(AdColonyAppOptions *_Nullable)adColonyOptions
                              privacyLawParameters:(UMSDataPrivacyParameters *_Nullable)privacyLawParameters;

- (NSString *_Nullable)stringConsentStatusFromUMSConsentStatus:(UMSConsentStatus)consentStatus;

@end

NS_ASSUME_NONNULL_END
