//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WAAppTask;

@protocol WAAppTaskDelegate <NSObject>
- (void)taskDidClose:(WAAppTask *)arg1;
- (void)taskLeaveForeground:(WAAppTask *)arg1;
- (void)taskEnterForeground:(WAAppTask *)arg1;
@end

