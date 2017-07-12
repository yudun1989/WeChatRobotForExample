//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MMUIButton, MMUILabel, MMWebImageView, NSString, UIView;

@interface WAHomeCardCell : UICollectionViewCell
{
    _Bool _isInEdit;
    NSString *_userName;
    NSString *_iconUrl;
    NSString *_title;
    id <WAHomeCardCellDelegate> _delegate;
    UIView *_backView;
    MMWebImageView *_headImageView;
    MMUILabel *_titleLabel;
    MMUIButton *_deleteBtn;
}

@property(retain, nonatomic) MMUIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak id <WAHomeCardCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isInEdit; // @synthesize isInEdit=_isInEdit;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;
- (void)deleteButtonDidClick:(id)arg1;
- (void)setIsInEdit:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initDeleteBtn;
- (void)initTitleLabel;
- (void)initLogoImageView;
- (void)initBackView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

