//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CLLocationManagerDelegate.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "WCBeaconGuideModeExt.h"

@class CLLocationManager, MMTimer, NSMutableArray, NSString;

@interface WCBeaconGuideModeMgr : MMService <PBMessageObserverDelegate, CLLocationManagerDelegate, MMService, WCBeaconGuideModeExt>
{
    MMTimer *m_timer;
    _Bool _m_isPreviousRequestRunning;
    NSMutableArray *_shakeRangeBeacons;
    CLLocationManager *_m_locationMgr;
}

@property(nonatomic) _Bool m_isPreviousRequestRunning; // @synthesize m_isPreviousRequestRunning=_m_isPreviousRequestRunning;
@property(retain, nonatomic) CLLocationManager *m_locationMgr; // @synthesize m_locationMgr=_m_locationMgr;
@property(retain, nonatomic) NSMutableArray *shakeRangeBeacons; // @synthesize shakeRangeBeacons=_shakeRangeBeacons;
- (void).cxx_destruct;
- (void)onDidFetchedNoContentWithError:(unsigned long long)arg1;
- (void)onDidFetchedContent:(id)arg1;
- (void)onServiceEnterForeground;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handlePreGetGuideModeInfoResponse:(id)arg1;
- (void)preGetGuideInfoByBeacon:(id)arg1 withOwner:(unsigned long long)arg2 inLocation:(id)arg3;
- (void)uploadBeaconsToSvr;
- (_Bool)isChannelOpen;
- (_Bool)shakeBeaconTabShouldStay;
- (void)openGuideChannelForShopId:(unsigned long long)arg1;
- (void)stopRangeBeacons;
- (void)startRangeBeacons;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

