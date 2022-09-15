/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTEffect : NSObject {
    NSString * _YCbCrMatrix;
    NSObject<OS_dispatch_queue> * _asyncInitQueue;
    bool  _asyncInitialization;
    bool  _asynchronous;
    NSString * _colorPrimaries;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _colorSize;
    long long  _debugType;
    <PTEffectImpl> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegateLock;
    long long  _effectQuality;
    long long  _effectQualityNew;
    long long  _effectType;
    long long  _effectTypeNew;
    PTFaceAttributesNetwork * _faceAttributesNetwork;
    int  _frameId;
    PTHumanDetections * _humanDetections;
    double  _lastFrameTime;
    <MTLCommandQueue> * _metalCommandQueue;
    struct OpaqueVTPixelTransferSession { } * _pixelTransferSession;
    bool  _prewarmOnly;
    PTEffectResources * _resources;
    NSString * _transferFunction;
}

@property long long effectQuality;

+ (void)disableAsynchronousWork;
+ (int)prewarmForMediaserverd;
+ (int)prewarmWithFormat:(struct opaqueCMFormatDescription { }*)arg1 metalCommandQueue:(id)arg2 effectType:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)effectQuality;
- (id)initWithFormat:(struct opaqueCMFormatDescription { }*)arg1 metalCommandQueue:(id)arg2 availableEffectTypes:(unsigned long long)arg3 activeEffectType:(unsigned long long)arg4;
- (id)initWithFormat:(struct opaqueCMFormatDescription { }*)arg1 metalCommandQueue:(id)arg2 availableEffectTypes:(unsigned long long)arg3 activeEffectType:(unsigned long long)arg4 effectQuality:(long long)arg5;
- (id)initWithFormat:(struct opaqueCMFormatDescription { }*)arg1 metalCommandQueue:(id)arg2 availableEffectTypes:(unsigned long long)arg3 activeEffectType:(unsigned long long)arg4 prewarmOnly:(bool)arg5 effectQuality:(long long)arg6;
- (id)initWithFormat:(struct opaqueCMFormatDescription { }*)arg1 metalCommandQueue:(id)arg2 effectType:(unsigned long long)arg3;
- (id)initWithFormat:(struct opaqueCMFormatDescription { }*)arg1 metalCommandQueue:(id)arg2 effectType:(unsigned long long)arg3 effectQuality:(long long)arg4;
- (void)keepOldDelegateAlive:(id)arg1;
- (int)render:(struct __CVBuffer { }*)arg1 detectedObjects:(const struct __CFDictionary { }*)arg2 toColorBuffer:(struct __CVBuffer { }*)arg3;
- (int)render:(struct __CVBuffer { }*)arg1 detectedObjects:(const struct __CFDictionary { }*)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 toColorBuffer:(struct __CVBuffer { }*)arg4;
- (int)render:(struct __CVBuffer { }*)arg1 disparity:(struct __CVBuffer { }*)arg2 detectedObjects:(const struct __CFDictionary { }*)arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 toColorBuffer:(struct __CVBuffer { }*)arg5;
- (void)reset;
- (void)setDebug:(long long)arg1;
- (void)setEffectQuality:(long long)arg1;
- (int)setEffectType:(unsigned long long)arg1;
- (int)updateEffectDelegate:(bool)arg1;
- (int)waitForAsyncInitialization;

@end