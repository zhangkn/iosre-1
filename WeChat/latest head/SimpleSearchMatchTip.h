//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SimpleSearchMatchTip : NSObject
{
    int _matchType;
    NSString *_searchText;
    NSString *_matchWord;
    NSString *_matchWordTip;
}

@property(retain, nonatomic) NSString *matchWordTip; // @synthesize matchWordTip=_matchWordTip;
@property(retain, nonatomic) NSString *matchWord; // @synthesize matchWord=_matchWord;
@property(nonatomic) int matchType; // @synthesize matchType=_matchType;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;

@end

