//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@interface WNSelectAllView : MMUIView
{
    id <WNSelectAllViewDelegate> delegate;
}

@property(nonatomic) __weak id <WNSelectAllViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onPaste:(id)arg1;
- (void)onCut:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)hideMenuItems;
- (void)showMenuItems;
- (void)hideView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

