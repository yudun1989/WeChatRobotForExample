//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, NSString;

@protocol WXVideoPlayerViewDelegate <NSObject>

@optional
- (void)onWXVideoPlayVideoUpdateVideoTime:(double)arg1 msgClientId:(NSString *)arg2;
- (void)onWXVideoPlayerClickDetail:(CMessageWrap *)arg1;
- (void)isWXVideoPlayerPlayAttachVideo:(CMessageWrap *)arg1;
- (_Bool)isWXVideoPlayerDisplay:(CMessageWrap *)arg1;
- (void)onWXVideoPlayerShouldContinueFromActive:(CMessageWrap *)arg1;
- (void)onWXVideoPlayerShouldPlay:(CMessageWrap *)arg1;
- (void)onWXVideoPlayerCanPlay:(CMessageWrap *)arg1;
- (void)onWXVideoPlayerTimer:(CMessageWrap *)arg1 currentTime:(unsigned int)arg2;
- (void)onWXVideoPlayerPause:(CMessageWrap *)arg1;
@end

