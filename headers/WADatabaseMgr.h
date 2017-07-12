//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString, WCDataBase, WCDataBaseTable;

@interface WADatabaseMgr : MMService <MMService>
{
    WCDataBase *_db;
    WCDataBaseTable *_tableWeAppInfo;
    WCDataBaseTable *_tablePermissionInfo;
    WCDataBaseTable *_tableContact;
    WCDataBaseTable *_tableBizAttrSyncBuffer;
}

@property(retain) WCDataBaseTable *tableBizAttrSyncBuffer; // @synthesize tableBizAttrSyncBuffer=_tableBizAttrSyncBuffer;
@property(retain) WCDataBaseTable *tableContact; // @synthesize tableContact=_tableContact;
@property(retain) WCDataBaseTable *tablePermissionInfo; // @synthesize tablePermissionInfo=_tablePermissionInfo;
@property(retain) WCDataBaseTable *tableWeAppInfo; // @synthesize tableWeAppInfo=_tableWeAppInfo;
@property(retain) WCDataBase *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (id)dbPath;
- (void)closeDB;
- (void)openDB;
- (_Bool)setPermissionBytes:(id)arg1 withAppID:(id)arg2;
- (id)getPermissionBytesWithAppID:(id)arg1;
- (_Bool)deleteAllAppInfo;
- (_Bool)deleteAppInfoByAppID:(id)arg1 andVersion:(unsigned long long)arg2;
- (_Bool)deleteAppInfoByAppID:(id)arg1;
- (_Bool)insertOrUpdateAppInfo:(id)arg1;
- (id)getAppInfoByAppID:(id)arg1;
- (id)getUserNameOfAppInfoByAppID:(id)arg1;
- (unsigned int)getAppInfoCount;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

