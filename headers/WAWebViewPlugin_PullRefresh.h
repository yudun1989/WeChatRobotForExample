//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "EGORefreshTableHeaderDelegate.h"

@class NSString, WAWebViewPullDownRefreshView;

@interface WAWebViewPlugin_PullRefresh : WAWebViewPluginBase <EGORefreshTableHeaderDelegate>
{
    _Bool _bIsDisablePullDown;
    _Bool _bIsDisablePullUp;
    _Bool _bIsEnablePullRefresh;
    WAWebViewPullDownRefreshView *m_headRefreshView;
    _Bool _isReflashingHead;
    _Bool _isRecoverInsetProcessing;
    double m_fLastY;
    double _offset;
    unsigned long long _triggerTime;
}

@property(readonly, nonatomic) _Bool isRecoverInsetProcessing; // @synthesize isRecoverInsetProcessing=_isRecoverInsetProcessing;
@property(readonly, nonatomic) _Bool isReflashingHead; // @synthesize isReflashingHead=_isReflashingHead;
- (void).cxx_destruct;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)stopRefreshHeaderView:(_Bool)arg1;
- (void)refreshHead;
- (void)processPullDownRefreshWhenEndDragging:(id)arg1;
- (void)processPullDownRefreshWhenBeginDragging;
- (void)pullDownLoadingHeaderRefreshWhenViewWillAppear;
- (void)setDisableWebViewScrollViewPullUp;
- (void)setDisableWebViewScrollViewPullDown;
- (void)realStopAction;
- (void)stopPullRefresh;
- (void)startPullRefresh;
- (void)disablePullRefresh;
- (void)enablePullRefresh:(double)arg1 mode:(int)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
