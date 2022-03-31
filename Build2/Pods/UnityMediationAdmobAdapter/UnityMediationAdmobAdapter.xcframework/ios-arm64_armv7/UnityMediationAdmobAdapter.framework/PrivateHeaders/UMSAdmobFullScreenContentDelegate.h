#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

@interface UMSAdmobFullScreenContentDelegate : NSObject <GADFullScreenContentDelegate>

@property (nonatomic, copy) void (^ _Nullable adDidRecordImpressionBlock)(id<GADFullScreenPresentingAd> _Nonnull);
@property (nonatomic, copy) void (^ _Nullable adDidFailToPresentFullScreenContentWithErrorBlock)(id<GADFullScreenPresentingAd> _Nonnull, NSError *_Nonnull);
@property (nonatomic, copy) void (^ _Nullable adDidPresentFullScreenContentBlock)(id<GADFullScreenPresentingAd> _Nonnull);
@property (nonatomic, copy) void (^ _Nullable adDidDismissFullScreenContentBlock)(id<GADFullScreenPresentingAd>_Nonnull);

@end
