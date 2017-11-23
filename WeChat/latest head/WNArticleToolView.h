//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMPickLocationViewControllerDelegate.h"
#import "WNVoiceTimeDelegate.h"

@class MMPickLocationViewController, NSMutableArray, NSString, UIView, WNParaVoiceTimeView, WNParagraphInfo;

@interface WNArticleToolView : MMUIView <MMPickLocationViewControllerDelegate, WNVoiceTimeDelegate>
{
    NSMutableArray *m_toolbarBtns;
    UIView *m_btnContainerView;
    MMPickLocationViewController *m_locationViewCtrl;
    WNParaVoiceTimeView *_voiceTimeView;
    WNParagraphInfo *_recordingInfo;
    NSMutableArray *items;
    int mmassetCount;
    _Bool bRecording;
    int viewType;
    id <WNArticleToolViewDelegate> delegate;
}

@property(nonatomic) _Bool bRecording; // @synthesize bRecording;
@property(nonatomic) int viewType; // @synthesize viewType;
@property(nonatomic) __weak id <WNArticleToolViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)onTimeCountEnd;
- (void)onAddVoiceItemEnd;
- (void)onAddVoiceItemBegin:(id)arg1;
- (void)onCreateVoice:(id)arg1;
- (id)onGetRightBarButton;
- (void)onFinishSelectedLocation;
- (void)onCreatPostLocationView;
- (void)onCancelSeletctedLocation;
- (id)createThumbImage:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)configSightItemWithSightPath:(id)arg1 andThumbImgPath:(id)arg2 andDuration:(unsigned int)arg3;
- (id)configImageItemWithBigImgPath:(id)arg1 andThumbImgPath:(id)arg2 andImgSize:(struct CGSize)arg3;
- (void)onConfigImageItemAssetComplete:(id)arg1;
- (void)configImageItemMMAsset:(id)arg1;
- (id)configImageItemMMImage:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4 editVideoAttr:(id)arg5;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onTakePhotoForPost;
- (void)onCreatePostImageView;
- (void)showImagePicker:(long long)arg1;
- (_Bool)ifCanInsertOneItem;
- (void)onAddItem:(id)arg1;
- (id)getIconSelectedName:(int)arg1;
- (id)getIconHLName:(int)arg1;
- (id)getIconName:(int)arg1;
- (id)getTitle:(int)arg1;
- (void)layoutButtonsViews:(_Bool)arg1;
- (void)showBtnsOfType:(int)arg1;
- (void)initUI;
- (void)stopRecordVoice;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

