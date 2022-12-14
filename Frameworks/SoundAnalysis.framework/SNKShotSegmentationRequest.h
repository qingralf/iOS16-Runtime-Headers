/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNKShotSegmentationRequest : NSObject {
    float  _backgroundEnergyPercentile;
    NSArray * _fileURLs;
    float  _foregroundEnergyPercentile;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _hangoverDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _minSegmentDuration;
    float  _similarityThreshold;
}

@property float backgroundEnergyPercentile;
@property NSArray *fileURLs;
@property float foregroundEnergyPercentile;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } hangoverDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } minSegmentDuration;
@property float similarityThreshold;

- (float)backgroundEnergyPercentile;
- (id)fileURLs;
- (float)foregroundEnergyPercentile;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })hangoverDuration;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSegmentDuration;
- (void)setBackgroundEnergyPercentile:(float)arg1;
- (void)setFileURLs:(id)arg1;
- (void)setForegroundEnergyPercentile:(float)arg1;
- (void)setHangoverDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMinSegmentDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSimilarityThreshold:(float)arg1;
- (float)similarityThreshold;

@end
