/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationListController : UITableViewController <CKCloudKitSyncProgressViewControllerDelegate, CKContainerSearchControllerDelegate, CKConversationListCellDelegate, CKConversationListControllerProtocol, CKConversationResultsControllerDelegate, CKMacToolbarItemProvider, CKOnboardingControllerDelegate, CNContactViewControllerDelegate, CNMeCardSharingSettingsViewControllerDelegate, IMCloudKitEventHandler, TPKContentControllerDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate, UITableViewDragDelegate, UITableViewDropDelegate> {
    CKConversationListCellLayout * _cellLayout;
    NSMapTable * _chatToConversationListCellInfo;
    UIBarButtonItem * _composeButton;
    UIButton * _composeButtonView;
    CKMacToolbarItem * _composeToolbarItem;
    bool  _compositionWasSent;
    CNContactStore * _contactStore;
    double  _conversationCellHeight;
    CKConversation * _conversationChangingPinState;
    NSMapTable * _conversationListCellToChatInfo;
    UIBarButtonItem * _customBackButton;
    NSString * _deferredSearchQuery;
    <CKConversationListControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    bool  _draggingConversation;
    unsigned long long  _filterMode;
    NSArray * _frozenConversations;
    bool  _isInitialAppearance;
    bool  _isInitialLoad;
    bool  _isSelectingConversationProgrammatically;
    bool  _isShowingSwipeDeleteConfirmation;
    bool  _isVisible;
    CKLargeTitleAccessoryView * _largeTitleAccessoryView;
    NSString * _lastSelectedConversationItemIdentifier;
    NSDate * _lastSelectedConversationTime;
    UIButton * _macLegacyComposeButton;
    CKMacToolbarController * _macToolbarController;
    CNContact * _meContact;
    CKSearchViewController * _modernSearchResultsController;
    CKNavigationBarTitleView * _navigationBarTitleView;
    UIView * _noMessagesDialogView;
    CKOnboardingController * _onboardingController;
    UIBarButtonItem * _optionsButtonItem;
    UIButton * _optionsButtonView;
    NSIndexPath * _previouslySelectedIndexPath;
    id /* block */  _searchCompletion;
    UISearchController * _searchController;
    CKConversationSearchResultsController * _searchResultsController;
    bool  _shouldUseFastPreviewText;
    UIBarButtonItem * _spacingItem;
    CKCloudKitSyncProgressViewController * _syncProgressViewController;
    TPKContentController * _tipKitContentController;
    TPKContentView * _tipKitContentView;
    CKScheduledUpdater * _updater;
    bool  _willRotate;
}

