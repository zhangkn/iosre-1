//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITextFieldDelegate.h"

@class FavTagTextField, MMBorderView, NSMutableArray, NSMutableSet, NSSet, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface FavTagEditView : MMUIView <UITextFieldDelegate>
{
    NSMutableArray *m_arrTagButtons;
    NSMutableSet *m_tagSet;
    UIScrollView *m_scrollView;
    FavTagTextField *m_textField;
    UILabel *m_placeholderLabel;
    UIImageView *m_bkgView;
    NSMutableArray *m_arrMenu;
    NSString *m_placeholderStr;
    _Bool m_hasBeginEdit;
    int m_maxHeight;
    NSSet *m_splitCharSet;
    id <FavTagEditViewDelegate> m_delegate;
    UIView *buttonToShow;
    UIView *buttonShowing;
    UIButton *highlightButton;
    MMBorderView *m_dashView;
}

@property(retain, nonatomic) NSString *m_placeholderStr; // @synthesize m_placeholderStr;
@property(nonatomic) int m_maxHeight; // @synthesize m_maxHeight;
@property(readonly, nonatomic) _Bool m_hasBeginEdit; // @synthesize m_hasBeginEdit;
@property(nonatomic) __weak id <FavTagEditViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)MenuControllerWillShow:(id)arg1;
- (void)MenuControllerDidHide:(id)arg1;
- (void)showMenuForButton:(id)arg1;
- (void)removeHighlighBtn;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)hasMarkedText;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)ontap;
- (void)keyboardDidShow:(id)arg1;
- (void)dealloc;
- (void)initView:(id)arg1;
- (struct CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (void)updateFrameForTextField:(double)arg1 scroll:(_Bool)arg2;
- (void)updateFrameForTextField:(double)arg1;
- (void)updateFrameForTextFieldScroll:(_Bool)arg1;
- (void)deleteTagButton:(int)arg1;
- (void)setNoBeginEdit;
- (void)setReturnType:(long long)arg1;
- (_Bool)textFieldBecomeFirstResponder;
- (_Bool)textFieldResignFirstResponder;
- (void)cleanTextField;
- (id)getTextFieldRealText;
- (id)getCurrentTagSet;
- (id)gatTagList;
- (void)deleteTagButtonWithName:(id)arg1;
- (void)addTagButton:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)initMenu;
- (void)updateTagList:(id)arg1;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)layoutSubviews;
- (id)initWithTags:(id)arg1 placeHolder:(id)arg2 placeHolderEdu:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

