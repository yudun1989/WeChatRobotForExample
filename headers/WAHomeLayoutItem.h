//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAHomeLayoutItem : MMObject <PBCoding>
{
    unsigned int debugMode;
    NSString *userName;
    NSString *displayName;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode;
@property(copy, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (_Bool)isDebugMode;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

