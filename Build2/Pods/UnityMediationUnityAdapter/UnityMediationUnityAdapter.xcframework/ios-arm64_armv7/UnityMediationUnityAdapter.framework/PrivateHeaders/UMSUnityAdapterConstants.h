#import <Foundation/Foundation.h>

#pragma mark - Parameters

static NSString *const UMSUnityAdapterGameIdParameterKey = @"gameId";
static NSString *const UMSUnityAdapterPlacementIdParameterKey = @"placementId";
static NSString *const UMSUnityAdapterGDPRKey = @"gdpr.consent";
static NSString *const UMSUnityAdapterCCPAKey = @"privacy.consent";
static NSString *const UMSUnityAdapterTestModeParameterKey = @"testMode";
static NSString *const UMSUnityAdapterADMKey = @"adm";
static NSString *const UMSUnityAdapterUsageTypeKey = @"usageType";
static NSString *const UMSUnityAdapterUsageTypeHeaderBidder = @"HEADER_BIDDER";

#pragma mark - Mediation Parameters

static NSString *const UMSUnityMetadataMediationName = @"UnityOpenMediation";
static NSString *const UMSUnityMetadataAdapterVersion = @"adapter_version";

#pragma mark - Header Bidding Metadata constants

static NSString *const UMSUnityMetadataHeaderBiddingMode = @"headerbidding.mode";
static NSString *const UMSUnityMetadataHeaderBiddingLoadV5 = @"loadv5";

#pragma mark - Error Messages

static NSString *const UMSUnityAdapterErrorReasonPlacementIdInUse = @"UnityAds placementId(%@) is already in use by another ad unit!";
