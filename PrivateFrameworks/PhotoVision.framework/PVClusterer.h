/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVClusterer : NSObject <PVFaceClusteringProtocol> {
    unsigned long long  _accumulatedChangesCount;
    NSURL * _cacheDirUrl;
    NSURL * _cacheFileUrl;
    VNClustererBuilder * _clusterBuilder;
    long long  _clustererBringUpState;
    PVCanceler * _clusteringCanceler;
    NSString * _clusteringType;
    PVContext * _context;
    struct { 
        unsigned long long countOfEligibleFaces; 
        unsigned long long countOfFacesPendingToAdd; 
        bool isClustering; 
        bool rebuildRequired; 
    }  _currentStatusSnapshot;
    bool  _currentStatusSnapshotIsValid;
    NSLock * _currentStatusSnapshotLock;
    PVSuggestionRequest * _currentSuggestionRequest;
    PVEventManager * _eventManager;
    NSSet * _faceCSNsInClusterCache;
    NSMutableSet * _faceCSNsToRemove;
    NSMutableSet * _faceIdStrsToAdd;
    unsigned long long  _nextClusterTriggeringAccumulatedChangesCount;
    unsigned long long  _nextSeqNum;
    NSMutableArray * _outstandingSuggestionRequests;
    <PVPersistenceDelegate> * _persistenceDelegate;
    PVQueue * _processingQueue;
    NSMutableDictionary * _propertyDictionary;
    NSLock * _propertyDictionaryLock;
    bool  _rebuildClusterer;
    NSLock * _suggestionLock;
    NSNumber * _threshold;
    NSDate * _timestampOfLastClusterComparison;
    VNCanceller * _visionCanceler;
    <PVVisionIntegrating> * _visionIntegration;
}

@property (nonatomic) long long clustererBringUpState;
@property (nonatomic, readonly) long long clustererState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property PVEventManager *eventManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool needsFullSync;
@property (nonatomic, readonly) bool needsUpdate;
@property (getter=isReady, nonatomic, readonly) bool ready;
@property (readonly) Class superclass;

+ (void)initialize;
+ (bool)removeClusteringStateCacheWithContext:(id)arg1 cacheDirectoryUrl:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_cancelClusteringAndRestoreClusterCache:(bool)arg1;
- (id)_faceObservationsFromFaceCSNs:(id)arg1;
- (id)_faceObservationsFromFaceIdStrs:(id)arg1 assignClusterSeqNumberIfNeeded:(bool)arg2 updatedFaces:(id)arg3 groupingIdentifiers:(id)arg4;
- (id)_faceObservationsFromFaces:(id)arg1 assignClusterSeqNumberIfNeeded:(bool)arg2 updatedFaces:(id)arg3;
- (bool)_performAndPersistClustersByAddingFaceObs:(id)arg1 groupingIdentifiers:(id)arg2 removingFaceObs:(id)arg3 updateFaces:(id)arg4 canceler:(id)arg5 error:(id*)arg6;
- (void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;
- (bool)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(id*)arg1 lastClusterSequenceNumber:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)_processingQueueGetVisionClusters:(id)arg1 minimumClusterSize:(unsigned long long)arg2 returnClusterAsCountedSet:(bool)arg3 error:(id*)arg4;
- (bool)_processingQueuePerformForcedFaceClustering:(bool)arg1 withCanceler:(id)arg2;
- (void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 visionClusters:(id*)arg2 withCanceler:(id)arg3;
- (bool)_processingQueueResetClusterCache:(id*)arg1;
- (bool)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(bool)arg1 error:(id*)arg2;
- (bool)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 threshold:(id)arg3 error:(id*)arg4;
- (bool)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg1 error:(id*)arg2;
- (bool)_processingQueueSaveClusterCache:(id*)arg1;
- (void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 withCanceler:(id)arg2;
- (id)_propertyDictionaryFileURL;
- (void)_readPropertyDictionary;
- (void)_recordClusterRebuildRequired:(bool)arg1;
- (void)_recordClusteringState:(bool)arg1;
- (void)_recordCountOfPendingFacesToAdd:(unsigned long long)arg1;
- (void)_recordCurrentStatus:(struct { unsigned long long x1; unsigned long long x2; bool x3; bool x4; })arg1;
- (void)_recordIncrementCountOfPendingFacesToAdd:(unsigned long long)arg1;
- (void)_removeEmptyGroups;
- (void)_removeVisionClusterCacheFilesNotReferencedByVisionClusterState:(id)arg1;
- (void)_setPropertyDictionaryValue:(id)arg1 forKey:(id)arg2;
- (id)_stringForPVClustererBringUpState:(long long)arg1;
- (id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 error:(id*)arg3;
- (id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg1 error:(id*)arg2;
- (void)cancelAllSuggestionRequests;
- (void)cancelClustering;
- (void)cancelSuggestionRequest:(id)arg1;
- (void)clusterAndWait;
- (void)clusterIfNecessaryAndWait;
- (long long)clustererBringUpState;
- (long long)clustererState;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1;
- (id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg1 andLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg2 error:(id*)arg3;
- (id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg1 toClustersIdentifiedByFaceCSNs:(id)arg2 error:(id*)arg3;
- (id)eventManager;
- (bool)getClusters:(id*)arg1 threshold:(double*)arg2 utilizingGPU:(bool*)arg3 error:(id*)arg4;
- (id)initWithContext:(id)arg1 persistenceDelegate:(id)arg2 cacheDirectoryURL:(id)arg3 visionIntegration:(id)arg4;
- (bool)isReady;
- (bool)isReadyToReturnSuggestions;
- (id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(unsigned long long)arg1 error:(id*)arg2;
- (bool)needsFullSync;
- (bool)needsUpdate;
- (unsigned long long)numberOfAccumulatedClusterChanges;
- (void)performClusteringWithCompletion:(id /* block */)arg1;
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(id /* block */)arg3 error:(id*)arg4;
- (long long)restoreClusterCacheAndSyncWithLibrary:(bool)arg1 error:(id*)arg2;
- (void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg1 addingFaceIdStrs:(id)arg2;
- (void)setClustererBringUpState:(long long)arg1;
- (void)setEventManager:(id)arg1;
- (id)status;
- (id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg1 error:(id*)arg2;
- (void)terminate;

@end