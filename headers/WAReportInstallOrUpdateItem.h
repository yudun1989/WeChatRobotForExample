//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportInstallOrUpdateItem : WAReportBaseItem
{
    unsigned int _eventID;
    unsigned int _eventResult;
    unsigned int _eventPercent;
    unsigned int _costTime;
    unsigned int _eventTime;
    NSString *_networkType;
}

@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) unsigned int costTime; // @synthesize costTime=_costTime;
@property(nonatomic) unsigned int eventPercent; // @synthesize eventPercent=_eventPercent;
@property(nonatomic) unsigned int eventResult; // @synthesize eventResult=_eventResult;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
- (void).cxx_destruct;
- (id)reportString;

@end
