//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface WCPayOverseaWalletTitle : NSObject <PBCoding>
{
    NSData *main;
    NSData *sub;
}

+ (void)initialize;
@property(retain, nonatomic) NSData *sub; // @synthesize sub;
@property(retain, nonatomic) NSData *main; // @synthesize main;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

