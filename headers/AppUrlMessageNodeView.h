//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "MMWebImageViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, UIImageView, UILabel;

@interface AppUrlMessageNodeView : BaseMessageNodeView <MMWebImageViewDelegate, UIAlertViewDelegate>
{
    UILabel *m_detailLabel;
    UILabel *m_titleLabel;
    UIImageView *m_thumbImageView;
    UIImageView *m_oBlurBkgImageView;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) UIImageView *m_thumbImageView; // @synthesize m_thumbImageView;
- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (id)getMoreMainInfomationAccessibilityDescription;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onClearResource;
- (void)onDisappear;
- (void)onClick;
- (void)onMoreOperate:(id)arg1;
- (void)onForward:(id)arg1;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (void)showOpearation;
- (void)updateBkgImage:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAppear;
- (void)resend;
- (void)updateThumbImage;
- (void)updateStatus:(id)arg1;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)clickNodeViewBtn:(id)arg1;
- (void)layoutSubviewsInternal;
- (void)layoutCommonSubViewInternal;
- (void)initVideoIcon;
- (void)initUIInternal;
- (id)getHostStr;
- (id)getThumbView:(id)arg1 LocalID:(unsigned int)arg2;
- (id)getDescText;
- (id)getTitleText;
- (void)initDetailLabel;
- (id)getTitleLabel;
- (id)getDefaultThumbImage;
- (id)getBackgroundImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

