//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WAAppTaskMgrExt.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface WARequestMgr : MMService <WAAppTaskMgrExt, MMService>
{
    NSMutableDictionary *_dicAppID2RequestHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

- (void).cxx_destruct;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (_Bool)verifyMethod:(id *)arg1;
- (id)getRequestHandler:(id)arg1;
- (id)getAndNewRequestHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2;
- (void)interruptRequestHandlerWithAppID:(id)arg1;
- (void)clearRequestHandlerWithAppID:(id)arg1;
- (void)clearAllRequestHandler;
- (_Bool)abortRequestTask:(id)arg1 taskID:(id)arg2 getError:(id *)arg3;
- (void)requestWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(_Bool)arg3 taskID:(id)arg4 url:(id)arg5 data:(id)arg6 httpHeaders:(id)arg7 method:(id)arg8 context:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (id)genRequestTaskID;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

