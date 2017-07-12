//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString, WCJdRemindItem;

@interface WCJdBussinessMgr : MMService <MMService, IMsgExt, UIAlertViewDelegate>
{
    _Bool hadLoadEntranceItem;
    NSMutableArray *aryHadHandleRemindItemList;
    WCJdRemindItem *currEntranceTipItem;
}

@property(nonatomic) _Bool hadLoadEntranceItem; // @synthesize hadLoadEntranceItem;
@property(retain, nonatomic) WCJdRemindItem *currEntranceTipItem; // @synthesize currEntranceTipItem;
@property(retain, nonatomic) NSMutableArray *aryHadHandleRemindItemList; // @synthesize aryHadHandleRemindItemList;
- (void).cxx_destruct;
- (void)onServiceReloadData;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleRecvNewXmlNotication:(id)arg1;
- (void)handleRecvBewXmlJdEtranceTip:(id)arg1;
- (void)handleLocalPushWithUsrInfo:(id)arg1;
- (void)handleAPNSPushWithUsrInfo:(id)arg1;
- (void)handleInactiveAPNSPushWithUsrInfo:(id)arg1;
- (void)handleBackgroundAPNSPushWithUsrInfo:(id)arg1;
- (void)tryLoadEntranceTipItem;
- (void)saveEntranceTipItem;
- (id)getJDBussinessCachePath;
- (void)gotoWebViewController:(id)arg1 scene:(int)arg2 needPresent:(_Bool)arg3;
- (void)setHadEnterJDCell;
- (id)getJDCellTipItem;
- (_Bool)needShowTipInJDCell;
- (_Bool)needShowRedDotInFindTab;
- (id)getJDCellJumpUrl;
- (int)getCurrentScene;
- (_Bool)hasJDStoreCell;
- (id)GetJDStoreCellItem;
- (id)getAddSceneUrl:(id)arg1 scene:(int)arg2;
- (_Bool)isExpireWithRemindItem:(id)arg1;
- (_Bool)hadInHandleList:(id)arg1;
- (void)addActivityIdInHandleList:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

