#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

@interface UMSVungleReward : NSObject <UMSReward>

- (instancetype)initWithType:(NSString *)type
                      amount:(NSString *)amount;

- (NSString *)  getType;

- (NSString *)  getAmount;

@end
