//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "EnterpriseContactSearchViewDelegate.h"
#import "EnterpriseSearchDataControllerDelegate.h"
#import "MMSearchBarDelegate.h"

@class EnterpriseContactSearchView, EnterpriseSearchDataController, NSMutableArray, NSRecursiveLock, NSString;

@interface EnterpriseSessionSearchController : MMObject <EnterpriseContactSearchViewDelegate, EnterpriseSearchDataControllerDelegate, MMSearchBarDelegate>
{
    NSString *_brandUserName;
    EnterpriseSearchDataController *_dataController;
    NSString *_searchText;
    NSMutableArray *_aryContact;
    NSMutableArray *_aryGroup;
    EnterpriseContactSearchView *_moreView;
    _Bool _hasContact;
    _Bool _hasGroup;
    _Bool _hasMoreContact;
    _Bool _hasMoreGroup;
    _Bool _isLoadingContact;
    int _contactSection;
    int _groupSection;
    long long _statusBarStyle;
    _Bool _reloadSmooth;
    NSRecursiveLock *_lock;
    id <EnterpriseSessionSearchControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <EnterpriseSessionSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)hasGroupSection;
- (_Bool)hasContactSection;
- (double)getTitleCellTopMargin;
- (id)makeContactCell:(id)arg1 tableView:(id)arg2;
- (id)makeLoadingTipCell:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)makeMoreTipCell:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)makeTitleCell:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)getDataController;
- (id)getViewController;
- (id)getMMSearchBar;
- (void)onSelectEnterpriseSearchResultItem:(id)arg1;
- (void)onEnterpriseContactSearchViewReturn:(_Bool)arg1;
- (_Bool)shouldProcessRemoteSearchResp:(id)arg1 range:(unsigned int)arg2;
- (void)onRemoteSearchMoreCompleted:(id)arg1 range:(unsigned int)arg2 result:(id)arg3;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)mmSearchDisplayControllerWillShowSearchResultsTableView:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)doRemoteSearch:(id)arg1;
- (void)reloadTableView;
- (void)enterChat:(id)arg1;
- (void)openMoreView:(unsigned int)arg1;
- (void)onViewWillAppear;
- (void)initData;
- (id)initWithBrandUserName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

