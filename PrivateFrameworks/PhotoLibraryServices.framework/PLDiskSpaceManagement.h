/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDiskSpaceManagement : NSObject

+ (long long)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(bool)arg2;
+ (unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromCloudSharingCacheDataDirectoryShouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromPhotoMetadataDirectoryShouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3 skipAssets:(id)arg4;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(bool)arg2 shouldKeepRecentlyViewedAssets:(bool)arg3 fromPhotoLibrary:(id)arg4;

@end
