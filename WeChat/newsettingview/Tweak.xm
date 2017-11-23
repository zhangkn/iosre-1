%hook NewSettingViewController
//- (void).cxx_destruct { %log; %orig; }
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2 { %log; %orig; }
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 { %log; %orig; }
- (void)checkHaveNotSetPassword:(id)arg1 { %log; %orig; }
- (void)checkHaveSetPassword:(id)arg1 { %log; %orig; }
- (void)dealloc { %log; %orig; }
- (void)doNakedWxProtect { %log; %orig; }
- (void)doOnlySetWxIdProtect { %log; %orig; }
- (void)finalQuit { %log; %orig; }
- (id)getVCWithDeepLinkName:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (id)init { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)initDeepLinkConfig { %log; %orig; }
- (void)onSetPasswordBack { %log; %orig; }
- (void)onSetPasswordOK { %log; %orig; }
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1 { %log; %orig; }
- (void)preFinalQuit { %log; %orig; }
- (void)quitInternal { %log; %orig; }
- (void)reloadTableData { %log; %orig; }
- (void)showAboutMMView { %log; %orig; }
- (void)showAccountView { %log; %orig; }
- (void)showAuthAppListView { %log; %orig; }
- (void)showDeviceListView { %log; %orig; }
- (void)showEmotionShopView { %log; %orig; }
- (void)showFeedbackView { %log; %orig; }
- (void)showGeneralView { %log; %orig; }
- (void)showIpadClassicChooseView { %log; %orig; }
- (void)showNotificationView { %log; %orig; }
- (void)showPrivateConfigView { %log; %orig; }
- (void)showPrivateConfigViewWithContactVerify:(_Bool)arg1 animated:(_Bool)arg2 { %log; %orig; }
- (void)showQuitActionSheet:(id)arg1 { %log; %orig; }
- (void)showSystemNotice { %log; %orig; }
- (void)showWechatLabView { %log; %orig; }
- (void)tryQuit { %log; %orig; }
- (void)tryQuitForOnlySetWxIdProtect { %log; %orig; }
- (void)unknownFail:(id)arg1 { %log; %orig; }
- (void)viewDidLayoutSubviews { %log; %orig; }
- (void)viewDidLoad { %log; %orig; }
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 { %log; %orig; }
- (void)willAppear { %log; %orig; }
- (NSString *)debugDescription { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (NSString *)description { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (unsigned long long )hash { %log; unsigned long long  r = %orig; HBLogDebug(@" = %llu", r); return r; }
- (Class )superclass { %log; Class  r = %orig; HBLogDebug(@" = %@", r); return r; }
%end