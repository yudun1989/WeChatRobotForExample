//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SearchTextItem : NSObject
{
    NSString *_searchText;
    NSMutableArray *_arrKeywordItem;
}

@property(retain, nonatomic) NSMutableArray *arrKeywordItem; // @synthesize arrKeywordItem=_arrKeywordItem;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (_Bool)isMultiKeyword;
- (id)init;

@end

