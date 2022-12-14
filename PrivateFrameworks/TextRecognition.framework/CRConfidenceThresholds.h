/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRConfidenceThresholds : NSObject {
    float  _highConfidenceThreshold;
    float  _mediumConfidenceThreshold;
}

@property (readonly) float highConfidenceThreshold;
@property (readonly) float mediumConfidenceThreshold;

+ (id)defaultConfidenceThresholds;

- (float)highConfidenceThreshold;
- (id)initWithMediumThreshold:(float)arg1 highThreshold:(float)arg2;
- (float)mediumConfidenceThreshold;

@end
