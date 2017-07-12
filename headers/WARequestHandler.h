//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WARequestTaskDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURLSession, WARequestConfig;

@interface WARequestHandler : NSObject <WARequestTaskDelegate>
{
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workQueue;
    WARequestConfig *_requestConfig;
    NSMutableArray *_arrRequestTask;
    NSURLSession *_urlSession;
}

- (void).cxx_destruct;
- (void)requestTaskDidEnd:(id)arg1;
- (unsigned int)timeoutMS;
- (unsigned int)maxTaskCount;
- (void)setupNSURLSession;
- (void)cancelAndDeleteAllTask;
- (void)deleteTask:(id)arg1;
- (id)getNewRequestTask;
- (_Bool)isExceedMaxTaskCount;
- (void)invalidate;
- (void)startRequestTaskWithURL:(id)arg1 data:(id)arg2 httpHeaders:(id)arg3 method:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
