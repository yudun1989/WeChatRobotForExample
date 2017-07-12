//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCardBaseCardDetailContentView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCCardDetailContentLogicDelegate.h"
#import "WCCardTicketCodeCellViewDelegate.h"
#import "WCShareCardNewTicketHeaderDelegate.h"

@class NSString;

@interface WCCardNewTicketDetailContentView : WCCardBaseCardDetailContentView <WCCardDetailContentLogicDelegate, UITableViewDelegate, UITableViewDataSource, WCShareCardNewTicketHeaderDelegate, WCCardTicketCodeCellViewDelegate>
{
    id <WCCardNewTicketContentDelegate> _delegte;
}

@property(nonatomic) __weak id <WCCardNewTicketContentDelegate> delegte; // @synthesize delegte=_delegte;
- (void).cxx_destruct;
- (void)onTicketCodeCellViewCodeClick;
- (void)onTicketCodeCellViewSecondaryFieldClick:(id)arg1;
- (void)onTicketHeaderAcceptBtnClick;
- (void)onTicketHeaderUsredStoreBtnClick;
- (_Bool)ticketHeaderHaveUsedStoreInfo;
- (id)ticketHeaderGetStoreInfo;
- (_Bool)ticketHeaderHaveNearByStoreInfo;
- (void)setRoundedCorners:(unsigned long long)arg1 radius:(double)arg2 forView:(id)arg3;
- (void)makeCodeCell:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)createTableViewFooterView;
- (id)createTableViewHeaderView;
- (void)initContentView;
- (void)reloadContentData;
- (id)initContentViewWithFrame:(struct CGRect)arg1 withCardDataSource:(id)arg2 withNearbyStore:(id)arg3 withServiceContact:(id)arg4 withDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
