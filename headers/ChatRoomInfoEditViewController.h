//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IGroupMgrExt.h"
#import "MMTableViewInfoDelegate.h"
#import "UITextFieldDelegate.h"

@class CContact, MMTableViewInfo, NSMutableDictionary, NSString, UITextField;

@interface ChatRoomInfoEditViewController : MMUIViewController <IGroupMgrExt, UITextFieldDelegate, MMTableViewInfoDelegate>
{
    CContact *m_chatRoomContact;
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_nsOriginChatRoomTopic;
    UITextField *m_topicTextField;
    NSMutableDictionary *m_dicParam;
    _Bool m_becomeFirstResponder;
}

@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateChatRoomTopicCount:(id)arg1;
- (void)OnSetChatRoomTopic:(id)arg1 ErrorInfo:(id)arg2 Success:(_Bool)arg3;
- (void)checkNeedReload:(id)arg1;
- (void)OnDone;
- (void)OnReturn;
- (void)doDismissView;
- (_Bool)isChanged;
- (void)makeEditCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeTopicEditView;
- (void)reloadTableData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

