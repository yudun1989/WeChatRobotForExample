//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportHistoryPVItem : WAReportBaseItem
{
    unsigned long long _historyEnterScene;
    NSString *_appidList;
}

@property(copy, nonatomic) NSString *appidList; // @synthesize appidList=_appidList;
@property(nonatomic) unsigned long long historyEnterScene; // @synthesize historyEnterScene=_historyEnterScene;
- (void).cxx_destruct;
- (id)reportString;

@end
