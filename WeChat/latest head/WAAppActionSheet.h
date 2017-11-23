//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IUiUtilExt.h"

@class CContact, NSArray, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UIView, UIVisualEffectView;

@interface WAAppActionSheet : MMObject <IUiUtilExt>
{
    CContact *m_contact;
    unsigned long long m_appType;
    NSArray *m_btnTitles;
    NSArray *m_debugTitles;
    NSString *m_cancelTitle;
    NSString *m_destructiveTitle;
    UIImage *m_fakeViewImage;
    id <WAAppActionSheetDelegate> m_delegate;
    UIView *_interateView;
    UIView *_containerView;
    UIVisualEffectView *_blurView;
    NSMutableArray *_btnArray;
    UIButton *_destructiveBtn;
    UIButton *_cancelBtn;
    UIImageView *_maskView;
    UIView *_parentView;
}

@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *destructiveBtn; // @synthesize destructiveBtn=_destructiveBtn;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *interateView; // @synthesize interateView=_interateView;
@property(nonatomic) __weak id <WAAppActionSheetDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)_releaseViews;
- (void)onCancelButtonClick:(id)arg1;
- (void)onDestructiveButtonClick:(id)arg1;
- (void)onHeaerButtonClicked:(id)arg1;
- (void)onButtonClicked:(id)arg1;
- (id)genHeaderBtnWithContact:(id)arg1 appType:(unsigned long long)arg2;
- (id)genDestructiveBtn;
- (id)genNormalBtn:(id)arg1;
- (void)initMaskView;
- (_Bool)isSupportVisualEffect;
- (void)initInterateView;
- (void)initContainerView;
- (void)setDebugTitles:(id)arg1;
- (_Bool)isVisible;
- (void)dismissWithAnimation;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithUsrName:(id)arg1 appType:(unsigned long long)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 buttonTitleArray:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
