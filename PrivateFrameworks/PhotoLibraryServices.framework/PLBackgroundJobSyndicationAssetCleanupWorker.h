/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBackgroundJobSyndicationAssetCleanupWorker : PLBackgroundJobWorker

+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;

- (bool)isInterruptible;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (void)stopWorkingOnItem:(id)arg1;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;

@end