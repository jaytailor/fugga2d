#import <Foundation/Foundation.h>

static NSString *const kUMSDiagnosticTagLineItemID = @"LINE_ITEM_ID";
static NSString *const kUMSDiagnosticTagAdNetworkID = @"AD_NETWORK_ID";
static NSString *const kUMSDiagnosticTagWaterfallID = @"WATERFALL_ID";
static NSString *const kUMSDiagnosticTagWaterfallTotalLength = @"WATERFALL_TOTAL_LENGTH";
static NSString *const kUMSDiagnosticTagWaterFallLoadedDepth = @"WATERFALL_LOADED_DEPTH";
static NSString *const kUMSDiagnosticTagRewardType = @"REWARD_TYPE";
static NSString *const kUMSDiagnosticTagRewardAmount = @"REWARD_AMOUNT";
static NSString *const kUMSDiagnosticTagErrorMessage = @"ERROR_MESSAGE";
static NSString *const kUMSDiagnosticTagErrorType = @"ERROR_TYPE";
static NSString *const kUMSDiagnosticTagAdUnitFailedToLoadAdTimeMS = @"AD_UNIT_FAILED_TO_LOAD_TIME_MS";
static NSString *const kUMSDiagnosticTagAdUnitLoadedTimeMS = @"AD_UNIT_LOADED_TIME_MS";
static NSString *const kUMSDiagnosticTagAdUnitLoadedToShowTimeMS = @"AD_UNIT_LOADED_TO_SHOW_TIME_MS";
static NSString *const kUMSDiagnosticTagAdapterFailedToLoadTimeMS = @"ADAPTER_FAILED_TO_LOAD_TIME_MS";
static NSString *const kUMSDiagnosticTagStatusCode = @"STATUS_CODE";
static NSString *const kUMSDiagnosticTagAdapterName = @"ADAPTER_NAME";
static NSString *const kUMSDiagnosticTagAdNetworkName = @"AD_NETWORK_NAME";
static NSString *const kUMSDiagnosticTagAdapterVersion = @"ADAPTER_VERSION";
static NSString *const kUMSDiagnosticTagAdNetworkSdkVersion = @"AD_NETWORK_SDK_VERSION";
static NSString *const kUMSDiagnosticTagSdkInitTime = @"SDK_INIT_TIME_MS";
static NSString *const kUMSDiagnosticTagUsageType = @"USAGE_TYPE";
static NSString *const kUMSDiagnosticTagURL = @"URL";
static NSString *const kUMSDiagnosticTagTokenOperationTimeElapsed = @"TOKEN_OPERATION_TIME_ELAPSED_IN_MILLISECONDS";
static NSString *const kUMSDiagnosticTagAdapterInitializationState = @"ADAPTER_INITIALIZATION_STATE";

#pragma mark - Default Tags

static NSString *const kUMSDefaultDiagnosticTagErrorMessage = @"Unknown : No error reason provided!";

#pragma mark - Diagnostic Error Type Strings for UMSLoadError

static NSString *const DiagnosticErrorTypeStringForUMSLoadErrorNetworkError = @"LOAD_ERROR_NETWORK_ERROR";
static NSString *const DiagnosticErrorTypeStringForUMSLoadErrorNoFill = @"LOAD_ERROR_NO_FILL";
static NSString *const DiagnosticErrorTypeStringForUMSLoadErrorUnknown = @"LOAD_ERROR_UNKNOWN";
static NSString *const DiagnosticErrorTypeStringForUMSLoadErrorSdkNotInitialized = @"LOAD_ERROR_SDK_NOT_INITIALIZED";

#pragma mark - Diagnostic Error Type Strings for UMSAdapterLoadError

static NSString *DiagnosticErrorTypeStringForUMSAdapterLoadErrorAdapterNotFound = @"ADAPTER_LOAD_ERROR_ADAPTER_NOT_FOUND";
static NSString *DiagnosticErrorTypeStringForUMSAdapterLoadErrorAdapterAdNetworkError = @"ADAPTER_LOAD_ERROR_ADAPTER_AD_NETWORK_ERROR";
static NSString *DiagnosticErrorTypeStringForUMSAdapterLoadErrorInitializationError = @"ADAPTER_LOAD_ERROR_INITIALIZATION_ERROR";
static NSString *DiagnosticErrorTypeStringForUMSAdapterLoadErrorLineItemTimedOut = @"ADAPTER_LOAD_ERROR_LINE_ITEM_TIMED_OUT";
static NSString *DiagnosticErrorTypeStringForUMSAdapterLoadErrorNoFill = @"ADAPTER_LOAD_ERROR_NO_FILL";
static NSString *DiagnosticErrorTypeStringForUMSAdapterLoadErrorAdapterParamFailure = @"ADAPTER_LOAD_ERROR_ADAPTER_PARAM_FAILURE";
static NSString *DiagnosticErrorTypeStringForUMSAdapterLoadErrorTooManyRequests = @"ADAPTER_LOAD_ERROR_TOO_MANY_REQUESTS";
static NSString *DiagnosticErrorTypeStringForUMSAdapterLoadErrorUnknown = @"ADAPTER_LOAD_ERROR_UNKNOWN";
static NSString *DiagnosticErrorTypeStringForUMSAdapterLoadErrorLoadThrewAnException = @"ADAPTER_LOAD_ERROR_LOAD_THREW_AN_EXCEPTION";

#pragma mark - Diagnostic Error Type String for UMSShowError

static NSString *DiagnosticErrorTypeStringForUMSShowErrorUnknown = @"SHOW_ERROR_UNKNOWN";
static NSString *DiagnosticErrorTypeStringForUMSShowErrorAdNotLoaded = @"SHOW_ERROR_AD_NOT_LOADED";
static NSString *DiagnosticErrorTypeStringForUMSShowErrorAdNetworkError = @"SHOW_ERROR_AD_NETWORK_ERROR";

#pragma mark - Diagnostics Ad Network Initialization State String for UMSAdNetworkInitializationState

static NSString *kUMSDiagnosticInitializationStateForUMSAdapterInitializationStateUnknown = @"UNKNOWN";
static NSString *kUMSDiagnosticInitializationStateForUMSAdapterInitializationStateUninitialized = @"UNINITIALIZED";
static NSString *kUMSDiagnosticInitializationStateForUMSAdapterInitializationStateInitializing = @"INITIALIZING";
static NSString *kUMSDiagnosticInitializationStateForUMSAdapterInitializationStateInitialized = @"INITIALIZED";
static NSString *kUMSDiagnosticInitializationStateForUMSAdapterInitializationStateFailed = @"FAILED";
