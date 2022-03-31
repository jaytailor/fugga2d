#import <Foundation/Foundation.h>
#import "UMSInterstitialAdapter.h"
#import "UMSRewardedAdapter.h"
#import "UMSAdNetworkAdapterProtocol.h"
#import "UMSAdNetwork.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * UMSMediationAdapterFacotry is a protocol that ad network adapters should implement to enable UnityMediationSdk support.
 * Each ad network will need to implement this class and the relevant methods to provide support for those ad types.
 * Each ad types adapter creation method is optional, only implement the ones that your ad network supports.
 */
@protocol UMSMediationAdapterFactory <NSObject>

@required

/**
 * Provide the `UMSAdNetwork` enum value for implemented ad network.
 * @return `UMSAdNetwork`
 */
- (UMSAdNetwork)                   getAdNetwork;

/**
 * Provide the adapter's sdk version string. Example "1.0.0".
 * @return NSString
 */
- (NSString *)                     getAdapterVersion;

/**
 * Provide the ad network sdk version string. Example "7.10.1".
 * @return NSString
 */
- (NSString *)                     getAdNetworkSdkVersion;

@optional

/**
 * If the ad network supports interstitial ads this method should be implemented.
 * This method is required to load and show interstitial ads in the UnityMediationSdk.
 * @return `UMSInterstitialAdapter`
 */
- (id<UMSInterstitialAdapter>)     createInterstitialAdapter;

/**
 * If the ad network supports rewarded ads this method should be implemented.
 * This method is required to load and show rewarded ads in the UnityMediationSdk.
 * @return `UMSRewardedAdapter`
 */
- (id<UMSRewardedAdapter>)         createRewardedAdapter;

/**
 * If the ad network supports header bidding this method should be implemented.
 * This method is required to pre-initialize an ad network adapter and to fetch header bidding tokens.
 */
- (id<UMSAdNetworkAdapterProtocol>)createAdNetworkAdapter;

@end

NS_ASSUME_NONNULL_END
