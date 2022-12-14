/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AltruisticBodyPoseKit.framework/AltruisticBodyPoseKit
 */

@interface ABPKVisualizer : NSObject {
    void _highConfidenceColor;
    void _lowConfidenceColor;
    void _mediumConfidenceColor;
    struct __CVPixelBufferPool { } * _pixelBufferPoolBGRA;
    struct __CVPixelBufferPool { } * _pixelBufferPoolYUV;
    struct OpaqueVTPixelTransferSession { } * _pixelTransferSession;
}

+ (void)_drawRectOfSize:(int)arg1 posx:(int)arg2 posy:(int)arg3 pImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg4 red:(unsigned char)arg5 green:(unsigned char)arg6 blue:(unsigned char)arg7;

- (void)dealloc;
- (int)drawFaceBbox:(void *)arg1 detectedBodies2d:(void *)arg2 confidences:(void *)arg3 skeletonDefinition:(void *)arg4 overlayImage:(void *)arg5 color:(void *)arg6; // needs 6 arg types, found 5: struct __CVBuffer { }*, id, id, id, struct __CVBuffer { }*
- (void)drawFaceBboxEdgewithJoints:(void *)arg1 withSkeletonDefinition:(void *)arg2 fromPostion:(void *)arg3 toPosition:(void *)arg4 OnImage:(void *)arg5 color:(void *)arg6; // needs 6 arg types, found 3: id, id, struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*
- (int)generateStickFigureImageFrom:(void *)arg1 detectedBodies2d:(void *)arg2 confidences:(void *)arg3 skeletonDefinition:(void *)arg4 overlayImage:(void *)arg5 color:(void *)arg6 faceOnly:(void *)arg7; // needs 7 arg types, found 6: struct __CVBuffer { }*, id, id, id, struct __CVBuffer { }*, bool
- (id)init;
- (bool)jointInImageDimensions:(void *)arg1 imageDimensions:(void *)arg2; // needs 2 arg types, found 1: struct CGSize { double x1; double x2; }
- (void)overlayJoints:(void *)arg1 withSkeletonDefinition:(void *)arg2 confidences:(void *)arg3 OnImage:(void *)arg4 color:(void *)arg5 faceOnly:(void *)arg6; // needs 6 arg types, found 5: id, id, id, struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*, bool

@end
