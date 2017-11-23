//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class GameCenterIndexTopBanner, MMTableView, MMWebImageView;

@interface GameCenterHeaderView : MMUIView
{
    int _sourceScene;
    GameCenterIndexTopBanner *_topBanner;
    MMWebImageView *_topBannerBigPicView;
    MMWebImageView *_topBannerSmallPicView;
    id <GameCenterHeaderActionDelegate> _delegate;
    MMTableView *_tableView;
}

@property(nonatomic) int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <GameCenterHeaderActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMWebImageView *topBannerSmallPicView; // @synthesize topBannerSmallPicView=_topBannerSmallPicView;
@property(retain, nonatomic) MMWebImageView *topBannerBigPicView; // @synthesize topBannerBigPicView=_topBannerBigPicView;
@property(retain, nonatomic) GameCenterIndexTopBanner *topBanner; // @synthesize topBanner=_topBanner;
- (void).cxx_destruct;
- (void)resetSmallBannerInsetIfNeed;
- (void)topBannerExposureReport;
- (void)layoutSubviews;
- (void)adjustBannerViewAndInset;
- (_Bool)pullUpToBigPic:(inout struct CGPoint *)arg1;
- (_Bool)scrollDownToSmallPic;
- (void)onTopBannerClicked:(id)arg1;
- (void)initTopBannerBackgroupView;
- (double)setViewFrame;
- (id)initWithItems:(id)arg1 SourceScene:(int)arg2 TableView:(id)arg3;

@end

