/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAccountPickerTableViewController : _SFAccountTableViewController <SFAccountDetailViewControllerDelegate, SFAddSavedAccountViewControllerDelegate, _SFTableLinkableFooterViewDelegate> {
    UIBarButtonItem * _addNavigationBarItem;
    LAContext * _authenticatedContext;
    WBSAuthenticationServicesAgentProxy * _authenticationServicesAgentProxy;
    NSArray * _autoFillPasskeys;
    SFAccountPickerConfiguration * _configuration;
    <_SFAccountPickerTableViewControllerDelegate> * _delegate;
    NSIndexPath * _indexPathOfRowShowingDetailView;
    NSMutableArray * _matchingSavedAccounts;
    WBSPasskeyAutoFillFromNearbyDeviceOptions * _passkeyNearbyDeviceOptions;
    NSMutableArray * _savedAccountWithUsablePasskeys;
    NSMutableArray * _savedAccounts;
    NSMutableArray * _savedAccountsMatchingHintStrings;
    long long  _sectionForAllPasswords;
    long long  _sectionForPasskeys;
    long long  _sectionForPasswordsMatchingHintStrings;
}

@property (nonatomic, retain) LAContext *authenticatedContext;
@property (nonatomic, readonly) SFAccountPickerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFAccountPickerTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountStoreDidChange;
- (void)_addNavigationBarItemTapped:(id)arg1;
- (void)_cancel;
- (void)_deletePasswordAtIndexPath:(id)arg1;
- (void)_didPickSavedAccountForPassword:(id)arg1;
- (void)_presentAddPasswordViewController;
- (void)_reloadSavedAccountsWithCompletionHandler:(id /* block */)arg1;
- (long long)_rowTypeForIndexPath:(id)arg1;
- (id)_savedAccountForIndexPath:(id)arg1;
- (bool)_shouldShowPasskeys;
- (bool)_shouldShowPasswordsMatchingHintStringsSection;
- (void)_updateMatchingPasswords;
- (void)_updateNavigationItemTitleAndPrompt;
- (void)_updateSections;
- (void)addSavedAccountViewControllerDidFinish:(id)arg1 withSavedAccount:(id)arg2;
- (id)authenticatedContext;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)handleContextMenuDeleteForIndexPath:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)linkableFooterViewDidInteractWithLink:(id)arg1;
- (void)newAutoFillablePasskeysAvailable:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadTable;
- (void)searchPatternDidUpdate;
- (void)setAuthenticatedContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
