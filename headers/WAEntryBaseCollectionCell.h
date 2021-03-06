//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MMWebImageView, NSString, UIButton, UIImageView, UILabel, UIView, VerticallyAlignedLabel;

@interface WAEntryBaseCollectionCell : UICollectionViewCell
{
    long long _mode;
    NSString *_userName;
    NSString *_iconUrl;
    NSString *_title;
    unsigned long long _debugMode;
    long long _index;
    id <WAEntryBaseCollectionCellDelegate> _delegate;
    MMWebImageView *_headImageView;
    VerticallyAlignedLabel *_titleLabel;
    UIView *_spliteLineView;
    UIButton *_deleteButton;
    UILabel *_debugLabel;
    UIImageView *_addIconView;
}

@property(retain, nonatomic) UIImageView *addIconView; // @synthesize addIconView=_addIconView;
@property(retain, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIView *spliteLineView; // @synthesize spliteLineView=_spliteLineView;
@property(retain, nonatomic) VerticallyAlignedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <WAEntryBaseCollectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)dragCellView;
- (id)snapShotCellImage;
- (void)iconDidClick;
- (void)deleteButtonDidClick:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

