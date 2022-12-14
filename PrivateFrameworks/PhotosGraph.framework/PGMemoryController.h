/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGMemoryController : NSObject {
    PGGraph * _graph;
    bool  _ignoresMomentIsInteresting;
    NSObject<OS_os_log> * _loggingConnection;
    PGMemoryGenerationContext * _memoryGenerationContext;
    NSMutableDictionary * _momentsByMomentIDs;
    id /* block */  _progressBlock;
    PGManagerWorkingContext * _workingContext;
}

@property bool ignoresMomentIsInteresting;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, retain) PGMemoryGenerationContext *memoryGenerationContext;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (copy) id /* block */ progressBlock;
@property (readonly) PGManagerWorkingContext *workingContext;

+ (id)_localIdentifierOfMainPersonInEvent:(id)arg1 prominentOnly:(bool)arg2;
+ (bool)anyBlockedFeatureIn:(id)arg1 isHitByEvent:(id)arg2;

- (void).cxx_destruct;
- (bool)anyBlockedFeatureIsHitByEvent:(id)arg1;
- (id)assetCollectionWithAssetLocalIdentifiers:(id)arg1;
- (bool)ignoresMomentIsInteresting;
- (id)initWithGraph:(id)arg1 workingContext:(id)arg2;
- (id)initWithWorkingContext:(id)arg1;
- (bool)libraryHasEnoughProcessedScenes:(bool)arg1 andProcessedFaces:(bool)arg2;
- (bool)libraryHasEnoughScenesProcessed:(bool)arg1 haveFacesProcessed:(bool)arg2 forYear:(id)arg3 withGraph:(id)arg4;
- (id)loggingConnection;
- (id)memoryGenerationContext;
- (id)momentForMomentID:(id)arg1;
- (bool)momentNodesHaveScenesProcessed:(id)arg1 inGraph:(id)arg2;
- (id)photoLibrary;
- (id /* block */)progressBlock;
- (void)setIgnoresMomentIsInteresting:(bool)arg1;
- (void)setMemoryGenerationContext:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (id)workingContext;

@end
