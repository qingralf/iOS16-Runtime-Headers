/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCAssetLoadPropertiesLocalFileEvaluator : NSObject

+ (long long)_loadedAudioAssetTypeForFileAsset:(id)arg1;
+ (long long)_recommendationForEvaluation:(id)arg1 assetCachingIsAllowed:(bool)arg2 userDefaults:(id)arg3;
+ (bool)_shouldUpgradeCacheOnPlay:(id)arg1 assetCachingIsAllowed:(bool)arg2;
+ (bool)_shouldUpgradeDownloadOnPlay:(id)arg1 defaults:(id)arg2;
+ (id)evaluateAssetLoadProperties:(id)arg1 allowingCachedAssets:(bool)arg2 defaults:(id)arg3;
+ (bool)isHLSFileAsset:(id)arg1;

@end
