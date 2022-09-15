/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
 */

@interface SIIOSurfaceWrapper : NSObject {
    struct __IOSurface { } * _iosurface;
}

@property (nonatomic) struct __IOSurface { }*iosurface;

- (unsigned long long)_bytesPerElement:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithIOSurfaceBuffer:(struct __IOSurface { }*)arg1;
- (id)initWithResolution:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithResolution:(struct CGSize { double x1; double x2; })arg1 pixelformat:(unsigned int)arg2;
- (struct __IOSurface { }*)iosurface;
- (void)setIosurface:(struct __IOSurface { }*)arg1;

@end