#import <Foundation/Foundation.h>

@protocol UMSInitializeResult

@property (readonly, nonatomic, strong) NSString *_Nullable gameId;
@property (readonly, nonatomic, strong) NSString *_Nullable initializationId;
@property (readonly, nonatomic, strong) NSString *_Nullable installationId;

@end
