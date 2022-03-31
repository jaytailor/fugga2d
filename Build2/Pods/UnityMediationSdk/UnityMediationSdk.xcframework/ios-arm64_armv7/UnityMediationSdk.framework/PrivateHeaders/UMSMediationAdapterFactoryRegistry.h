#import <Foundation/Foundation.h>
#import "UMSMediationAdapterFactory.h"
#import "UMSAdNetwork.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UMSMediationAdapterFactoryRegistry

- (void)registerMediationAdapterFactory:(id<UMSMediationAdapterFactory>)mediationAdapterFactory;

- (id<UMSInterstitialAdapter> _Nullable)getInterstitialAdapterWithAdNetwork:(UMSAdNetwork)adNetwork;

- (id<UMSRewardedAdapter> _Nullable)getRewardedAdapterWithAdNetwork:(UMSAdNetwork)adNetwork;

- (id<UMSAdNetworkAdapterProtocol> _Nullable)getAdNetworkAdapterWithAdNetwork:(UMSAdNetwork)adNetwork;

- (NSString *_Nullable)getAdapterVersion:(UMSAdNetwork)adNetwork;

- (NSString *_Nullable)getAdNetworkSdkVersion:(UMSAdNetwork)adNetwork;

- (void)                                     logRegisteredAdapterInformation;

@end

NS_ASSUME_NONNULL_END
