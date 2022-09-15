/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPassSyncService : NSObject <IDSServiceDelegate, NPKPassSyncEngineDataSource, NPKPassSyncEngineDelegate> {
    bool  _dropAllMessages;
    NPKPassSyncEngine * _passSyncEngine;
    NSObject<OS_dispatch_source> * _passSyncEngineArchiveTimer;
    NSObject<OS_dispatch_source> * _passSyncEngineSyncTimer;
    NSObject<OS_dispatch_queue> * _passSyncQueue;
    IDSService * _passSyncService;
    NPKPassSyncServiceSyncStatus * _passSyncStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dropAllMessages;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NPKPassSyncEngine *passSyncEngine;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *passSyncEngineArchiveTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *passSyncEngineSyncTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *passSyncQueue;
@property (nonatomic, retain) IDSService *passSyncService;
@property (nonatomic, retain) NPKPassSyncServiceSyncStatus *passSyncStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_archiveTimerFired;
- (id)_archivedPassSyncEngine;
- (void)_ensureSyncTimerIsSet;
- (void)_provideUpdatedLibraryStateToSyncEngineAndSyncIfNecessary:(bool)arg1;
- (void)_syncNow;
- (void)_syncTimerFired;
- (void)_syncWhenAppropriate;
- (void)associatedPassDataRequested:(id)arg1;
- (void)catalogChanged:(id)arg1;
- (id)companionCatalogToSendWithStateChange;
- (id)currentLibraryPassSyncStateWithReconciledState:(id)arg1;
- (bool)dropAllMessages;
- (void)handleCatalogChangeWithCompanionCatalog:(id)arg1 watchCatalog:(id)arg2;
- (void)handleIncomingCompanionCatalog:(id)arg1 watchCatalog:(id)arg2;
- (void)handleIncomingPassSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;
- (void)handlePassLibraryChanged;
- (void)handleRequestedAssociatedData:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;
- (void)handleSettingsChanged:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;
- (id)initWithPassSyncEngineRole:(unsigned long long)arg1;
- (void)passSettingsChanged:(id)arg1;
- (id)passSyncEngine;
- (id)passSyncEngine:(id)arg1 dataForPassWithUniqueID:(id)arg2;
- (void)passSyncEngine:(id)arg1 finishedProcessingChange:(id)arg2;
- (id)passSyncEngine:(id)arg1 partialDataForPassWithUniqueID:(id)arg2 baseManifest:(id)arg3 outRemoteAssets:(id*)arg4;
- (void)passSyncEngine:(id)arg1 receivedStateChangeProcessed:(id)arg2 changeAccepted:(bool)arg3;
- (void)passSyncEngine:(id)arg1 requestsAddPassData:(id)arg2 forSyncStateItem:(id)arg3 completion:(id /* block */)arg4;
- (void)passSyncEngine:(id)arg1 requestsRemovePassWithUniqueID:(id)arg2 completion:(id /* block */)arg3;
- (void)passSyncEngine:(id)arg1 requestsUpdatePassData:(id)arg2 forSyncStateItem:(id)arg3 baseManifestHashForPartialUpdate:(id)arg4 remoteAssetsForPartialUpdate:(id)arg5 completion:(id /* block */)arg6;
- (void)passSyncEngine:(id)arg1 sendProposedReconciledState:(id)arg2;
- (void)passSyncEngine:(id)arg1 sendReconciledStateAcceptedWithHash:(id)arg2;
- (void)passSyncEngine:(id)arg1 sendReconciledStateUnrecognizedWithHash:(id)arg2 version:(unsigned long long)arg3 currentPassSyncState:(id)arg4;
- (void)passSyncEngine:(id)arg1 sendStateChange:(id)arg2;
- (void)passSyncEngine:(id)arg1 sendStateChangeProcessedWithUUID:(id)arg2 changeAccepted:(bool)arg3 fullPassRequired:(bool)arg4;
- (id)passSyncEngineArchiveTimer;
- (id)passSyncEngineNeedsUpdatedPassLibraryState:(id)arg1;
- (void)passSyncEngineStateChanged:(id)arg1;
- (id)passSyncEngineSyncTimer;
- (id)passSyncQueue;
- (id)passSyncService;
- (id)passSyncStatus;
- (void)proposedReconciledState:(id)arg1;
- (void)reconciledStateAccepted:(id)arg1;
- (void)reconciledStateUnrecognized:(id)arg1;
- (void)requestAssociatedData:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;
- (void)setDropAllMessages:(bool)arg1;
- (void)setPassSyncEngine:(id)arg1;
- (void)setPassSyncEngineArchiveTimer:(id)arg1;
- (void)setPassSyncEngineSyncTimer:(id)arg1;
- (void)setPassSyncQueue:(id)arg1;
- (void)setPassSyncService:(id)arg1;
- (void)setPassSyncStatus:(id)arg1;
- (unsigned long long)settingsForPassWithUniqueID:(id)arg1;
- (void)start;
- (void)suggestSync;
- (void)syncStateChangeProcessed:(id)arg1;
- (void)syncStateChanged:(id)arg1;
- (void)teardownSync;
- (void)updatePassLibrary;
- (id)watchCatalogToSendWithStateChange;

@end