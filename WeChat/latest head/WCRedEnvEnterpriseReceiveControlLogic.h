//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "WCAtomicRedEnvReceiveHomeViewDelegate.h"
#import "WCAtomicRedEnvReceiveWelcomeViewDelegate.h"
#import "WCFestivalRedEnvFinishViewDelegate.h"
#import "WCFestivalRedEnvShareViewDelegate.h"
#import "WCPayLogicMgrExt.h"
#import "WCRedEnvelopesEnterpriseDetailViewControllerDelegate.h"
#import "WCRedEnvelopesMultiSelectContactsViewControllerDelegate.h"
#import "WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate.h"
#import "WCRedEnvelopesSessionSelectViewControllerDelegate.h"

@class JSEvent, NSString, WCAtomicRedEnvReceiveHomeView, WCAtomicRedEnvReceiveWelcomeView, WCFestivalRedEnvFinishView, WCFestivalRedEnvShareView;

@interface WCRedEnvEnterpriseReceiveControlLogic : WCRedEnvelopesControlLogic <WCAtomicRedEnvReceiveHomeViewDelegate, WCAtomicRedEnvReceiveWelcomeViewDelegate, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, WCRedEnvelopesEnterpriseDetailViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate, WCFestivalRedEnvShareViewDelegate, WCFestivalRedEnvFinishViewDelegate, WCPayLogicMgrExt>
{
    int m_scene;
    WCAtomicRedEnvReceiveHomeView *m_oIntroView;
    WCAtomicRedEnvReceiveWelcomeView *m_oWelcomeView;
    WCFestivalRedEnvShareView *m_oShareView;
    WCFestivalRedEnvFinishView *m_oFinishView;
    JSEvent *m_jsEvent;
    _Bool bStopedLogic;
    id <WCRedEnvWeAppDelegate> _logicDelegate;
}

@property(nonatomic) __weak id <WCRedEnvWeAppDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(retain, nonatomic) JSEvent *m_jsEvent; // @synthesize m_jsEvent;
@property(nonatomic) int m_scene; // @synthesize m_scene;
- (void).cxx_destruct;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onRealnameActionClick:(id)arg1;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)showDetailView;
- (void)WCFestivalRedEnvFinishViewToShare;
- (void)WCFestivalRedEnvFinishViewBack;
- (void)OnAsyncBizSubcribeResponse:(id)arg1 Error:(id)arg2;
- (void)WCFestivalRedEnvShareViewToFinish;
- (void)WCFestivalRedEnvShareViewBack;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnGoToBalanceDetail;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
- (void)WCAtomicRedEnvReceiveWelcomeViewShowDetail;
- (void)WCAtomicRedEnvReceiveWelcomeViewBack;
- (void)WCAtomicRedEnvReceiveHomeViewOpenList;
- (void)WCAtomicRedEnvReceiveHomeViewOpenRedEnvelopesInner:(_Bool)arg1;
- (void)WCAtomicRedEnvReceiveHomeViewOpenRedEnvelopes:(_Bool)arg1;
- (void)WCAtomicRedEnvReceiveHomeViewBack;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)OnCheckBizEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnOpenBizEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnReceiveBizEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnSendShareEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)closeFinishViewAndStopLogic;
- (unsigned int)getStatFromScene;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (void)OnOpenAtomicEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnReceiveAtomicEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)stopLoading;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

