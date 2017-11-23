//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WCDBSessionTimeIntervalObject : NSObject <WCTTableCoding>
{
    NSString *m_sessionName;
    unsigned int m_msgBeginTime;
    unsigned int m_msgEndTime;
}

+ (const struct WCTProperty *)m_msgEndTime;
+ (const struct WCTProperty *)m_msgBeginTime;
+ (const struct WCTProperty *)m_sessionName;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned int m_msgEndTime; // @synthesize m_msgEndTime;
@property(nonatomic) unsigned int m_msgBeginTime; // @synthesize m_msgBeginTime;
@property(retain, nonatomic) NSString *m_sessionName; // @synthesize m_sessionName;
- (void).cxx_destruct;
- (id)description;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

