#import <sys/utsname.h>
#import "RCSDeviceInfo.h"

@implementation RCSDeviceInfo
+ (NSString *)getModel {
    struct utsname systemInfo;
    uname(&systemInfo);
    NSString *model = [NSString stringWithCString:systemInfo.machine encoding:NSUTF8StringEncoding];
    return model;
}

+ (NSString *)getFreeSpaceInKiloBytes {
    unsigned long long freeSpace = [[[[NSFileManager defaultManager] attributesOfFileSystemForPath:NSHomeDirectory() error:nil] objectForKey:NSFileSystemFreeSize] unsignedLongLongValue];
    return [[NSNumber numberWithUnsignedLongLong:freeSpace / 1024] stringValue];
}

+ (NSString *)getPreferredLanguage {
    NSString* preferredLocalization = [[NSLocale preferredLanguages] objectAtIndex:0];
    
    preferredLocalization = [preferredLocalization stringByReplacingOccurrencesOfString:@"-" withString:@"_"];

    return preferredLocalization;
}

@end
