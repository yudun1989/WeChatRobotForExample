//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCCardDataSource.h"
#import "WCDBCoding.h"

@class NSString, WCCardDataCardInfo, WCCardDataCardTPInfo;

@interface WCShareCardData : MMObject <WCDBCoding, WCCardDataSource>
{
    _Bool bNearby;
    _Bool _bNew;
    unsigned int localCardId;
    unsigned int stateFlag;
    unsigned int updateTime;
    unsigned int localUpdateTime;
    unsigned int shareTime;
    unsigned int expireTime;
    unsigned int IntRes1;
    unsigned int IntRes2;
    unsigned int IntRes3;
    NSString *announceMent;
    NSString *cardId;
    NSString *cardTpId;
    NSString *appId;
    unsigned long long updateSeq;
    unsigned long long localUpdateSeq;
    NSString *shareUserName;
    NSString *markUserName;
    NSString *shareCardTPInfoForDB;
    NSString *shareCardInfoForDB;
    NSString *shareCardShareInfoForDB;
    NSString *shareCardLogoName;
    NSString *shareCardTitle;
    NSString *shareCardFromUser;
    NSString *shareCardContent;
    NSString *StrRes1;
    NSString *StrRes2;
    NSString *StrRes3;
    WCCardDataCardInfo *shareCardInfo;
    WCCardDataCardTPInfo *shareCardTPInfo;
    long long m___rowID;
}

+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) _Bool bNew; // @synthesize bNew=_bNew;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) WCCardDataCardTPInfo *shareCardTPInfo; // @synthesize shareCardTPInfo;
@property(retain, nonatomic) WCCardDataCardInfo *shareCardInfo; // @synthesize shareCardInfo;
@property(retain, nonatomic) NSString *StrRes3; // @synthesize StrRes3;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes3; // @synthesize IntRes3;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(retain, nonatomic) NSString *shareCardContent; // @synthesize shareCardContent;
@property(retain, nonatomic) NSString *shareCardFromUser; // @synthesize shareCardFromUser;
@property(retain, nonatomic) NSString *shareCardTitle; // @synthesize shareCardTitle;
@property(retain, nonatomic) NSString *shareCardLogoName; // @synthesize shareCardLogoName;
@property(retain, nonatomic) NSString *shareCardShareInfoForDB; // @synthesize shareCardShareInfoForDB;
@property(retain, nonatomic) NSString *shareCardInfoForDB; // @synthesize shareCardInfoForDB;
@property(retain, nonatomic) NSString *shareCardTPInfoForDB; // @synthesize shareCardTPInfoForDB;
@property(retain, nonatomic) NSString *markUserName; // @synthesize markUserName;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime;
@property(retain, nonatomic) NSString *shareUserName; // @synthesize shareUserName;
@property(nonatomic) unsigned int shareTime; // @synthesize shareTime;
@property(nonatomic) unsigned int localUpdateTime; // @synthesize localUpdateTime;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned long long localUpdateSeq; // @synthesize localUpdateSeq;
@property(nonatomic) unsigned long long updateSeq; // @synthesize updateSeq;
@property(nonatomic) unsigned int stateFlag; // @synthesize stateFlag;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(nonatomic) unsigned int localCardId; // @synthesize localCardId;
@property(retain, nonatomic) NSString *announceMent; // @synthesize announceMent;
@property(nonatomic) _Bool bNearby; // @synthesize bNearby;
- (void).cxx_destruct;
- (long long)compareShareTime:(id)arg1;
- (_Bool)HasBeConsumed;
- (id)getCardTpInfo;
- (id)getCardInfo;
- (id)getCardTpId;
- (id)getCardId;
- (void)parseFromJSONDic:(id)arg1;
- (void)parseFromJSONStr:(id)arg1;
- (void)setupDataBeforeWriteDB;
- (void)setupDataFromDB;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_StrRes3;
- (const WCDBCondition_22fabacd *)db_StrRes2;
- (const WCDBCondition_22fabacd *)db_StrRes1;
- (const WCDBCondition_c6db074e *)db_IntRes3;
- (const WCDBCondition_c6db074e *)db_IntRes2;
- (const WCDBCondition_c6db074e *)db_IntRes1;
- (const WCDBCondition_22fabacd *)db_shareCardContent;
- (const WCDBCondition_22fabacd *)db_shareCardFromUser;
- (const WCDBCondition_22fabacd *)db_shareCardTitle;
- (const WCDBCondition_22fabacd *)db_shareCardLogoName;
- (const WCDBCondition_22fabacd *)db_shareCardShareInfoForDB;
- (const WCDBCondition_22fabacd *)db_shareCardInfoForDB;
- (const WCDBCondition_22fabacd *)db_shareCardTPInfoForDB;
- (const WCDBCondition_22fabacd *)db_markUserName;
- (const WCDBCondition_c6db074e *)db_expireTime;
- (const WCDBCondition_22fabacd *)db_shareUserName;
- (const WCDBCondition_c6db074e *)db_shareTime;
- (const WCDBCondition_c6db074e *)db_localUpdateTime;
- (const WCDBCondition_c6db074e *)db_updateTime;
- (const WCDBCondition_7786cbb5 *)db_localUpdateSeq;
- (const WCDBCondition_7786cbb5 *)db_updateSeq;
- (const WCDBCondition_c6db074e *)db_stateFlag;
- (const WCDBCondition_22fabacd *)db_appId;
- (const WCDBCondition_22fabacd *)db_cardTpId;
- (const WCDBCondition_22fabacd *)db_cardId;
- (const WCDBCondition_c6db074e *)db_localCardId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

