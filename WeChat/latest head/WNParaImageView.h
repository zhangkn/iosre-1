//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "ICdnComMgrExt.h"

@class NSString, UIImage;

@interface WNParaImageView : MMUIImageView <ICdnComMgrExt>
{
    UIImage *_defaultImage;
    NSString *_clientID;
    _Bool needCompress;
    unsigned int dataSize;
    NSString *localSrcPath;
    NSString *cdnUrl;
    id <WNParaImageViewDelegate> delegate;
}

@property(nonatomic) __weak id <WNParaImageViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool needCompress; // @synthesize needCompress;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
@property(retain, nonatomic) NSString *localSrcPath; // @synthesize localSrcPath;
- (void).cxx_destruct;
- (void)dealloc;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)stopLoadingImage;
- (void)loadingImageWithGCD;
- (void)loadingImageWithOutCompress;
- (void)loadingImage;
- (_Bool)startLoadingImage;
- (id)compressImage:(id)arg1;
- (void)setDefaultImage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

