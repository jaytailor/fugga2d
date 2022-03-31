#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import <AdColony/AdColony.h>

@interface UMSAdcolonyError : NSObject

+ (UMSAdapterLoadError)loadErrorFromAdColonyRequestError:(AdColonyAdRequestError *)error;
+ (UMSShowError)showErrorFromAdColonyRequestError:(AdColonyAdRequestError *)error;
+ (NSString *)loadErrorMessageFromAdColonyRequestError:(AdColonyAdRequestError *)error;

@end
