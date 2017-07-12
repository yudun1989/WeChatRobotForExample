//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface FileSealer : NSObject
{
    NSMutableDictionary *_infos;
    NSRecursiveLock *_lock;
    id <FileSealerProtocol> _delegate;
}

+ (void)hookAllSystemCall;
+ (id)sharedSealer;
@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) __weak id <FileSealerProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeAllSealersForInnocent:(id)arg1;
- (_Bool)addSealerForInnocent:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
- (_Bool)addSealerForInnocent:(id)arg1 userInfo:(id)arg2;
- (_Bool)addSealerForInnocent:(id)arg1;
- (id)infos;
- (id)init;

@end

