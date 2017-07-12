//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AVPlayerStateControlDelegate.h"
#import "MMAVPlayerItem.h"
#import "SightIconViewDelegate.h"
#import "SightPlayerViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WCStateMachineDelegate.h"

@class CMessageWrap, MMAVPlayerItemWrap, MMProgressViewEx, NSString, SightIconView, SightPlayerView, UIColor, UIImage, UIImageView, UILabel, UITapGestureRecognizer, WCStateMachine;

@interface SightView : UIView <SightPlayerViewDelegate, WCStateMachineDelegate, SightIconViewDelegate, MMAVPlayerItem, UIGestureRecognizerDelegate, AVPlayerStateControlDelegate>
{
    _Bool _disabled;
    _Bool _coverMaskHidden;
    _Bool _disableResumeMusicPlayAfterPause;
    _Bool _shouldSkipStackOrResume;
    _Bool _managedByMMAVPlayerMgr;
    _Bool _wasPlayingBeforeClearPlayerView;
    id <SightViewDelegate> _delegate;
    unsigned long long _scene;
    NSString *_thumbImagePath;
    UIImage *_thumbImage;
    NSString *_videoPath;
    NSString *_cpKey;
    long long _playStatus;
    double _progress;
    UIColor *_coverMaskBackgroundColor;
    CMessageWrap *_m_oMessageWrap;
    SightIconView *_iconView;
    MMProgressViewEx *_progressView;
    UITapGestureRecognizer *_tapGestureOnIconView;
    UILabel *_hintLabel;
    UIView *_coverMask;
    long long _currentMaskType;
    NSString *_currentHintText;
    UIImageView *_thumbImageView;
    SightPlayerView *_playerView;
    MMAVPlayerItemWrap *_playerWrap;
    WCStateMachine *_stateMachine;
    struct CGSize _iconViewSize;
}

