#import <Foundation/Foundation.h>
#import "UMSAdapterLoadError.h"
#import "UMSInterstitialAdapterAdLoadDelegate.h"

@interface UMSInterstitialAdapterAdLoadDelegateWithBlocks : NSObject <UMSInterstitialAdapterAdLoadDelegate>

@property (nonatomic, copy) void (^ onInterstitialAdapterLoadedBlock)(void);
@property (nonatomic, copy) void (^ onInterstitialAdapterFailedLoadBlock)(UMSAdapterLoadError error, NSString *message);

@end
