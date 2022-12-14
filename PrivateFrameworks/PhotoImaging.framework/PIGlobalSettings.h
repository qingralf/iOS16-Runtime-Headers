/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIGlobalSettings : NSObject {
    bool  _allowSpillMatteOnOlderPortraitV2Captures;
    bool  _forceGlassesMatteOff;
    bool  _forceSpillMatteOff;
    NSObject<OS_dispatch_queue> * _queue;
    bool  parallaxStyleAvoidColorWashBrownOverride;
    long long  parallaxStyleKeyLevelOverride;
}

@property (nonatomic) bool allowSpillMatteOnOlderPortraitV2Captures;
@property (nonatomic) bool cinematicAllowRGB10Packed;
@property (nonatomic) bool cinematicAllowYUVSourceInput;
@property (nonatomic) bool disableSegmentation;
@property (nonatomic) bool falseColorHDR;
@property (nonatomic) bool forceGlassesMatteOff;
@property (nonatomic) bool forceSpillMatteOff;
@property (nonatomic, copy) NSString *parallaxLayoutConfigurationOverride;
@property (nonatomic) bool parallaxStyleAvoidColorWashBrownOverride;
@property (nonatomic) long long parallaxStyleKeyLevelOverride;
@property (nonatomic) bool parallaxWallpaperDisableUpgrade;
@property (nonatomic) bool segmentationDebugPreviewDisableClock;
@property (nonatomic) bool segmentationDebugRoundTripProxyImage;
@property (nonatomic) bool segmentationDebugTintLayers;
@property (nonatomic) bool segmentationDisableCaching;
@property (nonatomic) long long segmentationInfillAlgorithm;
@property (nonatomic) double segmentationManualGatingLenience;
@property (nonatomic, copy) NSString *styleRecipeConfigDirectoryPath;
@property (nonatomic) bool useStyleRecipeConfigDirectory;

+ (id)IPXEditSettings;
+ (id)PUEditSettings;
+ (id)editSettings;
+ (id)globalSettings;

- (void).cxx_destruct;
- (bool)allowSpillMatteOnOlderPortraitV2Captures;
- (bool)cinematicAllowRGB10Packed;
- (bool)cinematicAllowYUVSourceInput;
- (bool)disableSegmentation;
- (bool)falseColorHDR;
- (bool)forceGlassesMatteOff;
- (bool)forceSpillMatteOff;
- (id)init;
- (id)parallaxLayoutConfigurationOverride;
- (bool)parallaxStyleAvoidColorWashBrownOverride;
- (long long)parallaxStyleKeyLevelOverride;
- (bool)parallaxWallpaperDisableUpgrade;
- (bool)segmentationDebugPreviewDisableClock;
- (bool)segmentationDebugRoundTripProxyImage;
- (bool)segmentationDebugTintLayers;
- (bool)segmentationDisableCaching;
- (long long)segmentationInfillAlgorithm;
- (double)segmentationManualGatingLenience;
- (void)setAllowSpillMatteOnOlderPortraitV2Captures:(bool)arg1;
- (void)setCinematicAllowRGB10Packed:(bool)arg1;
- (void)setCinematicAllowYUVSourceInput:(bool)arg1;
- (void)setDisableSegmentation:(bool)arg1;
- (void)setFalseColorHDR:(bool)arg1;
- (void)setForceGlassesMatteOff:(bool)arg1;
- (void)setForceSpillMatteOff:(bool)arg1;
- (void)setParallaxLayoutConfigurationOverride:(id)arg1;
- (void)setParallaxStyleAvoidColorWashBrownOverride:(bool)arg1;
- (void)setParallaxStyleKeyLevelOverride:(long long)arg1;
- (void)setParallaxWallpaperDisableUpgrade:(bool)arg1;
- (void)setSegmentationDebugPreviewDisableClock:(bool)arg1;
- (void)setSegmentationDebugRoundTripProxyImage:(bool)arg1;
- (void)setSegmentationDebugTintLayers:(bool)arg1;
- (void)setSegmentationDisableCaching:(bool)arg1;
- (void)setSegmentationInfillAlgorithm:(long long)arg1;
- (void)setSegmentationManualGatingLenience:(double)arg1;
- (void)setStyleRecipeConfigDirectoryPath:(id)arg1;
- (void)setUseStyleRecipeConfigDirectory:(bool)arg1;
- (id)styleRecipeConfigDirectoryPath;
- (bool)useStyleRecipeConfigDirectory;

@end
