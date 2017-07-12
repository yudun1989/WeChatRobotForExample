//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface GoogleContact : NSObject <PBCoding>
{
    _Bool isInMyContactList;
    _Bool isOnlyInOtherContact;
    unsigned int sex;
    NSString *googleId;
    NSString *nickName;
    NSString *gmail;
    NSString *wxUsrname;
    NSString *wxNickname;
    NSString *headImgUrl;
    NSString *headHDImgUrl;
    NSString *googleImageUrl;
    NSMutableArray *emailList;
    NSString *m_nsAntispamTicket;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *m_nsAntispamTicket; // @synthesize m_nsAntispamTicket;
@property(nonatomic) _Bool isOnlyInOtherContact; // @synthesize isOnlyInOtherContact;
@property(retain, nonatomic) NSMutableArray *emailList; // @synthesize emailList;
@property(retain, nonatomic) NSString *googleImageUrl; // @synthesize googleImageUrl;
@property(retain, nonatomic) NSString *headHDImgUrl; // @synthesize headHDImgUrl;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl;
@property(retain, nonatomic) NSString *wxNickname; // @synthesize wxNickname;
@property(retain, nonatomic) NSString *wxUsrname; // @synthesize wxUsrname;
@property(nonatomic) _Bool isInMyContactList; // @synthesize isInMyContactList;
@property(nonatomic) unsigned int sex; // @synthesize sex;
@property(retain, nonatomic) NSString *gmail; // @synthesize gmail;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *googleId; // @synthesize googleId;
- (void).cxx_destruct;
- (id)getDisplayContactDataFromGContactAndDB;
- (long long)compareGoogleContactsAscending:(id)arg1;
- (void)dealloc;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

