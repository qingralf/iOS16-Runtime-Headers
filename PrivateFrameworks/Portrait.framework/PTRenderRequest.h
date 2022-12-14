/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTRenderRequest : NSObject {
    int  _AGC;
    float  _alphaLowLight;
    float  _aperture;
    PTTexture * _destinationColor;
    float  _disparityMax;
    float  _disparityMin;
    float  _focusDistance;
    unsigned int  _frameId;
    float  _highlightBoostFactor;
    float  _highlightChromaFactor;
    NSDictionary * _options;
    <PTRenderState> * _renderState;
    struct { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long width; 
        unsigned long long height; 
    }  _scissorRect;
    PTTexture * _sourceColor;
    <MTLTexture> * _sourceDisparity;
}

@property (nonatomic) int AGC;
@property (nonatomic) float alphaLowLight;
@property (nonatomic) float aperture;
@property (nonatomic, retain) PTTexture *destinationColor;
@property (nonatomic) float disparityMax;
@property (nonatomic) float disparityMin;
@property (nonatomic) float focusDistance;
@property (nonatomic) unsigned int frameId;
@property (nonatomic) float highlightBoostFactor;
@property (nonatomic) float highlightChromaFactor;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, retain) <PTRenderState> *renderState;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } scissorRect;
@property (nonatomic, retain) PTTexture *sourceColor;
@property (nonatomic, retain) <MTLTexture> *sourceDisparity;

- (void).cxx_destruct;
- (int)AGC;
- (float)alphaLowLight;
- (float)aperture;
- (id)destinationColor;
- (float)disparityMax;
- (float)disparityMin;
- (float)focusDistance;
- (unsigned int)frameId;
- (float)highlightBoostFactor;
- (float)highlightChromaFactor;
- (id)init;
- (id)options;
- (id)renderState;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })scissorRect;
- (void)setAGC:(int)arg1;
- (void)setAlphaLowLight:(float)arg1;
- (void)setAperture:(float)arg1;
- (void)setDestinationColor:(id)arg1;
- (void)setDisparityMax:(float)arg1;
- (void)setDisparityMin:(float)arg1;
- (void)setFocusDistance:(float)arg1;
- (void)setFrameId:(unsigned int)arg1;
- (void)setHighlightBoostFactor:(float)arg1;
- (void)setHighlightChromaFactor:(float)arg1;
- (void)setOptions:(id)arg1;
- (void)setRenderState:(id)arg1;
- (void)setScissorRect:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setSourceColor:(id)arg1;
- (void)setSourceDisparity:(id)arg1;
- (id)sourceColor;
- (id)sourceDisparity;

@end
