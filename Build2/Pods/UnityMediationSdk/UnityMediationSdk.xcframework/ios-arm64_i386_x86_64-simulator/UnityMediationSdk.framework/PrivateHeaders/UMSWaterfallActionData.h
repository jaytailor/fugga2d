#import <Foundation/Foundation.h>

@protocol UMSWaterfallActionData

@property (nonatomic, strong, readonly) NSString *configVersion;
@property (nonatomic, strong, readonly) NSString *requestId;
@property (nonatomic, strong, readonly) NSString *waterfallId;
@property (nonatomic, strong, readonly) NSString *abVariantId;

@end
