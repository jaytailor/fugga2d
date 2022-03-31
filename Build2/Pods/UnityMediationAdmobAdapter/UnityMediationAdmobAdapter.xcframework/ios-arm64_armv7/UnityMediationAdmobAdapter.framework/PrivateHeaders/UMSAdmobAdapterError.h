#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

@interface UMSAdmobAdapterError : NSObject

@property (nonatomic, assign, readonly) UMSAdapterLoadError loadError;
@property (nonatomic, assign, readonly) UMSShowError showError;
@property (nonatomic, strong, readonly) NSString *errorMessage;

- (instancetype)initWithAdmobError:(NSError *)admobError;

@end
