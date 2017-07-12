//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WebResourceCDNDownloadHelperDelegate.h"
#import "WebResourceCDNUploadHelperDelegate.h"
#import "WebResourceUploadHelperDelegate.h"
#import "WebviewResourceDownloadHelperDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, WebResourceCDNDownloadHelper, WebResourceCDNUploadHelper, WebResourceUploadHelper, WebviewResourceDownloadHelper;

@interface WebviewResourceManager : MMService <MMService, WebResourceUploadHelperDelegate, WebviewResourceDownloadHelperDelegate, WebResourceCDNUploadHelperDelegate, WebResourceCDNDownloadHelperDelegate>
{
    NSRecursiveLock *_lock;
    NSMutableArray *_resItemArray;
    WebResourceUploadHelper *_uploadHelper;
    WebviewResourceDownloadHelper *_downloadHelper;
    WebResourceCDNUploadHelper *_cdnUploadHelper;
    WebResourceCDNDownloadHelper *_cdnDownloadHelper;
    NSMutableDictionary *_recordPMSDic;
}

- (void).cxx_destruct;
- (void)onItemDownloadProgress:(int)arg1 Item:(id)arg2;
- (void)onItemCDNDownloadFinished:(int)arg1 Item:(id)arg2;
- (void)onItemUploadProgressWithoutMediaId:(int)arg1 Item:(id)arg2;
- (void)onItemUploadCDNFinishedWithoutMediaId:(int)arg1 Item:(id)arg2;
- (void)onItemUploadProgress:(int)arg1 Item:(id)arg2;
- (void)onItemUploadCDNFinished:(int)arg1 Item:(id)arg2;
- (void)onItemDownloadFinished:(int)arg1 Item:(id)arg2;
- (void)onItemUploadFinished:(int)arg1 Item:(id)arg2;
- (void)setRecordPermissionForUrl:(id)arg1;
- (_Bool)checkRecordPermission:(id)arg1;
- (_Bool)uploadLocalResItem:(id)arg1;
- (_Bool)uploadLocalImage:(id)arg1;
- (id)getResItemByLocalId:(id)arg1;
- (void)saveLocalImageFinished:(id)arg1;
- (_Bool)uploadVideo:(id)arg1;
- (_Bool)addVideoResource:(id)arg1;
- (_Bool)downloadVoice:(id)arg1 AppId:(id)arg2;
- (_Bool)uploadVoice:(id)arg1;
- (void)addRecordResource:(id)arg1;
- (_Bool)downloadImage:(id)arg1 AppId:(id)arg2;
- (void)asyncNotifyResourceDownloadFinish:(id)arg1;
- (void)addItemToResArray:(id)arg1;
- (void)addLocalImagesWithOriginalSize:(id)arg1;
- (void)addLocalImages:(id)arg1;
- (void)stopAllNetworkTask;
- (id)getLocalVideoPathByResourceId:(id)arg1;
- (id)getLocalPathByResourceId:(id)arg1;
- (id)getLocalResourceId;
- (void)saveRecordPermissionDic;
- (_Bool)loadRecordPermissionDic;
- (void)saveResItemArray;
- (_Bool)loadResItemArray;
- (id)getUserWebResourceRootDir;
- (void)addAutoCleanTask;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

