/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGUpNextMusicCurator : NSObject {
    bool  _isAppleMusicSubscriber;
    NSObject<OS_os_log> * _loggingConnection;
}

+ (id)_appleMusicCurationWithFeaturesByMemory:(id)arg1 musicCuratorContext:(id)arg2 managerContext:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
+ (id)_baseMemoryFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)_flexMusicCurationForMemories:(id)arg1 musicCurationOptions:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
+ (id)_musicCurationFeaturesForMemories:(id)arg1 musicCuratorContext:(id)arg2 managerContext:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
+ (id)_photosGraphPropertiesForMemory:(id)arg1 musicCurationFeatures:(id)arg2 appleMusicCuration:(id)arg3 flexMusicCuration:(id)arg4 isAppleMusicSubscriber:(bool)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (bool)curateMusicForUpNextMemoriesWithLocalIdentifiers:(id)arg1 musicCurationOptions:(id)arg2 photoLibrary:(id)arg3 managerContext:(id)arg4 error:(id*)arg5;
- (id)initWithLoggingConnection:(id)arg1;

@end