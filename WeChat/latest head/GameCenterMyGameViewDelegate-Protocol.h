//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GameCenterGameBriefInfo, GameCenterMyGameView, GameIndexMyGameRelated, NSString;

@protocol GameCenterMyGameViewDelegate <NSObject>
- (void)onMyGameTplClick:(GameIndexMyGameRelated *)arg1 JumpUrl:(NSString *)arg2 AppId:(NSString *)arg3;
- (void)onMyGame:(GameCenterMyGameView *)arg1 downloadGameClick:(GameCenterGameBriefInfo *)arg2 ShouldUseHvAppInfo:(_Bool)arg3;
- (void)onMyGame:(GameCenterMyGameView *)arg1 gameRowClick:(GameCenterGameBriefInfo *)arg2 Index:(long long)arg3 ShouldUseHvAppInfo:(_Bool)arg4;
@end

