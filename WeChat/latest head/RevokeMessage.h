//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface RevokeMessage : NSObject <WCTTableCoding>
{
    long long m_n64SvrId;
    NSString *m_nsContent;
    unsigned int m_uiCreateTime;
    long long _MSG_REVOKE_COL_INTRES2;
    long long _MSG_REVOKE_COL_INTRES3;
    NSString *_MSG_REVOKE_COL_STRRES1;
    NSString *_MSG_REVOKE_COL_STRRES2;
    NSString *_MSG_REVOKE_COL_STRRES3;
}

+ (const struct WCTProperty *)MSG_REVOKE_COL_STRRES3;
+ (const struct WCTProperty *)MSG_REVOKE_COL_STRRES2;
+ (const struct WCTProperty *)MSG_REVOKE_COL_STRRES1;
+ (const struct WCTProperty *)MSG_REVOKE_COL_INTRES3;
+ (const struct WCTProperty *)MSG_REVOKE_COL_INTRES2;
+ (const struct WCTProperty *)m_uiCreateTime;
+ (const struct WCTProperty *)m_nsContent;
+ (const struct WCTProperty *)m_n64SvrId;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *MSG_REVOKE_COL_STRRES3; // @synthesize MSG_REVOKE_COL_STRRES3=_MSG_REVOKE_COL_STRRES3;
@property(retain, nonatomic) NSString *MSG_REVOKE_COL_STRRES2; // @synthesize MSG_REVOKE_COL_STRRES2=_MSG_REVOKE_COL_STRRES2;
@property(retain, nonatomic) NSString *MSG_REVOKE_COL_STRRES1; // @synthesize MSG_REVOKE_COL_STRRES1=_MSG_REVOKE_COL_STRRES1;
@property(nonatomic) long long MSG_REVOKE_COL_INTRES3; // @synthesize MSG_REVOKE_COL_INTRES3=_MSG_REVOKE_COL_INTRES3;
@property(nonatomic) long long MSG_REVOKE_COL_INTRES2; // @synthesize MSG_REVOKE_COL_INTRES2=_MSG_REVOKE_COL_INTRES2;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(nonatomic) long long m_n64SvrId; // @synthesize m_n64SvrId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

