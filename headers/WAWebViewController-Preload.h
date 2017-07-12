//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewController.h"

@interface WAWebViewController (Preload)
+ (void)setNavigationAttribute:(id)arg1 webView:(id)arg2;
- (id)filterRegularString:(id)arg1;
- (void)parseDataString:(id)arg1 AndGetStype:(id *)arg2 body:(id *)arg3 script:(id *)arg4;
- (id)elementStringFromXML:(id)arg1 startPos:(unsigned long long *)arg2 elementName:(id)arg3 containElementName:(_Bool)arg4;
- (id)cachedDataWithURL:(id)arg1;
- (void)loadFrameContent:(id)arg1;
- (void)setLoadPageIndexStartTime:(long long)arg1;
- (long long)getLoadPageIndexStartTime;
- (void)loadIndexData;
- (id)getFrameContentWithURL:(id)arg1;
- (void)loadFrameDataWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2;
- (void)bringTabBarToFront;
- (void)setPageTabAttribute;
- (void)loadPreloadTabAttribute;
- (void)setNavigationLeftText:(id)arg1 leftColor:(id)arg2 rightText:(id)arg3 rightColor:(id)arg4 rightIcon:(id)arg5;
- (void)setNavigationBarTitle:(id)arg1 color:(id)arg2 backgroundColor:(id)arg3;
- (void)setNavigationBarItemsAndStatusBarStyle:(int)arg1;
- (void)setPageBackgroundColor;
- (void)setNavigationAttributeFromChildWebView:(id)arg1;
- (id)pageAttribute;
- (void)setPreloadPageAttribute;
- (void)resetPreloadPageAttributeMark;
- (void)loadPreloadPageAttribute;
- (void)setupAttributeWhenKnowsPagePath;
- (void)onCallbackInitReady;
- (void)loadIndexDataWithRelativeURL:(id)arg1;
- (id)getPreloadIndexURL;
- (id)getPreloadPageQuery;
- (id)getPreloadPageRelativeURL;
- (id)getPreloadBaseURL;
- (id)preloadFrameFileName;
@end
