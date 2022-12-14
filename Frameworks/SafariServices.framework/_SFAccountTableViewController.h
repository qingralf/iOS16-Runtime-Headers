/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAccountTableViewController : UITableViewController <SFAccountDetailViewControllerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, _SFAccountIconControllerDelegate, _SFAccountManagerLockableContentContainer> {
    _SFAccountTableConfiguration * _configuration;
    _SFAccountIconController * _iconController;
    bool  _isAuthenticatingForOneTimeSharing;
    UISearchController * _searchController;
    NSString * _searchPattern;
    NSCountedSet * _visibleDomains;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, readonly) NSString *searchPattern;
@property (nonatomic, retain) NSString *searchQuery;
@property (nonatomic, readonly) bool shouldSuppressAccountManagerLockedView;
@property (getter=isShowingAccountManagerLockedView, nonatomic) bool showingAccountManagerLockedView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasMarkedText;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_shareSavedAccount:(id)arg1 authenticationContext:(id)arg2 modalPresentationSourceView:(id)arg3;
- (void)_shareSavedAccount:(id)arg1 modalPresentationSourceView:(id)arg2;
- (bool)_shouldShowToolbarWhenSearching;
- (bool)_shouldUseStackedSearchBarPlacement;
- (id)_tableView:(id)arg1 previewForIndexPath:(id)arg2;
- (void)_updateIconForDomain:(id)arg1 forCell:(id)arg2;
- (void)handleContextMenuDeleteForIndexPath:(id)arg1;
- (id)iconControllerForAccountDetailViewController:(id)arg1;
- (void)iconDidUpdateForDomain:(id)arg1 iconController:(id)arg2;
- (id)initWithSiteMetadataManager:(id)arg1 configuration:(id)arg2;
- (long long)positionForBar:(id)arg1;
- (id)searchController;
- (id)searchPattern;
- (void)searchPatternDidUpdate;
- (id)searchQuery;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setSearchController:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (bool)shouldSuppressAccountManagerLockedView;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
