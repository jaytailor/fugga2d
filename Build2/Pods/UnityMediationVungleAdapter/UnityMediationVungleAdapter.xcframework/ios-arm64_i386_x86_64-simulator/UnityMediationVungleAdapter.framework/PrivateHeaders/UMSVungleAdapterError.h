#import <UnityMediationSdk/UnityMediationSdk.h>
#import <Foundation/Foundation.h>

static NSErrorDomain const UMSVungleAdapterErrorDomain = @"UMSVungleAdapterErrorDomain";

typedef NS_ENUM (NSInteger, UMSVungleAdapterErrorCode) {
    UMSVungleAdapterErrorCodeUnknown,
    UMSVungleAdapterErrorCodeUnsuccessfulInitialization,
    UMSVungleAdapterErrorCodeNilToken,
    UMSVungleAdapterErrorCodeEmptyToken
};

@interface UMSVungleAdapterError : NSObject

@property (nonatomic, assign, readonly) UMSAdapterLoadError loadError;
@property (nonatomic, assign, readonly) UMSShowError showError;
@property (nonatomic, strong, readonly) NSString *errorMessage;

- (instancetype)initWithVungleError:(NSError *)vungleError;

@end
