//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IUiUtilExt.h"
#import "MMJSApiVerifyMgrDelegate.h"
#import "MMWebViewFontFloatViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WebViewA8KeyLogicDelegate.h"
#import "WebViewJSLogicDelegate.h"
#import "WebViewURLCheckLogicDelegate.h"
#import "YYWebViewDelegate.h"

@class BrandActionReportLogicController, CContact, EnterpriseConnectorLogic, JSConsoleViewController, MMAnimationTipView, MMJSApiVerifyMgr, MMScrollActionSheet, MMURLHandler, MMWebProgressBar, MMWebViewController_SwipeGestureGoBackHistory, MMWebViewPluginScheduler, NSCache, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURLConnection, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UIView, UIView<YYWebViewInterface>, UIViewController, WCDeepLinkHandler, WCStatTimerHelper, WXGesture, WebViewA8KeyLogicImpl, WebViewJSLogicImpl, WebViewMenuCustomizeLogic, WebViewTimeProfileData, WebViewURLCheckLogic;

@interface MMWebViewController : MMUIViewController <UIGestureRecognizerDelegate, WebViewURLCheckLogicDelegate, IUiUtilExt, WCActionSheetDelegate, UIWebViewDelegate, UIAlertViewDelegate, MMWebViewFontFloatViewDelegate, WebViewA8KeyLogicDelegate, WebViewJSLogicDelegate, UIScrollViewDelegate, MMJSApiVerifyMgrDelegate, YYWebViewDelegate>
{
    UIView<YYWebViewInterface> *webView;
    UILabel *m_deeplinkRedirecting;
    UIImageView *m_addressBarView;
    UILabel *m_addressLabel;
    UIButton *m_addressBarBtn;
    UIActivityIndicatorView *m_activityView;
    MMURLHandler *m_urlHandler;
    WXGesture *m_gesture;
    NSString *m_initUrl;
    WebViewA8KeyLogicImpl *m_a8KeyLogicImpl;
    JSConsoleViewController *m_consoleViewController;
    WebViewJSLogicImpl *m_jsLogicImpl;
    WebViewURLCheckLogic *m_urlCheckLogic;
    unsigned int m_uiBackCount;
    _Bool m_isPageDidLoaded;
    UIButton *m_loadFailView;
    NSMutableArray *m_actionSheetRow1;
    NSMutableArray *m_actionSheetRow2;
    MMScrollActionSheet *m_scrollActionSheet;
    WebViewMenuCustomizeLogic *m_menuCustomizeLogic;
    NSMutableDictionary *m_jsInitInfo;
    WCDeepLinkHandler *m_deepLinkHandler;
    EnterpriseConnectorLogic *m_enterpriseConnectorLogic;
    _Bool m_bDeepLink;
    _Bool m_isScrollMenuScroll;
    MMJSApiVerifyMgr *m_apiVerifyMgr;
    _Bool _bIsDisablePullDown;
    _Bool _bIsDisablePullUp;
    CDUnknownBlockType _OnInitReadyNotifyBlock;
    CDUnknownBlockType m_blockOnWebViewWillReturn;
    _Bool _bIsHideShareMenuByJsApi;
    UILabel *m_previewTopBar;
    UIView *m_previewTopBarBg;
    _Bool m_isPreviewing;
    _Bool m_isFinishLoaded;
    UIView *_previewSourceView;
    UIViewController *_previewFromController;
    _Bool _bIsStatusBarBlack;
    _Bool _bUseColorfulNavBar;
    _Bool _bUseTransparentNaviBar;
    id <MMWebViewDelegate> m_delegate;
    _Bool m_bAutoSetTitle;
    NSMutableSet *m_jsTempAllowApiCalls;
    _Bool m_isDisableShareMenu;
    _Bool m_disalbeStartLoadGetA8Key;
    unsigned int m_addScence;
    UIView *m_customLoadingView;
    UIView *_tailBgView;
    _Bool m_bShouldForcedRotationToPortrait;
    unsigned int m_stat_enterTime;
    WCStatTimerHelper *m_oStatTimerHelper;
    long long m_loadingCount;
    UILongPressGestureRecognizer *m_longPressGestureRecognizer;
    MMWebViewController_SwipeGestureGoBackHistory *swipeGoBackLogic;
    _Bool m_openAllPermission;
    _Bool m_isPageLoading;
    NSString *m_jump;
    _Bool m_viewDidAppear;
    NSString *m_oLoadingUrl;
    WebViewTimeProfileData *m_webTimeProfileData;
    _Bool m_isPageLoadFail;
    _Bool m_bPresentModal;
    _Bool m_bLoadFromLocalServer;
    vector_01fc9dba _pIDKeyList;
    _Bool m_bHasAnimated;
    _Bool m_bOfflinePage;
    _Bool m_bIsRefreshOfflinePageAction;
    _Bool m_bIFrame;
    BrandActionReportLogicController *m_brandActionReport;
    NSString *_httpHeadReferer;
    _Bool _bIsDraggingScroll;
    double _fLastStartOffsetY;
    _Bool _bIsForceShowCloseButton;
    _Bool _bIsAlreadyReloadWebviewFromJsapi;
    _Bool m_bFullScreen;
    NSMutableArray *_arrRouteUrl;
    _Bool m_bIsCloseWebGL;
    _Bool m_isLanscape;
    _Bool m_bIsJsapiUploadVideoUploading;
    _Bool _m_canCache;
    _Bool _m_bUserHasClickLink;
    _Bool _m_bIsDelayPushWebView;
    int _m_webviewType;
    NSMutableDictionary *m_extraInfo;
    NSCache *m_urlCheckResultCache;
    NSString *m_nsJSFitContent;
    double m_fTabBarHeight;
    MMWebViewPluginScheduler *_pluginScheduler;
    CContact *_brandContact;
    MMWebProgressBar *_m_progressBar;
    UIView *_m_navBarView;
    MMAnimationTipView *_m_animationTipView;
    NSURLConnection *_m_connection;
    NSString *_m_lastCheckCpKey;
}

