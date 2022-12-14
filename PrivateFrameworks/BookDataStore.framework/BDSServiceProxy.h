/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

@interface BDSServiceProxy : NSObject <BDSServiceProtocol, NSXPCProxyCreating> {
    NSXPCConnection * _connection;
    bool  _connectionHealthy;
    <BDSServiceProtocol><NSXPCProxyCreating> * _remoteObjectProxy;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic) bool connectionHealthy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BDSServiceProtocol><NSXPCProxyCreating> *remoteObjectProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addStoreItem:(id)arg1 completion:(id /* block */)arg2;
- (void)addStoreItems:(id)arg1 completion:(id /* block */)arg2;
- (void)assetDetailForAssetID:(id)arg1 completion:(id /* block */)arg2;
- (void)assetDetailsForAssetIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)assetReviewForAssetReviewID:(id)arg1 completion:(id /* block */)arg2;
- (void)assetReviewsForAssetReviewIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)audiobookStoreEnabledWithCompletion:(id /* block */)arg1;
- (void)bookWidgetReadingHistoryStateInfoWithCompletion:(id /* block */)arg1;
- (void)collectionDetailForCollectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)collectionDetailsForCollectionIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)collectionMemberForCollectionMemberID:(id)arg1 completion:(id /* block */)arg2;
- (id)connection;
- (bool)connectionHealthy;
- (void)currentAssetDetailCloudSyncVersions:(id /* block */)arg1;
- (void)currentCloudSyncVersions:(id /* block */)arg1;
- (void)currentCollectionDetailCloudSyncVersions:(id /* block */)arg1;
- (void)currentCollectionMemberCloudSyncVersions:(id /* block */)arg1;
- (void)currentReadingNowDetailCloudSyncVersions:(id /* block */)arg1;
- (void)deleteAssetDetailForAssetID:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAssetReviewForAssetReviewID:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAssetReviewForAssetReviewIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteCloudDataWithCompletion:(id /* block */)arg1;
- (void)deleteCollectionDetailForCollectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteCollectionDetailForCollectionIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteCollectionMemberForCollectionMemberID:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteCollectionMemberForCollectionMemberIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteItemsWithStoreIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteReadingNowDetailForAssetID:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteStoreItemWithStoreID:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteStoreItemsWithStoreIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteUserDatumForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)arg1;
- (void)fetchAssetDetailsForUnsyncedTastes:(id /* block */)arg1;
- (void)fetchAssetDetailsIncludingDeleted:(bool)arg1 completion:(id /* block */)arg2;
- (void)fetchAssetReviewsForUserID:(id)arg1 includingDeleted:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchCollectionDetailsIncludingDeleted:(bool)arg1 completion:(id /* block */)arg2;
- (void)fetchCollectionMembersInCollectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCollectionMembersIncludingDeleted:(bool)arg1 completion:(id /* block */)arg2;
- (void)fetchFinishedAssetCountByYearWithCompletion:(id /* block */)arg1;
- (void)fetchFinishedDatesByAssetIDForYear:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchMaxSortOrderInCollectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchMostRecentAudiobookWithCompletion:(id /* block */)arg1;
- (void)fetchStoreItemsIncludingDeleted:(bool)arg1 completion:(id /* block */)arg2;
- (void)fetchUserDataIncludingDeleted:(bool)arg1 completion:(id /* block */)arg2;
- (void)formXPCConnection;
- (void)getAssetDetailChangesSince:(id)arg1 completion:(id /* block */)arg2;
- (void)getAssetReviewChangesSince:(id)arg1 completion:(id /* block */)arg2;
- (void)getBookWidgetDataWithLimit:(long long)arg1 completion:(id /* block */)arg2;
- (void)getBookWidgetInfoWithLimit:(long long)arg1 completion:(id /* block */)arg2;
- (void)getCollectionDetailChangesSince:(id)arg1 completion:(id /* block */)arg2;
- (void)getCollectionMemberChangesSince:(id)arg1 completion:(id /* block */)arg2;
- (void)getReadingNowDetailChangesSince:(id)arg1 completion:(id /* block */)arg2;
- (void)getStoreItemChangesSince:(id)arg1 completion:(id /* block */)arg2;
- (void)getUserDataChangesSince:(id)arg1 completion:(id /* block */)arg2;
- (void)hideItemsWithStoreIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)mergeMovedReadingHistoryDataWithCompletionHandler:(id /* block */)arg1;
- (void)needsReadingNowAssetTypePopulation:(id /* block */)arg1;
- (void)readingGoalsChangeBooksFinishedGoalTo:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)readingGoalsChangeDailyGoalTo:(double)arg1 withCompletion:(id /* block */)arg2;
- (void)readingGoalsClearDataWithCompletion:(id /* block */)arg1;
- (void)readingGoalsClearLocalCachedDataWithCompletion:(id /* block */)arg1;
- (void)readingGoalsStateInfoWithCompletion:(id /* block */)arg1;
- (void)readingHistoryClearDataWithCompletion:(id /* block */)arg1;
- (void)readingHistoryClearDefaultsCachedDataWithCompletion:(id /* block */)arg1;
- (void)readingHistoryClearTodayWithCompletion:(id /* block */)arg1;
- (void)readingHistoryHandleSyncFileChangeWithSyncVersionInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)readingHistoryIncrementWithDate:(id)arg1 by:(long long)arg2 withCompletion:(id /* block */)arg3;
- (void)readingHistoryReadingHistoryModelSnapshotInfoWithCurrentTime:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)readingHistoryReadingHistoryStateInfoWithRangeStart:(id)arg1 rangeEnd:(id)arg2 currentTime:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)readingNowDetailsForAssetIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resetPurchasedTokenForStoreIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)resetStaleJaliscoDatabaseWithCompletion:(id /* block */)arg1;
- (void)resolvedAssetDetailForAssetID:(id)arg1 completion:(id /* block */)arg2;
- (void)resolvedUserDataValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)scheduleRestart;
- (void)setAssetDetail:(id)arg1 completion:(id /* block */)arg2;
- (void)setAssetDetails:(id)arg1 completion:(id /* block */)arg2;
- (void)setAssetReview:(id)arg1 completion:(id /* block */)arg2;
- (void)setAssetReviews:(id)arg1 completion:(id /* block */)arg2;
- (void)setBookWidgetInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)setCloudSyncPaused:(bool)arg1;
- (void)setCollectionDetail:(id)arg1 completion:(id /* block */)arg2;
- (void)setCollectionDetails:(id)arg1 completion:(id /* block */)arg2;
- (void)setCollectionMember:(id)arg1 completion:(id /* block */)arg2;
- (void)setCollectionMembers:(id)arg1 completion:(id /* block */)arg2;
- (void)setConnectionHealthy:(bool)arg1;
- (void)setEnableCloudSync:(bool)arg1 enableReadingNowSync:(bool)arg2;
- (void)setEnableCollectionSync:(bool)arg1;
- (void)setEnableSecureUserDataCloudSync:(bool)arg1;
- (void)setItemHidden:(bool)arg1 forStoreID:(id)arg2 completion:(id /* block */)arg3;
- (void)setReadingNowDetails:(id)arg1 completion:(id /* block */)arg2;
- (void)setUserData:(id)arg1 completion:(id /* block */)arg2;
- (void)setUserDataValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setUserDatum:(id)arg1 completion:(id /* block */)arg2;
- (void)shutdown;
- (void)signalFetchChangesTransaction:(id)arg1;
- (void)storeItemForStoreID:(id)arg1 completion:(id /* block */)arg2;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)updateBitrateForItemWithAdamID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateFamilyPolitely:(bool)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)updateFamilyPolitely:(bool)arg1 reason:(long long)arg2 completionWithError:(id /* block */)arg3;
- (void)updatePolitely:(bool)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)updatePolitely:(bool)arg1 reason:(long long)arg2 completionWithError:(id /* block */)arg3;
- (void)updatePolitely:(bool)arg1 uiManager:(id)arg2 reason:(long long)arg3 completion:(id /* block */)arg4;
- (void)updatePolitelyAfterSignIn:(bool)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)updatePolitelyAfterSignOut:(bool)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (id)updateReadingNowWithCompletion:(id /* block */)arg1;
- (id)updateWantToReadAndReadingNowWithJaliscoUpdateSuccessful:(bool)arg1 completion:(id /* block */)arg2;
- (id)updateWantToReadWithCompletion:(id /* block */)arg1;
- (void)userDataValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)userDatumForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)userDatumIncludingDeleted:(bool)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;

@end
