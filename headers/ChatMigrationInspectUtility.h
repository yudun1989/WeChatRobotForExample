//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ChatMigrationInspectUtility : NSObject
{
}

+ (void)showLocalNotificationWhenChatMigrationWorking;
+ (id)retrunStringCompareBackupReportInfo:(id)arg1 withRecover:(id)arg2;
+ (_Bool)compareBackupReportInfo:(id)arg1 withRecover:(id)arg2;
+ (void)printDebugReportInfo:(id)arg1 isRecover:(_Bool)arg2;
+ (id)currentHotSpotOrWifiSSID;
+ (_Bool)isOnWifiOrHostSpotMode;
+ (id)_getCorrectMaskWithIP:(id)arg1;
+ (_Bool)isSameNetGateWay:(id)arg1;
+ (_Bool)isHotspotActivity;
+ (unsigned long long)getFreeDiskSpace;
+ (_Bool)isDiskSpaceEnoughForServerNeed:(unsigned long long *)arg1;
+ (_Bool)isBatteryChargeAndLevel:(float *)arg1;

@end

