#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

@interface UMSAppLovinReward : NSObject <UMSReward>

- (instancetype)initWithType:(NSString *)type
                      amount:(NSString *)amount;

- (NSString *)  getType;

- (NSString *)  getAmount;

@end
