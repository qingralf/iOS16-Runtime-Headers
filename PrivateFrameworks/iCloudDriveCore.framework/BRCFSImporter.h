/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore
 */

@interface BRCFSImporter : NSObject <BRCModule, BRCSuspendable> {
    BRCFairSource * _childPropagationSource;
    unsigned long long  _currentPropagationMinRowID;
    BRFileObjectID * _currentPropagationObject;
    bool  _isCancelled;
    BRCAccountSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_changeBasicFieldsOnItem:(id)arg1 fields:(unsigned long long)arg2 template:(id)arg3;
- (void)_cleanItemBatchAfterMigrationToFPFSIfNecessary;
- (id)_createAndInsertNewItemWithImportObject:(id)arg1 parentItem:(id)arg2 fields:(unsigned long long)arg3 templateItem:(id)arg4 fileURL:(id)arg5 options:(unsigned long long)arg6 additionalAttrs:(id)arg7 error:(id*)arg8;
- (id)_createBaseItemWithImportObject:(id)arg1 error:(id*)arg2;
- (id)_extractBookmarkDataFromTemplateItem:(id)arg1 isTrashBookmark:(bool*)arg2;
- (id)_findCollidingItemWithTemplateItem:(id)arg1 parentItem:(id)arg2 logicalName:(id)arg3 error:(id*)arg4;
- (id)_getOrCreateTrashItemInAppLibrary:(id)arg1 error:(id*)arg2;
- (id)_globalItemByDocumentID:(unsigned int)arg1;
- (id)_globalItemByFileID:(unsigned long long)arg1;
- (id)_handleCollisionIfNecessaryWithTemplateItem:(id)arg1 parentItem:(id)arg2 logicalName:(id)arg3 fileURL:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6;
- (bool)_isDesktopOrDocumentsItem:(id)arg1;
- (void)_learnEtagsIfNecessaryWithItem:(id)arg1 changedFields:(unsigned long long)arg2 baseVersion:(id)arg3;
- (id)_locateMatchingItemForTemplateItem:(id)arg1 parentItem:(id)arg2 logicalName:(id)arg3 options:(unsigned long long)arg4 fileURL:(id)arg5 fields:(unsigned long long*)arg6 shouldReject:(bool*)arg7 additionalAttrs:(id)arg8 error:(id*)arg9;
- (id)_locateTemplateItemFromFPFSImport:(id)arg1 fields:(unsigned long long*)arg2;
- (void)_markNextChildBatchDead:(id)arg1 persistedState:(id)arg2 batchSize:(int)arg3;
- (id)_parseBookmarkXattrsOnTemplateItemIfNecessary:(id)arg1 fileURL:(id)arg2;
- (id)_parseIdentityXattrsOnTemplateItemIfNecessary:(id)arg1 options:(unsigned long long)arg2 fileURL:(id)arg3 fields:(unsigned long long*)arg4;
- (void)_processIngestBatch:(id)arg1 minRowID:(unsigned long long)arg2;
- (bool)_processParentAndFilenameIfNecessaryWithLocalItem:(id)arg1 changedFields:(unsigned long long)arg2 templateItem:(id)arg3 error:(id*)arg4;
- (void)_propagateFieldsToNextChildBatch:(id)arg1 persistedState:(id)arg2 minRowID:(unsigned long long)arg3 batchSize:(int)arg4;
- (bool)_shouldRejectItemWithName:(id)arg1 templateItem:(id)arg2 isDatalessDocument:(bool)arg3 existingItem:(id)arg4;
- (bool)_trashItem:(id)arg1 error:(id*)arg2;
- (bool)_untrashItem:(id)arg1 toParentFileObjectID:(id)arg2 error:(id*)arg3;
- (void)_updateCiconiaDatabaseForBouncing:(id)arg1 existingItem:(id)arg2;
- (void)cancel;
- (unsigned short)capabilityToMoveItem:(id)arg1 toNewParentItem:(id)arg2 error:(id*)arg3;
- (bool)changeItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 newValues:(id)arg4 contents:(id)arg5 options:(unsigned long long)arg6 additionalAttrs:(id)arg7 clearCKInfoOnSyncUp:(bool)arg8 error:(id*)arg9;
- (void)close;
- (id)createAndImportNewDirectoryWithLogicalName:(id)arg1 parentItem:(id)arg2 error:(id*)arg3;
- (id)importAppLibraryFromTemplateItem:(id)arg1;
- (id)importNewItemAtURL:(id)arg1 logicalName:(id)arg2 parentItem:(id)arg3 templateItem:(id)arg4 fields:(unsigned long long)arg5 options:(unsigned long long)arg6 additionalItemAttributes:(id)arg7 error:(id*)arg8;
- (id)initWithAccountSession:(id)arg1;
- (bool)isCancelled;
- (void)resume;
- (void)signal;
- (void)suspend;

@end