@property(retain, nonatomic) NSString *m_lastCheckCpKey; // @synthesize m_lastCheckCpKey=_m_lastCheckCpKey;
@property(retain, nonatomic) NSURLConnection *m_connection; // @synthesize m_connection=_m_connection;
@property(retain, nonatomic) MMAnimationTipView *m_animationTipView; // @synthesize m_animationTipView=_m_animationTipView;
@property(nonatomic) int m_webviewType; // @synthesize m_webviewType=_m_webviewType;
@property(nonatomic) _Bool m_bIsDelayPushWebView; // @synthesize m_bIsDelayPushWebView=_m_bIsDelayPushWebView;
@property(retain, nonatomic) UIView *m_navBarView; // @synthesize m_navBarView=_m_navBarView;
@property(retain, nonatomic) MMWebProgressBar *m_progressBar; // @synthesize m_progressBar=_m_progressBar;
@property(nonatomic) _Bool m_bUserHasClickLink; // @synthesize m_bUserHasClickLink=_m_bUserHasClickLink;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact=_brandContact;
@property(nonatomic) _Bool m_canCache; // @synthesize m_canCache=_m_canCache;
@property(retain, nonatomic) MMWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(nonatomic) _Bool m_bIsJsapiUploadVideoUploading; // @synthesize m_bIsJsapiUploadVideoUploading;
@property(nonatomic) _Bool m_bUseTransparentNaviBar; // @synthesize m_bUseTransparentNaviBar=_bUseTransparentNaviBar;
@property(nonatomic) _Bool m_bUseColorfulNavBar; // @synthesize m_bUseColorfulNavBar=_bUseColorfulNavBar;
@property(nonatomic) _Bool m_bIsStatusBarBlack; // @synthesize m_bIsStatusBarBlack=_bIsStatusBarBlack;
@property(nonatomic) _Bool m_bIsHideShareMenuByJsApi; // @synthesize m_bIsHideShareMenuByJsApi=_bIsHideShareMenuByJsApi;
@property(nonatomic) double m_fTabBarHeight; // @synthesize m_fTabBarHeight;
@property(retain, nonatomic) NSString *m_nsJSFitContent; // @synthesize m_nsJSFitContent;
@property(readonly, nonatomic) _Bool m_isPreviewing; // @synthesize m_isPreviewing;
@property(retain, nonatomic) NSCache *m_urlCheckResultCache; // @synthesize m_urlCheckResultCache;
@property(nonatomic) _Bool m_bDeepLink; // @synthesize m_bDeepLink;
@property(retain, nonatomic) UIImageView *m_addressBarView; // @synthesize m_addressBarView;
@property(retain, nonatomic) UILabel *m_addressLabel; // @synthesize m_addressLabel;
@property(readonly, nonatomic) NSString *m_initUrl; // @synthesize m_initUrl;
@property(retain, nonatomic) NSMutableDictionary *m_extraInfo; // @synthesize m_extraInfo;
@property(retain, nonatomic) UIView *m_customLoadingView; // @synthesize m_customLoadingView;
@property(nonatomic) _Bool m_isLanscape; // @synthesize m_isLanscape;
@property(readonly, nonatomic) WebViewA8KeyLogicImpl *m_a8KeyLogicImpl; // @synthesize m_a8KeyLogicImpl;
@property(readonly, nonatomic) WebViewJSLogicImpl *m_jsLogicImpl; // @synthesize m_jsLogicImpl;
@property(nonatomic) __weak id <MMWebViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIView<YYWebViewInterface> *webView; // @synthesize webView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)tagForCurrentPage;
- (void)forceShowCloseButton;
- (void)setNotifyWillReturnBlock:(CDUnknownBlockType)arg1;
- (void)setDelayLoadActionBlock:(CDUnknownBlockType)arg1;
- (void)restoreToDefaultNavBar;
- (void)setNavBarBgColor:(id)arg1;
- (id)getWebviewBannerTitle;
- (id)getLeftBarButton;
- (void)setFullScreenNavAlpha:(id)arg1;
- (void)setTailBackGroundColor:(id)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)setFullScreen:(_Bool)arg1;
- (void)enableFullScreen;
- (void)onClickFailView:(id)arg1;
- (void)hideLoadFailView;
- (void)relayoutLoadFailView;
- (void)showLoadFailView:(unsigned int)arg1 errorCode:(long long)arg2;
- (void)onPreverifyFinished;
- (id)getJSFunctionDef:(id)arg1;
- (_Bool)isGetingA8Key;
- (void)onFinishedHandleJSApi;
- (void)onPageStateChange:(id)arg1;
- (void)onDomReady;
- (void)handleFromWeixinNotify:(id)arg1;
- (id)getCurrentWebviewViewController;
- (_Bool)canAccessJSApi:(id)arg1;
- (id)getAuthorizedMonitorEvents:(id)arg1;
- (void)tryStartOutlinkDetect;
- (unsigned char)getJSApiPermission:(id)arg1;
- (_Bool)isShowMenuItem:(id)arg1;
- (unsigned char)getPermissionWithName:(id)arg1;
- (void)processJSAPICall:(id)arg1 funcDef:(id)arg2 funcBlock:(CDUnknownBlockType)arg3 failHandleBlock:(CDUnknownBlockType)arg4 apiPermission:(unsigned char)arg5;
- (void)url:(id)arg1 DidCheckReturnContentAttribute:(unsigned int)arg2;
- (void)onJumpToEmoticonDetailViewController:(id)arg1;
- (void)onJumpToViewController:(id)arg1;
- (void)onJumpToSafariWithUrl:(id)arg1;
- (void)onUpdatedPermisson;
- (void)onGetA8Key:(_Bool)arg1 Reason:(int)arg2;
- (void)onStartGetA8Key;
- (void)saveJSAPIPermissionsInOfflineCache:(id)arg1 url:(id)arg2;
- (void)saveJSAPIPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)sendGetA8KeyUrlEvent;
- (void)kvReportJSCall:(id)arg1 withParam:(id)arg2;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)doJsApiInitEvent;
- (void)showWXPayTip;
- (void)updateRightBarButtonWithURL:(id)arg1;
- (void)setCurrentUrl:(id)arg1;
- (unsigned int)getCurrentScene;
- (_Bool)isContentOriginal;
- (_Bool)isCanShowAllMenus;
- (_Bool)isPageDidLoad;
- (id)getCurrentUrl;
- (void)stopForcedRotationToPortrait;
- (void)startForcedRotationToPortrait;
- (void)keyboardDidShow:(id)arg1;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (id)getWebViewTimeProfileData;
- (id)webviewController;
- (void)permitTempAccessOfJSApi:(id)arg1;
- (_Bool)isTempAccessOfJSApiPermitted:(id)arg1;
- (_Bool)isAccessPermitttedByPermissionBitSet:(id)arg1;
- (void)onPageNotifyFinishedLoading:(id)arg1;
- (void)onDomReady:(id)arg1;
- (void)shareToFB;
- (void)immediateDismissWebViewController;
- (void)dismissWebViewController;
- (void)setDisableWebAlertView:(_Bool)arg1;
- (_Bool)isMenuAction:(id)arg1;
- (id)getRequestingOrCurrentUrl;
- (void)onSelectFont:(unsigned int)arg1;
- (_Bool)shoudDelaySetFont;
- (void)dealloc;
- (void)reportWhenDealloc;
- (void)OnClose;
- (void)backToAppIfNeed;
- (void)OnReturn;
- (void)doBackActionCleanWithType:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertUploadingVideo;
- (void)cleanJSAPIDelegate;
- (_Bool)isSvrErrorTipForbidden;
- (void)willDisappear;
- (_Bool)useBlackStatusbar;
- (_Bool)useCustomNavibar;
- (_Bool)useTransparentNavibar;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)setCustomLoadingView:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)removeCustomLoadingView;
- (void)delaySetFontsWithSize:(id)arg1;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)handleJumpProfileUrl:(id)arg1 profileRange:(struct _NSRange)arg2;
- (void)delayHandleUrl:(id)arg1;
- (_Bool)isPhoneNumberUrl:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
- (void)markNeedCheckUrlAndRemoveLastCheckedUrl:(id)arg1;
- (void)delayPopForAppStore;
- (id)getUrlPermission:(id)arg1;
- (_Bool)hasUrlPermission:(id)arg1;
- (id)getLastUrl;
- (void)goToURL:(id)arg1;
- (void)goForward;
- (void)goBack;
- (void)stop;
- (void)clearWebviewCacheAndCookie:(_Bool)arg1;
- (void)cleanWebCacheFromReloadMenuAction;
- (void)reload;
- (void)initGestureRecognizer;
- (id)getRoutUrls;
- (void)onInfoBarButtonClick:(id)arg1;
- (void)onSessionBarButtonClick:(id)arg1;
- (void)createBrandActionReport;
- (void)setShareBarItem:(id)arg1;
- (unsigned int)GetGeneralBitSetForUrl:(id)arg1;
- (_Bool)IsBitsetSet:(unsigned int)arg1 forUrl:(id)arg2;
- (_Bool)allowScanQRCodeByImage;
- (unsigned int)GetPermissionBitSet3;
- (unsigned int)GetPermissionBitSet2;
- (unsigned int)GetPermissionBitSet;
- (unsigned long long)GetDeepLinkBitSet;
- (void)done:(id)arg1;
- (void)adjustSubviewRects;
- (void)willDismissAndShow;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didAppear;
- (void)willAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)notifyToJSBridgeVisibilityChanged:(_Bool)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)extraInfo;
- (void)doDNS;
- (void)StartLoadWeb;
- (void)setExtraInfoValue:(id)arg1 forKey:(id)arg2;
- (void)setIsHideShareMenuByJsApi:(_Bool)arg1;
- (void)setDisableShareMenu:(_Bool)arg1;
- (void)setAddFriendScene:(unsigned int)arg1;
- (void)setAutoSetTitle:(_Bool)arg1;
- (void)setWebviewType:(int)arg1;
- (id)getOperationButtonImageNameWithURL:(id)arg1;
- (void)onLongPressOnWebview:(id)arg1;
- (void)enableLongPressDetect;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)shouldShowGoBackBtn;
- (void)setSwipeBackInteractiveEnable:(_Bool)arg1;
- (id)initWithURL:(id)arg1 presentModal:(_Bool)arg2 extraInfo:(id)arg3 referer:(id)arg4;
- (id)initWithURL:(id)arg1 presentModal:(_Bool)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (id)initWithURL:(id)arg1 presentModal:(_Bool)arg2 extraInfo:(id)arg3;
- (void)internalInitWithUrl:(id)arg1 presentModal:(_Bool)arg2 extraInfo:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)resetWebviewInsetOrY;
- (void)calcCurrentWebViewInset:(struct UIEdgeInsets *)arg1 y:(double *)arg2 height:(double *)arg3;
- (void)calcCurrentWebViewY:(double *)arg1 height:(double *)arg2;
- (void)restoreAddressBar;
- (void)initAddressBarView;
- (void)initDeeplinkRedirectingView;
- (void)initDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (id)getAddressBarHostText:(id)arg1;
- (void)initNavigationBarItem;
- (void)initProgressView;
- (id)getInitUrl;
- (id)getShareUrl;
- (void)setPayTitle:(id)arg1;
- (id)getCurrentAppId;
- (void)setPublisher:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setRightBarButtonItemEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

