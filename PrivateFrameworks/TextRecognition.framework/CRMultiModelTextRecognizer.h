/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRMultiModelTextRecognizer : NSObject <CRTextRecognizer> {
    CRRecognizerConfiguration * _configuration;
    NSDictionary * _configurationOptions;
    CRPerformanceStatistics * _groupingStatsStorage;
    CRTextOrientationCorrector * _orientationCorrector;
    CRPerformanceStatistics * _orientationStats;
    bool  _shouldCancel;
    CRMultiModelTextFeatureSplitter * _textFeatureSplitter;
}

@property (retain) CRRecognizerConfiguration *configuration;
@property (retain) NSDictionary *configurationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) CRPerformanceStatistics *decodingStats;
@property (readonly, copy) NSString *description;
@property (readonly) CRPerformanceStatistics *groupingStats;
@property (retain) CRPerformanceStatistics *groupingStatsStorage;
@property (readonly) unsigned long long hash;
@property (readonly) CRPerformanceStatistics *inferenceStats;
@property (retain) CRTextOrientationCorrector *orientationCorrector;
@property (retain) CRPerformanceStatistics *orientationStats;
@property bool shouldCancel;
@property (readonly) Class superclass;
@property (retain) CRMultiModelTextFeatureSplitter *textFeatureSplitter;

+ (id)recognizerForRevision:(unsigned long long)arg1 imageReaderOptions:(id)arg2 error:(id*)arg3;
+ (id)sortedSupportedLanguages:(id)arg1 byPreferredLanguages:(id)arg2;

- (void).cxx_destruct;
- (bool)_isCancelled;
- (void)cancel;
- (id)configuration;
- (id)configurationOptions;
- (id)decodingStats;
- (id)groupingStats;
- (id)groupingStatsStorage;
- (id)identifierForTextFeature:(id)arg1;
- (id)inferenceStats;
- (id)initWithConfigurationOptions:(id)arg1;
- (id)orientationCorrector;
- (id)orientationStats;
- (bool)preheatWithError:(id*)arg1;
- (id)recognizeInImage:(id)arg1 textFeatures:(id)arg2 progressHandler:(id /* block */)arg3 error:(id*)arg4;
- (id)recognizerForIdentifier:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationOptions:(id)arg1;
- (void)setGroupingStatsStorage:(id)arg1;
- (void)setOrientationCorrector:(id)arg1;
- (void)setOrientationStats:(id)arg1;
- (void)setShouldCancel:(bool)arg1;
- (void)setTextFeatureSplitter:(id)arg1;
- (bool)shouldCancel;
- (id)textFeatureSplitter;
- (id)thresholdsForTextFeature:(id)arg1;
- (id)titleParametersForTextFeature:(id)arg1;

@end
