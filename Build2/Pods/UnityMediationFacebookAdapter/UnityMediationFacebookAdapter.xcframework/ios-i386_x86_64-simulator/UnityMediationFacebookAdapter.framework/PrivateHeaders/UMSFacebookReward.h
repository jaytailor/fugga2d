#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

@interface UMSFacebookReward : NSObject <UMSReward>

- (instancetype)initWithType:(NSString *)type
                      amount:(NSString *)amount;
@end

@interface UMSFacebookReward ()

@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *amount;

@end
