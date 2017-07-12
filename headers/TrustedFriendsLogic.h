//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MultiSelectContactsViewControllerDelegate.h"
#import "RoomContactSelectDelegate.h"
#import "TrustedFriendsCgiDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, RoomContactSelectViewController, TrustedFriendsCgi;

@interface TrustedFriendsLogic : MMObject <MultiSelectContactsViewControllerDelegate, RoomContactSelectDelegate, TrustedFriendsCgiDelegate>
{
    _Bool _m_isListHadChanged;
    unsigned int _m_maxTrustedFriendCount;
    id <TrustedFriendsLogicDelegate> _m_delegate;
    TrustedFriendsCgi *_m_trustedFriendCgi;
    NSMutableArray *_m_trustedFriendList;
    RoomContactSelectViewController *_m_roomVc;
    NSMutableDictionary *_m_willBeRemovedContactsDict;
}

@property(nonatomic) _Bool m_isListHadChanged; // @synthesize m_isListHadChanged=_m_isListHadChanged;
@property(retain, nonatomic) NSMutableDictionary *m_willBeRemovedContactsDict; // @synthesize m_willBeRemovedContactsDict=_m_willBeRemovedContactsDict;
@property(retain, nonatomic) RoomContactSelectViewController *m_roomVc; // @synthesize m_roomVc=_m_roomVc;
@property(nonatomic) unsigned int m_maxTrustedFriendCount; // @synthesize m_maxTrustedFriendCount=_m_maxTrustedFriendCount;
@property(retain, nonatomic) NSMutableArray *m_trustedFriendList; // @synthesize m_trustedFriendList=_m_trustedFriendList;
@property(retain, nonatomic) TrustedFriendsCgi *m_trustedFriendCgi; // @synthesize m_trustedFriendCgi=_m_trustedFriendCgi;
@property(nonatomic) __weak id <TrustedFriendsLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)onSelectContact:(id)arg1;
- (id)getCellImage:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)showErrorTips:(id)arg1 forReason:(unsigned int)arg2;
- (void)onCgiFailed:(unsigned int)arg1 error:(int)arg2 msg:(id)arg3;
- (void)onSyncTrustedFriendsSuccess:(id)arg1;
- (void)onGetTrustedFriendsListSuccess:(id)arg1;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (id)getContactsFromBaseContacts:(id)arg1;
- (id)getContactsFromTrustedFriendContacts:(id)arg1;
- (void)startSyncTrustedFriends;
- (void)startGetTrustedFriends;
- (void)beginRemovalAfterSelection;
- (void)updateRightBtn;
- (void)startChooseTrustedFriendsForRemoving;
- (void)startChooseTrustedFriendsForAdding;
- (_Bool)shouldSyncTrustedFriendList;
- (_Bool)shouldNofityUserForCurrentFriendNotEnough;
- (_Bool)canDeleteFriendFromTrustedFriendList;
- (_Bool)canAddFriendToTrustedFriendList;
- (id)getTrustedFriends;
- (unsigned long long)getMaxLimit;
- (unsigned long long)getTrustedFriendsCount;
- (id)getTrustedFriendViewController;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

