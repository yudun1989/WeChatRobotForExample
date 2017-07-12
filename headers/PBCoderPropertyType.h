//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PBCoderPropertyType : NSObject
{
    _Bool _m_isSuperPlaceHolder;
    _Bool _m_isContainerUnpacked;
    unsigned int _m_index;
    int _m_cType;
    Class _m_cls;
    Class _m_subCls;
    SEL _m_getter;
    SEL _m_setter;
    id _m_blockGet;
    id _m_blockSet;
}

@property(nonatomic) _Bool m_isContainerUnpacked; // @synthesize m_isContainerUnpacked=_m_isContainerUnpacked;
@property(nonatomic) _Bool m_isSuperPlaceHolder; // @synthesize m_isSuperPlaceHolder=_m_isSuperPlaceHolder;
@property(retain, nonatomic) id m_blockSet; // @synthesize m_blockSet=_m_blockSet;
@property(retain, nonatomic) id m_blockGet; // @synthesize m_blockGet=_m_blockGet;
@property(readonly, nonatomic) SEL m_setter; // @synthesize m_setter=_m_setter;
@property(readonly, nonatomic) SEL m_getter; // @synthesize m_getter=_m_getter;
@property(readonly, nonatomic) Class m_subCls; // @synthesize m_subCls=_m_subCls;
@property(readonly, nonatomic) Class m_cls; // @synthesize m_cls=_m_cls;
@property(readonly, nonatomic) int m_cType; // @synthesize m_cType=_m_cType;
@property(nonatomic) unsigned int m_index; // @synthesize m_index=_m_index;
- (void).cxx_destruct;
- (id)initWithCType:(int)arg1 index:(unsigned int)arg2 getter:(SEL)arg3 setter:(SEL)arg4 blockGet:(id)arg5 blockSet:(id)arg6;
- (id)initWithClass:(Class)arg1 subClass:(Class)arg2 unpacked:(_Bool)arg3 index:(unsigned int)arg4 getter:(SEL)arg5 setter:(SEL)arg6 blockGet:(id)arg7 blockSet:(id)arg8;
- (id)initWithClass:(Class)arg1 subClass:(Class)arg2 index:(unsigned int)arg3 getter:(SEL)arg4 setter:(SEL)arg5 blockGet:(id)arg6 blockSet:(id)arg7;

@end

