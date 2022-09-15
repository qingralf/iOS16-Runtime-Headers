/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTSubjectRelighting : NSObject {
    <MTLTexture> * _black;
    NSDictionary * _plistSRL;
    <MTLComputePipelineState> * _srlV2CalcCoefficientsLivePhotos;
    <MTLBuffer> * _srlV2CoeffsBuffer;
    <MTLComputePipelineState> * _srlV2FaceHistogramLivePhotos;
    <MTLBuffer> * _srlV2FaceStatsBuffer;
    <MTLComputePipelineState> * _srlV2GlobalHistogramLivePhotos;
    <MTLBuffer> * _srlV2GlobalStatsBuffer;
    SRLv2Plist * _srlV2Plist;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 commandQueue:(id)arg4 effectUtil:(id)arg5 util:(id)arg6 prewarmOnly:(bool)arg7;
- (int)runSRLForLivePhotosWithInputBuffer:(id)arg1 lumaTexture:(id)arg2 chromaTexture:(id)arg3 skinMaskTexture:(id)arg4 personMaskTexture:(id)arg5 instanceMaskConfidences:(id)arg6 skinToneClassification:(id)arg7 validROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 expBias:(float)arg9 faceExpRatio:(float)arg10 exifOrientation:(int)arg11;
- (id)srlV2CoeffsBuffer;

@end