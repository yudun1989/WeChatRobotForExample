//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIButton.h"

#import "SimpleImgInfoDelegate.h"

@class NSString, SimpleImgInfo, UIImageView, UILabel, UIView;

@interface MsgImageSquareThumbView : MMUIButton <SimpleImgInfoDelegate>
{
    SimpleImgInfo *m_imgInfo;
    NSString *m_imageLocalPath;
    NSString *m_imageSquarePath;
    id m_target;
    SEL m_shouldSelectSEL;
    _Bool m_isSelected;
    _Bool m_selectable;
    _Bool m_bLargeImg;
    UIView *m_iconView;
    UILabel *m_titleLabel;
    UILabel *m_timeLabel;
    UIView *m_timeBkgView;
    UIImageView *m_markSelectedImageView;
    UIImageView *_m_markExpiredImageView;
}

+ (id)compressImage:(id)arg1 isLargeImg:(_Bool)arg2;
+ (void)compressMsgImgTOSquareImg:(id)arg1;
@property(retain, nonatomic) UIImageView *m_markExpiredImageView; // @synthesize m_markExpiredImageView=_m_markExpiredImageView;
@property(nonatomic) _Bool m_bLargeImg; // @synthesize m_bLargeImg;
@property(nonatomic) _Bool m_selectable; // @synthesize m_selectable;
@property(nonatomic) _Bool m_isSelected; // @synthesize m_isSelected;
@property(retain, nonatomic) UIImageView *m_markSelectedImageView; // @synthesize m_markSelectedImageView;
@property(retain, nonatomic) UIView *m_timeBkgView; // @synthesize m_timeBkgView;
@property(retain, nonatomic) UILabel *m_timeLabel; // @synthesize m_timeLabel;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel;
@property(retain, nonatomic) UIView *m_iconView; // @synthesize m_iconView;
@property(retain, nonatomic) NSString *m_imageLocalPath; // @synthesize m_imageLocalPath;
@property(retain, nonatomic) SimpleImgInfo *m_imgInfo; // @synthesize m_imgInfo;
- (void).cxx_destruct;
- (void)setTarget:(id)arg1 forSelectAction:(SEL)arg2;
- (void)toggleSelection;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (void)updateSelectViewAnimated:(_Bool)arg1;
- (void)initSelectView;
- (void)startLoadImageWithGCD;
- (void)updateImagePath:(id)arg1;
- (void)startLoadImageSuqareImgDir;
- (void)setTimeLabel:(unsigned long long)arg1;
- (id)getColorForIconName:(id)arg1;
- (id)initWithImgInfo:(id)arg1 AndChatName:(id)arg2 selectable:(_Bool)arg3 largeImg:(_Bool)arg4;
- (id)initWithImgInfo:(id)arg1 AndChatName:(id)arg2 selectable:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

