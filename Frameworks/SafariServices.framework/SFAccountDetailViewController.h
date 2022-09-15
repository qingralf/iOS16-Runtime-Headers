/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFAccountDetailViewController : UITableViewController <ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, PSStateRestoration, SFAccountNoteTableViewCellDelegate, SFAccountOtpauthQRCodeScannerViewControllerDelegate, SFSecurityRecommendationInfoCellDelegate, UIEditMenuInteractionDelegate, UITextFieldDelegate, _ASAccountAuthenticationModificationExtensionManagerObserver, _SFAccountManagerLockableContentContainer, _SFTableLinkableFooterViewDelegate, _SFTableViewDiffableDataSourceDelegate> {
    UITableViewCell * _TOTPCodeCell;
    NSArray * _TOTPGenerators;
    NSTimer * _TOTPTimer;
    ASAccountAuthenticationModificationController * _accountAuthenticationModificationController;
    NSExtension * _accountModificationExtension;
    long long  _accountUpgradeOriginType;
    UINavigationController * _addPasswordNavigationController;
    UIBarButtonItem * _backBarButtonItem;
    UIBarButtonItem * _cancelBarButtonItem;
    UITableViewCell * _changePasswordOnWebsiteCell;
    SFSafariViewController * _changePasswordSafariViewController;
    UITableViewCell * _changeToStrongPasswordCell;
    bool  _completedUpgradeToSignInWithApple;
    bool  _completedUpgradeToStrongPassword;
    <SFAccountDetailViewControllerDelegate> * _delegate;
    bool  _didAcceptTOTPQRCode;
    bool  _didShowAccountOptionsHeaderText;
    NSObject<OS_dispatch_queue> * _diffableDataSourceQueue;
    UIBarButtonItem * _doneBarButtonItem;
    UIBarButtonItem * _editBarButtonItem;
    UIEditMenuInteraction * _editMenuInteraction;
    bool  _eligibleToChangeToStrongPassword;
    bool  _eligibleToUpgradeToSignInWithApple;
    SFAccountDetailHeaderViewCell * _headerCell;
    bool  _isAuthenticatingForOneTimeSharing;
    SFAccountNoteTableViewCell * _notesCell;
    NSString * _notesForEditing;
    unsigned long long  _options;
    _SFTableLinkableFooterView * _passkeyFooterView;
    SFEditableTableViewCell * _passwordCell;
    NSString * _passwordForEditing;
    WBSPasswordWarning * _passwordWarning;
    NSString * _rulesForStrongPasswordChange;
    WBSSavedAccount * _savedAccount;
    WBSSavedAccountChangeRequest * _savedAccountChangeRequest;
    UIAlertController * _secretEntryAlertController;
    SFSecurityRecommendationInfoCell * _securityRecommendationInfoCell;
    UITableViewCell * _setupTOTPCodeCell;
    UIBarButtonItem * _shareBarButtonItem;
    bool  _shouldDiffableDataSourceShowEditingState;
    bool  _showPasswordAsBulletsWhenNotEditing;
    bool  _showsChangePasswordControllerOnAppearance;
    _SFTableViewDiffableDataSource * _tableViewDiffableDataSource;
    UITableViewHeaderFooterView * _totpFooterView;
    UITableViewCell * _upgradeToSignInWithAppleCell;
    SFEditableTableViewCell * _userCell;
    NSString * _userForEditing;
    UITableViewCell * _visitWebsiteCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAccountDetailViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldSuppressAccountManagerLockedView;
@property (getter=isShowingAccountManagerLockedView, nonatomic) bool showingAccountManagerLockedView;
@property (nonatomic) bool showsChangePasswordControllerOnAppearance;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void).cxx_destruct;
- (void)QRCodeScannerViewController:(id)arg1 didScanQRCodeWithURLValue:(id)arg2;
- (id)_accountHeaderSectionFooterView;
- (void)_accountStoreDidUpdate;
- (void)_addAccountUpgradeItemsForSectionType:(long long)arg1 toSnapshot:(id)arg2;
- (void)_addNotesSectionToSnapshot:(id)arg1;
- (void)_addTOTPGenerator:(id)arg1;
- (void)_addTOTPGeneratorsToSnapshot:(id)arg1;
- (bool)_allowAuditing;
- (bool)_allowEditing;
- (void)_cancelBarButtonItemTapped:(id)arg1;
- (void)_cancelChangesAndFinishEditing;
- (id)_changePasswordURL;
- (void)_completedSignInWithAppleUpgrade;
- (void)_completedStrongPasswordUpgrade;
- (bool)_completedUpgrade;
- (void)_configureCell:(id)arg1 withText:(id)arg2 detailText:(id)arg3 detailPlaceholderText:(id)arg4 secureEntry:(bool)arg5;
- (void)_configureHeaderViewCell:(id)arg1;
- (void)_configurePasswordCell:(id)arg1;
- (void)_configureSecurityRecommendationInfoCell;
- (void)_configureUserCell:(id)arg1;
- (id)_createShareBarButtonItem;
- (id)_deleteCellForTableView:(id)arg1;
- (id)_deletePasskeyCellForTableView:(id)arg1;
- (void)_deletePassword;
- (id)_deletePasswordCellForTableView:(id)arg1 shouldRemoveTOTPGenerator:(bool)arg2;
- (void)_deleteTOTPGenerator:(id)arg1;
- (void)_deleteTOTPGeneratorWithConfirmation:(id)arg1;
- (void)_doneBarButtonItemTapped:(id)arg1;
- (void)_editBarButtonItemTapped:(id)arg1;
- (id)_editableCellWithCell:(id)arg1;
- (id)_footerTextForLastOneTimeShareDate:(id)arg1;
- (void)_hideSecurityRecommendation;
- (void)_initiateChangeToStrongPassword;
- (void)_initiateUpgradeToSignInWithApple;
- (long long)_itemTypeForIdentifier:(id)arg1;
- (id)_lastModifiedDateString;
- (id)_newSecretEntryAlertController;
- (void)_openChangePasswordURLInWebBrowser;
- (void)_openURLInSafariViewController:(id)arg1 shouldSupressPasswordUpdatePrompts:(bool)arg2;
- (id)_passkeyCreationDateString;
- (id)_passkeyFooterView;
- (id)_passkeySectionFooterView;
- (id)_passwordAuditor;
- (id)_passwordEvaluator;
- (id)_passwordGenerator;
- (id)_passwordWarningManager;
- (void)_presentHideSecurityRecommendationConfirmationAlert;
- (void)_reloadDiffableDataSourceAnimated:(bool)arg1;
- (void)_reloadDiffableDataSourceOnInternalQueueAnimated:(bool)arg1;
- (void)_reloadPasskeySectionFooters;
- (void)_replaceAddPasswordButtonWithPasswordCell;
- (void)_revealPasswordIfNecessary;
- (void)_saveAccountAndFinishEditing;
- (id)_savedAccountWebsiteCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (long long)_sectionTypeForSection:(long long)arg1;
- (id)_securePasswordPlaceholderText:(id)arg1;
- (id)_securityRecommendationSubtitleString;
- (void)_setEditing:(bool)arg1 animated:(bool)arg2;
- (void)_setHighLyLegibleFontForDetailTextInCell:(id)arg1;
- (void)_shareBarButtonItemTapped:(id)arg1;
- (void)_sharePasswordWithAuthenticationContext:(id)arg1 popoverPresentationControllerConfiguration:(id /* block */)arg2;
- (void)_sharePasswordWithPopoverPresentationControllerConfiguration:(id /* block */)arg1;
- (bool)_shouldShowAccountOptionsHeader;
- (bool)_shouldShowMenuForItemIdentifier:(long long)arg1;
- (bool)_shouldShowSecurityRecommendationSection;
- (void)_showChangePasswordSafariViewController;
- (void)_showConfirmationToDeleteCredentialTypes:(long long)arg1;
- (void)_showConfirmationToDeletePasswordAndTOTPGenerator;
- (id)_subtitleStringForSignInWithAppleUpgrade;
- (id)_subtitleStringForStrongPasswordUpgrade;
- (void)_textFieldChanged:(id)arg1;
- (void)_updateAccountModificationOptions;
- (void)_updateAddButtonsInAccountOptionsSectionForSnapshot:(id)arg1;
- (void)_updateAddPasswordButton:(bool)arg1 forSnapshot:(id)arg2;
- (void)_updateCachedTOTPGenerators;
- (void)_updatePasswordFieldTextSuggestions:(id)arg1;
- (void)_updateSavedAccountChangeRequest;
- (void)_updateWarningForSavedAccount;
- (id)_warningTitleForPassword;
- (void)accountAuthenticationModificationController:(id)arg1 didFailRequest:(id)arg2 withError:(id)arg3;
- (void)accountAuthenticationModificationController:(id)arg1 didSuccessfullyCompleteRequest:(id)arg2 withUserInfo:(id)arg3;
- (void)accountModificationExtensionManagerExtensionListDidChange:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)dataSource:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)dataSource:(id)arg1 commitEditingStyle:(long long)arg2 forItemIdentifier:(id)arg3;
- (id)dataSource:(id)arg1 footerTextForSection:(long long)arg2;
- (id)dataSource:(id)arg1 headerTextForSection:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (id)initWithSavedAccount:(id)arg1 passwordWarning:(id)arg2 options:(unsigned long long)arg3;
- (void)linkableFooterViewDidInteractWithLink:(id)arg1;
- (void)noteTableViewCellTextViewTapped:(id)arg1;
- (id)presentationAnchorForAccountAuthenticationModificationController:(id)arg1;
- (void)safari_copyOneTimeCode:(id)arg1;
- (void)safari_copyPassword:(id)arg1;
- (void)safari_copyUserName:(id)arg1;
- (void)safari_copyWebsite:(id)arg1;
- (void)safari_sharePassword:(id)arg1;
- (void)securityRecommendationInfoCellHideButtonPressed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsChangePasswordControllerOnAppearance:(bool)arg1;
- (bool)shouldSuppressAccountManagerLockedView;
- (bool)showsChangePasswordControllerOnAppearance;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/SafariServices.axbundle/SafariServices

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (id)_cellForIdentifier:(id)arg1 indexPath:(id)arg2;

@end