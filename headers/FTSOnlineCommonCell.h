//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, FTSBussinessResultItem, MMWebImageView, NSMutableArray, UILabel;

@interface FTSOnlineCommonCell : MMTableViewCell
{
    FTSBussinessResultItem *_resultItem;
    NSMutableArray *_arrKeyword;
    AttributeLabel *_titleLabel;
    AttributeLabel *_descLabel;
    MMWebImageView *_thumbImageView;
    MMWebImageView *_detailIconImageView;
    UILabel *_detailLabel;
}

- (void).cxx_destruct;
- (void)updateResultItem:(id)arg1 arrKeyword:(id)arg2;
- (void)updateStatus:(_Bool)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

