/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSavedRecordingsModel : NSObject {
    RCPersistentContainer * _container;
    NSManagedObjectContext * _context;
    long long  _isSavingDisabledCount;
}

@property (nonatomic, readonly) NSArray *allRecordings;
@property (nonatomic, readonly) NSSet *audioProperties;
@property (nonatomic, readonly) RCPersistentContainer *container;
@property (nonatomic) long long isSavingDisabledCount;

+ (id)_copyFileIntoRecordingsDirectory:(id)arg1;
+ (id)_dateFormatterComponentFormatting;
+ (void)_determineImportabilityOfRecordingWithAudioFile:(id)arg1 preferredFormat:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
+ (void)_importImportableRecordingWithAudioAsset:(id)arg1 name:(id)arg2 date:(id)arg3 uniqueID:(id)arg4 presetName:(id)arg5 outputFileType:(id)arg6 completionHandler:(id /* block */)arg7;
+ (void)_importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 uniqueID:(id)arg4 preferredFormat:(unsigned int)arg5 completionHandler:(id /* block */)arg6;
+ (void)_insertRecordingWithImportableAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 uniqueID:(id)arg4 completionHandler:(id /* block */)arg5;
+ (id)_moveFileIntoRecordingsDirectory:(id)arg1;
+ (id)currentLocationBasedName;
+ (void)determineImportabilityOfRecordingWithAudioURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 userInfo:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 xpcConnection:(id)arg4 userInfo:(id)arg5 completionHandler:(id /* block */)arg6;
+ (id)newBackgroundModel;
+ (id)newMainQueueModel;
+ (id)savedRecordingsDirectory;
+ (id)sharedModelForQueue:(id)arg1;
+ (id)standardNameForRecordingWithCreationDate:(id)arg1 uniqueID:(id)arg2;
+ (id)standardPathForRecording:(id)arg1;
+ (id)standardPathForRecordingWithCreationDate:(id)arg1 uniqueID:(id)arg2;
+ (id)standardURLForRecordingWithCreationDate:(id)arg1;
+ (id)startStoreServers:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)__reconcileIsHiddenForFoldersWithUUID:(id)arg1;
- (bool)__saveManagedObjectContext:(id*)arg1;
- (id)_allTitles;
- (id)_cloudStore:(bool)arg1;
- (void)_copyPropertiesFromOriginalRecording:(id)arg1 newRecording:(id)arg2;
- (unsigned long long)_countForFetchRequest:(id)arg1;
- (void)_deleteFoldersWithUUID:(id)arg1;
- (void)_deleteRecordingsWithDurationLessThan:(double)arg1 passingTest:(id /* block */)arg2;
- (void)_enumerateFetchedRecordingTitles:(id /* block */)arg1;
- (void)_enumerateRecordingsWithEntityDescription:(id)arg1 propertiesToFetch:(id)arg2 sortDescriptors:(id)arg3 withBlock:(id /* block */)arg4;
- (id)_existingFoldersWithName:(id)arg1 searchOption:(int)arg2;
- (id)_existingParityFolderForFolder:(id)arg1;
- (id)_foldersWithUUID:(id)arg1;
- (bool)_mergeDuplicateNameFoldersWithName:(id)arg1;
- (bool)_mergeDuplicateUUIDFolders:(id)arg1;
- (void)_mergeFolders:(id)arg1 intoTargetFolder:(id)arg2;
- (id)_parityFolderForFolder:(id)arg1;
- (unsigned long long)_rankForFolderInsert;
- (id)_recordingsFetchRequestForFolder:(id)arg1;
- (id)_recordingsForFolderUUID:(id)arg1;
- (id)_recordingsWithUniqueID:(id)arg1;
- (void)_rerankFolders;
- (void)_scheduleAutomaticRecordingDeletions;
- (bool)_shouldInsertIntoEncryptedStore;
- (bool)_synchronizeHiddenFolderRanks:(id)arg1;
- (void)_synchronizeRecordingsMetadata;
- (id)_transactionHistorySinceToken:(id)arg1 forStore:(id)arg2;
- (id)_userDefinedFolders:(id)arg1 searchOption:(int)arg2;
- (id)_userFolderFetchRequest;
- (void)addRecording:(id)arg1 toFolder:(id)arg2;
- (void)addRecordings:(id)arg1 toFolder:(id)arg2;
- (id)allRecordings;
- (id)audioProperties;
- (bool)automaticallyDownloadFileBackedFutures;
- (id)cacheDeletedRecordings;
- (id)cloudRecordingEntity;
- (id)cloudStoresByID;
- (id)container;
- (id)context;
- (bool)deleteDatabaseProperty:(id)arg1;
- (void)deleteFolder:(id)arg1;
- (void)deleteRecording:(id)arg1;
- (void)deleteRecordings:(id)arg1;
- (id)duplicateRecording:(id)arg1 error:(id*)arg2;
- (id)enumerateChangeHistorySinceToken:(id)arg1 forStore:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateExistingRecordingsWithBlock:(id /* block */)arg1;
- (void)enumerateExistingRecordingsWithProperties:(id)arg1 sortDescriptors:(id)arg2 block:(id /* block */)arg3;
- (void)eraseAllDeleted;
- (void)eraseRecording:(id)arg1;
- (void)eraseRecordings:(id)arg1;
- (void)eraseRecordingsDeletedBeforeDate:(id)arg1;
- (id)existingFolderWithName:(id)arg1;
- (id)existingFolderWithUUID:(id)arg1;
- (id)existingFoldersWithCaseInsensitiveName:(id)arg1;
- (id)existingRecordingsWithCaseInsensitiveName:(id)arg1 error:(id*)arg2;
- (bool)exportToCloudForStore:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fetchExportProgress:(id)arg1 forStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)fetchObjectsFromCloud:(id)arg1 entityToAttributesToFetch:(id)arg2 forStore:(id)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)fetchPlayableRecordingsCount;
- (id)folderEntity;
- (id)folderWithName:(id)arg1;
- (id)foldersWithPredicate:(id)arg1;
- (bool)hasExistingRecordingForAudioFile:(id)arg1;
- (bool)importFromCloudForStore:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithContainer:(id)arg1 concurrencyType:(unsigned long long)arg2;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customLabelBase:(id)arg4;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customTitleBase:(id)arg4 uniqueID:(id)arg5;
- (long long)isSavingDisabledCount;
- (void)mergeRecordings:(id)arg1 allTransactions:(id)arg2;
- (void)moveFolder:(id)arg1 toIndexPath:(id)arg2;
- (id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg1;
- (id)nextRecordingDefaultLabelWithCustomTitleBase:(id)arg1;
- (void)notifyEncryptedRecordingInserted;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)performWithSavingDisabled:(id /* block */)arg1;
- (unsigned long long)playableCountForFolder:(id)arg1;
- (id)queryManager;
- (void)reconcileChangedFolder:(id)arg1 change:(id)arg2;
- (id)recordingWithID:(id)arg1;
- (id)recordingWithPath:(id)arg1;
- (id)recordingWithURIRepresentation:(id)arg1;
- (id)recordingWithUniqueID:(id)arg1;
- (id)recordingsForSpotlightSearch:(id)arg1;
- (id)recordingsWithPredicate:(id)arg1;
- (id)recordingsWithUniqueID:(id)arg1;
- (id)recordingsWithUniqueIDs:(id)arg1;
- (void)removeRecording:(id)arg1 fromFolder:(id)arg2;
- (void)renameFolder:(id)arg1 toName:(id)arg2;
- (bool)resetCloudForStore:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetPersistedTransientState;
- (void)restoreDeletedRecording:(id)arg1;
- (void)restoreDeletedRecordings:(id)arg1;
- (void)saveIfNecessary;
- (bool)saveIfNecessary:(id*)arg1;
- (void)setEnhanced:(bool)arg1 ofRecording:(id)arg2;
- (void)setFavorite:(bool)arg1 ofRecording:(id)arg2;
- (void)setIsSavingDisabledCount:(long long)arg1;
- (void)setTitle:(id)arg1 ofRecording:(id)arg2;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2 save:(bool)arg3;
- (id)transactionForToken:(id)arg1 forStore:(id)arg2;
- (unsigned long long)userFolderCount;
- (id)userFolders;
- (id)userFoldersFetchedResultsController;
- (id)valueForDatabaseProperty:(id)arg1;
- (id)visibleRecordingsFetchedResultsController;

@end
