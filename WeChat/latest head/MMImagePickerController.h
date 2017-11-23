//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUINavigationController.h"

#import "MMImagePickerControlCenter.h"
#import "UINavigationControllerDelegate.h"

@class EditImageLogicController, EditVideoLogicController, MMAlbumPickerController, MMImagePickerControllerPreviewReportObject, NSArray, NSString;

@interface MMImagePickerController : MMUINavigationController <UINavigationControllerDelegate, MMImagePickerControlCenter>
{
    _Bool _canSendOriginImage;
    _Bool _canSendVideoMessage;
    _Bool _isOnlyShowVideoMessage;
    _Bool _isNotShowVideoSizeAlertView;
    _Bool _canSendMultiImage;
    _Bool _needThumbImage;
    _Bool _showPreviewView;
    _Bool _canSendGif;
    _Bool _canHybridSendAsset;
    _Bool _isOriginalImage;
    _Bool _isEditMode;
    int _maxImageCount;
    int _compressType;
    int _previewEditScene;
    id <MMImagePickerControllerDelegate> m_delegate;
    MMAlbumPickerController *_photoPicker;
    NSString *_finishWording;
    NSString *_currentAlbum;
    NSArray *_selectedImageURLs;
    NSArray *_selectedImageAssets;
    MMImagePickerControllerPreviewReportObject *m_previewReportObject;
    EditImageLogicController *_editImageLogicController;
    EditVideoLogicController *_editVideoLogicController;
}

@property(retain, nonatomic) EditVideoLogicController *editVideoLogicController; // @synthesize editVideoLogicController=_editVideoLogicController;
@property(retain, nonatomic) EditImageLogicController *editImageLogicController; // @synthesize editImageLogicController=_editImageLogicController;
@property(retain, nonatomic) MMImagePickerControllerPreviewReportObject *m_previewReportObject; // @synthesize m_previewReportObject;
@property(nonatomic) int previewEditScene; // @synthesize previewEditScene=_previewEditScene;
@property(nonatomic) _Bool isEditMode; // @synthesize isEditMode=_isEditMode;
@property(nonatomic) _Bool isOriginalImage; // @synthesize isOriginalImage=_isOriginalImage;
@property(retain, nonatomic) NSArray *selectedImageAssets; // @synthesize selectedImageAssets=_selectedImageAssets;
@property(retain, nonatomic) NSArray *selectedImageURLs; // @synthesize selectedImageURLs=_selectedImageURLs;
@property(retain, nonatomic) NSString *currentAlbum; // @synthesize currentAlbum=_currentAlbum;
@property(retain, nonatomic) NSString *finishWording; // @synthesize finishWording=_finishWording;
@property(nonatomic) int compressType; // @synthesize compressType=_compressType;
@property(nonatomic) int maxImageCount; // @synthesize maxImageCount=_maxImageCount;
@property(nonatomic) _Bool canHybridSendAsset; // @synthesize canHybridSendAsset=_canHybridSendAsset;
@property(nonatomic) _Bool canSendGif; // @synthesize canSendGif=_canSendGif;
@property(nonatomic) _Bool showPreviewView; // @synthesize showPreviewView=_showPreviewView;
@property(nonatomic) _Bool needThumbImage; // @synthesize needThumbImage=_needThumbImage;
@property(nonatomic) _Bool canSendMultiImage; // @synthesize canSendMultiImage=_canSendMultiImage;
@property(nonatomic) _Bool isNotShowVideoSizeAlertView; // @synthesize isNotShowVideoSizeAlertView=_isNotShowVideoSizeAlertView;
@property(nonatomic) _Bool isOnlyShowVideoMessage; // @synthesize isOnlyShowVideoMessage=_isOnlyShowVideoMessage;
@property(nonatomic) _Bool canSendVideoMessage; // @synthesize canSendVideoMessage=_canSendVideoMessage;
@property(nonatomic) _Bool canSendOriginImage; // @synthesize canSendOriginImage=_canSendOriginImage;
@property(nonatomic) __weak MMAlbumPickerController *photoPicker; // @synthesize photoPicker=_photoPicker;
@property(nonatomic) __weak id <MMImagePickerControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (int)getPickerScene;
- (void)reportPicerReportInfo;
- (id)pickerReportInfo;
- (void)reportPreviewCount;
- (void)increasePreviewCount;
- (void)selectedSight:(id)arg1;
- (void)selectedVideo:(id)arg1;
- (void)selectedAssets:(id)arg1;
- (void)cancelImagePicker;
- (void)removeImageDatas;
- (id)init;
- (id)initForJustReturnMMAsset:(_Bool)arg1 withAdjustRevertIndex:(unsigned long long)arg2 withDirectToFirstAlbum:(_Bool)arg3 withOnlyShowVideoMessage:(_Bool)arg4 withNotShowVideoSizeAlertView:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
