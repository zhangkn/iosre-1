//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IWAMsgNodeJSCoreCenterExt.h"

@class NSString, UITextView, UIView;

@interface WAAppCanvasLogViewController : UIViewController <IWAMsgNodeJSCoreCenterExt>
{
    unsigned int _coreId;
    UITextView *_logView;
    UIView *_splitLine;
    UITextView *_metaInfoLabel;
}

- (void).cxx_destruct;
- (void)updateLog;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoreId:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

