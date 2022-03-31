#import <Foundation/Foundation.h>
#import "UMSDiagnosticConstants.h"
#import "UMSShowError.h"
#import "UMSLoadError.h"
#import "UMSAdapterLoadError.h"
#import "UMSAdNetworkInitializationInformation.h"

NSString * DiagnosticErrorTypeStringFromUMSLoadError(UMSLoadError loadError);

NSString * DiagnosticErrorTypeStringFromUMSAdapterLoadError(UMSAdapterLoadError adapterLoadError);

NSString * DiagnosticErrorTypeStringFromUMSShowError(UMSShowError showError);

NSString * DiagnosticInitializationStateFromUMSAdNetworkInitializationState(UMSAdNetworkInitializationState adNetworkInitializationState);
