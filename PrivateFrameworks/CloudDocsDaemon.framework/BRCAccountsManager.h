/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountsManager : NSObject <BRCAccountHandlerDelegate, UMUserSyncStakeholder> {
    NSMutableDictionary * _accountHandlersByACAccountID;
    UMUserSyncTask * _checkNeedsBubbleTask;
    bool  _finishedLoadingAccounts;
    bool  _isInSyncBubble;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _versionsProvidersByVolumeID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInSyncBubble;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_createSyncBubbleTasksIfNecessary;
- (void)_garbageCollectOldDomains;
- (id)_getOrCreateAccountHandlerForACAccountID:(id)arg1;
- (bool)_isDeviceUnlocked;
- (id)accountForCurrentPersona;
- (id)accountForPersona:(id)arg1;
- (void)accountHandler:(id)arg1 didChangeSessionTo:(id)arg2;
- (void)accountHandler:(id)arg1 willChangeSessionFrom:(id)arg2;
- (id)accountHandlerForACAccountID:(id)arg1;
- (id)accountHandlerForCurrentPersona;
- (void)createAndLoadSessionWithACAccountID:(id)arg1 createBlock:(id /* block */)arg2;
- (void)createSessionWithACAccountID:(id)arg1 dsid:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)destroySessionWithACAccountID:(id)arg1;
- (void)enumerateAccountHandlers:(id /* block */)arg1;
- (id)getOrCreateAccountHandlerForACAccountID:(id)arg1;
- (id)init;
- (bool)isInSyncBubble;
- (void)loadAccounts;
- (id)personaIdentifierForACAccountID:(id)arg1;
- (bool)retrySyncBubbleLaterIfNeededWithError:(id)arg1;
- (void)startedUpInSyncBubble;
- (void)updateAccountDisplayName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadContent;
- (id)versionsProviderForVolume:(id)arg1;
- (id)waitForAccountLoadingOfDomain:(id)arg1;
- (void)waitForAccountLoadingSynchronously:(id)arg1;
- (void)waitForInitialAccountLoadingSynchronously;
- (void)waitForInitialAccountLoadingWithCompletionHandler:(id /* block */)arg1;
- (void)waitUntilDeviceIsUnlocked;
- (void)willSwitchUser;

@end