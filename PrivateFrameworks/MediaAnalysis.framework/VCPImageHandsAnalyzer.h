/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPImageHandsAnalyzer : VCPImageAnalyzer {
    VCPCNNHandsDetector * _handsDetector;
    VCPCNNHandKeypointsDetector * _handsKeypointsDetector;
    int  _inputHeight;
    int  _inputWidth;
    int  _maxNumRegions;
    NSString * _resConfig;
    NSMutableArray * _results;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (int)configForAspectRatio:(id)arg1;
- (int)convertSingleResultToDict:(struct CGPoint { double x1; double x2; })arg1 keypointConfidence:(float*)arg2 box:(id)arg3 results:(id)arg4;
- (long long)getClosestAspectRatio:(id)arg1;
- (id)init;
- (id)initWithKeypointsOption:(int)arg1 forceCPU:(bool)arg2 sharedModel:(bool)arg3 aspectRatio:(id)arg4 modelName:(id)arg5 revision:(int)arg6;
- (int)preferredInputFormat:(int*)arg1 height:(int*)arg2 format:(unsigned int*)arg3;
- (int)updateModelForAspectRatio:(id)arg1;

@end
