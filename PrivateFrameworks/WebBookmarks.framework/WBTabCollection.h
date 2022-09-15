/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WBTabCollection : NSObject <WBStateProvider, WBTabProvider_Internal> {
    WebBookmarkTabCollection * _collection;
    WBCollectionConfiguration * _configuration;
    unsigned long long  _maximumTabsPerGroup;
}

@property (nonatomic, readonly) WBBrowserState *browserState;
@property (getter=hasCompletedMigration, nonatomic) bool completedMigration;
@property (nonatomic, readonly) WBCollectionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLockedSync;
@property (nonatomic, readonly) WBBrowserState *lastSessionBrowserState;
@property (nonatomic) unsigned long long maximumTabsPerGroup;
@property (nonatomic, readonly, copy) NSArray *mutableTabGroups;
@property (getter=isPersistent, nonatomic, readonly) bool persistent;
@property (nonatomic, readonly) int pinnedTabsFolderID;
@property (nonatomic, readonly) int privatePinnedTabsFolderID;
@property (nonatomic, readonly) bool shouldUpdatePresence;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WebBookmarkTabCollection *tabCollection;
@property (nonatomic, readonly, copy) NSArray *tabGroups;
@property (nonatomic, readonly, copy) NSArray *windowStates;
@property (nonatomic, readonly, copy) NSArray *windows;
@property (nonatomic, readonly) int windowsFolderSpecialID;

+ (id)currentDeviceIdentifier;
+ (id)databasePathForConfiguration:(id)arg1;
+ (id)inMemoryChangeSet;

