/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryViewController : VUILibraryStackViewController <UICollectionViewDataSource, UIGestureRecognizerDelegate, VUIFamilyMembersViewControllerDelegate, VUIFamilySharingContentProtocol, VUILibraryDataSourceDelegate, VUILibraryShelfCollectionViewControllerDelegate, VUIMenuCollectionViewControllerDelegate, VUIShelvesDataSourceDelegate> {
    VUILibraryBannerCollectionViewCell * _bannerViewSizingCell;
    VUIViewControllerContentPresenter * _contentPresenter;
    VUIMediaLibrary * _currentHomeShareMediaLibrary;
    long long  _currentLibraryCategory;
    bool  _currentLibraryCategoryIsFromShelf;
    bool  _currentLibraryCategoryIsValid;
    _VUILibrarySeeAllController * _currentSeeAllController;
    bool  _doesDeviceSupportHDR;
    VUIFamilyMember * _familyMember;
    bool  _hasMediaEntitiesFetchCompleted;
    bool  _hasMenuItemFetchCompleted;
    NSArray * _homeShares;
    bool  _isPresentingDownloads;
    UIBarButtonItem * _libraryBarButton;
    VUIMediaLibrary * _mediaLibrary;
    NSArray * _menuCells;
    VUILibraryMenuDataSource * _menuDataSource;
    VUILibraryMenuItemViewCell * _menuItemSizingCell;
    bool  _ppt_isLoaded;
    VUIDownloadTableViewController * _presentedDownloadViewController;
    NSMutableArray * _shelves;
    VUILibraryShelvesDataSource * _shelvesDataSource;
    NSMutableArray * _validShelfTypes;
    bool  _viewHasAppearedAtLeastOnce;
}

@property (nonatomic, retain) VUILibraryBannerCollectionViewCell *bannerViewSizingCell;
@property (nonatomic, retain) VUIViewControllerContentPresenter *contentPresenter;
@property (nonatomic, retain) VUIMediaLibrary *currentHomeShareMediaLibrary;
@property (nonatomic) long long currentLibraryCategory;
@property (nonatomic) bool currentLibraryCategoryIsFromShelf;
@property (nonatomic) bool currentLibraryCategoryIsValid;
@property (nonatomic, retain) _VUILibrarySeeAllController *currentSeeAllController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool doesDeviceSupportHDR;
@property (nonatomic, retain) VUIFamilyMember *familyMember;
@property (nonatomic) bool hasMediaEntitiesFetchCompleted;
@property (nonatomic) bool hasMenuItemFetchCompleted;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *homeShares;
@property (nonatomic) bool isPresentingDownloads;
@property (nonatomic, retain) UIBarButtonItem *libraryBarButton;
@property (nonatomic, readonly) VUIMediaLibrary *mediaLibrary;
@property (nonatomic, retain) NSArray *menuCells;
@property (nonatomic, retain) VUILibraryMenuDataSource *menuDataSource;
@property (nonatomic, retain) VUILibraryMenuItemViewCell *menuItemSizingCell;
@property (nonatomic, retain) VUIDownloadTableViewController *presentedDownloadViewController;
@property (nonatomic, retain) NSMutableArray *shelves;
@property (nonatomic, retain) VUILibraryShelvesDataSource *shelvesDataSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *validShelfTypes;
@property (nonatomic) bool viewHasAppearedAtLeastOnce;

