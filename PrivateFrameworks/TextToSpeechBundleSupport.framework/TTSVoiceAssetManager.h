/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

@interface TTSVoiceAssetManager : NSObject {
    NSMutableDictionary * _resourceCache;
}

+ (long long)_downloadCatalogForAssetType:(id)arg1;
+ (id)_getLatestAssetFromArray:(id)arg1;
+ (id)_nonLocalMobileAssetQueue;
+ (id)queryForVoiceResourceAsset:(id)arg1 localOnly:(bool)arg2;
+ (id)sharedInstance;
+ (id)voiceResourceAssetForLanguage:(id)arg1 voiceType:(long long)arg2;
+ (id)voiceResourceFromAsset:(id)arg1 voiceType:(long long)arg2;

- (void).cxx_destruct;
- (bool)_assetExistsOnDisk:(id)arg1;
- (id)_resourcePathForStandardAssets:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5;
- (bool)_voiceAssetExistsOnDisk:(id)arg1;
- (id)_voiceAssetForMAAsset:(id)arg1 voiceType:(long long)arg2;
- (id)_voiceAssetQueryForVoiceName:(id)arg1 language:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 version:(id)arg5 voiceType:(long long)arg6;
- (id)_voiceAssetQueryResultsPredicateForLanguage:(id)arg1 voiceType:(long long)arg2;
- (id)convertVSVoiceAssetSelectionsToTTSVoiceAssets:(id)arg1 language:(id)arg2;
- (void)getCustomVoiceAssetsLocalOnly:(bool)arg1 language:(id)arg2 voiceType:(long long)arg3 reply:(id /* block */)arg4;
- (id)getInstalledGryphonAssetsForLanguage:(id)arg1;
- (id)getInstalledNeuralAssetsForLanguage:(id)arg1;
- (id)resourcePathForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5 outAsset:(id*)arg6;

@end