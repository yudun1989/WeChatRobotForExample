//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMPersonalEmotionsViewController, MMWechatEmotionsViewController, UIImageView, UISegmentedControl;

@interface MMEmotionStoreViewController : MMUIViewController
{
    UISegmentedControl *_segmentedControl;
    MMWechatEmotionsViewController *_wechatEmotionsViewController;
    MMPersonalEmotionsViewController *_personalEmotionsViewContrller;
    UIImageView *_badgeView;
    unsigned int _scene;
    _Bool _isReport;
    unsigned long long m_defaultSelectedTag;
}

- (void).cxx_destruct;
- (void)clickEmotionCharts;
- (void)clickPersonalEmotionsTab;
- (void)clickWechatEmotionsTab;
- (void)clickSegmentedControl;
- (void)updateNew:(_Bool)arg1;
- (void)configSegmentedControl;
- (void)onOperate;
- (void)OnCancelModalView:(id)arg1;
- (void)configViewControllers;
- (_Bool)isNeedPersonalViewTab;
- (void)configViews;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithEmotionScene:(unsigned int)arg1 AndDefaultTag:(unsigned long long)arg2;
- (id)initWithEmotionScene:(unsigned int)arg1 withRequestType:(unsigned int)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;

@end

