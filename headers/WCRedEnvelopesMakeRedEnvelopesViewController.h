//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "ILinkEventExt.h"
#import "MMTableViewInfoDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"
#import "WCPayNoticeBannerDelegate.h"

@class MMTextView, NSString, RichTextView, UIButton, UILabel, UIView, WCBaseKeyboardToolBar, WCPayNoticeBanner, WCUITextField;

@interface WCRedEnvelopesMakeRedEnvelopesViewController : WCRedEnvelopesBaseViewController <WCPayNoticeBannerDelegate, UITextFieldDelegate, UITextViewDelegate, ILinkEventExt, MMTableViewInfoDelegate>
{
    id <WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate> m_delegate;
    int m_enMakeRedEnvelopesScene;
    WCUITextField *m_oSelectCountTextField;
    unsigned int m_uiSelectCount;
    UILabel *moneyLabel;
    UILabel *nsDefaultWishingLabel;
    WCUITextField *m_oMoneyTextField;
    MMTextView *m_textView;
    UIButton *normalRedEnvelopesButton;
    WCBaseKeyboardToolBar *m_keyboardBar;
    _Bool m_bDidBack;
    _Bool m_bCanHandleScrollViewDidChangedEvent;
    _Bool m_bNomalMoney;
    RichTextView *richTextView;
    UIView *m_oErrorView;
    UILabel *m_oErrorLabel;
    _Bool m_bError;
    _Bool m_bWaitFiveMintes;
    UIView *oCountSelectView;
    UIView *oSimpleMoneyView;
    long long m_inputErrorType;
    WCPayNoticeBanner *_banner;
}

@property(retain, nonatomic) WCPayNoticeBanner *banner; // @synthesize banner=_banner;
@property(nonatomic) int m_enMakeRedEnvelopesScene; // @synthesize m_enMakeRedEnvelopesScene;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)refreshButtonFiveMintes;
- (void)setButtonWaitFiveMin;
- (void)OnClickTailActivity;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)SetErrorTips;
- (void)SetLeftBarButtonClose;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)resetToCanHandleScrollViewChangedEnvent;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)OnMakeWCRedEnvelopesButtonClick;
- (void)adjustMoneyLabel;
- (void)checkDataError;
- (void)checkNextButtonStatus;
- (void)viewDidLoad;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hideErrorViewWithAnimation;
- (void)hideErrorView;
- (void)showErrorView:(id)arg1 ErrorType:(long long)arg2;
- (void)initErrorView;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadContentView;
- (void)initData;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)OnRightBarButtonClick;
- (void)OnLeftBarButtonDone;
- (_Bool)useTransparentNavibar;
- (void)initNavigationBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

