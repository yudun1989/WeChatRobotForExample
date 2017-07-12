//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface ChatMigrationAnalysisMgr : MMService <MMService>
{
    unsigned int m_serverSessionCount;
    unsigned int m_serverMessageCount;
    unsigned int m_serverFileCount;
    unsigned int m_clientSessionCount;
    unsigned int m_clientMessageCount;
    unsigned int m_clientFileCount;
    unsigned int m_calculateSize;
    unsigned int m_serverDataPushSize;
    unsigned int m_clientDataPushSize;
    unsigned long long m_serverReadDBTotalTime;
    unsigned long long m_clientWriteDBTotalTime;
    unsigned long long m_serverReadFileTotalTime;
    unsigned long long m_clientWriteFileTotalTime;
    unsigned long long m_serverCostTotalTime;
    unsigned long long m_clientCostTotalTime;
    unsigned long long m_clientWriteTmpFileTotalTime;
    unsigned int m_errorCode;
    unsigned int m_serverVersion;
    unsigned int m_networkState;
}

+ (unsigned int)convertMicroSecondTimeToMilliSecondTime:(unsigned long long)arg1;
+ (unsigned long long)diffTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
- (void)reportChatMigrationPerformanceStat;
- (id)getPerformanceStatDictionary;
- (void)setNetworkState:(unsigned int)arg1;
- (void)setServerVersion:(unsigned int)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)addTimeToClientWriteTmpFileTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
- (void)addTimeToClientTransferTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
- (void)addTimeToServerTransferTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
- (void)setServerCostTotalTime:(unsigned long long)arg1;
- (void)addClientWriteFileTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
- (void)addClientWriteDBTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
- (void)setClientDataPushSize:(unsigned int)arg1;
- (void)setClientFileCount:(unsigned int)arg1;
- (void)setClientMessageCount:(unsigned int)arg1;
- (void)setClientSessionCount:(unsigned int)arg1;
- (void)addServerReadFileTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
- (void)setServerReadFileTime:(unsigned long long)arg1;
- (void)addServerReadDBTime:(struct timeval *)arg1 endTime:(struct timeval *)arg2;
- (void)setServerReadDBTime:(unsigned long long)arg1;
- (void)setServerDataPushSize:(unsigned int)arg1;
- (void)setCalculateSize:(unsigned int)arg1;
- (void)setServerFileCount:(unsigned int)arg1;
- (void)setServerMessageCount:(unsigned int)arg1;
- (void)setServerSessionCount:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

