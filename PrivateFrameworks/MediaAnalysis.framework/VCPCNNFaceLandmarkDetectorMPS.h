/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPCNNFaceLandmarkDetectorMPS : VCPCNNFaceLandmarkDetector {
    VCPCNNData * _faceInput;
    VCPCNNModel * _modelLandmarks;
}

- (void).cxx_destruct;
- (int)computeLandmarks:(float*)arg1;
- (float*)getInputBuffer;
- (id)init;

@end