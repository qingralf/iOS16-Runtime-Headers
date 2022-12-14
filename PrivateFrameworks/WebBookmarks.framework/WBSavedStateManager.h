/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WBSavedStateManager : NSObject {
    bool  _isEphemeral;
    <WBTabGroupSyncAgentProxyProtocol> * _tabGroupSyncAgentProxy;
}

@property (nonatomic, readonly) bool isEphemeral;
@property (nonatomic, readonly) <WBTabGroupSyncAgentProxyProtocol> *tabGroupSyncAgentProxy;

+ (id)ephemeralManager;

- (void).cxx_destruct;
- (bool)_isDatabaseEnabled;
- (void)closeWindowState:(id)arg1;
- (void)deleteTabGroup:(id)arg1;
- (void)deleteTabs:(id)arg1;
- (void)deleteWindowState:(id)arg1;
- (void)deleteWindowStates:(id)arg1;
- (id)init;
- (id)initWithTabGroupSyncAgentProxy:(id)arg1;
- (void)insertTabGroup:(id)arg1 afterTabGroup:(id)arg2;
- (void)insertTabs:(id)arg1 inTabGroup:(id)arg2 afterTab:(id)arg3;
- (bool)isEphemeral;
- (void)moveTabGroup:(id)arg1 afterTabGroup:(id)arg2;
- (void)saveBrowserState:(id)arg1;
- (void)saveBrowserState:(id)arg1 canSafelyTerminateCompletionHandler:(id /* block */)arg2;
- (void)saveBrowserState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveTab:(id)arg1;
- (void)saveTabGroup:(id)arg1;
- (void)saveWindowState:(id)arg1;
- (void)scheduleSyncIfNeeded;
- (id)tabGroupSyncAgentProxy;
- (void)updateTabsInTabGroup:(id)arg1;
- (void)userDidAcceptCloudKitShareWithMetadata:(id)arg1;

@end
