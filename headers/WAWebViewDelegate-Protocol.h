//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, WAWebViewController;

@protocol WAWebViewDelegate <NSObject>

@optional
- (void)publishPostMessage:(NSDictionary *)arg1 fromWebView:(WAWebViewController *)arg2;
- (_Bool)checkWebViewRunMode:(NSString *)arg1;
- (_Bool)hasPermissionWithJSAPI:(NSString *)arg1 fromWebView:(WAWebViewController *)arg2;
- (void)webView:(WAWebViewController *)arg1 didLoadFrameContent:(NSString *)arg2;
- (NSString *)askFrameContentFromWebView:(WAWebViewController *)arg1;
- (_Bool)webViewIsSameDepthWithFirstPage:(WAWebViewController *)arg1;
- (_Bool)webViewIsFirstPage:(WAWebViewController *)arg1;
- (void)killAppFrom:(WAWebViewController *)arg1 animate:(_Bool)arg2;
- (void)enterBackgroundFrom:(WAWebViewController *)arg1 animate:(_Bool)arg2;
- (void)popToFirstWebViewFrom:(WAWebViewController *)arg1;
- (void)webViewDidSwitchTab:(WAWebViewController *)arg1;
- (WAWebViewController *)getPreviousWebViewFromWebView:(WAWebViewController *)arg1;
- (WAWebViewController *)getTabChildWebViewWithRelativeURL:(NSString *)arg1 fromWebView:(WAWebViewController *)arg2;
- (void)webViewOnBeforeEveluateIndexData:(WAWebViewController *)arg1;
- (void)webViewDidBePoped:(WAWebViewController *)arg1;
- (void)webViewDidDisappear:(WAWebViewController *)arg1;
- (void)webViewDidAppear:(WAWebViewController *)arg1 notCallOnAppRoute:(_Bool)arg2;
@end

