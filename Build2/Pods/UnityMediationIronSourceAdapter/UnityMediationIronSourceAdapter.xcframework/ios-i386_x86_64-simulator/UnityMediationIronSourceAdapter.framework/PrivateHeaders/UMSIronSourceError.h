#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

static NSErrorDomain const UMSIronSourceAdapterErrorDomain = @"UMSIronSourceAdapterErrorDomain";

typedef NS_ENUM (NSInteger, UMSIronSourceAdapterErrorCode) {
    UMSIronSourceAdapterErrorCodeUnknown,
    UMSIronSourceAdapterErrorCodeNoTokenProvided
};

@interface UMSIronSourceError : NSObject

+ (UMSAdapterLoadError)getLoadErrorCodeFromIronSource:(NSError *)error;
+ (UMSShowError)getShowErrorCodeFromIronSource:(NSError *)error;
+ (NSString *)getErrorMessageFromIronSource:(NSError *)error;

@end
