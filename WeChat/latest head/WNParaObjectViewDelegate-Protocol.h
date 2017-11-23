//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesItem, MMUIViewController, NSMutableArray, NSString, WNParagraphInfo;

@protocol WNParaObjectViewDelegate <NSObject>

@optional
- (NSString *)getPlayingObjectId;
- (void)onCheckPlayVoice:(WNParagraphInfo *)arg1;
- (void)onStopRecordVoice:(WNParagraphInfo *)arg1;
- (FavoritesItem *)getFavItem;
- (MMUIViewController *)getViewController;
- (void)onSendLocationToFriend:(NSString *)arg1 ViewController:(MMUIViewController *)arg2;
- (NSMutableArray *)getDataArray;
- (void)onObjectHeightChanged;
@end

