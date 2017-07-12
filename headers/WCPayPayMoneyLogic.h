//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IWCPayControlLogicExt.h"
#import "LocationRetrieveDelegate.h"
#import "WCBaseControlMgrExt.h"
#import "WCPayAutoDeductSettingViewControllerDelegate.h"
#import "WCPayAvaliablePayCardListViewDelegate.h"
#import "WCPayBalanceFetchMoneyViewControllerDelegate.h"
#import "WCPayBalanceSaveMoneyViewControllerDelegate.h"
#import "WCPayBindedCardListViewControllerDelegate.h"
#import "WCPayCouponsListViewDelegate.h"
#import "WCPayFillCardInfoViewControllerDelegate.h"
#import "WCPayFillCardNumberViewControllerDelegate.h"
#import "WCPayOrderDetailViewControllerDelegate.h"
#import "WCPayOrderPayConfirmViewDelegate.h"
#import "WCPayOverseasCarTipDelegate.h"
#import "WCPayPaidOrderDetailViewControllerDelegate.h"
#import "WCPayPayPwdViewControllerDelegate.h"
#import "WCPayResetBalanceTelephoneViewControllerDelegate.h"
#import "WCPayResetBindedCardInfoViewControllerDelegate.h"
#import "WCPayResetPhoneViewViewControllerDelegate.h"
#import "WCPaySpecifySelectePayCardListViewDelegate.h"
#import "WCPayTranferMoneyPaidSuccessViewControllerDelegate.h"
#import "WCPayVerifyPayCardViewControllerDelegate.h"

@class ABTestItem, LocationRetriever, NSCache, NSString, UIView, WCPayAddPayCardLogic, WCPayAvaliablePayCardListView, WCPayOverseasCardTipView;

@interface WCPayPayMoneyLogic : WCPayControlLogic <WCPayFillCardInfoViewControllerDelegate, WCPayFillCardNumberViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayOrderDetailViewControllerDelegate, WCPayPaidOrderDetailViewControllerDelegate, WCPayResetPhoneViewViewControllerDelegate, WCPayResetBindedCardInfoViewControllerDelegate, WCPayBindedCardListViewControllerDelegate, WCPayResetBalanceTelephoneViewControllerDelegate, WCPayOrderPayConfirmViewDelegate, WCPayOverseasCarTipDelegate, WCPayBalanceSaveMoneyViewControllerDelegate, WCPayBalanceFetchMoneyViewControllerDelegate, WCPayAvaliablePayCardListViewDelegate, WCPayTranferMoneyPaidSuccessViewControllerDelegate, WCPayCouponsListViewDelegate, WCPaySpecifySelectePayCardListViewDelegate, WCBaseControlMgrExt, IWCPayControlLogicExt, WCPayAutoDeductSettingViewControllerDelegate, LocationRetrieveDelegate>
{
    id <WCPayPayMoneyLogicDelegate> m_payMoneyLogicDelegate;
    WCPayOverseasCardTipView *m_overseasCardTipView;
    WCPayAddPayCardLogic *m_oWCPayAddPayCardLogic;
    LocationRetriever *locationReceiver;
    _Bool m_bUsingTouchIDAuth;
    _Bool m_bResetBalanceTeling;
    ABTestItem *_payABTestItem;
    _Bool m_bRetryPWD;
    UIView *oSubView;
    NSCache *internalCache;
    _Bool m_bIsUploadIdBack;
    WCPayAvaliablePayCardListView *m_avaliablePayCardView;
    _Bool m_shouldShowConfirmViewAfterGetOrderDetail;
    _Bool m_bNeedPreShowOrderDetailToGetPayCardList;
    _Bool m_bNeedForceDissmissSuccessViewNotAnimation;
    _Bool m_bPresentSuccessViewController;
    _Bool m_bNotShowSuccessViewController;
    Class m_oStartedClass;
}

