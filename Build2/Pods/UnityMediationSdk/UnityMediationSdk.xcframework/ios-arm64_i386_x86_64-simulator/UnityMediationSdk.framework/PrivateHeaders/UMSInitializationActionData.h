#import <Foundation/Foundation.h>

@protocol UMSInitializationActionData

@property (readonly, nonatomic, strong) NSString *gameId;
@property (readonly, nonatomic, strong) NSString *installationId;

@end
