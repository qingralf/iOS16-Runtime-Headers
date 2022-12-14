/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPlugColorGamutHandler : NSObject <FxColorGamutAPI, PROAPIObject> {
    void * sharedBase;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)colorMatrixFromDesiredRGBToYCbCr;
- (id)colorMatrixFromDesiredRGBToYCbCrAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (id)colorMatrixFromYCbCrToDesiredRGB;
- (id)colorMatrixFromYCbCrToDesiredRGBAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (unsigned long long)colorPrimaries;
- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (id)initWithPlugin:(void*)arg1;
- (id)pcFloat33MatrixToFxMatrix44:(const float*)arg1;

@end
