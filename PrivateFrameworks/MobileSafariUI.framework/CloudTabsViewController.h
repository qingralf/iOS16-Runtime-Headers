/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface CloudTabsViewController : UIViewController <PreviewTableViewControllerDelegate, UISearchResultsUpdating, UITableViewDataSource, UITableViewDelegate, UITableViewDragDelegate> {
    CloudTabStore * _cloudTabStore;
    NSTimer * _delayReloadTimer;
    <CloudTabsViewControllerDelegate> * _delegate;
    NSArray * _devices;
    UIBarButtonItem * _doneBarButtonItem;
    UIBarButtonItem * _editBarButtonItem;
    <LinkPreviewProvider> * _linkPreviewProvider;
    <_SFNavigationIntentHandling> * _navigationIntentHandler;
    bool  _onlyShowsPrimaryDevice;
    NSString * _primaryDeviceUUID;
    UISearchController * _searchController;
    <TabGroupProvider> * _tabGroupProvider;
    UITableView * _tableView;
    PreviewTableViewController * _tableViewController;
    NSString * _userTypedFilter;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CloudTabsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <LinkPreviewProvider> *linkPreviewProvider;
@property (nonatomic) <_SFNavigationIntentHandling> *navigationIntentHandler;
@property (readonly) Class superclass;
@property (nonatomic) <TabGroupProvider> *tabGroupProvider;

- (void).cxx_destruct;
- (void)_cloudTabsDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_delayReloadTimerFired;
- (void)_deleteRowAtIndexPath:(id)arg1;
- (id)_deviceForIndexPath:(id)arg1;
- (id)_filteredTabsInSection:(long long)arg1;
- (void)_loadDevices;
- (void)_reloadDevicesAndTable;
- (id)_tabForIndexPath:(id)arg1;
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)_updateContentUnavailableConfiguration;
- (id)_urlForRowAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (id)initWithCloudTabStore:(id)arg1 primaryDeviceUUID:(id)arg2;
- (id)linkPreviewProvider;
- (void)loadView;
- (id)navigationIntentHandler;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)previewTableViewController:(id)arg1 URLForRowAtIndexPath:(id)arg2;
- (id)previewTableViewController:(id)arg1 menuForRowAtIndexPath:(id)arg2;
- (id)safari_tableViewForScrollPositionSaving;
- (id)safari_tableViewScrollPositionSaveIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setLinkPreviewProvider:(id)arg1;
- (void)setNavigationIntentHandler:(id)arg1;
- (void)setTabGroupProvider:(id)arg1;
- (id)tabGroupProvider;
- (bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (bool)tableView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end