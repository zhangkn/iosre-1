//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface MultiTalkBannerItem : MMObject <WCTTableCoding>
{
    unsigned int roomid;
    unsigned int routeid;
    unsigned int createtime;
    unsigned int multiTalkStatus;
    NSString *wxGroupId;
    NSString *wxMultiTalkGroupId;
    unsigned long long roomkey;
    NSString *wxMultiTalkUserList;
    NSString *wxMultiTalkInviteNick;
}

+ (const struct WCTProperty *)multiTalkStatus;
+ (const struct WCTProperty *)wxMultiTalkInviteNick;
+ (const struct WCTProperty *)wxMultiTalkUserList;
+ (const struct WCTProperty *)createtime;
+ (const struct WCTProperty *)routeid;
+ (const struct WCTProperty *)roomkey;
+ (const struct WCTProperty *)roomid;
+ (const struct WCTProperty *)wxMultiTalkGroupId;
+ (const struct WCTProperty *)wxGroupId;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned int multiTalkStatus; // @synthesize multiTalkStatus;
@property(retain, nonatomic) NSString *wxMultiTalkInviteNick; // @synthesize wxMultiTalkInviteNick;
@property(retain, nonatomic) NSString *wxMultiTalkUserList; // @synthesize wxMultiTalkUserList;
@property(nonatomic) unsigned int createtime; // @synthesize createtime;
@property(nonatomic) unsigned int routeid; // @synthesize routeid;
@property(nonatomic) unsigned long long roomkey; // @synthesize roomkey;
@property(nonatomic) unsigned int roomid; // @synthesize roomid;
@property(retain, nonatomic) NSString *wxMultiTalkGroupId; // @synthesize wxMultiTalkGroupId;
@property(retain, nonatomic) NSString *wxGroupId; // @synthesize wxGroupId;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isBannerItemValid;
- (void)dealloc;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
