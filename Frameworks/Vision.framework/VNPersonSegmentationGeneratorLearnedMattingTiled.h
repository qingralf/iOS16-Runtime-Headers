/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNPersonSegmentationGeneratorLearnedMattingTiled : VNPersonSegmentationGeneratorLearnedMatting

+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (bool)supportsTiling;

- (struct BufferSize { unsigned long long x1; unsigned long long x2; })calculateNumberOfTilesForNetworkInputImageSize:(struct BufferSize { unsigned long long x1; unsigned long long x2; })arg1 networkInputMaskSize:(struct BufferSize { unsigned long long x1; unsigned long long x2; })arg2 networkOutputMaskSize:(struct BufferSize { unsigned long long x1; unsigned long long x2; })arg3 rotated:(bool)arg4;
- (struct BufferSize { unsigned long long x1; unsigned long long x2; })outputMaskSize;

@end
