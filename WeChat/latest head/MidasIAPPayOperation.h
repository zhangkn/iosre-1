//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MidasIAPOperationProtocol.h"
#import "MidasProductsRequestDelegate.h"

@class MidasCommunicator, MidasIAPBaseReq, MidasIAPUserInfo, MidasIapCurrencyMonitor, MidasIapOrderInfo, NSString, PayGoodsResovle, SKProductsRequest;

@interface MidasIAPPayOperation : NSObject <MidasIAPOperationProtocol, MidasProductsRequestDelegate>
{
    MidasCommunicator *_comm;
    SKProductsRequest *_productReq;
    MidasIapCurrencyMonitor *_currencyMonitor;
    id delegate;
    id <MidasIAPPayDelegate> outerDelegate;
    MidasIAPBaseReq *req;
    MidasIAPUserInfo *userInfo;
    MidasIapOrderInfo *orderInfo;
    PayGoodsResovle *_resolve;
}

@property(retain, nonatomic) PayGoodsResovle *resolve; // @synthesize resolve=_resolve;
@property(retain, nonatomic) MidasIapOrderInfo *orderInfo; // @synthesize orderInfo;
@property(retain, nonatomic) MidasIAPUserInfo *userInfo; // @synthesize userInfo;
@property(retain, nonatomic) MidasIAPBaseReq *req; // @synthesize req;
@property(nonatomic) __weak id <MidasIAPPayDelegate> outerDelegate; // @synthesize outerDelegate;
@property(nonatomic) __weak id delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)midas_requestDidFinish:(id)arg1;
- (void)midas_request:(id)arg1 midas_didFailWithError:(id)arg2;
- (void)midas_productsRequest:(id)arg1 midas_didReceiveResponse:(id)arg2;
- (void)removePersistance:(id)arg1;
- (void)addFailedProvidedProductId:(id)arg1 productId:(id)arg2;
- (id)transactionById:(id)arg1;
- (_Bool)shouldProcessTransactions:(id)arg1;
- (_Bool)shouldFinishNewTransactionsWhenFail:(long long)arg1;
- (_Bool)shouldFinishTransactionsWhenFail:(long long)arg1;
- (void)blockProcessFinalNewProvideError:(id)arg1;
- (void)blockProcessIapCancel:(id)arg1;
- (void)blockProcessIapErrorCode:(long long)arg1 msg:(id)arg2 workingStep:(int)arg3 error:(id)arg4;
- (void)blockProcessCgiError:(long long)arg1 inner:(id)arg2 msg:(id)arg3 workingStep:(int)arg4;
- (void)blockProcessNetError:(long long)arg1 workingStep:(int)arg2;
- (void)blockRequestMpInfoForResultPage;
- (void)blockFinalNewSuccess:(id)arg1;
- (void)blockFinalSuccess:(id)arg1;
- (void)getPayResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)blockProcessProvideCgiSuccess:(id)arg1 transactionID:(id)arg2;
- (void)blockProcessNewProvideCgiSuccess:(id)arg1;
- (void)blockDoProvide;
- (void)blockDoNewProvide:(id)arg1;
- (void)blockProvide;
- (_Bool)blockIAPPay;
- (void)blockProcessOrderCgi:(id)arg1;
- (void)blockProcessProductResp:(id)arg1;
- (void)blockProcessGetCfgCgi:(id)arg1;
- (void)onDestroy;
- (void)updatePendingStatus:(id)arg1 midasTransaction:(id)arg2;
- (_Bool)midas_paymentQueue:(id)arg1 midas_updatedTransactions:(id)arg2;
- (void)start;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

