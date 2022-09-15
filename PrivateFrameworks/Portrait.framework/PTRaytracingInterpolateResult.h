/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTRaytracingInterpolateResult : NSObject {
    <MTLDevice> * _device;
    <MTLComputePipelineState> * _interpolateRGBWeightSourceRGBADestRGBA;
    <MTLComputePipelineState> * _interpolateRGBWeightSourceYUVDestRGBA;
    <MTLComputePipelineState> * _interpolateRGBWeightSourceYUVDestYUV;
    <MTLTexture> * _precomputedGaussian;
    int  _sizePrecomputedGaussian;
    <MTLComputePipelineState> * _studioLightInterpolateRGBWeightSourceYUVDestYUV;
}

+ (struct PTNoiseValues { float x1; float x2; })calculateVarReadNoise:(id)arg1;

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 useExportQualityNoise:(bool)arg4;
- (void)interpolateRGBWeightUsingSourceToDest:(id)arg1 renderRequest:(id)arg2 inRGBWeight:(id)arg3;
- (void)interpolateRGBWeightUsingSourceToDest:(id)arg1 renderRequest:(id)arg2 inRGBWeight:(id)arg3 inGainMap:(id)arg4 inColorCube:(id)arg5;
- (void)precomputeGaussianFromNumberOfSamples:(int)arg1 seed:(unsigned int)arg2;
- (id)randomGaussNoise;

@end