/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTVariantBatchSnapshotter : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {
    unsigned long long  _antialiasingMode;
    AVTAvatar * _avatar;
    struct { 
        bool canSubmitGPUWorkAppIsActive; 
        bool canSubmitGPUWorkAppIsForeground; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } canSubmitGPUWorkLock; 
    }  _backgroundGPUWorkHelper;
    struct CGContext { } * _bitmapContext;
    <MTLCommandQueue> * _commandQueue;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    AVTRenderer * _renderer;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (id)imageWithOptions:(id)arg1 modifications:(id /* block */)arg2;
- (id)initWithAvatar:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 antialiasingMode:(unsigned long long)arg4 device:(id)arg5;

@end