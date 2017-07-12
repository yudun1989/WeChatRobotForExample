//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseControlMgr.h"

#import "JSEventExt.h"
#import "WCPayOpenApiExt.h"

@class NSString;

@interface WCPayControlMgr : WCBaseControlMgr <JSEventExt, WCPayOpenApiExt>
{
}

- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)checkAndShowLocationTipsView:(int)arg1;
- (void)jsIdCardRealnameVerify:(id)arg1;
- (void)jsUploadIdCardSuccess:(id)arg1;
- (void)getNoticeBanners:(CDUnknownBlockType)arg1;
- (void)jsUnbindBankCard:(id)arg1;
- (void)jsSelectWalletCurrency:(id)arg1;
- (unsigned int)startUnbindBankCardLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startSelectWalletLogic:(id)arg1 event:(id)arg2;
- (unsigned int)startSelectWalletLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startJSApiRealnameVerifyLogic:(id)arg1 jsEvent:(id)arg2;
- (unsigned int)startRealnameVerifyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSelectVerifyTypeLogic:(id)arg1 Data:(id)arg2 scene:(int)arg3;
- (unsigned int)startSelectVerifyTypeLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSelectReceiveOrPayMoneyLogic:(id)arg1 Data:(id)arg2;
- (_Bool)isOverseaNativeWallet;
- (_Bool)isHtml5Wallet;
- (void)reportStartWeChatPayFromAppOk;
- (void)reportStartWeChatPayFromAppAppIdNil;
- (void)reportStartWeChatPayFromAppPayInfoNil;
- (void)reportStartWeChatPayFromAppRealStart;
- (void)reportStartWeChatPayFromAppRequestDelayStart;
- (unsigned int)startOpenTouchIDAuthLogic:(id)arg1 Data:(id)arg2 Action:(unsigned long long)arg3;
- (unsigned int)startOpenHtml5WalletLogic:(id)arg1 data:(id)arg2;
- (unsigned int)startPatternLockLogic:(id)arg1 andPatternLockScene:(long long)arg2 andPatternLockLogicDelegate:(id)arg3 isPresent:(_Bool)arg4;
- (unsigned int)startJSApiGetWebPayCheckoutCounterLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startJSApiVerifyPayPasswordLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startJSApiOpenWCPaySpecialViewLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startJSApiAuthenticationLogic:(id)arg1 JSEvent:(id)arg2 Scene:(unsigned int)arg3 WithOpenViewScene:(unsigned int)arg4;
- (unsigned int)startJSApiAuthenticationLogic:(id)arg1 JSEvent:(id)arg2 Scene:(unsigned int)arg3;
- (unsigned int)startFixedAmountFacingReceiveMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startFacingReceiveMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startRetrySendTransferMessageLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSenderTransferMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startReceiverConfirmTransferMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startTransferMoneyLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startTransferMoneyLogic:(id)arg1 WithSessionUserName:(id)arg2 placeHolderMoney:(long long)arg3 disableEditMoney:(_Bool)arg4;
- (unsigned int)startTransferMoneyLogic:(id)arg1 WithSessionUserName:(id)arg2 WithRootViewController:(id)arg3;
- (unsigned int)startTransferMoneyLogic:(id)arg1 WithSessionUserName:(id)arg2;
- (unsigned int)startTransferMoneyLogic:(id)arg1 WithA8KeyUrl:(id)arg2;
- (unsigned int)startTransferMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startBalanceFetchMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startBalanceSaveMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startBalanceDetailLogic:(id)arg1 Data:(id)arg2 Scene:(unsigned int)arg3;
- (unsigned int)startBalanceDetailLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCreditPayUnbindLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCreditPayCardDetailLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCreditPayIncreaseLimitAndUpdateCardInfoLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCreditPayIncreaseLimitLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCreateWeixinZXCreditCardLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startCreateWeixinZXCreditCardLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startUnfreezeOfflinePayLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startFastChangeOfflinePayFeeLimitLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startShareCardOfflinePayLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startChangeOfflinePayFeeLimitLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCreateOfflinePayLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startOfflinePayLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startPaidSuccessLogic:(id)arg1 Data:(id)arg2 IAPOrderDetail:(id)arg3 SituationType:(int)arg4;
- (unsigned int)startPayMoneyFromInnerPayLogic:(id)arg1 RequestStruct:(id)arg2 ExtraInfo:(id)arg3;
- (void)jsGetWCPayRealnameVerify:(id)arg1;
- (void)jsSendC2CSecureMessage:(id)arg1;
- (void)jsVerifyWCPayPayPwd:(id)arg1;
- (void)jsGetWebPayCheckoutCounterRequst:(id)arg1;
- (void)jsOpenWCPaySpecialView:(id)arg1;
- (void)jsGetTransferMoneyRequest:(id)arg1;
- (void)jsGetBrandWCPayCreateCreditCardRequest:(id)arg1;
- (void)jsGetBrandWCPayAddCardRequeset:(id)arg1;
- (void)jsGetBrandWCPayRequeset:(id)arg1;
- (void)OnWCPayOpenApi:(id)arg1 withAppID:(id)arg2;
- (void)delayStartWCPayByOpenApi:(id)arg1 withAppID:(id)arg2;
- (unsigned int)startPayMoneyFromMallLogic:(id)arg1 Data:(id)arg2 ProductInfo:(id)arg3;
- (unsigned int)startPayMoneyFromBrandContactLocalViewLogic:(id)arg1 HandleURL:(id)arg2;
- (unsigned int)startPayMoneyFromBrandContactLocalViewLogic:(id)arg1 Data:(id)arg2 HandleURL:(id)arg3;
- (unsigned int)startPayMoneyFromQRCodeLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startPayMoneyFromAppLogic:(id)arg1 info:(id)arg2 appID:(id)arg3;
- (unsigned int)startPayMoneyFromWAPPayLogic:(id)arg1 HandleUrl:(id)arg2;
- (unsigned int)startRetrySendC2CMessageLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSendC2CMessageJSApiLogic:(id)arg1 jsEvent:(id)arg2;
- (unsigned int)startPayMoneyFromBrandContactJSApiLogic:(id)arg1 jsEvent:(id)arg2;
- (unsigned int)startDisplayOrderHistoryLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startResetPayPwdLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startModifyPayPwdLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startCardControlLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startPayCardList:(id)arg1 Scene:(int)arg2;
- (unsigned int)startPayCardList:(id)arg1;
- (unsigned int)startPayMoneyLogic:(id)arg1 DeeplinkLinkUrl:(id)arg2;
- (unsigned int)startPayMoneyLogic:(id)arg1 RequestKey:(id)arg2 Scene:(int)arg3;
- (unsigned int)startPayMoneyLogic:(id)arg1 RequestKey:(id)arg2;
- (unsigned int)startPayMoneyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startAddPayCardLogic:(id)arg1 Data:(id)arg2 Scene:(int)arg3;
- (unsigned int)startAddPayCardLogic:(id)arg1 JSEvent:(id)arg2;
- (unsigned int)startAddPayCardLogic:(id)arg1 Data:(id)arg2;
- (void)cancelAllLogicByOpenApi;
- (void)cancelAllLogic;
- (void)stopLogic:(unsigned int)arg1;
- (void)clearAndStopTheSameLogic:(Class)arg1;
- (void)stopCurrentLogic;
- (unsigned int)startLogic:(id)arg1;
- (void)ClearWCPayPayMoneyLogicFromStartClass:(Class)arg1;
- (_Bool)IsDoingWCPayPayMoneyLogic:(Class)arg1;
- (_Bool)IsDoingWCPayLogic:(Class)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

