/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPMotionFlowObservation : NSObject {
    struct __CVBuffer { } * _pixelBuffer;
    int  _revision;
}

@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic) int revision;

- (void)dealloc;
- (struct __CVBuffer { }*)pixelBuffer;
- (int)revision;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setRevision:(int)arg1;

@end