/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPCNNPoseEstimatorMPS : VCPCNNPoseEstimator {
    VCPCNNData * _input;
    VCPCNNModel * _model;
}

- (void).cxx_destruct;
- (int)computePoseScore:(float*)arg1;
- (float*)getInputBuffer;
- (id)init;

@end
