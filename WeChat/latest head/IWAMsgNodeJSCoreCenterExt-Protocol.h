//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol IWAMsgNodeJSCoreCenterExt <NSObject>

@optional
- (void)onJSCore:(unsigned int)arg1 openApp:(NSString *)arg2;
- (void)onJSCore:(unsigned int)arg1 updateHeight:(double)arg2;
- (void)onJSCoreIamgeUrlDownloaded:(NSString *)arg1;
- (void)onJSCore:(unsigned int)arg1 viewStateChanged:(unsigned long long)arg2;
- (void)onJSCore:(unsigned int)arg1 evaluatedResult:(NSArray *)arg2 reserve:(_Bool)arg3;
@end

