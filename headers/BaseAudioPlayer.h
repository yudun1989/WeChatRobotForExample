//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "BaseAudioPlayerNotifyExt.h"
#import "MMService.h"
#import "WCAudioSessionExt.h"

@class ActionRecognition, AudioPlayerUserData, MMTimer, NSString;

@interface BaseAudioPlayer : MMService <BaseAudioPlayerNotifyExt, WCAudioSessionExt, MMService>
{
    struct PlayerState *mAqData;
    _Bool mIsNeedNotifyOtherAudio;
    AudioPlayerUserData *mUserData;
    MMTimer *mMeterTimer;
    ActionRecognition *mActionRecogn;
}

@property(nonatomic) _Bool needNotifyOtherAudio; // @synthesize needNotifyOtherAudio=mIsNeedNotifyOtherAudio;
@property(retain, nonatomic) ActionRecognition *mActionRecogn; // @synthesize mActionRecogn;
@property(retain, nonatomic) MMTimer *mMeterTimer; // @synthesize mMeterTimer;
@property(retain) AudioPlayerUserData *mUserData; // @synthesize mUserData;
- (void).cxx_destruct;
- (void)setUserData:(id)arg1;
- (_Bool)isPlaying;
- (void)forceNotifyOtherAudioPlay;
- (void)stopAndNotifyUI;
- (void)autostop;
- (void)stop;
- (void)stopButNotNotify;
- (void)EndNotifyOnMainThread;
- (void)replay;
- (void)restart;
- (void)pause;
- (void)play;
- (_Bool)preparePlayNotNotify;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (void)setAutoMode;
- (void)setEarpieceMode;
- (void)setSpeakerMode;
- (void)updateStatus;
- (void)updateSetting;
- (void)updateSession;
- (_Bool)initQueue;
- (void)initSession;
- (void)unopenMonitorDetection;
- (void)openMonitorDetection;
- (void)sensorStateChange:(id)arg1;
- (void)safeDisableProximity;
- (void)disableProximity;
- (void)enableProximity;
- (void)dealloc;
- (id)init;
- (void)notifyBaseAudioPlayerStopAudio;
- (void)onWCAudioSessionOverride;
- (void)onWCAudioSessionCategoryChange:(unsigned long long)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

