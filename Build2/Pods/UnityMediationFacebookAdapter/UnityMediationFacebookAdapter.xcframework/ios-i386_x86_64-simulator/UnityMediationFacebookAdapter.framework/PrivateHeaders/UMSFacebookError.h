#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

static NSErrorDomain const UMSFacebookAdapterErrorDomain = @"UMSFacebookAdapterErrorDomain";

typedef NS_ENUM (NSInteger, UMSFacebookAdapterErrorCode) {
    UMSFacebookAdapterErrorCodeUnknown,
    UMSFacebookAdapterErrorCodeNoTokenProvided
};

@interface UMSFacebookError : NSObject

+ (UMSAdapterLoadError)loadErrorFromFacebookRequestError:(NSError *)error;

+ (UMSShowError)showErrorFromFacebookShowError:(NSError *)error;

+ (NSString *)errorMessageFromFacebookError:(NSError *)error;

@end
