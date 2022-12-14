/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCurationUtilities : NSObject

+ (double)IVSNSFWAnyConfidenceThresholdForSceneAnalysisVersion:(unsigned long long)arg1;
+ (double)NSFWGeneralConfidenceThresholdForSceneAnalysisVersion:(unsigned long long)arg1;
+ (bool)_isTabooEventIdentifier:(unsigned int)arg1;
+ (double)_tabooVersion33ConfidenceThresholdForIdentifier:(unsigned int)arg1;
+ (double)_tabooVersion50ConfidenceThresholdForIdentifier:(unsigned int)arg1;
+ (double)_tabooVersion85ConfidenceThresholdForIdentifier:(unsigned int)arg1;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)arg1 POIGeoHash:(id)arg2 sceneGeography:(id)arg3;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)arg1 POIGeoHash:(id)arg2 sceneGeography:(id)arg3 maxScenesCount:(long long)arg4;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)arg1 assetLatitude:(double)arg2 assetLongitude:(double)arg3;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)arg1 assetLatitude:(double)arg2 assetLongitude:(double)arg3 sceneGeography:(id)arg4;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)arg1 assetLatitude:(double)arg2 assetLongitude:(double)arg3 sceneGeography:(id)arg4 maxScenesCount:(long long)arg5;
+ (bool)assetIsSafeForWidgetDisplay:(id)arg1;
+ (id)assetsShowcasingFoodWithoutFacesInAssets:(id)arg1;
+ (id)filteredAndSortedPreviewAssetsByScoreFromAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)internalPredicateToFilterAssetsEligibleForSyndication;
+ (id)internalPredicateToFilterGuestSyndicatedAssetsEligibleForQuestion;
+ (id)internalPredicateToFilterSyndicatedAssetsEligibleForCurationProcessing;
+ (id)internalPredicateToFilterSyndicatedAssetsEligibleForGuestInferenceProcessing;
+ (id)internalPredicateToFilterSyndicatedAssetsEligibleForQuestion;
+ (id)internalPredicateToIncludeOnlyReceivedSyndicatedAssets;
+ (id)internalPredicateToIncludeOnlySentSyndicatedAssets;
+ (id)internalPredicateToIncludeReceivedNotAnalyzedSyndicatedAssets;
+ (id)internalPredicateToIncludeReceivedNotEligibleSyndicatedAssets;
+ (id)previewCandidatesFromAssets:(id)arg1;
+ (id)syndicationEligibilityForAssets:(id)arg1;
+ (double)tabooEventConfidenceThresholdForIdentifier:(unsigned int)arg1 forSceneAnalysisVersion:(unsigned long long)arg2;

@end
