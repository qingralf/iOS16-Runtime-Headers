/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSMediaAnalysisModel : NSObject <CLSSignalModel> {
    double  _autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;
    double  _autoplaySuggestionScoreThresholdToBeInteresting;
    unsigned long long  _version;
    double  _videoScoreThresholdToBeInteresting;
    double  _videoScoreThresholdToNotBeJunk;
}

@property (readonly) double autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;
@property (readonly) double autoplaySuggestionScoreThresholdToBeInteresting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;
@property (readonly) double videoScoreThresholdToBeInteresting;
@property (readonly) double videoScoreThresholdToNotBeJunk;

+ (unsigned long long)baseMediaAnalysisVersionWithMediaAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)currentAnalyzerVersion;
+ (unsigned long long)latestVersion;
+ (id)name;

- (double)autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;
- (double)autoplaySuggestionScoreThresholdToBeInteresting;
- (id)initForTesting;
- (id)initWithMediaAnalysisVersion:(unsigned long long)arg1;
- (void)setupVersion33;
- (unsigned long long)version;
- (double)videoScoreThresholdToBeInteresting;
- (double)videoScoreThresholdToNotBeJunk;

@end