//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface WAReportUtil : MMObject
{
}

+ (unsigned long long)getUseStateByUserName:(id)arg1 isDebugMode:(_Bool)arg2;
+ (id)getAppBrandInfoByUserName:(id)arg1;
+ (id)genSessionIDWithPrefix:(id)arg1;
+ (unsigned long long)getCurrentTimeStamp;
+ (id)getUserAgent;
+ (id)getNetType;
+ (void)reportAppInstallOrUpdate:(id)arg1;
+ (void)reportWAWebViewPageError:(id)arg1;
+ (void)reportJSError:(id)arg1;
+ (void)reportHistoryPV:(id)arg1;
+ (void)reportDestopShowAction:(id)arg1;
+ (void)reportDestopOperateAction:(id)arg1;
+ (void)reportWAOuterMenuAction:(id)arg1;
+ (void)reportJSApiAction:(id)arg1;
+ (void)reprotWAWebViewMenuAction:(id)arg1;
+ (void)reprotWAWebViewPV:(id)arg1;

@end
