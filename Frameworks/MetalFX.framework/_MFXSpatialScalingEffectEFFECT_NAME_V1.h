/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalFX.framework/MetalFX
 */

@interface _MFXSpatialScalingEffectEFFECT_NAME_V1 : _MTLFXSpatialScaler <MTLFXSpatialScalerSPI> {
    long long  _colorProcessingMode;
    unsigned long long  _colorTextureFormat;
    unsigned long long  _colorTextureUsage;
    <MTLTexture> * _debugTexture;
    <MTLDeviceSPI> * _device;
    <MTLFence> * _fence;
    unsigned long long  _inputContentHeight;
    unsigned long long  _inputContentWidth;
    unsigned long long  _inputFormat;
    unsigned long long  _inputHeight;
    bool  _inputLinear;
    bool  _inputOutputNormalized;
    bool  _inputSRGB;
    <MTLTexture> * _inputTexture;
    unsigned long long  _inputWidth;
    unsigned long long  _intermediatePixelFormat;
    <MTLRenderPipelineState> * _mfxNormPerceptPSO;
    <MTLTexture> * _mfxNormPerceptTex;
    MTLRenderPassDescriptor * _mfxPassDescriptor;
    <MTLComputePipelineState> * _mfxSharpenKernel;
    <MTLRenderPipelineState> * _mfxSharpenPSO;
    <MTLComputePipelineState> * _mfxUpscaleKernel;
    <MTLRenderPipelineState> * _mfxUpscalePSO;
    <MTLTexture> * _mfxUpscaledTex;
    unsigned long long  _outputFormat;
    unsigned long long  _outputHeight;
    bool  _outputSRGB;
    <MTLTexture> * _outputTexture;
    unsigned long long  _outputTextureFormat;
    unsigned long long  _outputTextureUsage;
    unsigned long long  _outputWidth;
    MTLTextureDescriptor * _texDesc;
    bool  _use3DPipeline;
}

@property (nonatomic, readonly) long long colorProcessingMode;
@property (nonatomic, retain) <MTLTexture> *colorTexture;
@property (nonatomic, readonly) unsigned long long colorTextureFormat;
@property (nonatomic, readonly) unsigned long long colorTextureUsage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <MTLTexture> *debugTexture;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MTLFence> *fence;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inputContentHeight;
@property (nonatomic) unsigned long long inputContentWidth;
@property (nonatomic, readonly) unsigned long long inputHeight;
@property (nonatomic, readonly) unsigned long long inputWidth;
@property (nonatomic, readonly) unsigned long long outputHeight;
@property (nonatomic, retain) <MTLTexture> *outputTexture;
@property (nonatomic, readonly) unsigned long long outputTextureFormat;
@property (nonatomic, readonly) unsigned long long outputTextureUsage;
@property (nonatomic, readonly) unsigned long long outputWidth;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)colorProcessingMode;
- (id)colorTexture;
- (unsigned long long)colorTextureFormat;
- (unsigned long long)colorTextureUsage;
- (id)debugTexture;
- (void)encodeToCommandBuffer:(id)arg1;
- (void)encodeToCommandQueue:(id)arg1;
- (id)fence;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (unsigned long long)inputContentHeight;
- (unsigned long long)inputContentWidth;
- (unsigned long long)inputHeight;
- (id)inputTexture;
- (unsigned long long)inputWidth;
- (unsigned long long)outputHeight;
- (id)outputTexture;
- (unsigned long long)outputTextureFormat;
- (unsigned long long)outputTextureUsage;
- (unsigned long long)outputWidth;
- (void)setColorTexture:(id)arg1;
- (void)setDebugTexture:(id)arg1;
- (void)setFence:(id)arg1;
- (void)setInputContentHeight:(unsigned long long)arg1;
- (void)setInputContentWidth:(unsigned long long)arg1;
- (void)setInputTexture:(id)arg1;
- (void)setOutputTexture:(id)arg1;

@end