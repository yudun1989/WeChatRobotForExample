//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IGameCenterExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMScrollView, MMTableView, NSArray, NSString;

@interface GameCenterUpListViewController : MMUIViewController <IGameCenterExt, UITableViewDataSource, UITableViewDelegate>
{
    NSString *_appID;
    NSArray *_upList;
    MMTableView *_tableView;
    MMScrollView *_emptyView;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)init_emptyView;
- (void)initTableView;
- (void)onGetUpList:(id)arg1 appID:(id)arg2 errCode:(int)arg3;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAppID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

