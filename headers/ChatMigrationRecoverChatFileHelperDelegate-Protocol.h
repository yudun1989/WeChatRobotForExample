//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@protocol ChatMigrationRecoverChatFileHelperDelegate <NSObject>
- (void)onRecoverEnd:(NSMutableDictionary *)arg1 isSuccess:(unsigned int)arg2;
- (void)onRecoverError:(int)arg1;
@end

