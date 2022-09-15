/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXREScene : NSObject {
    void cameraEntity;
    void cancellables;
    void device;
    void effect;
    void reloadBlock;
    void remappingTable;
    void rootEntity;
    void scene;
    void sceneTransform;
    void transientDrawCall;
    void uuid;
}

@property (nonatomic, readonly) float deltaTime;
@property (nonatomic, retain) _TtC3VFX9VFXEffect *effect;
@property (nonatomic, readonly) bool needsCollisionPlanes;
@property (nonatomic, readonly) void*opaqueECS;
@property (nonatomic, copy) id /* block */ reloadBlock;
@property (nonatomic, retain) _TtC3VFX8VFXScene *scene;
@property (nonatomic, readonly) bool shouldUseDrawCallHandler;
@property (nonatomic, retain) id transientDrawCall;
@property (nonatomic) long long uuid;

- (void).cxx_destruct;
- (id)REMeshAssetBindings;
- (long long)addCollisionPlaneWithCenter:(void *)arg1 extents:(void *)arg2 transform:(void *)arg3; // needs 3 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (void)clear;
- (void)copyBindingValueWithObjectName:(id)arg1 bindingName:(id)arg2 action:(long long)arg3 storageGetterBlock:(id /* block */)arg4;
- (id)createREMeshDataBinding;
- (float)deltaTime;
- (id)effect;
- (long long)fetchClientTextureIDWithNamed:(id)arg1;
- (id)generateMaterialsAndReturnError:(id*)arg1;
- (id)getREMeshAssetPath:(id)arg1;
- (id)init;
- (id)initWithDevice:(id)arg1 contentsOf:(id)arg2 error:(id*)arg3;
- (id)initWithDevice:(id)arg1 model:(id)arg2;
- (id)initWithDevice:(id)arg1 model:(id)arg2 options:(id)arg3;
- (id)neededModelsAndReturnError:(id*)arg1;
- (bool)needsCollisionPlanes;
- (void*)opaqueECS;
- (id /* block */)recycleBuffersGetCompletion;
- (id /* block */)reloadBlock;
- (void)removeCollisionPlaneWithId:(long long)arg1;
- (id)scene;
- (void)setCameraEntityTransformProjection;
- (void)setClientTextureWithId:(long long)arg1 texture:(id)arg2;
- (void)setEffect:(id)arg1;
- (void)setREMeshDataBinding:(id)arg1 positionData:(id)arg2 normalData:(id)arg3 colorData:(id)arg4;
- (void)setReloadBlock:(id /* block */)arg1;
- (void)setRootEntityTransform;
- (void)setScene:(id)arg1;
- (void)setTransientDrawCall:(id)arg1;
- (void)setUuid:(long long)arg1;
- (bool)shouldUseDrawCallHandler;
- (void)tick;
- (void)tickWithDeltaTime:(double)arg1;
- (id)transientDrawCall;
- (void)updateCollisionPlaneWithId:(void *)arg1 center:(void *)arg2 extents:(void *)arg3 transform:(void *)arg4; // needs 4 arg types, found 2: long long, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (long long)uuid;

@end