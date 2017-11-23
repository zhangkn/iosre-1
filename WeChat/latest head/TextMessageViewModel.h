//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSMutableArray, NSString, UIFont;

@interface TextMessageViewModel : CommonMessageViewModel
{
    NSMutableArray *m_subViewModels;
    double m_labelWidth;
    NSString *m_contentText;
    NSString *m_contentPatternText;
    double m_contentTextFontLineHeight;
    long long m_parserType;
    struct CGSize m_contentTextSize;
    struct CGSize m_translatedTextSize;
    NSMutableArray *m_contentTextStyles;
    double _translatedLineY;
    double _contentMidY;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) double contentMidY; // @synthesize contentMidY=_contentMidY;
@property(nonatomic) double translatedLineY; // @synthesize translatedLineY=_translatedLineY;
@property(retain, nonatomic) NSMutableArray *contentTextStyles; // @synthesize contentTextStyles=m_contentTextStyles;
@property(nonatomic) struct CGSize translatedTextSize; // @synthesize translatedTextSize=m_translatedTextSize;
@property(nonatomic) struct CGSize contentTextSize; // @synthesize contentTextSize=m_contentTextSize;
@property(readonly, nonatomic) double contentTextFontLineHeight; // @synthesize contentTextFontLineHeight=m_contentTextFontLineHeight;
- (void).cxx_destruct;
- (struct CGRect)realFrameByCurFrame:(struct CGRect)arg1;
- (void)setLinkHighlighted:(_Bool)arg1 url:(id)arg2;
- (id)translateInfo;
- (_Bool)canShowTranslatedText;
- (_Bool)canShowTranslateBottomView;
@property(readonly, nonatomic) double labelWidth;
@property(readonly, nonatomic) long long parserType;
- (id)contentPatternText;
@property(readonly, nonatomic) UIFont *contentTextFont;
@property(readonly, nonatomic) NSString *contentText;
- (void)setHighlighted:(_Bool)arg1;
- (id)accessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (struct CGSize)calculateTranslatedTextSize;
- (struct CGSize)calculateContentTextSize;
- (void)resetLayoutCache;
- (void)updateChatContact:(id)arg1;
- (id)cellDataForRow:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)subViewModels;
- (_Bool)isLongSplitMessage;

@end