@property(nonatomic) _Bool wasPlayingBeforeClearPlayerView; // @synthesize wasPlayingBeforeClearPlayerView=_wasPlayingBeforeClearPlayerView;
@property(retain, nonatomic) WCStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) MMAVPlayerItemWrap *playerWrap; // @synthesize playerWrap=_playerWrap;
@property(retain, nonatomic) SightPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) NSString *currentHintText; // @synthesize currentHintText=_currentHintText;
@property(nonatomic) long long currentMaskType; // @synthesize currentMaskType=_currentMaskType;
@property(retain, nonatomic) UIView *coverMask; // @synthesize coverMask=_coverMask;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) struct CGSize iconViewSize; // @synthesize iconViewSize=_iconViewSize;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureOnIconView; // @synthesize tapGestureOnIconView=_tapGestureOnIconView;
@property(retain, nonatomic) MMProgressViewEx *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool managedByMMAVPlayerMgr; // @synthesize managedByMMAVPlayerMgr=_managedByMMAVPlayerMgr;
@property(retain, nonatomic) CMessageWrap *m_oMessageWrap; // @synthesize m_oMessageWrap=_m_oMessageWrap;
@property(nonatomic) _Bool shouldSkipStackOrResume; // @synthesize shouldSkipStackOrResume=_shouldSkipStackOrResume;
@property(nonatomic) _Bool disableResumeMusicPlayAfterPause; // @synthesize disableResumeMusicPlayAfterPause=_disableResumeMusicPlayAfterPause;
@property(retain, nonatomic) UIColor *coverMaskBackgroundColor; // @synthesize coverMaskBackgroundColor=_coverMaskBackgroundColor;
@property(nonatomic) _Bool coverMaskHidden; // @synthesize coverMaskHidden=_coverMaskHidden;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) long long playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) NSString *thumbImagePath; // @synthesize thumbImagePath=_thumbImagePath;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <SightViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showMaskType:(long long)arg1 animated:(_Bool)arg2;
- (void)showCurrentHintText;
- (void)showCurrentMaskType;
- (void)setMaskType:(long long)arg1 hintText:(id)arg2 afterDelay:(double)arg3;
- (void)onStateMachineDidEnterState:(id)arg1 withTransition:(id)arg2;
- (_Bool)isCurrentStateNameContainedInStates:(id)arg1;
- (void)hideVideoLoadingView;
- (void)showVideoLoadingView;
- (void)playerOnDownloaded;
- (void)pauseForDownloading:(_Bool)arg1;
- (void)onProgressEnd;
- (_Bool)onClickSightIconView:(id)arg1;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)onVideoSizeUpdate:(struct CGSize)arg1;
- (void)onResumeSightPlayerView:(id)arg1;
- (void)onStack;
- (void)onItemCleared;
- (_Bool)onPlayEnd:(_Bool)arg1;
- (void)onResume;
- (void)willStack;
- (_Bool)performClear;
- (_Bool)performFullPlayWithMute:(_Bool)arg1;
- (_Bool)performFullPlay;
- (_Bool)performFullLoad;
- (void)silentPlayImmediately;
- (void)performSilentPlay;
- (void)performPauseForce:(_Bool)arg1;
- (void)performLoadItem:(id)arg1;
- (void)seekToTime:(float)arg1;
- (void)stop;
- (void)pauseWithShowThumb:(_Bool)arg1 bForcePause:(_Bool)arg2;
- (void)pauseForce:(_Bool)arg1;
- (void)playWithMute:(_Bool)arg1 forceUsingAVPlayer:(_Bool)arg2;
- (void)clear;
- (void)clearPlayerView;
- (void)killPlayerWrap;
- (_Bool)isMute;
- (void)tryToStopImmediately;
- (void)tryToStop;
- (void)tryToPauseWithShowThumb:(_Bool)arg1;
- (void)tryToPause;
- (void)tryToSeekToTime:(unsigned int)arg1;
- (void)tryToSeekToStartTime;
- (void)tryToReportKVArgs:(struct CDNDownloadResult)arg1;
- (void)tryToClearPlayArgs;
- (void)tryToSavePlayedTime;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (_Bool)isPlaying;
- (void)tryToPlayWithSound:(_Bool)arg1 hideCoverWithAnimation:(_Bool)arg2 forceUsingAVPlayer:(_Bool)arg3;
- (void)tryToPlayWithSound:(_Bool)arg1 hideCoverWithAnimation:(_Bool)arg2;
- (void)tryToPlayWithSound:(_Bool)arg1 forceUsingAVPlayer:(_Bool)arg2;
- (void)tryToPlayWithSound:(_Bool)arg1;
- (_Bool)isReadyToPlay;
- (void)tryToDisable;
- (void)tryToSetVideoPath:(id)arg1;
- (void)setAnimating:(_Bool)arg1;
- (void)setHintTextColor:(id)arg1;
- (void)setHintText:(id)arg1;
- (void)setLoadingViewHidden:(_Bool)arg1;
- (void)setIconViewHidden:(_Bool)arg1;
- (void)tryToSetProgressStep:(double)arg1;
- (void)tryToSetProgress:(double)arg1;
- (_Bool)isInFlowControl;
- (_Bool)tryToEnterFlowControl;
- (void)didFailToUploadVideo;
- (void)didUploadVideo;
- (_Bool)tryToUploadVideo;
- (void)tryToConnectForUpload;
- (void)tryToWaitForUpload;
- (_Bool)isFailedToDownloadVideo;
- (void)didFailToDownloadVideo;
- (_Bool)isDownloadingVideo;
- (_Bool)tryToDownloadVideo;
- (_Bool)isConnecting;
- (_Bool)tryToConnectForDownload;
- (_Bool)isWaitingForDownload;
- (_Bool)tryToWaitForDownload;
- (_Bool)isActive;
- (void)tryToReset;
- (void)showIntoScreen:(_Bool)arg1;
- (void)setContentMode:(long long)arg1;
@property(nonatomic) _Bool disablePlayerStatusTimerCheck;
- (void)onSingleTapOnIconView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)hidePlayerView:(_Bool)arg1;
- (void)hideThumbImageView:(_Bool)arg1;
- (void)dealloc;
- (id)getVideoPlayerView;
- (id)getSightPlayerView;
- (void)tryShowDownloadingView;
- (void)animateHideDownloadingView;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetStateMachine;
- (void)activate;
- (void)setStateMachine;
- (id)initWithFrame:(struct CGRect)arg1 managedByMMAVPlayerMgr:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithManagedByMMAVPlayerMgr:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

