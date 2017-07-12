//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface DownloadVoiceWrap : NSObject <PBCoding>
{
    unsigned int m_uiLocalID;
    unsigned int m_uiCreateTime;
    unsigned int m_uiVoiceLen;
    unsigned int m_uiVoiceTime;
    unsigned int m_uiEndFlag;
    unsigned int m_uiRetryCount;
    unsigned int _m_uiOffset;
    unsigned int _m_uiLen;
    unsigned int _m_uiCancelFlag;
    long long m_n64SvrID;
    NSString *m_nsChatUsrName;
    NSData *_m_dtVoice;
}

+ (void)initialize;
@property(nonatomic) unsigned int m_uiCancelFlag; // @synthesize m_uiCancelFlag=_m_uiCancelFlag;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice=_m_dtVoice;
@property(nonatomic) unsigned int m_uiLen; // @synthesize m_uiLen=_m_uiLen;
@property(nonatomic) unsigned int m_uiOffset; // @synthesize m_uiOffset=_m_uiOffset;
@property(retain, nonatomic) NSString *m_nsChatUsrName; // @synthesize m_nsChatUsrName;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount;
@property(nonatomic) unsigned int m_uiEndFlag; // @synthesize m_uiEndFlag;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime;
@property(nonatomic) unsigned int m_uiVoiceLen; // @synthesize m_uiVoiceLen;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

