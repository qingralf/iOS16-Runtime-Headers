/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRNeuralRecognizerConfiguration : CRRecognizerConfiguration {
    long long  _batchSize;
    int  _colorSpace;
    NSURL * _customModelURL;
    NSArray * _customWords;
    bool  _decodeWithLM;
    float  _highConfidenceThreshold;
    double  _inputHeight;
    NSArray * _inputWidths;
    NSString * _locale;
    long long  _maxConcurrentBatches;
    float  _mediumConfidenceThreshold;
    float  _precisionThreshold;
    bool  _rectifyPolygons;
    CRTitleParameters * _titleParameters;
}

@property (readonly) long long batchSize;
@property (readonly) int colorSpace;
@property (readonly) CRConfidenceThresholds *confidenceThresholds;
@property (readonly) NSURL *customModelURL;
@property (readonly) NSArray *customWords;
@property (readonly) bool decodeWithLM;
@property (readonly) bool filterWithLM;
@property float highConfidenceThreshold;
@property (readonly) double inputHeight;
@property (readonly) NSArray *inputWidths;
@property (readonly) NSString *locale;
@property (readonly) long long maxConcurrentBatches;
@property float mediumConfidenceThreshold;
@property (readonly) float precisionThreshold;
@property bool rectifyPolygons;
@property (readonly) CRTitleParameters *titleParameters;

- (void).cxx_destruct;
- (long long)batchSize;
- (long long)bestFitWidthIndexForAspectRatio:(double)arg1;
- (int)colorSpace;
- (id)confidenceThresholds;
- (id)customModelURL;
- (id)customWords;
- (bool)decodeWithLM;
- (bool)filterWithLM;
- (float)highConfidenceThreshold;
- (id)initV1DefaultConfigWithOptions:(id)arg1;
- (id)initV2DefaultConfigWithOptions:(id)arg1;
- (id)initV3DefaultConfigWithOptions:(id)arg1;
- (id)initWithLocale:(id)arg1 imageReaderOptions:(id)arg2 error:(id*)arg3;
- (double)inputHeight;
- (id)inputWidths;
- (id)locale;
- (long long)maxConcurrentBatches;
- (float)mediumConfidenceThreshold;
- (float)precisionThreshold;
- (bool)rectifyPolygons;
- (void)setConfidenceThresholdsForRevision:(unsigned long long)arg1;
- (void)setHighConfidenceThreshold:(float)arg1;
- (void)setMediumConfidenceThreshold:(float)arg1;
- (void)setRectifyPolygons:(bool)arg1;
- (id)textFeatureFilter;
- (id)titleParameters;
- (bool)usesAppleNeuralEngine;

@end