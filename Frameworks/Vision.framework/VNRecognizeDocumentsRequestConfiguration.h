/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRecognizeDocumentsRequestConfiguration : VNRecognizeTextRequestConfiguration {
    bool  _detectionOnly;
    unsigned long long  _maximumCandidateCount;
    bool  _usesAlternateLineGrouping;
}

@property (nonatomic) bool detectionOnly;
@property (nonatomic) unsigned long long maximumCandidateCount;
@property (nonatomic) bool usesAlternateLineGrouping;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)detectionOnly;
- (id)initWithRequestClass:(Class)arg1;
- (unsigned long long)maximumCandidateCount;
- (void)setDetectionOnly:(bool)arg1;
- (void)setMaximumCandidateCount:(unsigned long long)arg1;
- (void)setUsesAlternateLineGrouping:(bool)arg1;
- (bool)usesAlternateLineGrouping;

@end
