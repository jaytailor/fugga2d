#import <Foundation/Foundation.h>
#import "UMSVungleAdapterDelegate.h"

@interface UMSVungleListener : NSObject <UMSVungleAdapterDelegate>

@property (nonatomic, copy) void (^ vungleAdPlayabilityUpdateBlock)(BOOL isAdPlayable, NSError *error);
@property (nonatomic, copy) void (^ vungleDidShowAdBlock)(void);
@property (nonatomic, copy) void (^ vungleAdViewedBlock)(void);
@property (nonatomic, copy) void (^ vungleDidCloseAdBlock)(void);
@property (nonatomic, copy) void (^ vungleTrackClickBlock)(void);
@property (nonatomic, copy) void (^ vungleRewardUserBlock)(void);

- (void)clearAllBlocks;

@end
