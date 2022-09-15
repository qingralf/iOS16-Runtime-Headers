/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDCloudGroupChange : HMFObject {
    HMDCloudChangeTree * _cloudChangeTree;
    NSMutableArray * _cloudChanges;
    HMDCloudGroup * _cloudGroup;
    bool  _controllerIdentifierChanged;
    bool  _decryptionFailed;
    bool  _encryptionFailed;
    HMDCloudManagerMetricsDispatcher * _metricsDispatcher;
    NSMutableArray * _processedCloudChanges;
    NSMutableArray * _processingCloudChanges;
    bool  _temporaryCache;
}

@property (nonatomic, readonly) NSArray *allTransactionStoreRowIDs;
@property (nonatomic, retain) HMDCloudChangeTree *cloudChangeTree;
@property (nonatomic, retain) NSMutableArray *cloudChanges;
@property (nonatomic, readonly) HMDCloudGroup *cloudGroup;
@property (nonatomic) bool controllerIdentifierChanged;
@property (nonatomic) bool decryptionFailed;
@property (readonly) bool doRecordsExistInCache;
@property (nonatomic) bool encryptionFailed;
@property (nonatomic, readonly) bool hasValidChanges;
@property (readonly) HMDCloudManagerMetricsDispatcher *metricsDispatcher;
@property (nonatomic, readonly) NSArray *objectChanges;
@property (nonatomic, retain) NSMutableArray *processedCloudChanges;
@property (nonatomic, readonly) NSArray *processedTransactionStoreRowIDs;
@property (nonatomic, retain) NSMutableArray *processingCloudChanges;
@property (getter=isRootRecordRequired, nonatomic, readonly) bool rootRecordRequired;
@property (getter=isTemporaryCache, nonatomic, readonly) bool temporaryCache;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_addChangeWithDeletedCloudRecord:(id)arg1;
- (void)_initializeCloudChanges;
- (void)_loadTreeWithRecordMapping:(id)arg1;
- (void)_removeChange:(id)arg1;
- (void)addChange:(id)arg1 setAsProcessing:(bool)arg2;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (void)addRootRecordChange;
- (id)allTransactionStoreRowIDs;
- (id)cachedCloudRecordWithObjectID:(id)arg1;
- (void)cachedCloudRecordWithObjectID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)changeWithObjectID:(id)arg1;
- (id)changeWithRecordName:(id)arg1;
- (id)cloudChangeTree;
- (id)cloudChanges;
- (id)cloudGroup;
- (id)cloudRecordWithName:(id)arg1;
- (id)cloudRecordWithObjectID:(id)arg1;
- (void)collectRecordsForBatch;
- (bool)controllerIdentifierChanged;
- (bool)decryptionFailed;
- (id)description;
- (bool)doRecordsExistInCache;
- (bool)encryptionFailed;
- (void)fetchBatchToUpload:(id /* block */)arg1;
- (void)flushAllChangesToCache;
- (bool)hasValidChanges;
- (id)init;
- (id)initWithGroup:(id)arg1 temporaryCache:(bool)arg2;
- (id)initWithGroup:(id)arg1 temporaryCache:(bool)arg2 metricsDispatcher:(id)arg3;
- (bool)isRootRecord:(id)arg1;
- (bool)isRootRecordName:(id)arg1;
- (bool)isRootRecordRequired;
- (bool)isTemporaryCache;
- (void)loadCloudChangeTreeFromCache:(id /* block */)arg1;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(id /* block */)arg1;
- (void)loadCloudRecordsFromCache:(id /* block */)arg1;
- (id)metricsDispatcher;
- (bool)moreChangesToProcess;
- (id)objectChanges;
- (id)processedCloudChanges;
- (id)processedTransactionStoreRowIDs;
- (id)processingCloudChanges;
- (void)removeChangeWithObjectID:(id)arg1;
- (void)resetRecordWithRecordID:(id)arg1;
- (id)rootRecordModelObject;
- (void)setAllChangedAsProcessed;
- (void)setAsProcessedChange:(id)arg1;
- (void)setCloudChangeTree:(id)arg1;
- (void)setCloudChanges:(id)arg1;
- (void)setControllerIdentifierChanged:(bool)arg1;
- (void)setDecryptionFailed:(bool)arg1;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)setEncryptionFailed:(bool)arg1;
- (void)setProcessedCloudChanges:(id)arg1;
- (void)setProcessingCloudChanges:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (id)shortDescription;

@end