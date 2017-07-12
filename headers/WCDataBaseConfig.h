//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCDBConfigCorrupt, WCDBConfigHash, WCDBConfigMultiHandles, WCDBConfigPerformance, WCDBConfigPerformanceOptimization;

@interface WCDataBaseConfig : NSObject
{
    WCDBConfigHash *m_hash;
    WCDBConfigMultiHandles *m_multiHandles;
    WCDBConfigCorrupt *m_corrupt;
    WCDBConfigPerformance *m_performance;
    WCDBConfigPerformanceOptimization *m_performanceOptimization;
}

+ (id)decode;
+ (void)encode:(id)arg1;
+ (id)sharedConfig;
+ (void)initialize;
@property(retain, nonatomic) WCDBConfigPerformanceOptimization *m_performanceOptimization; // @synthesize m_performanceOptimization;
@property(retain, nonatomic) WCDBConfigPerformance *m_performance; // @synthesize m_performance;
@property(retain, nonatomic) WCDBConfigCorrupt *m_corrupt; // @synthesize m_corrupt;
@property(retain, nonatomic) WCDBConfigMultiHandles *m_multiHandles; // @synthesize m_multiHandles;
@property(retain, nonatomic) WCDBConfigHash *m_hash; // @synthesize m_hash;
- (void).cxx_destruct;
- (void)synchronize;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

