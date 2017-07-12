//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCUtil : NSObject
{
}

+ (id)getDocSnWithUrl:(id)arg1;
+ (id)rangesOfString:(id)arg1 inString:(id)arg2;
+ (id)getUxInfoWithInteract:(id)arg1 StartTime:(unsigned long long)arg2 EndTime:(unsigned long long)arg3;
+ (_Bool)isUseWxpcDownload;
+ (_Bool)isUseWxpcUpload;
+ (_Bool)isUseVCodecDownload;
+ (_Bool)isUseVCodecUpload;
+ (_Bool)isUseWebpDownload;
+ (_Bool)isUseWebpUpload;
+ (_Bool)isExistGroupName:(id)arg1 exceptGroup:(id)arg2;
+ (_Bool)saveWCSetting:(id)arg1;
+ (id)getWCSetting;
+ (id)pathForWCSetting;
+ (void)endNetworkEvent:(long long)arg1 event:(long long)arg2;
+ (void)beginNetworkEvent:(long long)arg1 event:(long long)arg2;
+ (id)mergeHomePage:(unsigned long long)arg1 minId:(unsigned long long)arg2 Left:(id)arg3 Right:(id)arg4 Added:(id)arg5 Changed:(id)arg6 Deleted:(id)arg7;
+ (id)mergeTimeline:(id)arg1 Left:(id)arg2 Right:(id)arg3 Added:(id)arg4 Changed:(id)arg5 Deleted:(id)arg6;
+ (id)pathForSelfHomepageFPBackup;
+ (id)pathForTimelineFPBackup;
+ (id)pathForCurUserBGImg;
+ (id)pathForBGImg:(id)arg1;
+ (id)pathForBGImgDir;
+ (int)serverUrlTypeToLocalType:(long long)arg1;
+ (int)localUrlTypeToServerType:(long long)arg1;
+ (int)serverActionTypeToLocalType:(long long)arg1;
+ (int)localActionTypeToServerType:(long long)arg1;
+ (int)serverActionSceneToLocalScene:(long long)arg1;
+ (int)localActionSceneToServerScene:(long long)arg1;
+ (int)serverContentDescSceneToLocalType:(long long)arg1;
+ (int)localContentDescSceneToServerType:(long long)arg1;
+ (int)serverContentDescShowTypeToLocalType:(long long)arg1;
+ (int)localContentDescShowTypeToServerType:(long long)arg1;
+ (int)serverContentTypeToLocalType:(long long)arg1;
+ (int)localContentTypeToServerType:(long long)arg1;
+ (long long)serverMediaSubTypeToLocalType:(int)arg1 serverSubType:(long long)arg2;
+ (long long)localMediaSubTypeToServerType:(int)arg1 localSubType:(long long)arg2;
+ (int)serverMediaTypeToLocalType:(long long)arg1;
+ (int)localMediaTypeToServerType:(long long)arg1;
+ (id)getUserWCSucceedItemPath;
+ (id)getUserWCFailedQueuePath;
+ (id)uploadPathForUploadMedia:(id)arg1;
+ (id)getWCDBPath;
+ (id)getUserWCMediaUploadDir;
+ (id)getUserWCMediaDownloadDir;
+ (id)getUserWCMediaDir;
+ (id)getUserWCDBRootDir;
+ (id)getUserWCRootDir;
+ (id)getLocationUrl:(id)arg1;

@end

