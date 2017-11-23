//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WAPackageDownloadLogicDelegate.h"
#import "WAPackageInfoCacheLogicDelegate.h"

@class NSMutableDictionary, NSString, WAPackageDownloadLogic, WAPackageInfoCacheLogic, WAPackageSweeperLogic;

@interface WALocalCacheMgr : MMService <WAPackageDownloadLogicDelegate, WAPackageInfoCacheLogicDelegate, MMService>
{
    WAPackageDownloadLogic *_pkgDownloadLogic;
    WAPackageInfoCacheLogic *_pkgInfoCacheLogic;
    WAPackageSweeperLogic *_pkgSweeperLogic;
    NSMutableDictionary *_dicDownloadingUrlToContact;
    NSMutableDictionary *_dicUsernameToDownloadInfo;
    NSMutableDictionary *_dicDownloadedTime;
}

- (void).cxx_destruct;
- (id)getContactWithUrl:(id)arg1;
- (void)setContact:(id)arg1 withUrl:(id)arg2;
- (_Bool)shouldTryDownloadPatchPkg;
- (id)mergePatchData:(id)arg1 withOldData:(id)arg2;
- (double)getDownloadTime:(id)arg1;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4;
- (id)getLocalCacheDataWithFullUrl:(id)arg1;
- (void)onUnPackCompletion:(_Bool)arg1 withErrorCode:(int)arg2;
- (_Bool)isNeedDownloadDebugModePkg:(id)arg1;
- (void)removeDustPkgWithoutLastTwoPkgWithAppID:(id)arg1 oldVersion:(unsigned long long)arg2 newVersion:(unsigned long long)arg3;
- (_Bool)updateWeAppInfoDataWithAppID:(id)arg1 pkgMd5:(id)arg2 newVersion:(unsigned long long)arg3 retOldVersion:(unsigned long long *)arg4;
- (void)onUpdateDataBaseWhenGetValidPkg:(id)arg1;
- (void)notifyOnCompleteExtension:(_Bool)arg1 withContact:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4 pkgUrl:(id)arg5;
- (void)onDownloadTaskRecordTime:(double)arg1 appId:(id)arg2;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 filePath:(id)arg3;
- (void)onDownloadTaskProgress:(float)arg1 remainingTime:(unsigned long long)arg2 taskUrl:(id)arg3;
- (void)downloadAppPkgWithAppContact:(id)arg1 realDownloadUrl:(id)arg2;
- (_Bool)downloadAppPkgWithAppContact:(id)arg1 fullPkgUrl:(id)arg2 patchUrlStr:(id)arg3;
- (void)raiseDownloadPriorityLevelWithAppid:(id)arg1;
- (_Bool)isDownloadingWithThisFullPkgDownloadURL:(id)arg1 orPatchUrl:(id)arg2;
- (void)clearAllPkgInfoWhenNoAppRunning;
- (_Bool)loadPkgInfoLocalCache:(id)arg1;
- (_Bool)verifyLocalCacheChecksum:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

