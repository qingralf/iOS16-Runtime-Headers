/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSearchSettings : PXSettings {
    bool  _alwaysTrySiriSearch;
    bool  _disableTopAssetCuration;
    bool  _enableChimaeraPipeline;
    bool  _enableTopAssetInMemorySort;
    bool  _forceIndexingFooter;
    unsigned long long  _maxNumberOfResultColumns;
    unsigned long long  _maxNumberOfSuggestionsToShow;
    unsigned long long  _maxNumberOfTopAssetColumns;
    unsigned long long  _maxNumberOfTopAssetRows;
    NSString * _overrideMatchedQueryText;
    unsigned long long  _standardNumberOfTopAssetRows;
}

@property (nonatomic) bool alwaysTrySiriSearch;
@property (nonatomic) bool disableTopAssetCuration;
@property (nonatomic) bool enableChimaeraPipeline;
@property (nonatomic) bool enableTopAssetInMemorySort;
@property (nonatomic) bool forceIndexingFooter;
@property (nonatomic) unsigned long long maxNumberOfResultColumns;
@property (nonatomic) unsigned long long maxNumberOfSuggestionsToShow;
@property (nonatomic) unsigned long long maxNumberOfTopAssetColumns;
@property (nonatomic) unsigned long long maxNumberOfTopAssetRows;
@property (nonatomic, copy) NSString *overrideMatchedQueryText;
@property (nonatomic) unsigned long long standardNumberOfTopAssetRows;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (bool)_isChimaeraFFEnabled;
+ (bool)isChimaeraEnabled;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)alwaysTrySiriSearch;
- (bool)disableTopAssetCuration;
- (bool)enableChimaeraPipeline;
- (bool)enableTopAssetInMemorySort;
- (bool)forceIndexingFooter;
- (unsigned long long)maxNumberOfResultColumns;
- (unsigned long long)maxNumberOfSuggestionsToShow;
- (unsigned long long)maxNumberOfTopAssetColumns;
- (unsigned long long)maxNumberOfTopAssetRows;
- (id)overrideMatchedQueryText;
- (id)parentSettings;
- (void)setAlwaysTrySiriSearch:(bool)arg1;
- (void)setDefaultValues;
- (void)setDisableTopAssetCuration:(bool)arg1;
- (void)setEnableChimaeraPipeline:(bool)arg1;
- (void)setEnableTopAssetInMemorySort:(bool)arg1;
- (void)setForceIndexingFooter:(bool)arg1;
- (void)setMaxNumberOfResultColumns:(unsigned long long)arg1;
- (void)setMaxNumberOfSuggestionsToShow:(unsigned long long)arg1;
- (void)setMaxNumberOfTopAssetColumns:(unsigned long long)arg1;
- (void)setMaxNumberOfTopAssetRows:(unsigned long long)arg1;
- (void)setOverrideMatchedQueryText:(id)arg1;
- (void)setStandardNumberOfTopAssetRows:(unsigned long long)arg1;
- (unsigned long long)standardNumberOfTopAssetRows;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)_formatIndexingStatusAlertMessageForRemainingCount:(unsigned long long)arg1;
+ (bool)_isChimaeraFFEnabled;
+ (id)settingsControllerModule;

@end
