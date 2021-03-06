//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMessageWrapExt.h"
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class CMessageWrap, ImageInfo, MMAsset, MessageExpItem, NSData, NSString;

@interface CExtendInfoOfImg : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    unsigned int m_uiHDImgSize;
    unsigned int m_uiNormalImgSize;
    NSString *m_nsImgHDUrl;
    NSString *m_nsImgMidUrl;
    NSData *m_dtImg;
    ImageInfo *m_oImageInfo;
    NSString *m_nsAesKey;
    NSString *m_nsMsgThumbUrl;
    NSString *m_nsMsgThumbAesKey;
    unsigned int m_uiMsgThumbSize;
    unsigned int m_uiMsgThumbWidth;
    unsigned int m_uiMsgThumbHeight;
    NSString *m_nsAutoDownloadControl;
    NSString *m_nsCommentUrl;
    NSString *m_nsMsgMd5;
    MessageExpItem *m_oMsgExpItem;
    _Bool m_isCanUpload;
    _Bool m_isForNewYear;
    unsigned int m_uiScene;
    CMessageWrap *m_refMessageWrap;
    MMAsset *m_asset;
    double m_fLongitude;
    double m_fLatitude;
    NSString *m_AttachedContent;
    NSData *_m_dtSenderMidImg;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(retain, nonatomic) NSData *m_dtSenderMidImg; // @synthesize m_dtSenderMidImg=_m_dtSenderMidImg;
@property(retain, nonatomic) NSString *m_nsMsgMd5; // @synthesize m_nsMsgMd5;
@property(retain, nonatomic) NSString *m_AttachedContent; // @synthesize m_AttachedContent;
@property(nonatomic) double m_fLatitude; // @synthesize m_fLatitude;
@property(nonatomic) double m_fLongitude; // @synthesize m_fLongitude;
@property(nonatomic) _Bool m_isForNewYear; // @synthesize m_isForNewYear;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) _Bool m_isCanUpload; // @synthesize m_isCanUpload;
@property(retain, nonatomic) MMAsset *m_asset; // @synthesize m_asset;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(retain, nonatomic) ImageInfo *m_oImageInfo; // @synthesize m_oImageInfo;
@property(retain, nonatomic) NSData *m_dtImg; // @synthesize m_dtImg;
@property(nonatomic) unsigned int m_uiNormalImgSize; // @synthesize m_uiNormalImgSize;
@property(retain, nonatomic) NSString *m_nsAutoDownloadControl; // @synthesize m_nsAutoDownloadControl;
@property(nonatomic) unsigned int m_uiMsgThumbWidth; // @synthesize m_uiMsgThumbWidth;
@property(nonatomic) unsigned int m_uiMsgThumbSize; // @synthesize m_uiMsgThumbSize;
@property(nonatomic) unsigned int m_uiMsgThumbHeight; // @synthesize m_uiMsgThumbHeight;
@property(nonatomic) unsigned int m_uiHDImgSize; // @synthesize m_uiHDImgSize;
@property(retain, nonatomic) MessageExpItem *m_oMsgExpItem; // @synthesize m_oMsgExpItem;
@property(retain, nonatomic) NSString *m_nsMsgThumbUrl; // @synthesize m_nsMsgThumbUrl;
@property(retain, nonatomic) NSString *m_nsMsgThumbAesKey; // @synthesize m_nsMsgThumbAesKey;
@property(retain, nonatomic) NSString *m_nsImgMidUrl; // @synthesize m_nsImgMidUrl;
@property(retain, nonatomic) NSString *m_nsImgHDUrl; // @synthesize m_nsImgHDUrl;
@property(retain, nonatomic) NSString *m_nsCommentUrl; // @synthesize m_nsCommentUrl;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
- (void).cxx_destruct;
- (id)GetDownloadThumbPath;
- (id)GetThumbPath;
- (_Bool)IsHDImg;
- (void)setImage:(id)arg1 withData:(id)arg2 isLongOriginImage:(_Bool)arg3;
- (void)setImage:(id)arg1 withImageInfo:(id)arg2 isLongOriginImage:(_Bool)arg3;
- (void)setImage:(id)arg1 isLongOriginImage:(_Bool)arg2;
- (void)setImage:(id)arg1 withData:(id)arg2 withImageInfo:(id)arg3 isLongOriginImage:(_Bool)arg4;
- (double)currentCompressPicQuality;
- (void)UpdateContent:(id)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

