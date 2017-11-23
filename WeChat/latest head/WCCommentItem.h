//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, WCUserComment;

@interface WCCommentItem : NSObject <NSCoding>
{
    NSString *toUserName;
    NSString *itemID;
    NSString *content;
    int type;
    int source;
    unsigned int createTime;
    WCUserComment *refComment;
    unsigned int inQueueTime;
    NSString *clientID;
    unsigned long long startTime;
    unsigned long long endTime;
    unsigned int commentFlag;
    unsigned long long _failedType;
}

@property(nonatomic) unsigned long long failedType; // @synthesize failedType=_failedType;
@property(nonatomic) unsigned int commentFlag; // @synthesize commentFlag;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(nonatomic) unsigned int inQueueTime; // @synthesize inQueueTime;
@property(retain, nonatomic) WCUserComment *refComment; // @synthesize refComment;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) int source; // @synthesize source;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID;
@property(retain, nonatomic) NSString *toUserName; // @synthesize toUserName;
- (void).cxx_destruct;
- (id)toServerObject;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

