//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WNParaObjectBaseView.h"

#import "WNParaImageViewDelegate.h"

@class NSString, WNParaImageView;

@interface WNParaObjectImageView : WNParaObjectBaseView <WNParaImageViewDelegate>
{
    WNParaImageView *m_imageView;
}

+ (double)getHightOfParaInfo:(id)arg1;
- (void).cxx_destruct;
- (void)onLoadComplete:(id)arg1;
- (void)onClickObject;
- (void)layoutView;
- (void)clearImage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
