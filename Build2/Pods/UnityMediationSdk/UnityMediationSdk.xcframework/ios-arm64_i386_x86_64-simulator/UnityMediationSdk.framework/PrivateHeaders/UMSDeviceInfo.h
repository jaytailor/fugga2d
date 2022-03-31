#import <Foundation/Foundation.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import <UnityMediationTrackingService/UnityMediationTrackingService.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>
#import "UMSReachability.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSDeviceInfo : NSObject

+ (NetworkStatus)       getNetworkStatus;

+ (NSString *)          deviceModel;

+ (int)                 deviceWidthPx;

+ (int)                 deviceHeightPx;

+ (NSString *)          deviceRFC3066Language;

+ (UIUserInterfaceIdiom)deviceType;

@end

NS_ASSUME_NONNULL_END
