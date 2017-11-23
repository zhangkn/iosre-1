//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary, WCCanvasReportInfo, WCStatTimerHelper;

@interface WCCanvasReportMgr : MMObject
{
    _Bool _hasReportInit;
    WCCanvasReportInfo *_reportInfo;
    WCStatTimerHelper *_pageTimeHelper;
    NSMutableDictionary *_componentTimeHelperDict;
    NSMutableDictionary *_componentReportInfoDict;
    NSMutableDictionary *_videoTimeHelperDict;
    NSMutableDictionary *_sightStreamTimeHelperDict;
    unsigned long long _lastStreamVideoPlayCompleteTime;
    unsigned long long _lastSightStreamVideoPlayCompleteTime;
}

+ (void)tryToReportDownloadInfoWithUrl:(id)arg1 mediaType:(unsigned int)arg2 isPreload:(unsigned int)arg3 costTime:(unsigned long long)arg4 retCode:(long long)arg5 scene:(unsigned int)arg6 downloadSize:(long long)arg7 startDownloadTime:(unsigned long long)arg8;
@property(nonatomic) unsigned long long lastSightStreamVideoPlayCompleteTime; // @synthesize lastSightStreamVideoPlayCompleteTime=_lastSightStreamVideoPlayCompleteTime;
@property(nonatomic) unsigned long long lastStreamVideoPlayCompleteTime; // @synthesize lastStreamVideoPlayCompleteTime=_lastStreamVideoPlayCompleteTime;
@property(retain, nonatomic) NSMutableDictionary *sightStreamTimeHelperDict; // @synthesize sightStreamTimeHelperDict=_sightStreamTimeHelperDict;
@property(retain, nonatomic) NSMutableDictionary *videoTimeHelperDict; // @synthesize videoTimeHelperDict=_videoTimeHelperDict;
@property(retain, nonatomic) NSMutableDictionary *componentReportInfoDict; // @synthesize componentReportInfoDict=_componentReportInfoDict;
@property(retain, nonatomic) NSMutableDictionary *componentTimeHelperDict; // @synthesize componentTimeHelperDict=_componentTimeHelperDict;
@property(retain, nonatomic) WCStatTimerHelper *pageTimeHelper; // @synthesize pageTimeHelper=_pageTimeHelper;
@property(nonatomic) _Bool hasReportInit; // @synthesize hasReportInit=_hasReportInit;
@property(retain, nonatomic) WCCanvasReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
- (void).cxx_destruct;
- (id)getTimerHelperInDict:(id)arg1 usingKey:(id)arg2;
- (id)getComponentReportInfoUsingItem:(id)arg1 withAssertType:(Class)arg2;
- (id)getComponentReportInfoUsingItem:(id)arg1;
- (void)tryToReportPanoramaComponentUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportStreamComponentVideoUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportStreamComponentThumbUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportStreamComponentIsAutoPlay:(id)arg1 isAutoPlay:(_Bool)arg2;
- (void)tryToReportStreamComponentClickVoiceControl:(id)arg1;
- (void)tryToReportStreamComponentClickPlayButton:(id)arg1;
- (void)tryToReportStreamComponentPlayComplete:(id)arg1;
- (void)tryToReportStreamComponentPlayEnd:(id)arg1;
- (void)tryToReportStreamComponentPlayStart:(id)arg1;
- (void)tryToReportStreamComponentDuration:(CDStruct_1b6d18a9)arg1 WithItem:(id)arg2;
- (void)tryToReportSightComponentStreamVideoPlayFromBegining:(id)arg1;
- (void)tryToReportSightComponentStreamVideoPlayComplete:(id)arg1;
- (void)tryToReportSightComponentStreamVideoPlayEnd:(id)arg1;
- (void)tryToReportSightComponentStreamVideoPlayStart:(id)arg1;
- (void)tryToReportSightComponentClickStreamButtonEntrance:(id)arg1;
- (void)tryToReportSightUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportSightThumbUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportSightIsAutoPlay:(id)arg1 isAutoPlay:(_Bool)arg2;
- (void)tryToReportSightComponentClickVoiceControl:(id)arg1;
- (void)tryToReportSightComponentPlayComplete:(id)arg1;
- (void)tryToReportSightComponentPlayEnd:(id)arg1;
- (void)tryToReportSightComponentPlayStart:(id)arg1;
- (void)tryToReportSightComponentDuration:(CDStruct_1b6d18a9)arg1 WithItem:(id)arg2;
- (void)tryToReportTelephoneComponentClick:(id)arg1;
- (void)tryToReportLocationComponentClick:(id)arg1;
- (void)tryToReportFullScreenImageUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportPureImageUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportButtonComponentClick:(id)arg1;
- (void)tryToAddReportComponentExposure:(id)arg1;
- (void)tryToReportComponentExposureEnd:(id)arg1;
- (void)tryToReportComponentExposureStart:(id)arg1;
- (void)tryToReportExitWithLeaveType:(unsigned int)arg1 andSource:(unsigned int)arg2;
- (void)tryToReportAddFavItem;
- (void)tryToReportSendFriendMsg;
- (void)tryToReportShareTimeLine;
- (void)tryToReportRightSwipePage;
- (void)reportCanvasAdEnterWithSnsId:(id)arg1 uxInfo:(id)arg2 inScene:(int)arg3 withEnterType:(unsigned int)arg4 andSource:(unsigned int)arg5 originScene:(int)arg6 canvasId:(unsigned long long)arg7;
- (void)reportCanvasAdInitWithSnsId:(id)arg1 uxInfo:(id)arg2 inScene:(int)arg3 withEnterType:(unsigned int)arg4 enableSwipe:(_Bool)arg5 componentItemsCount:(unsigned int)arg6 snsStatExt:(id)arg7 extraInfo:(id)arg8 originScene:(int)arg9 canvasId:(unsigned long long)arg10;

@end

