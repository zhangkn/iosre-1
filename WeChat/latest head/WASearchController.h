//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMSearchBarDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WAAppCanvasWrapperViewDelegate.h"
#import "WASearchActionDelegate.h"

@class MMSearchBar, MMUIViewController, NSMutableDictionary, NSString, UIButton, UIImageView, UIView<YYWebViewInterface>, WASearchResultLogic;

@interface WASearchController : MMObject <MMSearchBarDelegate, WASearchActionDelegate, UIScrollViewDelegate, WAAppCanvasWrapperViewDelegate>
{
    _Bool _isContainerInteractivePopEnabled;
    _Bool _webViewDidRegisterScrollNotify;
    _Bool _isDetailSearch;
    _Bool _isMoving;
    MMSearchBar *_searchBar;
    id <WASearchControllerDelegate> _delegate;
    unsigned long long _pageType;
    WASearchResultLogic *_searchResultLogic;
    UIView<YYWebViewInterface> *_resultView;
    UIView<YYWebViewInterface> *_detailView;
    UIButton *_detailBackButton;
    MMUIViewController *_containerController;
    double _webViewScrollNotifyDiffHeight;
    double _lastOffsetY;
    unsigned long long _detailSearchType;
    NSString *_searchID;
    double _moveStartOffset;
    double _moveCurOffset;
    UIImageView *_bottomViewShadow;
    NSMutableDictionary *_widgetViewCache;
}

@property(retain, nonatomic) NSMutableDictionary *widgetViewCache; // @synthesize widgetViewCache=_widgetViewCache;
@property(retain, nonatomic) UIImageView *bottomViewShadow; // @synthesize bottomViewShadow=_bottomViewShadow;
@property(nonatomic) double moveCurOffset; // @synthesize moveCurOffset=_moveCurOffset;
@property(nonatomic) double moveStartOffset; // @synthesize moveStartOffset=_moveStartOffset;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) unsigned long long detailSearchType; // @synthesize detailSearchType=_detailSearchType;
@property(nonatomic) _Bool isDetailSearch; // @synthesize isDetailSearch=_isDetailSearch;
@property(nonatomic) double lastOffsetY; // @synthesize lastOffsetY=_lastOffsetY;
@property(nonatomic) double webViewScrollNotifyDiffHeight; // @synthesize webViewScrollNotifyDiffHeight=_webViewScrollNotifyDiffHeight;
@property(nonatomic) _Bool webViewDidRegisterScrollNotify; // @synthesize webViewDidRegisterScrollNotify=_webViewDidRegisterScrollNotify;
@property(nonatomic) __weak MMUIViewController *containerController; // @synthesize containerController=_containerController;
@property(retain, nonatomic) UIButton *detailBackButton; // @synthesize detailBackButton=_detailBackButton;
@property(retain, nonatomic) UIView<YYWebViewInterface> *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIView<YYWebViewInterface> *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) WASearchResultLogic *searchResultLogic; // @synthesize searchResultLogic=_searchResultLogic;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) __weak id <WASearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (id)findSearchTextField;
- (void)onOpenNearByPage:(id)arg1;
- (void)onTap;
- (void)getNearWeappLink:(CDUnknownBlockType)arg1;
- (void)onRemoveDetailView;
- (void)moveDetailViewToRight;
- (void)updateMovingDetailView;
- (void)cancelMoveDetailView;
- (void)onClickDetailBack:(id)arg1;
- (void)handlePanGestureForDetailView:(id)arg1;
- (id)urlParamsForDetailPage:(id)arg1 params:(id)arg2;
- (void)loadLocalHtmlForDetailPage:(id)arg1 params:(id)arg2;
- (id)makeNewDetailView:(id)arg1;
- (void)onWrapperView:(id)arg1 openApp:(id)arg2;
- (void)onWrapperView:(id)arg1 updateHeight:(double)arg2;
- (void)onTapWAWidgetWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onUpdateWAWidgetWithParams:(id)arg1;
- (void)onRemoveWAWidgetWithParams:(id)arg1;
- (id)onInsertWAWidgetWithParams:(id)arg1;
- (void)onLaunchBrandProfile:(id)arg1;
- (void)onLaunchWebView:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onRegisterWebViewDidScroll:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (void)onReportWeAppSearchRealTime:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideKeyboardForSearchBar;
- (void)hideSearchBarResultView;
- (void)resetResultViewSuperView;
- (void)hideResultViewWithOffset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showResultViewWithOffset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearDetailView;
- (void)clearDetailViewAndBackBtn;
- (void)clearResultView;
- (void)setupResultView;
- (void)restoreInteractivePop;
- (void)forbidInteractivePop;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)mmsearchBarTextDidBeginEditing:(id)arg1;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (void)mmSearchDisplayControllerDidEndSearch;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmSearchDisplayControllerDidBeginSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)onClearSearchText;
- (void)resetStatusBarFontColor;
- (void)onExitSearch;
- (void)animateSearchBarCancelButton;
- (void)initResultLogic;
- (void)initSearchBarInVC:(id)arg1;
- (void)fixSearchBarMaskBug;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

