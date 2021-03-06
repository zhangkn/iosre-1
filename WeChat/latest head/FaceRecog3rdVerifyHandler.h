//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "FaceRecogConfigLogicDelegate.h"
#import "FaceRecogProcessorDelegate.h"
#import "FaceRecogUploadLogicDelegate.h"
#import "FaceRecogVerifyViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"

@class FaceRecogBindVideoLogic, FaceRecogConfigLogic, FaceRecogProcessor, FaceRecogUploadLogic, FaceRecogVerifyViewController, NSMutableDictionary, NSString, UIViewController;

@interface FaceRecog3rdVerifyHandler : MMObject <PBMessageObserverDelegate, FaceRecogProcessorDelegate, FaceRecogUploadLogicDelegate, FaceRecogConfigLogicDelegate, FaceRecogVerifyViewControllerDelegate>
{
    NSMutableDictionary *_resultDic;
    unsigned int _tryCount;
    _Bool _needUploadVideo;
    _Bool _isRetry;
    unsigned int _scene;
    id <FaceRecog3rdVerifyHandlerDelegate> _delegate;
    UIViewController *_currentViewController;
    FaceRecogVerifyViewController *_verifyVc;
    FaceRecogConfigLogic *_configFetcher;
    FaceRecogUploadLogic *_uploader;
    FaceRecogBindVideoLogic *_bindVideoLogic;
    FaceRecogProcessor *_processor;
    NSString *_appId;
    NSString *_verifyInfo;
}

@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool needUploadVideo; // @synthesize needUploadVideo=_needUploadVideo;
@property(copy, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) FaceRecogProcessor *processor; // @synthesize processor=_processor;
@property(retain, nonatomic) FaceRecogBindVideoLogic *bindVideoLogic; // @synthesize bindVideoLogic=_bindVideoLogic;
@property(retain, nonatomic) FaceRecogUploadLogic *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) FaceRecogConfigLogic *configFetcher; // @synthesize configFetcher=_configFetcher;
@property(retain, nonatomic) FaceRecogVerifyViewController *verifyVc; // @synthesize verifyVc=_verifyVc;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) __weak id <FaceRecog3rdVerifyHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)faceRecogDidEnterBackground;
- (void)faceRecogProcedureDidInterrupted;
- (void)doReportForUserCancel;
- (void)faceRecogDidStartChangeToReadNumberMode;
- (void)faceRecogDidStartGetBio;
- (void)faceRecogDidRetry;
- (void)faceRecogDidClose;
- (void)faceRecogDidCancel;
- (void)procedureDidFailedReleaseOutResultData;
- (void)procedureDidRecognizeFaceSuccess;
- (void)procedureDidStartUploadResultData;
- (void)doChangeToReadNum;
- (void)procedureDidGotFrameResult:(unsigned long long)arg1 failedType:(long long)arg2;
- (void)onUploadFaceResultFinish:(id)arg1;
- (void)doStartDetectFace;
- (void)onGetBioConfig:(id)arg1 failedCauseOf:(unsigned int)arg2 forScene:(unsigned int)arg3;
- (void)onGetBioConfig:(id)arg1 succeedForScene:(unsigned int)arg2;
- (void)handle3rdVerifyResult:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)do3rdVerify:(id)arg1;
- (void)startRecognizingProcedure;
- (void)faceRecogVerifyViewNumberViewDidEndAnimation;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3 canRetry:(_Bool)arg4;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (void)finishedWithAuthorizationError:(id)arg1;
- (void)doFinishWithCode:(id)arg1;
- (void)disMissAll:(_Bool)arg1;
- (void)doStartVerify;
- (void)startVerifyFor3rdParty:(id)arg1 verifyInfo:(id)arg2 needVideo:(_Bool)arg3;
- (void)dealloc;
- (id)initWithScene:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

