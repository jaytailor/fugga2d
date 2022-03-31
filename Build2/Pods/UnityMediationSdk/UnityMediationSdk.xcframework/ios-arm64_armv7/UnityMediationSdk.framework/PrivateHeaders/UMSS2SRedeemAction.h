#import <Foundation/Foundation.h>
#import "UMSS2SRedeemData.h"
#import "UMSS2SLoggingData.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UMSS2SRedeemAction <NSObject>

- (void)sendRedeemCallbackAction:(UMSS2SRedeemData *)redeemData
                     loggingData:(UMSS2SLoggingData *)loggingData;

@end

NS_ASSUME_NONNULL_END
