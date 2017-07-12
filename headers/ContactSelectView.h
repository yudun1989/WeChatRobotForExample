//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ContactsDataLogicDelegate.h"
#import "MMSearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class ContactsDataLogic, MMSearchBar, MMTableView, NSDictionary, NSMutableDictionary, NSString;

@interface ContactSelectView : UIView <UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource, MMSearchBarDelegate, WCActionSheetDelegate, ContactsDataLogicDelegate>
{
    id <ContactSelectViewDelegate> m_delegate;
    MMTableView *m_tableView;
    NSDictionary *m_dicExistContact;
    _Bool m_bShowHistoryGroup;
    _Bool m_bShowRadarCreateRoom;
    _Bool m_bMultiSelect;
    NSMutableDictionary *m_dicMultiSelect;
    ContactsDataLogic *m_contactsDataLogic;
    unsigned int m_uiGroupScene;
    UIView *_tableFooterView;
    NSString *nsCurrentSearchText;
    MMSearchBar *m_mmSearchBar;
}

@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(nonatomic) unsigned int m_uiGroupScene; // @synthesize m_uiGroupScene;
@property(nonatomic) _Bool m_bShowRadarCreateRoom; // @synthesize m_bShowRadarCreateRoom;
@property(nonatomic) _Bool m_bShowHistoryGroup; // @synthesize m_bShowHistoryGroup;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(nonatomic) __weak id <ContactSelectViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)searchTextFieldDidBeginEditing;
- (void)resetTableViewOffset:(id)arg1;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)onContactAsynSearchResultChanged:(_Bool)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadTableView;
- (unsigned long long)getTotalSelectCount;
- (void)handleSelectRadarCreateRoom;
- (void)handleSelectHistoryGroup;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeHistoryGroupCell:(id)arg1;
- (void)makeMultiTalkSessionCell:(id)arg1;
- (void)makeRadarCreateRoomCell:(id)arg1;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeGroupCell:(id)arg1 head:(id)arg2 title:(id)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2 showMatchTip:(_Bool)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)initView;
- (void)initTableView;
- (void)initSearchBar;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)initData:(unsigned int)arg1;
- (_Bool)updateMultiSelect:(id)arg1;
- (void)addSelect:(id)arg1;
- (id)getCellTextView:(id)arg1;
- (id)getCellImage:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (_Bool)isExisted:(id)arg1;
- (id)getMatchTipForUsername:(id)arg1;
- (void)removeSelect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

