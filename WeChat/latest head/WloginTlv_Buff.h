//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData;

@interface WloginTlv_Buff : WloginTlv
{
    NSData *acSigBuff;
}

@property(retain) NSData *acSigBuff; // @synthesize acSigBuff;
- (id)copy;
- (void)dealloc;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

