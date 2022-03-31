
#import <Foundation/Foundation.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>
#import "UMSConsentStatus.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSProtobufUtilities : NSObject

+ (GPBStringUInt32Dictionary *)gpbStringUInt32DictionaryFromNSDictionary:(NSDictionary<NSString *, NSNumber *> *)dictionary;

+ (UMISPermissionStatus)permissionStatusFromConsentStatus:(UMSConsentStatus)consentStatus;

@end

NS_ASSUME_NONNULL_END
