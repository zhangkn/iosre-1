//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSStateRestoration.h"

@class NSBundle, NSDictionary, NSMutableArray, NSString, PSRootController, PSSearchEntry, PSSpecifier, UIViewController, UIViewController<PSController>;

@protocol PSController <PSStateRestoration>
- (void)didLock;
- (void)didUnlock;
- (void)didWake;
- (void)handleURL:(NSDictionary *)arg1;
- (UIViewController<PSController> *)parentController;
- (id)readPreferenceValue:(PSSpecifier *)arg1;
- (PSRootController *)rootController;
- (void)setParentController:(UIViewController<PSController> *)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(PSSpecifier *)arg2;
- (void)setRootController:(PSRootController *)arg1;
- (void)setSpecifier:(PSSpecifier *)arg1;
- (void)showController:(UIViewController *)arg1;
- (void)showController:(UIViewController *)arg1 animate:(_Bool)arg2;
- (PSSpecifier *)specifier;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)suspend;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)willUnlock;

@optional
+ (void)formatSearchEntries:(NSMutableArray *)arg1 parent:(PSSearchEntry *)arg2;
+ (NSBundle *)searchBundle;
+ (void)validateSpecifier:(PSSpecifier *)arg1;
- (void)highlightSpecifierWithID:(NSString *)arg1;
- (_Bool)prepareHandlingURLForSpecifierID:(NSString *)arg1 resourceDictionary:(NSDictionary *)arg2 animatePush:(_Bool *)arg3;
- (void)pushController:(UIViewController *)arg1;
- (void)pushController:(UIViewController *)arg1 animate:(_Bool)arg2;
@end

