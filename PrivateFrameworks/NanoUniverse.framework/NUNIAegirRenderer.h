/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

@interface NUNIAegirRenderer : NUNIRenderer {
    struct NUNIAegirRenderUniforms { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*sprite; 
    }  _baseUniforms;
    CALayer * _contentMaskLayer;
    IOSurface * _contentMaskSurfaces;
    <MTLTexture> * _contentMaskTextures;
    <MTLDevice> * _device;
    unsigned long long  _frame;
    NUNAegirOffscreen * _offscreenBlooms;
    NUNAegirOffscreen * _offscreenPosts;
    NUNAegirOffscreen * _offscreenScenes;
    int  _renderUniformBuffersCounts;
    NSMutableArray * _renderUniformsBuffers;
    <NUNIRendererOptions> * _rendererOptions;
    NUNIAegirResourceManager * _resourceManager;
    struct NUNIAegirRendererState { 
        struct NUNIViewport { 
            int width; 
            int height; 
        } viewport; 
        float cameraRoll; 
        float aspect; 
        float fovY; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*cameraOffset; 
    }  _state;
    NUNIAegirTextureGroup * _textureGroup;
}

@property (nonatomic, retain) <NUNIRendererOptions> *rendererOptions;
@property (nonatomic, readonly) NUNIAegirResourceManager *resourceManager;

- (void).cxx_destruct;
- (void)_renderLocationDot:(id)arg1 uniPtr:(struct NUNIAegirRenderUniforms { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; struct NUNIAegirRenderOptions { float x_12_1_1; float x_12_1_2; float x_12_1_3; float x_12_1_4; float x_12_1_5; float x_12_1_6; float x_12_1_7; float x_12_1_8; float x_12_1_9; float x_12_1_10; float x_12_1_11; float x_12_1_12; float x_12_1_13; float x_12_1_14; float x_12_1_15; float x_12_1_16; float x_12_1_17; float x_12_1_18; float x_12_1_19; float x_12_1_20; float x_12_1_21; float x_12_1_22; float x_12_1_23; float x_12_1_24; float x_12_1_25; float x_12_1_26; float x_12_1_27; float x_12_1_28; float x_12_1_29; float x_12_1_30; float x_12_1_31; float x_12_1_32; float x_12_1_33; float x_12_1_34; float x_12_1_35; } x12; }*)arg2 viewport:(struct NUNIViewport { int x1; int x2; })arg3 renderEncoder:(id)arg4;
- (void)_renderOffscreenBackgroundWithRenderEncoder:(id)arg1 frameBufferIndex:(unsigned long long)arg2;
- (void)_renderOffscreenBloomWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3 frameBufferIndex:(unsigned long long)arg4;
- (void)_renderOffscreenPostWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3 frameBufferIndex:(unsigned long long)arg4;
- (void)_renderOffscreenSceneWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3 frameBufferIndex:(unsigned long long)arg4 drawableTexture:(id)arg5;
- (void)_renderRaytraceSpheroid:(id)arg1 uniPtr:(struct NUNIAegirRenderUniforms { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; struct NUNIAegirRenderOptions { float x_12_1_1; float x_12_1_2; float x_12_1_3; float x_12_1_4; float x_12_1_5; float x_12_1_6; float x_12_1_7; float x_12_1_8; float x_12_1_9; float x_12_1_10; float x_12_1_11; float x_12_1_12; float x_12_1_13; float x_12_1_14; float x_12_1_15; float x_12_1_16; float x_12_1_17; float x_12_1_18; float x_12_1_19; float x_12_1_20; float x_12_1_21; float x_12_1_22; float x_12_1_23; float x_12_1_24; float x_12_1_25; float x_12_1_26; float x_12_1_27; float x_12_1_28; float x_12_1_29; float x_12_1_30; float x_12_1_31; float x_12_1_32; float x_12_1_33; float x_12_1_34; float x_12_1_35; } x12; }*)arg2 renderEncoder:(id)arg3;
- (void)_renderSpriteSpheroid:(id)arg1 uniPtr:(struct NUNIAegirRenderUniforms { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; struct NUNIAegirRenderOptions { float x_12_1_1; float x_12_1_2; float x_12_1_3; float x_12_1_4; float x_12_1_5; float x_12_1_6; float x_12_1_7; float x_12_1_8; float x_12_1_9; float x_12_1_10; float x_12_1_11; float x_12_1_12; float x_12_1_13; float x_12_1_14; float x_12_1_15; float x_12_1_16; float x_12_1_17; float x_12_1_18; float x_12_1_19; float x_12_1_20; float x_12_1_21; float x_12_1_22; float x_12_1_23; float x_12_1_24; float x_12_1_25; float x_12_1_26; float x_12_1_27; float x_12_1_28; float x_12_1_29; float x_12_1_30; float x_12_1_31; float x_12_1_32; float x_12_1_33; float x_12_1_34; float x_12_1_35; } x12; }*)arg2 renderEncoder:(id)arg3;
- (void)_updateBaseUniformsForViewport:(struct NUNIViewport { int x1; int x2; })arg1;
- (void)_updateStateWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2;
- (id)contentMaskLayer;
- (void)dealloc;
- (void)discard;
- (id)getOrCreateUniformBufferforFrameBufferIndex:(unsigned long long)arg1;
- (id)initWithPixelFormat:(unsigned long long)arg1 textureSuffix:(id)arg2 rendererStyle:(unsigned long long)arg3;
- (void)purgeUnusedWithScene:(id)arg1;
- (void)renderOffscreenWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3;
- (void)renderWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3 passDescriptor:(id)arg4;
- (id)rendererOptions;
- (id)resourceManager;
- (void)setContentMaskLayer:(id)arg1;
- (void)setRendererOptions:(id)arg1;

@end