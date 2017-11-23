//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageMotionBlurFilter : GPUImageFilter
{
    int directionalTexelStepUniform;
    double _blurSize;
    double _blurAngle;
}

@property(nonatomic) double blurAngle; // @synthesize blurAngle=_blurAngle;
@property(nonatomic) double blurSize; // @synthesize blurSize=_blurSize;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)recalculateTexelOffsets;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)init;

@end

