//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray;

@interface ExposeItem : WXPBGeneratedMessage
{
    int uinListMemoizedSerializedSize;
    int timeListMemoizedSerializedSize;
    int countListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSMutableArray *countList; // @dynamic countList;
@property(retain, nonatomic) NSMutableArray *timeList; // @dynamic timeList;
@property(retain, nonatomic) NSMutableArray *uinList; // @dynamic uinList;

@end

