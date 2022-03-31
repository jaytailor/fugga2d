#import <Foundation/Foundation.h>
#import "UMSAdNetwork.h"

@interface UMSS2SLoggingData : NSObject

@property (nonatomic, strong) NSString *appId;
@property (nonatomic, strong) NSString *waterfallId;
@property (nonatomic, strong) NSString *adUnitId;
@property (nonatomic, strong) NSString *instanceId;
@property (nonatomic, strong) NSString *lineItemId;
@property (nonatomic, assign) UMSAdNetwork adNetwork;

@end
