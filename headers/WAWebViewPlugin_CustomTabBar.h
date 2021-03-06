//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "UITabBarDelegate.h"

@class NSArray, NSMutableDictionary, NSString, UITabBar;

@interface WAWebViewPlugin_CustomTabBar : WAWebViewPluginBase <UITabBarDelegate>
{
    UITabBar *_myCustomTabBar;
    long long _curSelectedIndex;
    NSArray *_arrTabItemData;
    NSMutableDictionary *_dicChildWebView;
    long long m_TabItemCount;
}

@property(nonatomic) long long m_CurSelectedIndex; // @synthesize m_CurSelectedIndex=_curSelectedIndex;
@property(nonatomic) long long m_TabItemCount; // @synthesize m_TabItemCount;
- (void).cxx_destruct;
- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (void)loadChildTabWebViewWithIndex:(long long)arg1;
- (id)childWebViewFromIndex:(unsigned long long)arg1;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (void)bringTabBarToFront;
- (void)createChildVCTabBarWithItems:(id)arg1 backgroundColor:(id)arg2 textColor:(id)arg3 selectedTextColor:(id)arg4 borderColor:(id)arg5;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;
- (id)getSelectedTabWebView;
- (void)selectMainTab;
- (_Bool)isSelectedOtherTab;
- (id)getChildTabWebViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

