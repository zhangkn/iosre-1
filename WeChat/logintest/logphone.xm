%hook WCAccountMainLoginViewController
//- (void).cxx_destruct { %log; %orig; }
- (void)CountryCodePickerDidPickCountryCode:(id)arg1 { %log; %orig; }
- (void)WCBaseInfoItemEditChanged:(id)arg1 { %log; %orig; }
- (void)WCBaseInfoItemPressReturnKey:(id)arg1 { %log; %orig; }
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 { %log; %orig; }
- (void)setBShouldShowBackBtn:(_Bool )bShouldShowBackBtn { %log; %orig; }
- (_Bool )bShouldShowBackBtn { %log; _Bool  r = %orig; HBLogDebug(@" = %d", r); return r; }
- (void)setBShowPhoneLoginViewFirst:(_Bool )bShowPhoneLoginViewFirst { %log; %orig; }
- (_Bool )bShowPhoneLoginViewFirst { %log; _Bool  r = %orig; HBLogDebug(@" = %d", r); return r; }
- (void)checkNextBtnEnable { %log; %orig; }
- (void)dealloc { %log; %orig; }
- (void)didReceiveMemoryWarning { %log; %orig; }
- (void)findCountryCode { %log; %orig; }
- (id)init { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
- (void)initTableView { %log; %orig; }
- (void)onBothDeviceClicked { %log; %orig; }
- (void)onNext { %log; %orig; }
- (void)onSwitch { %log; %orig; }
- (void)setDelegate:(id)arg1 { %log; %orig; }
- (void)setupWithData:(id)arg1 { %log; %orig; }
- (void)showCountryCode { %log; %orig; }
- (void)showCountryCodePickerView { %log; %orig; }
- (void)showFooterViewWithSwitchBtnTitle:(id)arg1 loginBtnTitle:(id)arg2 { %log; %orig; }
- (void)showPhoneLoginFooter { %log; %orig; }
- (void)showUserLoginFooter { %log; %orig; }
- (void)switchToPhoneLogin { %log; %orig; }
- (void)switchToUserLogin { %log; %orig; }
- (_Bool)useGrayBackgroundColor { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
- (void)userDidClickBack { %log; %orig; }
- (void)userDidClickMore { %log; %orig; }
- (void)vcResignFirstResponder { %log; %orig; }
- (void)viewDidLoad { %log; %orig; }
- (NSString *)debugDescription { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (NSString *)description { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
- (unsigned long long )hash { %log; unsigned long long  r = %orig; HBLogDebug(@" = %llu", r); return r; }
- (Class )superclass { %log; Class  r = %orig; HBLogDebug(@" = %@", r); return r; }
%end