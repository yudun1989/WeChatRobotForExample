//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMResourceMgrExt.h"
#import "MMService.h"

@class NSString;

@interface StoreEmotionSearchResMgr : MMService <MMResourceMgrExt, MMService>
{
}

+ (void)tryUpdateSearchRes;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)updateEmotionSearchResWithPath:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

