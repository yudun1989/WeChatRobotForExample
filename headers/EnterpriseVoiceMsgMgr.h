//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NotifyFromMainCtrlDelegate.h"

@class NSMutableDictionary;

@interface EnterpriseVoiceMsgMgr : MMObject <NotifyFromMainCtrlDelegate>
{
    NSMutableDictionary *_dicMsgSource;
    id <EnterpriseVoiceMsgMgrDelegate> delegate;
}

@property(nonatomic) __weak id <EnterpriseVoiceMsgMgrDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)handleDownloadVoiceMsgFail:(id)arg1;
- (void)handleDownloadVoiceMsgSuc:(id)arg1;
- (_Bool)WriteAudioFile:(id)arg1 Data:(id)arg2;
- (void)handleSendVoiceMsgFail:(id)arg1;
- (void)handleSendVoiceMsgSuc:(id)arg1;
- (_Bool)uploadVoice:(id)arg1;
- (id)popMsgSource:(id)arg1;
- (void)pushMsgSource:(id)arg1;
- (id)genKeyWithChatUsrName:(id)arg1 svrID:(unsigned long long)arg2;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (_Bool)sendVoiceMsgByUserData:(id)arg1;
- (_Bool)resendVoiceMsg:(id)arg1;
- (_Bool)downloadVoiceData:(id)arg1;
- (void)wrtieFileOfVoiceMsg:(id)arg1;
- (id)init;

@end

