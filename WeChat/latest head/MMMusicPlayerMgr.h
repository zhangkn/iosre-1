//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IRemoteControlMusicPlayerExt.h"
#import "ISysCallCheckExt.h"
#import "MMImageLoaderObserver.h"
#import "MMMusicAlbumRtnExt.h"
#import "MMMusicListExt.h"
#import "MMMusicLyricsRtnExt.h"
#import "MMMusicPlayerExt.h"
#import "MMMusicPlayerNotifyExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class MMMusicInfo, MMMusicListMgr, MMMusicLyricResolver, MusicLogInfo, NSMutableArray, NSString;

@interface MMMusicPlayerMgr : MMService <MMImageLoaderObserver, IRemoteControlMusicPlayerExt, PBMessageObserverDelegate, MMMusicPlayerNotifyExt, MMService, MMMusicPlayerExt, MMMusicLyricsRtnExt, MMMusicAlbumRtnExt, MMMusicListExt, ISysCallCheckExt>
{
    NSMutableArray *m_arrMusicItems;
    MMMusicInfo *m_prevMusicInfo;
    MMMusicInfo *m_curMusicInfo;
    MMMusicInfo *m_nextMusicInfo;
    int m_playMode;
    int m_playDirection;
    MMMusicListMgr *m_musicListMgr;
    MMMusicLyricResolver *m_musicLyricResolver;
    unsigned int m_uiCurMusicIndex;
    _Bool m_bforceStop;
    _Bool m_shouldTurnRepeatNoneMode;
    MusicLogInfo *m_musicLogInfo;
    _Bool m_shouldDelayResetCurMusicInfo;
    _Bool m_isManualPaused;
    int m_state;
    NSString *m_shouldForceStopMusicID;
}

@property(nonatomic) _Bool m_isManualPaused; // @synthesize m_isManualPaused;
@property(nonatomic) int m_state; // @synthesize m_state;
@property(nonatomic) _Bool m_shouldDelayResetCurMusicInfo; // @synthesize m_shouldDelayResetCurMusicInfo;
@property(retain, nonatomic) NSString *m_shouldForceStopMusicID; // @synthesize m_shouldForceStopMusicID;
@property(nonatomic) _Bool m_shouldTurnRepeatNoneMode; // @synthesize m_shouldTurnRepeatNoneMode;
@property(retain, nonatomic) MusicLogInfo *m_musicLogInfo; // @synthesize m_musicLogInfo;
@property(retain, nonatomic) MMMusicInfo *m_nextMusicInfo; // @synthesize m_nextMusicInfo;
@property(retain, nonatomic) MMMusicInfo *m_prevMusicInfo; // @synthesize m_prevMusicInfo;
@property(retain, nonatomic) MMMusicListMgr *m_musicListMgr; // @synthesize m_musicListMgr;
@property(retain) MMMusicInfo *m_curMusicInfo; // @synthesize m_curMusicInfo;
- (void).cxx_destruct;
- (void)updateMusicWebUrl:(id)arg1;
- (void)updateMusicCover:(id)arg1;
- (void)updateMusicEPName:(id)arg1;
- (void)updateMusicSinger:(id)arg1;
- (void)updateMusicTitle:(id)arg1;
- (void)statNativePlayerAction:(id)arg1 scene:(unsigned int)arg2 actionType:(unsigned int)arg3;
- (void)resetMusicPlayerEntranceType;
- (void)updateMusicLogInfo;
- (void)logMusicStatAndReset;
- (void)logMusicStat;
- (void)notifyMusicPlayerRestartMusic;
- (void)notifyMusicPlayerPauseMusic;
- (void)onRemoteControlMusicShouldPlayPrevTrack;
- (void)onRemoteControlMusicShouldPlayNextTrack;
- (void)onRemoteControlMusicShouldStop;
- (void)onRemoteControlMusicShouldPlayOrPause;
- (void)onRemoteControlMusicShouldPauseByMannual:(_Bool)arg1;
- (void)onRemoteControlMusicShouldPlay;
- (id)getCurTimeList;
- (id)getCurLyricsList;
- (void)onMusicListArrayChange;
- (void)OnGetSongAlbumUrl:(id)arg1 AlbumUrl:(id)arg2;
- (void)OnGetLyrics:(id)arg1 Lyrics:(id)arg2;
- (void)onDataBuffering:(double)arg1;
- (void)onForceStopMusic;
- (void)onLevelMeterPeak:(float)arg1;
- (void)delayResetCurMusicInfo;
- (void)handlePlayerStopOrErrorEvent;
- (void)onMusicPlayStatusChanged:(unsigned long long)arg1 error:(id)arg2;
- (id)getNextMusicInfo;
- (id)getPreviousMusicInfo;
- (unsigned long long)indexOfMusic:(id)arg1;
- (_Bool)isLyricValid;
- (void)updateMPNowPlayingInfo:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)safeForceStopMusic;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)safeCheckMusicInfo:(id)arg1;
- (void)playWithMusicInfo:(id)arg1;
- (_Bool)isValidLowBandUrl:(id)arg1;
- (id)getMusicUrlWithMusicInfo:(id)arg1;
- (void)setMusicPlayDirection:(int)arg1;
- (id)getMusicInfoByMusicKey:(id)arg1;
- (_Bool)isMusicItemsContainsMusicKey:(id)arg1;
- (id)getArrMusicItems;
- (double)getCurMusicBufferProgress;
- (double)getCurMusicOffset;
- (double)getCurMusicDuration;
- (int)getMusicPlayState;
- (id)getCurMusicTitle;
- (id)getCurMusicInfo;
- (_Bool)isPaused;
- (_Bool)isWaiting;
- (_Bool)isPlaying;
- (_Bool)isIdle;
- (_Bool)stopWithMusicKey:(id)arg1;
- (void)stopPlay;
- (void)seekToTime:(double)arg1 playAuto:(_Bool)arg2;
- (void)resumePlay;
- (_Bool)isManualPaused;
- (_Bool)pausePlayManual:(_Bool)arg1 pauseDownload:(_Bool)arg2;
- (void)playNextMusic;
- (void)playPreviousMusic;
- (void)playWithMusicKey:(id)arg1;
- (void)setMusicItemList:(id)arg1;
- (void)setAndPlayMusicItem:(id)arg1;
- (void)updateMusicListBySource:(int)arg1;
- (int)getMusicListSource;
- (void)setPlayMode:(int)arg1;
- (int)getMusicPlayMode;
- (void)dealloc;
- (void)updateArrMusicItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

