#import <Foundation/Foundation.h>
#import "UMSAdapterLoadError.h"
#import "UMSRewardedAdapterAdLoadDelegate.h"

@interface UMSRewardedAdapterAdLoadDelegateWithBlocks : NSObject <UMSRewardedAdapterAdLoadDelegate>

@property (nonatomic, copy) void (^ onRewardedAdapterLoadedBlock)(void);
@property (nonatomic, copy) void (^ onRewardedAdapterFailedLoadBlock)(UMSAdapterLoadError error, NSString *message);

@end
