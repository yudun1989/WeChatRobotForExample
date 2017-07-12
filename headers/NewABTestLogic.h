//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString, NewABTestXMLParser;

@interface NewABTestLogic : MMService <PBMessageObserverDelegate, IMsgExt, MMService>
{
    _Bool _isUpdatingABTestFromSvr;
    unsigned int _uiNextUpdateTime;
    NewABTestXMLParser *_xmlParser;
}

@property(nonatomic) _Bool isUpdatingABTestFromSvr; // @synthesize isUpdatingABTestFromSvr=_isUpdatingABTestFromSvr;
@property(retain, nonatomic) NewABTestXMLParser *xmlParser; // @synthesize xmlParser=_xmlParser;
@property(nonatomic) unsigned int uiNextUpdateTime; // @synthesize uiNextUpdateTime=_uiNextUpdateTime;
- (void).cxx_destruct;
- (_Bool)saveUpdateTimeToFile:(unsigned int)arg1 fileName:(id)arg2;
- (unsigned int)getUpdateTimeFromFile:(id)arg1;
- (_Bool)saveLastUpdateTimeForCache:(unsigned int)arg1;
- (unsigned int)getLastUpdateTimeFromCache;
- (_Bool)saveNewUpdateTimeForCache:(unsigned int)arg1;
- (unsigned int)getNextUpdateTimeFromCache;
- (void)updateNextUpdateTime:(unsigned int)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getABTestFromSvrWithExpItems:(id)arg1;
- (void)tryUpdateAbTestFromSvrWithExpItems:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

