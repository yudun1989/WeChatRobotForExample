//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMFullScreenViewController.h"

#import "MultiImageScrollViewDelegate.h"
#import "MultiPickImagePanelDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMLoadingView, MultiImageScrollView, MultiPickImagePanel, NSData, NSDictionary, NSMutableArray, NSString;

@interface MultiPickImageMsgViewController : MMFullScreenViewController <MultiImageScrollViewDelegate, MultiPickImagePanelDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, WCActionSheetDelegate, UIAlertViewDelegate>
{
    MultiImageScrollView *pagingScrollView;
    MultiPickImagePanel *m_vPickImagePanel;
    NSDictionary *m_oInitInfo;
    NSData *m_dtImg;
    id <ImageBrowseDelegate> m_delegate;
    MMLoadingView *m_loadingView;
    NSMutableArray *m_arrImageScrollView;
    _Bool _canSendOriginalImage;
}

@property(nonatomic) __weak id <ImageBrowseDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool canSendOriginalImage; // @synthesize canSendOriginalImage=_canSendOriginalImage;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)MultiPickImagePanelDidCancel:(unsigned int)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)MultiPickImagePanelAddImage;
- (void)MultiPickImagePanelDidFinishPickingImages:(id)arg1;
- (id)GetOriginImage;
- (id)GetImageByIndex:(unsigned int)arg1;
- (void)AddMediaInfo:(id)arg1;
- (void)multiImageScrollViewWillBeginDragging;
- (void)onSingleTap:(id)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)onSelectPhoto:(id)arg1;
- (void)onOperate:(id)arg1;
- (void)doCancel;
- (void)showStatusBar;
- (void)stopImageLoading;
- (void)startImageLoading;
- (void)doSelectPhoto;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initData;
- (void)initView;
- (void)initLoadingView;
- (void)UpdateScrollView;
- (void)initScrollView;
- (void)initNavigationBar;
- (void)OnReturn;
- (_Bool)isCurHDImage;
- (_Bool)isLongOriginImage;
- (id)getImageData;
- (_Bool)isShowHDImageAlert;
- (void)dealloc;
- (id)initWithImageInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

