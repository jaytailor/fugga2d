#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import <UnityAds/UnityAds.h>

@interface UMSUnityAdapterUtilities : NSObject

+ (UMSAdapterLoadError)getAdapterLoadErrorWithUnityAdsLoadError:(UnityAdsLoadError)unityAdsLoadError;

+ (UMSShowError)getShowErrorWithUnityAdsShowError:(UnityAdsShowError)unityAdsShowError;

+ (NSString *)errorMessageFromUnityAdsLoadError:(UnityAdsLoadError)unityAdsLoadError
                           unityAdsErrorMessage:(NSString *)unityAdsErrorMessage;

+ (NSString *)errorMessageFromUnityAdsShowError:(UnityAdsShowError)unityAdsShowError
                           unityAdsErrorMessage:(NSString *)unityAdsErrorMessage;

@end
