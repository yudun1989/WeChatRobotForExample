//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCWatchNativeMgr.h"

@interface WCWatchNativeMgr (WatchContact)
- (id)roomHeadImageWithUsername:(id)arg1 circleColor:(id)arg2;
- (id)headImageForWatchWithUsername:(id)arg1;
- (_Bool)isWatchContactReachLimit;
- (id)watchContactUsernames;
- (void)changeContact:(id)arg1 toWatchContact:(_Bool)arg2 sync:(_Bool)arg3 needSendToWatch:(_Bool)arg4 notifyiPhone:(_Bool)arg5;
- (void)setWatchContactUsernames:(id)arg1 needSendToWatch:(_Bool)arg2 notifyiPhone:(_Bool)arg3;
- (void)setWatchContactUsernames:(id)arg1 needSendToWatch:(_Bool)arg2;
@end

