//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMsgContentLogicController.h"

#import "BottleMsgViewControllerDelegate.h"

@class CBottle;

@interface FloatBottleContentLogicController : BaseMsgContentLogicController <BottleMsgViewControllerDelegate>
{
    CBottle *m_bottle;
    id <FloatBottleContentLogicDelegate> m_bottleLogicDelegate;
    _Bool m_bFromOpenBottle;
}

@property(nonatomic) __weak id <FloatBottleContentLogicDelegate> m_bottleLogicDelegate; // @synthesize m_bottleLogicDelegate;
@property(retain, nonatomic) CBottle *m_bottle; // @synthesize m_bottle;
- (void).cxx_destruct;
- (_Bool)CanOpenServiceAppList;
- (_Bool)isShakeEnabled;
- (id)initWithBottle:(id)arg1 andContact:(id)arg2 andFromOpenBottle:(_Bool)arg3;
- (void)initViewController;
- (_Bool)needShowReturnAlert;
- (void)setBottleUnread;
- (void)dealloc;
- (void)onPopFromNavigationController;
- (id)GetUsrTitleTail;
- (id)GetUsrTitleFront;
- (id)GetUsrTitle;
- (id)GetTitleTailImage;
- (void)OpenDetailInfo;
- (_Bool)isOpenSingleInfo;
- (void)OpenContactInfo:(id)arg1;
- (id)GetRightBarButtonTitle;
- (id)GetRightBarButtonImageName;
- (void)switchEarpieceMode;
- (void)StateChanged;
- (_Bool)EnabledOfHeaderButtonAtIndex:(unsigned int)arg1;
- (void)onThrowBack:(id)arg1;
- (id)HighlightedImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)ImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)TitleOfHeaderButtonsAtIndex:(unsigned int)arg1;
- (unsigned int)NumberOfHeaderButtons;
- (void)CustomToolViewEX:(id)arg1;
- (_Bool)CanShowSight;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (_Bool)CanRemoteRecord;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)CanSendTextMsg:(id)arg1;
- (void)SendEmoticonMessage:(id)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)formImageMsgByMMAsset:(id)arg1 toUserName:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;

@end

