//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

@class NSMutableArray, UIView;

@interface EmoticonBoardSliderView : UISlider
{
    NSMutableArray *m_dotLayers;
    UIView *m_trackView;
    _Bool m_isTrackMode;
    unsigned long long m_countOfDots;
    _Bool m_trackHighlighted;
    _Bool _hidesForSinglePage;
    double _maxWidth;
}

@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)updateSliderViewTrack;
- (void)setTrackHighlighted:(_Bool)arg1;
- (void)onTouchFinished;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