@property(retain, nonatomic) Class m_oStartedClass; // @synthesize m_oStartedClass;
@property(nonatomic) _Bool m_bNotShowSuccessViewController; // @synthesize m_bNotShowSuccessViewController;
@property(nonatomic) _Bool m_bPresentSuccessViewController; // @synthesize m_bPresentSuccessViewController;
@property(nonatomic) _Bool m_bNeedForceDissmissSuccessViewNotAnimation; // @synthesize m_bNeedForceDissmissSuccessViewNotAnimation;
@property(nonatomic) _Bool m_bNeedPreShowOrderDetailToGetPayCardList; // @synthesize m_bNeedPreShowOrderDetailToGetPayCardList;
@property(nonatomic) __weak id <WCPayPayMoneyLogicDelegate> m_payMoneyLogicDelegate; // @synthesize m_payMoneyLogicDelegate;
- (void).cxx_destruct;
- (_Bool)checkRealNameBlockWithData:(id)arg1;
- (void)OnResetPasswordCancel:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)OnUploadIdSuccess:(id)arg1;
- (void)OnRealnameVerifySuccessNotification:(id)arg1;
- (void)OnAutoDeductSettingCancel;
- (void)OnFooterButtonClick:(id)arg1;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)gotoRootViewControllerIfNotInDetailView:(_Bool)arg1;
- (void)OnAuthenticationResetBalanceTelPayVerifySMS:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnAuthenticationResetBalanceTelPay:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnHandleSpecialPayError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnSelectOtherCardToPay;
- (void)OnNewCardToPay;
- (void)OnValidError:(id)arg1;
- (void)OnCVVError:(id)arg1;
- (void)OnPhoneNumberError:(id)arg1;
- (void)OnCVVAndValidError:(id)arg1;
- (void)onAlertResetCVVAndValidDate;
- (void)OnAlertResetPhoneNumber;
- (void)onAlertResetValidDate;
- (void)onAlertResetCVV;
- (void)OnHandleVerifiedSMSString:(id)arg1;
- (void)OnAuthenticationPayVerifyBind:(id)arg1;
- (void)StartPayOrderQuery;
- (void)RetryGetOrderDetailInfoAfterPaidError:(id)arg1;
- (void)OnQueryOrderWhenPaidError:(id)arg1 isDelay:(_Bool)arg2 queryOrderInterval:(long long)arg3 queryOrderCount:(long long)arg4;
- (id)getPayQueryOrderParams;
- (id)getRetryQueryOrderCacheKey:(id)arg1;
- (void)OnQueryOrderWhenPaidError:(id)arg1;
- (void)QueryOrderDetailAfterPaidError;
- (void)OnGetOrderDetailInfoAfterPaidError:(id)arg1 Error:(id)arg2;
- (void)OnSetWCPayPasswordInPay:(id)arg1 Error:(id)arg2;
- (void)OnAuthenticationPayVerifySMS:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnAuthenticationPay:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 Error:(id)arg3;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetOrderDetailInfo:(id)arg1 BindQueryInfo:(id)arg2 Error:(id)arg3;
- (id)favDesc:(id)arg1;
- (id)getTouchIDReasonFromData:(id)arg1;
- (void)onActionSheetEndPay;
- (void)onActionSheetCancelTouchId;
- (void)onActionSheetChangingOtherCards;
- (void)onActionSheetUsingPwdAuth;
- (void)showConfirmTouchIDOrConfirmViewWithData:(id)arg1;
- (void)showSafariWithData:(id)arg1;
- (void)disabelTouchIDAuthForCurrentOrder;
- (void)performTouchID;
- (void)showTouchIDAuthView:(id)arg1;
- (void)onTouhcAuthConfirmAlertOK:(id)arg1;
- (void)onTouhcAuthConfirmAlertCancel:(id)arg1;
- (void)OnPayMoneyPayRetry;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)WCPayTranferMoneyPaidSuccessViewControllerViewDidAppear;
- (void)WCPayTranferMoneyPaidSuccessViewControllerBack:(_Bool)arg1;
- (void)WCPayBalanceFetchMoneyViewControllerBack:(_Bool)arg1;
- (void)WCPayBalanceSaveMoneyViewControllerBack:(_Bool)arg1;
- (void)onOpenTouchIDAuth;
- (void)showOpenTouchIDConfirmIfNeed;
- (void)OnWCPayPaidOrderDetailViewControllerShowOpenTouchIDConfirmViewIfNeed;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)SetPayPwdNext:(id)arg1;
- (void)OnResetBindedCardInfoNext:(id)arg1;
- (void)OnResetBindedCardInfoCancel;
- (void)OnResetPhoneNext:(id)arg1;
- (void)OnResetPhoneCancel;
- (void)VerifyPayCardModifyPhone:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)FillCardInfoReadAgreement;
- (void)FillCardInfoNext:(id)arg1;
- (void)FillCardInfoCancel;
- (_Bool)NeedShowServiceAppInfo;
- (void)FillCardNumberShowedAllFavorInfo;
- (void)FillCardNumberConfirmWithImage:(id)arg1 cardNumber:(id)arg2 data:(id)arg3;
- (void)FillCardNumberNext:(id)arg1;
- (void)FillCardNumberCancel:(_Bool)arg1;
- (void)WCPayResetBalanceTelephoneViewControllerNext:(id)arg1;
- (void)WCPayResetBalanceTelephoneViewControllerBack;
- (void)OnBindedCardListNewCardClicked;
- (void)OnBindedCardListNext:(id)arg1;
- (void)OnBindedCardListBack;
- (void)OnResetNewTelToResetBalanceTel;
- (void)OnContinueResetBalanceTel;
- (void)RepeatInputPayPwd:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)onOrderPayConfirmViewPerformTouchID;
- (void)onOrderPayConfirmViewGotoPasswordAuth;
- (void)onOrderPayConfirmViewGotoTouchIDAuth;
- (void)onOrderPayConfirmViewCancel;
- (void)OnOrderPayChangeConpons;
- (void)onOrderPayChangeCard;
- (void)doAuthenticationPayWithPwd:(id)arg1 isTouchIDAuth:(_Bool)arg2;
- (void)onOrderPayConfirmViewPay:(id)arg1;
- (void)orderDetailPay:(id)arg1 checkTouchID:(_Bool)arg2;
- (void)OrderDetailAddOrderCard:(id)arg1;
- (void)OrderDetailClickCoupousInfo;
- (void)OrderDetailBack;
- (void)OrderDetailPay:(id)arg1;
- (void)OrderDetailAdd:(id)arg1;
- (void)onPushWebView:(id)arg1;
- (void)onDisagree;
- (void)onAgree:(_Bool)arg1;
- (_Bool)needShowOverseasCardProtocalView;
- (void)OnWCPayCouponsListViewNext:(id)arg1;
- (void)OnWCPayCouponsListViewBack;
- (void)OnWCPaySpecifySelectePayCardListViewBackAddCard;
- (void)OnWCPaySpecifySelectePayCardListViewNext:(id)arg1;
- (void)OnWCPaySpecifySelectePayCardListViewBack;
- (void)OnWCPayAvaliablePayCardListViewWebViewReturn:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewPushWebView:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewAddPayCard;
- (void)OnWCPayAvaliablePayCardListViewNext:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewBack;
- (void)OnWCPayAvaliablePayCardListViewCancel;
- (_Bool)checkHandlePrepayErrorPath;
- (_Bool)checkBankAvailable:(id)arg1;
- (id)getWCPayAuthenticationResetBalanceTelPayVerifySMSStruct:(id)arg1;
- (id)getWCPayAuthenticationResetBalanceTelPay:(id)arg1;
- (id)getVerifyBindStruct;
- (id)GetWCPaySetWCPayPasswordStruct:(id)arg1;
- (id)getWCPayAuthenticationPayVerifySMSStruct:(id)arg1;
- (id)getWCPayAuthenticationPay:(id)arg1;
- (void)showOrderPaySuccess;
- (void)preShowOrderPaySuccess;
- (void)showResetBindedCardInfoWithCVV:(_Bool)arg1 ValidDate:(_Bool)arg2;
- (void)startBindCardToPay:(id)arg1;
- (void)startBindCardToVerifiedUser:(id)arg1;
- (void)startBindCardToSafariPay:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)OnHandleSafariJumpedLogic;
- (void)OnRetryPayMoneyFromPwdError;
- (id)getTransactionId;
- (int)getABTestType;
- (void)showGiveUpBindAlert;
- (void)OnAlertGiveUpBind;
- (void)mergeOrderDetail:(id)arg1;
- (void)mergePaymentOrderDetail:(id)arg1;
- (void)mergeBalanceMoneyContorlOrderDetail:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (_Bool)isLogicJumpedToSafari;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

