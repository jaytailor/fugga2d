#import <sys/utsname.h>
#import "RCSDeviceInfo.h"

extern "C" {

const char * GetAppleNativeDeviceModel()
{
    char * copy = (char *)malloc(strlen([[RCSDeviceInfo getModel] UTF8String]) + 1);
    strcpy(copy, [[RCSDeviceInfo getModel] UTF8String]);
    return copy;
}

const char * GetAppleNativeFreeSpaceInKiloBytes()
{
    char * copy = (char *)malloc(strlen([[RCSDeviceInfo getFreeSpaceInKiloBytes] UTF8String]) + 1);
    strcpy(copy, [[RCSDeviceInfo getFreeSpaceInKiloBytes] UTF8String]);
    return copy;
}

const char * GetAppleNativePreferredLanguage()
{
    char * copy = (char *)malloc(strlen([[RCSDeviceInfo getPreferredLanguage] UTF8String]) + 1);
    strcpy(copy, [[RCSDeviceInfo getPreferredLanguage] UTF8String]);
    return copy;
}
}
