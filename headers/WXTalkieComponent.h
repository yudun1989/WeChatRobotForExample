//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WXTalkieComponent : NSObject
{
    struct WXTalkieEngineAdapter *_engineAdapter;
    struct ILiveConEngine *_wxTalkEngine;
}

@property(nonatomic) struct ILiveConEngine *wxTalkEngine; // @synthesize wxTalkEngine=_wxTalkEngine;
@property(nonatomic) struct WXTalkieEngineAdapter *engineAdapter; // @synthesize engineAdapter=_engineAdapter;
- (void)dealloc;
- (id)init;

@end