- (void).cxx_destruct;
- (id)_bookmarksForTabs:(id)arg1;
- (id)_bookmarksForTabs:(id)arg1 syncable:(bool)arg2;
- (id)_bookmarksFromItems:(id)arg1;
- (id)_collection;
- (id)_collectionWithConfiguration:(id)arg1 checkIntegrity:(bool)arg2;
- (bool)_deleteItems:(id)arg1 leaveTombstones:(bool)arg2;
- (bool)_deleteTabGroup:(id)arg1 leaveTombstone:(bool)arg2;
- (id)_descriptionForScopedBookmark:(id)arg1;
- (bool)_insertBookmark:(id)arg1 afterBookmark:(id)arg2 inFolderWithID:(int)arg3;
- (bool)_insertItems:(id)arg1 inParentWithID:(unsigned int)arg2 afterItem:(id)arg3;
- (bool)_insertItemsIntoPlace:(id)arg1 inParentWithID:(unsigned int)arg2;
- (void)_readPropertiesOfBookmark:(id)arg1;
- (bool)_reorderBookmarkIntoPlace:(id)arg1;
- (bool)_reorderItem:(id)arg1 afterItem:(id)arg2;
- (bool)_reorderItemIntoPlace:(id)arg1;
- (bool)_saveBrowserState:(id)arg1;
- (bool)_saveItem:(id)arg1;
- (id)_shareRecordForTabGroup:(id)arg1;
- (id)_tabGroups;
- (bool)_updateItems:(id)arg1 inParentWithID:(unsigned int)arg2;
- (bool)_updatePinnedTabs:(id)arg1 privatePinnedTabs:(id)arg2;
- (id)activeParticipantsInTab:(id)arg1;
- (id)activeParticipantsInTabGroup:(id)arg1;
- (id)browserState;
- (bool)closeWindowState:(id)arg1;
- (id)configuration;
- (void)createTopScopedBookmarkListIfNeededForTabGroup:(id)arg1;
- (bool)deleteAllLocalSavedState;
- (bool)deleteAllWindowStates;
- (bool)deleteItems:(id)arg1 leaveTombstones:(bool)arg2;
- (void)deleteItems:(id)arg1 leaveTombstones:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)deleteTabGroup:(id)arg1;
- (bool)deleteTabs:(id)arg1;
- (bool)deleteWindowState:(id)arg1;
- (bool)deleteWindowStates:(id)arg1;
- (void)deleteWindowStates:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)error;
- (bool)hasCompletedMigration;
- (id)initWithConfiguration:(id)arg1 openDatabase:(bool)arg2;
- (id)initWithConfiguration:(id)arg1 openDatabase:(bool)arg2 checkIntegrity:(bool)arg3;
- (id)initWithTabCollection:(id)arg1;
- (void)insertItems:(id)arg1 inParent:(id)arg2 afterItem:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)insertItems:(id)arg1 inParentWithID:(unsigned int)arg2 afterItem:(id)arg3;
- (void)insertItems:(id)arg1 inParentWithID:(unsigned int)arg2 afterItem:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)insertItemsIntoPlace:(id)arg1 inParent:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)insertItemsIntoPlace:(id)arg1 inParentWithID:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (bool)insertTab:(id)arg1 inTabGroup:(id)arg2 afterTab:(id)arg3;
- (bool)insertTabGroup:(id)arg1 afterTabGroup:(id)arg2;
- (bool)insertTabs:(id)arg1 inTabGroup:(id)arg2 afterTab:(id)arg3;
- (bool)isLockedSync;
- (bool)isPersistent;
- (id)itemsInParentWithID:(unsigned int)arg1 ofType:(Class)arg2;
- (id)lastSessionBrowserState;
- (bool)lockSync;
- (unsigned long long)maximumTabsPerGroup;
- (id)mutableTabGroupWithUUID:(id)arg1;
- (id)mutableTabGroups;
- (id)mutableTabWithUUID:(id)arg1;
- (id)mutableTabsForTabGroup:(id)arg1;
- (void)performMaintenance;
- (void)performOnDatabaseQueue:(id /* block */)arg1;
- (int)pinnedTabsFolderID;
- (id)presenceTabUUIDForParticipant:(id)arg1 inTabGroup:(id)arg2;
- (int)privatePinnedTabsFolderID;
- (id)recordIDForTab:(id)arg1;
- (void)reloadItems:(id)arg1;
- (bool)reorderItem:(id)arg1 afterItem:(id)arg2;
- (void)reorderItem:(id)arg1 afterItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)reorderItemIntoPlace:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)saveBrowserState:(id)arg1;
- (void)saveBrowserState:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)saveItem:(id)arg1;
- (void)saveItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)saveTabGroup:(id)arg1;
- (bool)saveWindow:(id)arg1;
- (bool)saveWindowState:(id)arg1;
- (void)saveWindowState:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)scopedBookmarkListWithID:(int)arg1;
- (id)scopedBookmarkListWithID:(int)arg1 filteredUsingString:(id)arg2;
- (id)scopedBookmarkWithUUID:(id)arg1;
- (void)setCompletedMigration:(bool)arg1;
- (void)setMaximumTabsPerGroup:(unsigned long long)arg1;
- (id)shareRecordForTabGroup:(id)arg1;
- (void)shareRecordForTabGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)shouldUpdatePresence;
- (id)tabCollection;
- (id)tabGroupMatchingShare:(id)arg1 inTabGroups:(id)arg2;
- (id)tabGroupWithUUID:(id)arg1;
- (id)tabGroups;
- (void)tabGroupsWithCompletionHandler:(id /* block */)arg1;
- (id)tabWithUUID:(id)arg1;
- (id)tabsForTabGroup:(id)arg1;
- (id)topScopedBookmarkListForTabGroup:(id)arg1;
- (void)unlockSync;
- (bool)updateItems:(id)arg1 inParentWithID:(unsigned int)arg2;
- (void)updateItems:(id)arg1 inParentWithID:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (bool)updateTabs:(id)arg1 inTabGroup:(id)arg2;
- (void)updateTabsInTabGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)waitForPendingChanges;
- (id)windowStateWithUUID:(id)arg1;
- (id)windowStates;
- (id)windowWithUUID:(id)arg1;
- (id)windows;
- (int)windowsFolderSpecialID;

@end