//
//  AFFacebookAudienceWrapper.h
//  AppsFlyer-AdRevenue-Facebook-Audience
//
//  Created by AndreyG-AF on 6/20/19.
//

#import <Foundation/Foundation.h>

#import "AFADRWrapper.h"
#import "AFADRDelegate.h"

#import "MPAdView.h"
#import "MPNativeAd.h"
#import "MPAdViewDelegate.h"
#import "MPNativeAdDelegate.h"
#import "MPTableViewAdPlacerDelegate.h"
#import "MPCollectionViewAdPlacerDelegate.h"
#import "MPStreamAdPlacerDelegate.h"
#import "MPInterstitialAdControllerDelegate.h"
#import "MPInterstitialAdController.h"
#import "MPRewardedVideoReward.h"
#import "MPRewardedAds.h"

#pragma mark - MoPub AdNetworkEvent(Action) Name

#define kMoPubEventNameDidLoadAd              @"DidLoadAd"
#define kMoPubEventNameDidRemoveAd            @"DidRemoveAd"
#define kMoPubEventNameFailToLoadAd           @"FailToLoadAd"
#define kMoPubEventNameLeaveApplicationFromAd @"LeaveApplicationFromAd"
#define kMoPubEventNamePresentModal           @"PresentModal"
#define kMoPubEventNameDismissModal           @"DismissModal"
#define kMoPubEventNameDidTrackImpression     @"DidTrackImpression"
#define kMoPubEventNameDidPresent             @"DidPresent"
#define kMoPubEventNameDidDismiss             @"DidDismiss"
#define kMoPubEventNameDidExpire              @"DidExpire"
#define kMoPubEventNameDidReceiveTapEvent     @"DidReceiveTapEvent"
#define kMoPubEventNameDidFailToPlay          @"DidFailToPlay"
#define kMoPubEventNameShouldReward           @"ShouldReward"

#pragma mark - MoPub AdNetworkEventType

#define kMoPubEventTypeAdView                   @"Banner"
#define kMoPubEventTypeNativeAd                 @"NativeAd"
#define kMoPubEventTypeTableViewAdPlacer        @"TableViewAdPlacer"
#define kMoPubEventTypeCollectionViewAdPlacer   @"CollectionViewAdPlacer"
#define kMoPubEventTypeStreamAdPlacer           @"StreamAdPlacer"
#define kMoPubEventTypeInterstitialAdController @"Interstitial"
#define kMoPubEventTypeRewardedVideo            @"RewardedVideo"

NS_ASSUME_NONNULL_BEGIN

@interface AFADRMoPub : AFADRWrapper

+ (NSDictionary *)_getData:(id)anyData;

@end

NS_ASSUME_NONNULL_END
