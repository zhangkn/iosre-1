//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol VoiceTransDelegate <NSObject>
- (void)onVoiceTransBegin:(NSString *)arg1;
- (void)onVoiceTransFail:(NSString *)arg1;
- (void)onVoiceTransEnd:(NSString *)arg1 FromCache:(_Bool)arg2;
- (void)onVoiceTransVoiceID:(NSString *)arg1 Result:(NSString *)arg2;
@end

