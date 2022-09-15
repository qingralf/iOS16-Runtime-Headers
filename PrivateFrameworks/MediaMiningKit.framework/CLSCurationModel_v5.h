/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSCurationModel_v5 : CLSCurationModel_v4 {
    CLSCLIPprintModel * _CLIPprintModel;
    CLSCityNatureModel * _cityNatureModel;
    CLSWallpaperScoreModel * _wallpaperScoreModel;
}

@property (readonly) CLSCLIPprintModel *CLIPprintModel;
@property (readonly) CLSCityNatureModel *cityNatureModel;
@property (readonly) CLSNSFWModel *nsfwModel;
@property (readonly) CLSWallpaperScoreModel *wallpaperScoreModel;

+ (id)baseSpecificationWithSpecification:(id)arg1;

- (void).cxx_destruct;
- (id)CLIPprintModel;
- (id)cityNatureModel;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)arg1;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)arg1;
- (id)initWithCurationModelSpecification:(id)arg1;
- (bool)isShowcasingFoodWithAsset:(id)arg1;
- (id)wallpaperScoreModel;

@end