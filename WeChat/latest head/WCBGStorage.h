//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WCBGStorage : NSObject
{
    unsigned int hash;
    NSMutableArray *albumList;
}

+ (id)fromBuffer:(id)arg1;
+ (id)parseFromXml:(id)arg1 preferLang:(id)arg2;
@property(retain, nonatomic) NSMutableArray *albumList; // @synthesize albumList;
@property(nonatomic) unsigned int hash; // @synthesize hash;
- (void).cxx_destruct;
- (id)toBuffer;
- (id)toXml;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

