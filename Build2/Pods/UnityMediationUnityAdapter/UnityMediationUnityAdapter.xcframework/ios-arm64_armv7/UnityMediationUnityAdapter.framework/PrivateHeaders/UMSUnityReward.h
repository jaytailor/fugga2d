#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

@interface UMSUnityReward : NSObject <UMSReward>

- (NSString *)getType;

- (NSString *)getAmount;

@end
