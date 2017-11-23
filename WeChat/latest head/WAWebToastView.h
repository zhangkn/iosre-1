//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMUILabel, UIActivityIndicatorView, UIImageView;

@interface WAWebToastView : UIView
{
    double _fShowDuration;
    UIView *_bkgView;
    UIImageView *_tipIconView;
    MMUILabel *_label;
    UIActivityIndicatorView *_loadingIndicator;
    long long _count;
    id <WAWebToastViewDelegate> _delegate;
}

+ (void)adjustPosition:(id)arg1;
+ (void)removeToast;
+ (void)hideToast:(CDUnknownBlockType)arg1;
+ (id)showLoading:(id)arg1 duration:(double)arg2 inView:(id)arg3;
+ (id)showToast:(id)arg1 andText:(id)arg2 duration:(double)arg3 inView:(id)arg4;
@property(nonatomic) __weak id <WAWebToastViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)showLoading:(id)arg1;
- (void)showToast:(id)arg1 andText:(id)arg2;
- (void)adjustToastPosition;
- (void)setDuration:(double)arg1;
- (id)init;

@end

