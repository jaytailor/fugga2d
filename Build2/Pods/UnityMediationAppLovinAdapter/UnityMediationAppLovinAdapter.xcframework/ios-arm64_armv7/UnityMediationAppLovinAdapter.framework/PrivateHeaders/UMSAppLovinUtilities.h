#import <UnityMediationSdk/UnityMediationSdk.h>
#import <Foundation/Foundation.h>

@interface UMSAppLovinUtilities : NSObject

+ (UMSAdapterLoadError)getLoadErrorCodeFromAppLovin:(int)error;
+ (NSString *)getErrorMessageFromAppLovin:(int)code;
+ (NSString *)         identifierForAdvertising;

@end
