//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BasicSecurityInfo, NSString, PropertySecurityInfo, WCPayDigitalCertPayManageResp, WalletLockInfo;

@interface PaySecurityResp : NSObject
{
    NSString *_wx_security_title;
    NSString *_more_security_title;
    BasicSecurityInfo *_basic_security_item;
    WCPayDigitalCertPayManageResp *_cert_info;
    WalletLockInfo *_wallet_lock_info;
    PropertySecurityInfo *_property_security_info;
}

+ (id)GenFromDictionary:(id)arg1;
@property(retain, nonatomic) PropertySecurityInfo *property_security_info; // @synthesize property_security_info=_property_security_info;
@property(retain, nonatomic) WalletLockInfo *wallet_lock_info; // @synthesize wallet_lock_info=_wallet_lock_info;
@property(retain, nonatomic) WCPayDigitalCertPayManageResp *cert_info; // @synthesize cert_info=_cert_info;
@property(retain, nonatomic) BasicSecurityInfo *basic_security_item; // @synthesize basic_security_item=_basic_security_item;
@property(copy, nonatomic) NSString *more_security_title; // @synthesize more_security_title=_more_security_title;
@property(copy, nonatomic) NSString *wx_security_title; // @synthesize wx_security_title=_wx_security_title;
- (void).cxx_destruct;
- (void)genFromDic:(id)arg1;

@end

