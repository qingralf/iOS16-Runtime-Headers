/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTEffectTemporalState : NSObject {
    <MTLDevice> * _device;
    <MTLTexture> * _disparityNetworkTemporalState;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _faceRects;
    <MTLTexture> * _lastQuatersizeRGBA;
    int  _numberOfFaceRects;
    PTUtil * _util;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1 util:(id)arg2;
- (void)restoreState:(id)arg1 network:(id)arg2 disparityFilter:(id)arg3 faceRects:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4 numberOfFaceRects:(int*)arg5;
- (void)saveState:(id)arg1 network:(id)arg2 msrColorPyramid:(id)arg3 faceRects:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4 numberOfFaceRects:(int)arg5;

@end