//
//  ISServerResponseParser.h
//  IronSource
//
//  Created by Yotam Ohayon on 08/01/2016.
//  Copyright © 2016 IronSource. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ISProductSettings.h"
#import "ISEventsSettings.h"
#import "ISLoggersSettings.h"
#import "ISAuctionSettings.h"
#import "ISTokenSettings.h"
#import "ISCrashReporterSettings.h"
#import "ISApplicationSettings.h"
#import "ISExternalSettings.h"
#import "ISSKAdNetworkSettings.h"
#import "ISPixelSettings.h"

typedef NS_ENUM(NSInteger, ISResponseOrigin) {
    RESPONSE_ORIGIN_NOT_SET,
    RESPONSE_ORIGIN_CACHE,
    RESPONSE_ORIGIN_SERVER
};

@interface ISServerResponseParser : NSObject

/* ProvidersConfig Array's Hold 'ISAdapterConfig' obj */
@property (nonatomic, strong) NSArray                             *rewardedVideoProvidersConfig;
@property (nonatomic, strong) NSArray                             *interstitialProvidersConfig;
@property (nonatomic, strong) NSArray                             *offerwallProvidersConfig;
@property (nonatomic, strong) NSArray                             *bannerProvidersConfig;

@property (nonatomic, strong) ISProductSettings                   *rewardedVideoProductSettings;
@property (nonatomic, strong) ISProductSettings                   *interstitialProductSettings;
@property (nonatomic, strong) ISProductSettings                   *offerwallProductSettings;
@property (nonatomic, strong) ISProductSettings                   *bannerProductSettings;

@property (nonatomic, strong) ISEventsSettings                    *rewardedVideoEvents;
@property (nonatomic, strong) ISEventsSettings                    *interstitialEvents;
@property (nonatomic, strong) ISEventsSettings                    *offerwallEvents;
@property (nonatomic, strong) ISEventsSettings                    *bannerEvents;
@property (nonatomic, strong) ISEventsSettings                    *pixelEvents;


@property (nonatomic, strong) ISLoggersSettings                   *loggers;
@property (nonatomic, strong) ISAuctionSettings                   *auctionSettings;
@property (nonatomic, strong) ISTokenSettings                     *tokenSettings;
@property (nonatomic, strong) ISCrashReporterSettings             *crashReporterSettings;
@property (nonatomic, strong) ISApplicationSettings               *applicationSettings;
@property (nonatomic, strong) ISExternalSettings                  *externalSettings;
@property (nonatomic, strong) ISSKAdNetworkSettings               *skanSettings;
@property (nonatomic, strong) ISPixelSettings                     *pixelSettings;

@property (nonatomic, strong) NSString                            *segmentName;
@property (nonatomic, strong) NSString                            *segmentId;
@property (nonatomic, strong) NSDictionary                        *customSegmentParams;
@property (nonatomic,assign) BOOL                                 showIntegrationHelper;

@property (nonatomic, assign) ISResponseOrigin                    responseOrigin;

+ (ISServerResponseParser *)sharedInstance;
- (void)parseObject:(id)object;
- (NSArray *)getConfigForProvider:(NSString *)provider;
@end
