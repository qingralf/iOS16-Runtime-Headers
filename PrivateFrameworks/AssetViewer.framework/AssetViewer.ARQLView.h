/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

@interface AssetViewer.ARQLView : RealityKit.ARView {
    void $__lazy_storage_$_engineArEmitterCameraRenderGraph;
    void arEmitter;
    void arHologramEmitter;
    void arHologramModeCompositeMaterial;
    void backgroundFadeProgress;
    void builtinEmitter;
    void configuration;
    void darkMode;
    void emitterMode;
    void enableOcclusion;
    void entityContainer;
    void faceAnchorObjectModeContainer;
    void hologramOpacity;
    void isCullingEnabled;
    void objectEmitter;
    void objectHologramEmitter;
    void objectHologramModeCompositeMaterial;
    void objectModeCompositeMaterial;
    void preferredIBLVersion;
    void sceneIBL;
    void shadowTypeAR;
    void shadowTypeObject;
    void shouldUpdateEmitterAndIBL;
    void useHDR;
}

@property (nonatomic) long long emitterMode;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)emitterMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEmitterMode:(long long)arg1;

@end