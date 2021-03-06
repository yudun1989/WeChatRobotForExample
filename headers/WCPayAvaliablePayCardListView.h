//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt.h"
#import "MMWebViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIImageView, WCPayBindCardInfo, WCPayControlData;

@interface WCPayAvaliablePayCardListView : MMUIView <ILinkEventExt, MMWebViewDelegate>
{
    WCPayBindCardInfo *selectedPayCardInfo;
    NSArray *m_arrBindCard;
    NSMutableArray *m_arrButtonArray;
    UIImageView *m_backgroundView;
    WCPayControlData *m_data;
    id <WCPayAvaliablePayCardListViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)webViewReturn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)didMoveToWindow;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)closeView;
- (void)OnSelectedNewCard:(id)arg1;
- (void)OnSelectedCard:(id)arg1;
- (void)onCancelButtonDone;
- (void)OnCompleteButtonDone:(id)arg1;
- (void)showAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

