//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseScanLogicDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"
#import "WCFacadeExt.h"
#import "WCImageScrollViewDelegate.h"
#import "WCImageViewDelegate.h"
#import "scrollViewDelegate.h"

@class CContact, ForwardMessageLogicController, MMAnimationTipView, MMHeadImageView, MMScrollView, NSMutableArray, NSMutableSet, NSString, RichTextView, ScanQRCodeLogicController, ShareDataToOpenSDKController, UIButton, UIImageView, UILabel, UIView, WCActionSheet, WCLikeButton;

@interface WCPhotoMutipleImageViewController : MMUIViewController <UIScrollViewDelegate, scrollViewDelegate, WCImageViewDelegate, WCActionSheetDelegate, WCFacadeExt, WCImageScrollViewDelegate, WCCommentDetailViewControllerFBDelegate, RichTextLayoutDelegate, UIAlertViewDelegate, BaseScanLogicDelegate>
{
    MMScrollView *pagingScrollView;
    NSMutableArray *m_arrDatas;
    unsigned int m_uiSource;
    _Bool m_isShowingDataItemList;
    int m_logicType;
    NSMutableSet *recycledImagePage;
    NSMutableSet *recycledSightPage;
    NSMutableSet *visiblePages;
    int firstVisiblePageIndexBeforeRotation;
    double percentScrolledIntoFirstVisiblePage;
    int m_iNumberOfPages;
    int m_iCurrentPage;
    MMAnimationTipView *m_tipView;
    _Bool m_hideWhenDisappear;
    CContact *m_contact;
    UIView *m_titleView;
    UILabel *m_titleOne;
    UILabel *m_titleTwo;
    NSMutableArray *menuItems;
    UIView *bottomView;
    UIImageView *redHeartView;
    UIView *descBackgroundView;
    RichTextView *descLabel;
    MMHeadImageView *headImg;
    UIImageView *lockImgView;
    WCLikeButton *btnLike;
    UIButton *btnComment;
    UIButton *rightBottomCtrl;
    UILabel *likeCountLable;
    UILabel *commentCountLable;
    UIImageView *smallLikeImg;
    UIImageView *smallCommentImg;
    UIButton *setBGButton;
    _Bool m_isTileing;
    _Bool m_supportLandscape;
    _Bool m_scrollViewLayouting;
    _Bool m_orientationRotating;
    _Bool m_isBidirectionalFan;
    _Bool m_backing;
    _Bool m_backEnabled;
    _Bool m_forbidSingleTap;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    _Bool _bIsMoreData;
    _Bool _bIsNoMediaDataOverLimitReq;
    _Bool _bIsLoadingMoreData;
    _Bool _bIsLastDataEmpty;
    _Bool _bIsDirectFreshScrollSize;
    _Bool _bIsShow;
    double _startContentOffsetX;
    double _willEndContentOffsetX;
    double _endContentOffsetX;
    unsigned int _uiMaxContiunePreLoadCount;
    ForwardMessageLogicController *m_forwardMsgLogic;
    _Bool _bShouldShowNetworkStatus;
    WCActionSheet *menu_ActionSheet;
    int m_qrcodeActionSheetIndex;
    ShareDataToOpenSDKController *m_shareDataToOpenSDKViewController;
}

@property(nonatomic) int m_logicType; // @synthesize m_logicType;
@property(nonatomic) unsigned int m_uiSource; // @synthesize m_uiSource;
@property(retain, nonatomic) NSMutableArray *menuItems; // @synthesize menuItems;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)onScanEnds;
- (void)onLongPressedFullSightView:(id)arg1;
- (void)onClickFullSightView:(id)arg1;
- (void)adjustViewAndNavBarRect;
- (void)setWCBackground;
- (void)goBackAfterSetBackground;
- (void)onNetworkActivityStatusChanged;
- (void)willShow;
- (void)updateNetworkStatus;
- (void)onTouchEndOnFullScreenView:(id)arg1;
- (_Bool)shouldAnimateFullScreenViewOnShow:(id)arg1;
- (void)updatePhotoatIndex:(unsigned long long)arg1;
- (struct CGPoint)contentOffsetForPagingScrollView;
- (struct CGSize)contentSizeForPagingScrollView;
- (struct CGRect)frameForPageAtIndexForSightView:(unsigned long long)arg1;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForPagingScrollView:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)reloadImage:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)configureSightPage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)configureImagePage:(id)arg1 forIndex:(unsigned long long)arg2;
- (_Bool)isDisplayingPageForIndex:(unsigned long long)arg1;
- (id)dequeueRecycledSightPage;
- (id)dequeueRecycledImagePage;
- (void)tilePages;
- (void)preLoadProcess;
- (void)checkNoMoreData;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)flashRedHeartView;
- (void)redHeartReduceEnd;
- (void)redHeartReduce;
- (void)redHeartShowForAWhile;
- (void)redHeartEnlarge;
- (void)setNaviTitleLineOne:(id)arg1 andLineTwo:(id)arg2;
- (void)updateButtonStateAnimate:(_Bool)arg1;
- (void)initBottomView;
- (void)layoutBottomView:(_Bool)arg1;
- (void)shareToDevices;
- (void)onPageChangedWithIndex:(long long)arg1;
- (id)tryUpdateMedia:(long long)arg1;
- (void)favoritesAddSight;
- (void)favoritesAddImg;
- (void)saveVideoToAlbum;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)contactsReturn:(_Bool)arg1 contact:(id)arg2;
- (void)onBackButtonClicked;
- (void)PreScanQRCode;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)onShowMenu:(id)arg1;
- (void)removeScanQRMenuItem;
- (_Bool)tryAddScanQRMenuItem;
- (void)onGoToWithUserWC;
- (void)onSetDataItemPublicFinished:(int)arg1 dataItemID:(id)arg2;
- (void)onMakePublic;
- (void)onSetDataItemPrivateFinished:(int)arg1 dataItemID:(id)arg2;
- (void)onMakePrivate;
- (void)onSaveToWC;
- (void)onDeletePhoto;
- (void)onPresentBackFromViewController;
- (void)onBackFromDetailView;
- (void)onPopupCommentFriend;
- (void)onCommentFriend;
- (void)onDeleteData;
- (void)onBeforeDeleteData;
- (void)onRestartUpload;
- (_Bool)isPrivate;
- (void)reportThisPhoto:(id)arg1;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)deleteVisibleCache;
- (void)onDataItemDeleteFinished:(int)arg1 dataItemID:(id)arg2;
- (void)showLastPictureTips;
- (void)showNoMoreDataAtIndex:(id)arg1;
- (void)noMoreData;
- (void)preLoadFinishiedAndReloadData:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)initScrollView;
- (void)layoutScrollView:(_Bool)arg1;
- (void)onSingleTapWCImageScrollView;
- (void)handleSingleTap;
- (void)hideFullScreen;
- (void)showFullScreen:(_Bool)arg1;
- (void)showFullScreen;
- (void)layoutHiddenView:(_Bool)arg1;
- (void)initNavigationBar;
- (void)didAppear;
- (void)willDisshow;
- (void)didDisshow;
- (void)willDisappear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)willAppear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)getMediaItemWrapAnywayAt:(unsigned int)arg1;
- (id)getMediaItemWrapAt:(long long)arg1;
- (_Bool)isMyOwnWC;
- (void)dealloc;
- (id)initWithWCMediaItemWraps:(id)arg1 currentIndex:(unsigned int)arg2;
- (id)initWithDataItems:(id)arg1 currentIndex:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

