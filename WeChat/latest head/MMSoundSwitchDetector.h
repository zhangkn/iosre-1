//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface MMSoundSwitchDetector : MMObject
{
    unsigned int _soundId;
    CDUnknownBlockType _completeHandler;
    double _beginTime;
}

+ (id)sharedInstance;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
@property(nonatomic) unsigned int soundId; // @synthesize soundId=_soundId;
- (void).cxx_destruct;
- (void)complete;
- (void)dealloc;
- (void)checkSoundSwitchStatus:(CDUnknownBlockType)arg1;
- (id)init;

@end

