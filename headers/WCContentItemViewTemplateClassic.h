//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "MMMusicPlayerContollerDelegate.h"
#import "MMWebViewDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WCForceTouchPreviewProtocol.h"
#import "WCImageViewDelegate.h"
#import "WCNetworkMediaPlayerDelegate.h"

@class MMMusicPlayerContoller, MMUIWindow, NSString, UIImageView, UILabel, WCImageView;

@interface WCContentItemViewTemplateClassic : WCContentItemBaseView <WCImageViewDelegate, RichTextLayoutDelegate, MMWebViewDelegate, UIGestureRecognizerDelegate, MMMusicPlayerContollerDelegate, WCNetworkMediaPlayerDelegate, WCForceTouchPreviewProtocol>
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    WCImageView *_coverImage;
    MMMusicPlayerContoller *_playButton;
    UIImageView *_defaultImageView;
    _Bool _forbidJumpUrl;
    _Bool _bMusicItemJumpToMusicVC;
    MMUIWindow *m_fullScreenWindow;
    int _currentPage;
    _Bool _bSceneFromSearch;
    _Bool _closeAdLongVideoForViewDetail;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
+ (id)getTrimDesc:(id)arg1;
@property(nonatomic) _Bool closeAdLongVideoForViewDetail; // @synthesize closeAdLongVideoForViewDetail=_closeAdLongVideoForViewDetail;
@property(nonatomic) _Bool bSceneFromSearch; // @synthesize bSceneFromSearch=_bSceneFromSearch;
- (void).cxx_destruct;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (void)dealloc;
- (void)setNonInteractive;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)onClickWCImage:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)jumpToViewStreamVideo;
- (void)throwUrlMessage;
- (void)onLongTouch;
- (void)onShareToOpenSDK:(id)arg1;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

