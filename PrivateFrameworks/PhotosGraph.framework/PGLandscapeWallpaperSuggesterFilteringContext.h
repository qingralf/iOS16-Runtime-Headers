/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGLandscapeWallpaperSuggesterFilteringContext : NSObject <NSCopying> {
    bool  _ignoreClockOverlap;
    double  _maximumCropZoomRatio;
    double  _maximumLowLightScore;
    double  _minimumCropScore;
    double  _minimumWallpaperScore;
    double  _timeIntervalForCandidateDeduping;
}

@property (nonatomic) bool ignoreClockOverlap;
@property (nonatomic) double maximumCropZoomRatio;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic) double timeIntervalForCandidateDeduping;

- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)ignoreClockOverlap;
- (id)initForLandscapes;
- (id)initForTopLandscapes;
- (id)initForTopLandscapes:(bool)arg1 withDictionary:(id)arg2;
- (double)maximumCropZoomRatio;
- (double)maximumLowLightScore;
- (double)minimumCropScore;
- (double)minimumWallpaperScore;
- (void)setIgnoreClockOverlap:(bool)arg1;
- (void)setMaximumCropZoomRatio:(double)arg1;
- (void)setMaximumLowLightScore:(double)arg1;
- (void)setMinimumCropScore:(double)arg1;
- (void)setMinimumWallpaperScore:(double)arg1;
- (void)setTimeIntervalForCandidateDeduping:(double)arg1;
- (double)timeIntervalForCandidateDeduping;

@end