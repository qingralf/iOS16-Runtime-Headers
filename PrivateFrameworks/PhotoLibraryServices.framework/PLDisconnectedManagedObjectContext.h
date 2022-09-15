/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext

+ (bool)canMergeRemoteChanges;
+ (bool)shouldHavePhotoLibrary;

- (bool)isDatabaseCreationContext;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end