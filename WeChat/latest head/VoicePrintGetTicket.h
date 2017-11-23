//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IDCHostMgrExt.h"
#import "IRsaCertMgrExt.h"

@class NSString;

@interface VoicePrintGetTicket : MMObject <IDCHostMgrExt, IRsaCertMgrExt>
{
    unsigned int idcRedirectCount;
    NSString *username;
    id <VoicePrintGetTicketDelegate> m_delegate;
}

@property(nonatomic) __weak id <VoicePrintGetTicketDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)OnGetVoicePrintLoginTicketAgain:(id)arg1;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getVoicePrintTicketRsa:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