+ (id)_localizedTitleForShelfType:(long long)arg1;
+ (id /* block */)shelfTypesSortComparator;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (void)_addMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (long long*)_categoryForCellType:(long long)arg1;
- (long long)_categoryForShelfType:(long long)arg1;
- (void)_configureShelfViewController:(id)arg1 withShelfType:(long long)arg2;
- (void)_constructLibraryDataSourceAndUpdateActiveView;
- (void)_constructShelves;
- (id)_dataSourceForShelves;
- (id)_deviceMediaLibrary;
- (void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1;
- (void)_didGDPRConsented;
- (id)_downloadViewController;
- (bool)_downloadsAreAvailable;
- (bool)_gestureRecognizerShouldBegin;
- (bool)_haveAllInitialFetchesCompleted;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (bool)_isDeviceMediaLibraryInitialUpdateInProgress;
- (id)_localizedTitleForCellType:(long long)arg1;
- (id)_menuItems;
- (id)_navigationBarTitle;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_presentDownloadViewController;
- (void)_removeDownloadViewController;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_resetNavigationBar;
- (void)_selectLibraryCellType:(long long)arg1;
- (void)_setupNavigationItemAccessoryView;
- (bool)_shouldShowContentView;
- (void)_showContentOrNoContentView;
- (void)_startMonitoringDeviceMediaLibraryInitialUpdate;
- (void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
- (id)_symbolNameForCellType:(long long)arg1;
- (void)_updateNavigationTitle;
- (void)_updateViewIfFetchComplete;
- (void)_updateVisibleCellSeparators;
- (id)_viewControllerWithCellType:(long long)arg1;
- (id)bannerViewSizingCell;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (id)contentPresenter;
- (id)currentHomeShareMediaLibrary;
- (long long)currentLibraryCategory;
- (bool)currentLibraryCategoryIsFromShelf;
- (bool)currentLibraryCategoryIsValid;
- (id)currentSeeAllController;
- (void)dataSourceDidFinishFetching:(id)arg1;
- (void)dealloc;
- (void)didSelectMenuItemAtIndexPath:(id)arg1;
- (bool)doesDeviceSupportHDR;
- (id)familyMember;
- (void)familyMemberViewController:(id)arg1 didSelectFamilyMember:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasMediaEntitiesFetchCompleted;
- (bool)hasMenuItemFetchCompleted;
- (id)homeShares;
- (id)initWithMenuDataSource:(id)arg1;
- (bool)isPresentingDownloads;
- (id)libraryBarButton;
- (void)loadView;
- (id)mediaLibrary;
- (id)menuCells;
- (id)menuDataSource;
- (id)menuItemSizingCell;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)presentedDownloadViewController;
- (void)seeAllButtonPressed:(id)arg1;
- (void)setBannerViewSizingCell:(id)arg1;
- (void)setContentPresenter:(id)arg1;
- (void)setCurrentHomeShareMediaLibrary:(id)arg1;
- (void)setCurrentLibraryCategory:(long long)arg1;
- (void)setCurrentLibraryCategoryIsFromShelf:(bool)arg1;
- (void)setCurrentLibraryCategoryIsValid:(bool)arg1;
- (void)setCurrentSeeAllController:(id)arg1;
- (void)setDoesDeviceSupportHDR:(bool)arg1;
- (void)setFamilyMember:(id)arg1;
- (void)setHasMediaEntitiesFetchCompleted:(bool)arg1;
- (void)setHasMenuItemFetchCompleted:(bool)arg1;
- (void)setHomeShares:(id)arg1;
- (void)setIsPresentingDownloads:(bool)arg1;
- (void)setLibraryBarButton:(id)arg1;
- (void)setMenuCells:(id)arg1;
- (void)setMenuDataSource:(id)arg1;
- (void)setMenuItemSizingCell:(id)arg1;
- (void)setPresentedDownloadViewController:(id)arg1;
- (void)setShelves:(id)arg1;
- (void)setShelvesDataSource:(id)arg1;
- (void)setValidShelfTypes:(id)arg1;
- (void)setViewHasAppearedAtLeastOnce:(bool)arg1;
- (void)shelfCollectionViewController:(id)arg1 collectionView:(id)arg2 didSelectMediaEntity:(id)arg3 atIndexPath:(id)arg4;
- (id)shelves;
- (id)shelvesDataSource;
- (void)shelvesDidFinishWithDataSource:(id)arg1;
- (void)start;
- (void)traitCollectionDidChange:(id)arg1;
- (id)validShelfTypes;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (bool)viewHasAppearedAtLeastOnce;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (bool)vui_ppt_isLoading;

@end