//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "MMWebViewDelegate.h"
#import "PBMessageObserverDelegate.h"

@class NSString;

@interface WebviewJSEventHandler_selectEnterpriseContact : WebviewJSEventHandlerBase <MMWebViewDelegate, PBMessageObserverDelegate>
{
}

- (void)onWebViewWillClose:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

