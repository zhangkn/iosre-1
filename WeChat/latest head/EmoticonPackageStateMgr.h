//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "EmoticonStoreItemExt.h"
#import "EmoticonStoreMgrExt.h"
#import "IEmoticonPackageMgrExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface EmoticonPackageStateMgr : MMService <MMService, EmoticonStoreMgrExt, EmoticonStoreItemExt, IEmoticonPackageMgrExt>
{
    NSMutableDictionary *m_dicState;
}

@property(retain, nonatomic) NSMutableDictionary *m_dicState; // @synthesize m_dicState;
- (void).cxx_destruct;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)arg1 IsDownloaded:(_Bool)arg2;
- (void)OnEmoticonStoreItemInstallFailed:(id)arg1;
- (void)OnEmoticonStoreItemInstallFinished:(id)arg1;
- (void)OnEmoticonStoreItemInstallStarted:(id)arg1;
- (void)OnEmoticonStoreItemGetProductFinished:(id)arg1;
- (void)resetState:(id)arg1;
- (void)OnEmoticonStoreItemDownloadFailed:(id)arg1;
- (void)OnEmoticonStoreItemDownloadFinished:(id)arg1;
- (void)OnEmoticonStoreItemDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)OnBuyEmoticonItemCanceled:(id)arg1;
- (void)OnBuyEmoticonItemFailed:(id)arg1;
- (void)OnBuyEmoticonItemSuccess:(id)arg1;
- (void)removeItem:(id)arg1;
- (int)getStateByItem:(id)arg1;
- (void)addOrReplaceItem:(id)arg1 withState:(int)arg2;
- (float)getDownloadProgress:(id)arg1;
- (void)cancelDownloadItem:(id)arg1;
- (void)downloadEmoticonItem:(id)arg1 isAutomatic:(_Bool)arg2;
- (void)downloadHardCodePackage:(id)arg1;
- (int)buyEmoticonItem:(id)arg1;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

