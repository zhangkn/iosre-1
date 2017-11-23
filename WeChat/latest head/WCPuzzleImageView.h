//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCFacadeExt.h"

@class NSArray, NSMutableArray, NSString, UIImageView, UILabel, WCDataItem;

@interface WCPuzzleImageView : MMUIView <WCFacadeExt>
{
    WCDataItem *m_dataItem;
    NSArray *m_arrMediaData;
    NSMutableArray *m_arrView;
    int m_visableCount;
    struct vector<bool, std::__1::allocator<bool>> m_imageReady;
    UIImageView *m_lockStausView;
    UIImageView *m_sharedStausView;
    UILabel *m_nickLabel;
    id <WCPuzzleImageViewDelegate> m_delegate;
}

+ (id)getImageForMedia:(id)arg1;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
@property(nonatomic) __weak id <WCPuzzleImageViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) NSArray *m_arrMediaData; // @synthesize m_arrMediaData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)showOwnerNickname:(_Bool)arg1 username:(id)arg2;
- (void)showSharedStatus:(_Bool)arg1;
- (void)showLockStatus:(_Bool)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetImages;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithMediaData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

