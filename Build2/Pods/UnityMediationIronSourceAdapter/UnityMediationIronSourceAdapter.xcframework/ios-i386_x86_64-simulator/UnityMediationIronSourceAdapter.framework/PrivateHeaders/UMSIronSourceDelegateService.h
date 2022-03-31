#import <Foundation/Foundation.h>
#import <IronSource/IronSource.h>

@interface UMSIronSourceDelegateService : NSObject <ISDemandOnlyInterstitialDelegate, ISDemandOnlyRewardedVideoDelegate>

- (void)setupISSDKWithAppKey:(NSString *)appKey adUnits:(NSArray<NSString *> *)adUnits;

- (BOOL)registerInterstitialDelegate:(id <ISDemandOnlyInterstitialDelegate>)delegate
                          instanceId:(NSString *)instanceId;

- (void)unregisterInterstitialDelegateForInstanceId:(NSString *)instanceId;

- (BOOL)registerRewardedDelegate:(id <ISDemandOnlyRewardedVideoDelegate>)delegate
                      instanceId:(NSString *)instanceId;

- (void)unregisterRewardedDelegateForInstanceId:(NSString *)instanceId;

@end
