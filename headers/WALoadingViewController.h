//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CircleProgressBarDelegate.h"
#import "IWALocalCacheMgrExt.h"

@class CContact, CircleProgressBar, MMWebImageView, NSString, UILabel;

@interface WALoadingViewController : MMUIViewController <IWALocalCacheMgrExt, CircleProgressBarDelegate>
{
    CContact *m_contact;
    _Bool _isCallReturn;
    _Bool _isClickReturnBtn;
    _Bool _isViewDidAppear;
    _Bool _isPopMyselfAfterDidAppear;
    MMWebImageView *m_headImageView;
    CircleProgressBar *m_progressView;
    UILabel *m_sloganLabel;
    UILabel *m_tipsLabel;
    UILabel *m_appLabel;
    _Bool _bNeedDownloadPkg;
    unsigned long long _appearTimeMs;
    id <WALoadingViewControllerDelegate> delegate;
}

@property(nonatomic) __weak id <WALoadingViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)showDownloadingProgressView;
- (void)setProgressViewHidden:(_Bool)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)setNavigationLeftButton;
- (_Bool)useTransparentNavibar;
- (void)layoutView;
- (void)initAppLabel;
- (void)initTipsLabel;
- (void)initSloganLabel;
- (void)initProgressView;
- (void)initHeadImageView;
- (void)easyOutShowApp;
- (void)enterApp;
- (void)startEnterAppAnimation;
- (void)initView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)useBlackStatusbar;
- (void)viewDidLoad;
- (void)onProgressAnimationEnd:(float)arg1;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withContact:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)onUpdateAppPkgProgress:(float)arg1 remainingTime:(unsigned long long)arg2 withContact:(id)arg3;
- (void)popMyselfViewController;
- (void)callReturn;
- (void)loadData;
- (void)popMyselfAfterViewDidAppear;
- (id)currentUserName;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

