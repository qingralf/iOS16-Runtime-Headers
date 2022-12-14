/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkTabCollection : WebBookmarkCollection {
    int  _cachedPinnedTabsFolderID;
    int  _cachedPrivatePinnedTabsFolderID;
}

@property (nonatomic) bool containsCKShareRecord;
@property (nonatomic, readonly) WBWindowState *lastClosedWindowState;
@property (nonatomic, readonly, copy) NSArray *lastSessionWindowStates;
@property (nonatomic, readonly, copy) NSArray *pinnedTabs;
@property (nonatomic, readonly) int pinnedTabsFolderID;
@property (nonatomic, readonly, copy) NSArray *privatePinnedTabs;
@property (nonatomic, readonly) int privatePinnedTabsFolderID;
@property (nonatomic, readonly, copy) WebBookmarkList *recentlyClosedTabList;
@property (nonatomic, readonly, copy) NSArray *recentlyClosedTabs;
@property (nonatomic, readonly, copy) NSArray *recentlyClosedWindowStates;
@property (nonatomic, readonly, copy) NSArray *windowStates;
@property (nonatomic, readonly, copy) NSArray *windows;
@property (nonatomic, readonly) int windowsFolderSpecialID;

+ (id)_syncLockFileName;
+ (id)inMemoryChangeSet;
+ (id)inMemoryChangesFileURL;
+ (bool)isLockedSync;
+ (bool)lockSync;
+ (void)unlockSync;

- (void)_addActiveTabsToWindowState:(id)arg1;
- (bool)_clearAllSyncData;
- (void)_createSchema;
- (void)_createSpecialFolderWithIDIfNeeded:(int)arg1;
- (void)_createSpecialTabsFolderWithUUIDIfNeeded:(id)arg1;
- (bool)_createTopScopedBookmarkListForTabGroup:(id)arg1;
- (bool)_deleteAllLocalTabsAndGroups;
- (bool)_deleteAllWindowStates;
- (bool)_deleteMatchingWindows:(id)arg1 logAsError:(bool)arg2;
- (bool)_deleteWindowState:(id)arg1;
- (bool)_deleteWindowState:(id)arg1 forApplyingInMemoryChanges:(bool)arg2;
- (bool)_fixLocalBookmarksInSyncableFolders;
- (bool)_generateServerIdIfNeededForTabGroup:(id)arg1;
- (bool)_generateServerIdIfNeededForTabGroupBookmark:(id)arg1;
- (id)_listOfScopedBookmarkFoldersInTabGroup:(id)arg1;
- (void)_logErrorWithMessage:(id)arg1 result:(int)arg2;
- (bool)_markTabsClosed:(id)arg1;
- (bool)_markWindowStatesAsLastSession:(id)arg1;
- (void)_migrateSchemaVersion43ToVersion44;
- (void)_migrateSchemaVersion44ToVersion45;
- (void)_migrateWindow:(id)arg1;
- (void)_migrateWindowState:(id)arg1;
- (bool)_performOSVersionUpgradesFromPreviousVersion:(id)arg1;
- (bool)_performSafariVersionUpgradesFromPreviousVersion:(id)arg1;
- (bool)_regenerateSyncPositionsIfNeeded;
- (bool)_removePlaceholderTabGroupRecordsOnUpgrade;
- (void)_resetBookmark:(id)arg1;
- (bool)_restoreMissingSpecialBookmarksWithChangeNotification:(bool)arg1;
- (bool)_saveActiveTabID:(int)arg1 inTabGroupWithID:(int)arg2 windowID:(int)arg3;
- (bool)_saveTabGroupRecordsWithMissingCKShareRecord;
- (bool)_saveWindowState:(id)arg1;
- (bool)_saveWindowState:(id)arg1 activeTabGroupID:(int)arg2 localTabGroupID:(int)arg3 privateTabGroupID:(int)arg4;
- (bool)_saveWindowState:(id)arg1 forApplyingInMemoryChanges:(bool)arg2;
- (void)_setupInMemoryChangeSet;
- (id)_specialTabFolderUUIDs;
- (id)_specialTabFolderUUIDsForQueries;
- (id)_specialTabsWithUUID:(id)arg1;
- (id)_tabGroupWithID:(int)arg1;
- (id)_topScopedBookmarkListForTabGroup:(id)arg1 onQueue:(id)arg2;
- (id)_topScopedBookmarkListServerIdForTabGroup:(id)arg1;
- (id)_uuidForQueries:(id)arg1;
- (int)_windowIDForUUID:(id)arg1;
- (id)_windowStatesWithFilter:(id)arg1;
- (id)_windowWithBookmark:(id)arg1;
- (bool)allowsScopedBookmarksInTabGroup:(id)arg1;
- (bool)bookmarkRequiresParent:(id)arg1;
- (bool)closeWindowState:(id)arg1;
- (bool)containsCKShareRecord;
- (int)createLegacyPlaceholderTabGroupBookmarksForSharedTabGroup:(id)arg1;
- (void)createWindowsTabGroupsTable;
- (void)createWindowsTable;
- (bool)deleteAllWindowStates;
- (bool)deleteAllWindows;
- (bool)deleteWindowState:(id)arg1;
- (bool)deleteWindowStates:(id)arg1;
- (id)generatePositionBeforeFirstRecordInParentWithServerID:(id)arg1;
- (id)lastClosedWindowState;
- (id)lastSessionWindowStates;
- (void)logRegulatoryBookmarksRead;
- (bool)maintainsSyncMetadata;
- (void)performMaintenance;
- (id)pinnedTabs;
- (int)pinnedTabsFolderID;
- (id)privatePinnedTabs;
- (int)privatePinnedTabsFolderID;
- (id)recentlyClosedTabList;
- (id)recentlyClosedTabs;
- (id)recentlyClosedWindowStates;
- (bool)saveWindow:(id)arg1;
- (bool)saveWindowState:(id)arg1;
- (void)setContainsCKShareRecord:(bool)arg1;
- (id)tabGroupForBookmark:(id)arg1;
- (id)tabsForTabGroupBookmark:(id)arg1;
- (bool)updateContainsCKShareRecord;
- (id)windowStateWithUUID:(id)arg1;
- (id)windowStates;
- (id)windowWithUUID:(id)arg1;
- (id)windows;
- (int)windowsFolderSpecialID;

@end
