//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSTNMgr.h"

@interface PSTNMgr (Connect)
- (int)OnTransportChannelEvent:(unsigned short)arg1 ErrNo:(int)arg2;
- (int)OnTransportChannelCmd:(void *)arg1 len:(int)arg2;
- (void)ConnectFail:(id)arg1;
- (void)NetworkErr:(id)arg1;
- (void)StopConnect;
- (void)StartConnect;
- (void)tryStartConnect;
@end

