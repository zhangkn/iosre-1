//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMSearchBarDelegate.h"
#import "MMUIViewControllerDelegate.h"
#import "StoreEmotionSearchJSLogicDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"

@class EmotionStoreSearchContainerView, MMSearchBar, MMSearchBarDisplayController, NSString;

@interface MMEmotionStoreSearchController : MMObject <MMSearchBarDelegate, UISearchDisplayDelegate, UISearchBarDelegate, StoreEmotionSearchJSLogicDelegate, MMUIViewControllerDelegate>
{
    MMSearchBar *m_mmSearchBar;
    _Bool m_canSearchAfterInit;
    _Bool m_searchDimmingViewRemoved;
    MMSearchBarDisplayController *m_searchBarDisplayControler;
    EmotionStoreSearchContainerView *m_searchResultContainerView;
    NSString *m_templateDir;
    unsigned int m_templateVersion;
    unsigned long long _searchScene;
}

@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
@property(retain, nonatomic) MMSearchBar *mmSearchBar; // @synthesize mmSearchBar=m_mmSearchBar;
- (void).cxx_destruct;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)applySearchBeginAnimation:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)viewWillDisappear;
- (void)openNewPageWithPageName:(id)arg1 ReqType:(unsigned int)arg2 Keyword:(id)arg3 searchId:(unsigned long long)arg4;
- (id)getViewController;
- (void)hideSearchBarResultView;
- (void)fixSearchBarSuperviewHeight;
- (void)fixSearchBarSuperviewHeightWhenActive;
- (void)fixSearchBarMaskBug;
- (void)tryInitViewOfSearchController;
- (void)configSearchTemplate;
- (id)initWithContentsViewController:(id)arg1 AndSearchBarDisplayController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