@property (nonatomic, retain) CKConversationListCellLayout *cellLayout;
@property (nonatomic, retain) NSMapTable *chatToConversationListCellInfo;
@property (nonatomic, retain) UIBarButtonItem *composeButton;
@property (nonatomic, retain) UIButton *composeButtonView;
@property (nonatomic, retain) CKMacToolbarItem *composeToolbarItem;
@property (nonatomic) bool compositionWasSent;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic) double conversationCellHeight;
@property (nonatomic, retain) CKConversation *conversationChangingPinState;
@property (nonatomic, retain) NSMapTable *conversationListCellToChatInfo;
@property (nonatomic, retain) UIBarButtonItem *customBackButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *deferredSearchQuery;
@property (nonatomic) <CKConversationListControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (getter=isDraggingConversation, nonatomic) bool draggingConversation;
@property (nonatomic) unsigned long long filterMode;
@property (nonatomic, copy) NSArray *frozenConversations;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInitialAppearance;
@property (nonatomic) bool isInitialLoad;
@property (nonatomic, readonly) bool isSearchActive;
@property (nonatomic, readonly) bool isSearchActiveAndDisplayingResultsForSearchText;
@property (nonatomic) bool isSelectingConversationProgrammatically;
@property (nonatomic) bool isShowingSwipeDeleteConfirmation;
@property (nonatomic) bool isVisible;
@property (nonatomic, retain) CKLargeTitleAccessoryView *largeTitleAccessoryView;
@property (nonatomic, retain) NSString *lastSelectedConversationItemIdentifier;
@property (nonatomic, retain) NSDate *lastSelectedConversationTime;
@property (nonatomic, retain) UIButton *macLegacyComposeButton;
@property (nonatomic) CKMacToolbarController *macToolbarController;
@property (nonatomic, retain) CNContact *meContact;
@property (nonatomic, retain) CKSearchViewController *modernSearchResultsController;
@property (nonatomic, retain) CKNavigationBarTitleView *navigationBarTitleView;
@property (nonatomic, retain) UIView *noMessagesDialogView;
@property (nonatomic, retain) CKOnboardingController *onboardingController;
@property (nonatomic, retain) UIBarButtonItem *optionsButtonItem;
@property (nonatomic, retain) UIButton *optionsButtonView;
@property (nonatomic, retain) NSIndexPath *previouslySelectedIndexPath;
@property (nonatomic, copy) id /* block */ searchCompletion;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) CKConversationSearchResultsController *searchResultsController;
@property (nonatomic, readonly) bool shouldShowPendingCell;
@property (nonatomic) bool shouldUseFastPreviewText;
@property (nonatomic, retain) UIBarButtonItem *spacingItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKCloudKitSyncProgressViewController *syncProgressViewController;
@property (nonatomic, retain) TPKContentController *tipKitContentController;
@property (nonatomic, retain) TPKContentView *tipKitContentView;
@property (nonatomic, retain) CKScheduledUpdater *updater;
@property (nonatomic) bool willRotate;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (void).cxx_destruct;
- (id)_additionalConversationMenuForCell:(id)arg1 atIndexPath:(id)arg2;
- (id)_avatarProviderFromNickname:(id)arg1;
- (void)_beginAccountRepairIfNeeded;
- (void)_cancelDeletion:(id /* block */)arg1;
- (void)_chatAllowedByScreenTimeChanged:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_chatParticipantsChangedNotification:(id)arg1;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_chatWatermarkDidChange:(id)arg1;
- (id)_contactStore;
- (void)_contactStoreDidFinishLoadingNotification:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_conversationContactPhotosEnabledChangedNotification:(id)arg1;
- (id)_conversationDetailsActionForConversation:(id)arg1 andCell:(id)arg2;
- (void)_conversationDisplayNameChangedNotification:(id)arg1;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (void)_conversationIsFilteredChangedNotification:(id)arg1;
- (void)_conversationListDidChange:(id)arg1;
- (void)_conversationListDidFinishLoadingConversations:(id)arg1;
- (id)_conversationMenuForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_conversationMessageWasSent:(id)arg1;
- (id)_conversationMuteActionForConversation:(id)arg1 andIndexPath:(id)arg2;
- (void)_conversationMuteDidChangeNotification:(id)arg1;
- (void)_conversationPinStateChangedNotification:(id)arg1;
- (void)_conversationSpamFilteringStateChangedNotification:(id)arg1;
- (id)_deleteConversationActionForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_dismissPresentedNavController:(id)arg1;
- (void)_downtimeStateChanged:(id)arg1;
- (void)_endHoldingUpdatesForBatchEditing:(bool)arg1;
- (void)_endHoldingUpdatesOnViewWillAppear;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (id)_getTitleForCurrentFilterMode;
- (void)_handleAccountRegistrationChange:(id)arg1;
- (bool)_imageForkedFromMeCard;
- (void)_increaseContrastDidChange:(id)arg1;
- (unsigned long long)_indexOfConverationClosestToDeletedIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfDefaultConversation;
- (bool)_indexPathValidForActiveConversation:(id)arg1;
- (bool)_indexPathValidForPendingConversation:(id)arg1;
- (id)_indexPaths:(id)arg1 containingHandleWithUID:(id)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (unsigned long long)_meCardSharingAudience;
- (bool)_meCardSharingEnabled;
- (id)_meCardSharingNameProviderWithContact:(id)arg1;
- (id)_meCardSharingState;
- (id)_meContact;
- (bool)_messageSpamFilteringEnabled;
- (bool)_messageUnknownFilteringEnabled;
- (void)_multiWayCallStateChanged:(id)arg1;
- (id)_openConversationInNewWindowActionForIndexPath:(id)arg1;
- (void)_refreshConversationList;
- (void)_reloadVisibleConversationList:(id)arg1;
- (void)_selectConversationAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (bool)_shouldHaveAllFilterModes;
- (bool)_shouldKeepSelection;
- (bool)_shouldResizeNavigationBar;
- (bool)_shouldShowInboxView;
- (void)_showConversationWithComposition:(id)arg1 atIndexPath:(id)arg2;
- (id)_topLevelMenuForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateConversationFilteredFlagsAndReportSpam;
- (void)_updateConversationListNeedsResort:(bool)arg1;
- (void)_updateConversationListsAndSortIfEnabled;
- (void)_updateInsets;
- (void)_updateNavbarLayoutIfNeeded;
- (void)_updateSyncProgressIfNeededWithProgressController:(id)arg1 forceShow:(bool)arg2;
- (id)activeConversations;
- (id)alertMessageForDelete;
- (id)alertTitleForDelete;
- (void)applicationWillSuspend;
- (void)avatarHeaderWasTappedForConversation:(id)arg1 inCell:(id)arg2;
- (void)backButtonPressed;
- (void)batchDeleteButtonTapped:(id)arg1;
- (void)beginHoldingConversationListUpdatesForKey:(id)arg1;
- (void)beginHoldingConversationListUpdatesForPPTTests;
- (id)cellLayout;
- (id)chatToConversationListCellInfo;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (void)cloudKitSyncProgressViewController:(id)arg1 actionButtonWasPressed:(long long)arg2 errors:(id)arg3;
- (id)composeButton;
- (void)composeButtonClicked:(id)arg1;
- (id)composeButtonView;
- (id)composeToolbarItem;
- (void)compositionSent;
- (bool)compositionWasSent;
- (void)configureWithToolbarController:(id)arg1;
- (id)contactStore;
- (void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(bool)arg3;
- (void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(bool)arg3;
- (double)conversationCellHeight;
- (id)conversationChangingPinState;
- (id)conversationList;
- (Class)conversationListCellClass;
- (id)conversationListCellToChatInfo;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (id)customBackButton;
- (void)dealloc;
- (id)deferredSearchQuery;
- (id)delegate;
- (void)deleteButtonTappedForIndexPath:(id)arg1 completionHandler:(id /* block */)arg2 cellToUpdate:(id)arg3;
- (void)deleteSelectedConversation;
- (void)didDismissSearchController:(id)arg1;
- (id)doneButton;
- (void)doneButtonTapped:(id)arg1;
- (void)endHoldingAllConversationListUpdatesForKey:(id)arg1;
- (void)endHoldingConversationListUpdatesForKey:(id)arg1;
- (void)endHoldingConversationListUpdatesForPPTTests;
- (unsigned long long)filterMode;
- (long long)firstVisibleRowInTable;
- (id)frozenConversations;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)init;
- (id)inputAccessoryView;
- (void)invalidateCellLayout;
- (bool)isDraggingConversation;
- (bool)isInitialAppearance;
- (bool)isInitialLoad;
- (bool)isSearchActive;
- (bool)isSearchActiveAndDisplayingResultsForSearchText;
- (bool)isSelectingConversationProgrammatically;
- (bool)isShowingSwipeDeleteConfirmation;
- (bool)isVisible;
- (bool)itemProviderDisablesTouches;
- (id)largeTitleAccessoryView;
- (id)lastSelectedConversationItemIdentifier;
- (id)lastSelectedConversationTime;
- (long long)lastVisibleRowInTable;
- (void)loadView;
- (id)macLegacyComposeButton;
- (id)macToolbarController;
- (void)markAsReadButtonTapped:(id)arg1;
- (void)markAsReadButtonTappedForIndexPath:(id)arg1;
- (id)meContact;
- (id)modernSearchResultsController;
- (void)muteConversationButtonTappedForIndexPath:(id)arg1 setMuted:(bool)arg2;
- (id)navigationBarTitleView;
- (id)nicknameController;
- (id)noMessagesDialogView;
- (void)noteUnreadCountsChanged;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)onboardingController;
- (void)onboardingControllerDidFinish:(id)arg1;
- (id)optionsButtonItem;
- (void)optionsButtonTapped:(id)arg1;
- (id)optionsButtonView;
- (void)performDeletionForActiveConversation:(id)arg1 indexPath:(id)arg2 completionHandler:(id /* block */)arg3 cellToUpdate:(id)arg4;
- (void)performDeletionForPendingConversationCell:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performResumeDeferredSetup;
- (void)performSearch:(id)arg1 completion:(id /* block */)arg2;
- (long long)preferredStatusBarStyle;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (id)presentingViewControllerForOnboardingController:(id)arg1;
- (id)previouslySelectedIndexPath;
- (void)providerWillBeRemovedFromToolbarController:(id)arg1;
- (void)registerForCloudKitEventsImmediately;
- (void)registerForCloudKitEventsWithDelayedRegistration:(bool)arg1;
- (void)reloadCellForConversation:(id)arg1;
- (void)reloadData;
- (void)removePendingConversationCell;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)searchBarForSearchViewController:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id /* block */)searchCompletion;
- (id)searchController;
- (id)searchController:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searchController:(id)arg1 didSelectItem:(id)arg2 inChat:(id)arg3;
- (void)searchControllerDidBeginDragging:(id)arg1;
- (id)searchResultsController;
- (void)searchViewController:(id)arg1 requestsPushOfSearchController:(id)arg2;
- (id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searcher:(id)arg1 userDidDeleteChatGUID:(id)arg2;
- (void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;
- (void)searcherDidComplete:(id)arg1;
- (void)selectConversationClosestToDeletedIndex:(unsigned long long)arg1;
- (void)selectDefaultConversationAnimated:(bool)arg1;
- (void)selectDefaultConversationAnimated:(bool)arg1 removingPendingConversationCell:(bool)arg2;
- (void)selectFirstActiveConversation;
- (void)selectNextSequentialConversation:(bool)arg1;
- (void)selectPinnedConversationForItem:(long long)arg1;
- (void)selectedDeleteButtonForConversation:(id)arg1 inCell:(id)arg2;
- (void)setCellLayout:(id)arg1;
- (void)setChatToConversationListCellInfo:(id)arg1;
- (void)setComposeButton:(id)arg1;
- (void)setComposeButtonView:(id)arg1;
- (void)setComposeToolbarItem:(id)arg1;
- (void)setCompositionWasSent:(bool)arg1;
- (void)setContactStore:(id)arg1;
- (void)setConversationCellHeight:(double)arg1;
- (void)setConversationChangingPinState:(id)arg1;
- (void)setConversationListCellToChatInfo:(id)arg1;
- (void)setCustomBackButton:(id)arg1;
- (void)setDeferredSearchQuery:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setDraggingConversation:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFilterMode:(unsigned long long)arg1;
- (void)setFrozenConversations:(id)arg1;
- (void)setIsInitialAppearance:(bool)arg1;
- (void)setIsInitialLoad:(bool)arg1;
- (void)setIsSelectingConversationProgrammatically:(bool)arg1;
- (void)setIsShowingSwipeDeleteConfirmation:(bool)arg1;
- (void)setIsVisible:(bool)arg1;
- (void)setLargeTitleAccessoryView:(id)arg1;
- (void)setLastSelectedConversationItemIdentifier:(id)arg1;
- (void)setLastSelectedConversationTime:(id)arg1;
- (void)setMacLegacyComposeButton:(id)arg1;
- (void)setMacToolbarController:(id)arg1;
- (void)setMeContact:(id)arg1;
- (void)setModernSearchResultsController:(id)arg1;
- (void)setNavigationBarTitleView:(id)arg1;
- (void)setNoMessagesDialogView:(id)arg1;
- (void)setOnboardingController:(id)arg1;
- (void)setOptionsButtonItem:(id)arg1;
- (void)setOptionsButtonView:(id)arg1;
- (void)setPreviouslySelectedIndexPath:(id)arg1;
- (void)setSearchCompletion:(id /* block */)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchResultsController:(id)arg1;
- (void)setShouldUseFastPreviewText:(bool)arg1;
- (void)setSpacingItem:(id)arg1;
- (void)setSyncProgressViewController:(id)arg1;
- (void)setTipKitContentController:(id)arg1;
- (void)setTipKitContentView:(id)arg1;
- (void)setUpdater:(id)arg1;
- (void)setWillRotate:(bool)arg1;
- (void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(bool)arg2;
- (void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2;
- (void)sharingSettingsViewControllerDidUpdateContact:(id)arg1;
- (bool)shouldInsetResultsForSearchController:(id)arg1;
- (bool)shouldScrollTableAtCellSelection:(id)arg1;
- (bool)shouldShowPendingCell;
- (bool)shouldUseFastPreviewText;
- (void)showAccountMismatachAlertForNicknames;
- (void)showMeCardViewController;
- (void)showMeCardViewControllerWithNickname:(id)arg1;
- (void)showMultiplePhoneNumbersAlertForNicknames;
- (void)significantTimeChange;
- (id)spacingItem;
- (unsigned long long)supportedInterfaceOrientations;
- (id)syncProgressViewController;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canHandleDropSession:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (bool)tableView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableViewSpacingForExtraSeparators:(id)arg1;
- (id)tipKitContentController;
- (id)tipKitContentView;
- (id)toolbarItemForIdentifier:(id)arg1;
- (void)unregisterForCloudKitEvents;
- (void)updateBackButton;
- (void)updateConversationList;
- (void)updateConversationListForMessageSentToConversation:(id)arg1;
- (void)updateConversationNamesForNicknames:(id)arg1;
- (void)updateConversationSelection;
- (void)updateMarginWidth;
- (void)updateNavigationItems;
- (void)updateNoMessagesDialog;
- (void)updateSMSSpamConversationsDisplayName;
- (void)updateSyncProgressIfNeeded;
- (void)updateTitleViews:(bool)arg1;
- (id)updater;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (double)widthForDeterminingAvatarVisibility;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (bool)willRotate;

// Image: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_updateToolbarItems;
- (void)viewDidAppear:(bool)arg1;

@end
