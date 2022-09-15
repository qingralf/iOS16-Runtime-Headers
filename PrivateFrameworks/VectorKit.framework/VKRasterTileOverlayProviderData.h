/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterTileOverlayProviderData : NSObject {
    double  _alpha;
    bool  _autoreverses;
    double  _beginTime;
    struct CGImage { } * _colorMap;
    bool  _crossfadeKeyframes;
    <VKRasterTileOverlayProviderDelegate> * _delegate;
    double  _duration;
    NSString * _fillMode;
    NSArray * _keyTimes;
    int  _keyframeIndexOverride;
    unsigned short  _keyframesCount;
    unsigned int  _maximumZ;
    unsigned int  _minimumZ;
    unsigned int  _providerID;
    float  _repeatCount;
    double  _repeatDuration;
    float  _speed;
    unsigned int  _tileSize;
    double  _timeOffset;
    unsigned int  _visibleKeyframeIndex;
}

@property (nonatomic) double alpha;
@property (nonatomic) bool autoreverses;
@property (nonatomic) double beginTime;
@property (nonatomic) struct CGImage { }*colorMap;
@property (nonatomic, readonly) bool crossfadeKeyframes;
@property (nonatomic) <VKRasterTileOverlayProviderDelegate> *delegate;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *fillMode;
@property (copy) NSArray *keyTimes;
@property (nonatomic) int keyframeIndexOverride;
@property (nonatomic) unsigned short keyframesCount;
@property (nonatomic, readonly) unsigned int maximumZ;
@property (nonatomic, readonly) unsigned int minimumZ;
@property (nonatomic, readonly) unsigned int providerID;
@property (nonatomic) float repeatCount;
@property (nonatomic) double repeatDuration;
@property (nonatomic) float speed;
@property (nonatomic, readonly) unsigned int tileSize;
@property (nonatomic) double timeOffset;
@property (nonatomic) unsigned int visibleKeyframeIndex;

- (void).cxx_destruct;
- (double)alpha;
- (bool)autoreverses;
- (double)beginTime;
- (struct CGImage { }*)colorMap;
- (bool)crossfadeKeyframes;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (id)fillMode;
- (id)initWithProviderID:(unsigned int)arg1 tileSize:(unsigned int)arg2 minimumZ:(unsigned int)arg3 maximumZ:(unsigned int)arg4 keyframesCount:(unsigned short)arg5 duration:(double)arg6 crossfadeKeyframes:(bool)arg7;
- (id)keyTimes;
- (int)keyframeIndexOverride;
- (unsigned short)keyframesCount;
- (unsigned int)maximumZ;
- (unsigned int)minimumZ;
- (unsigned int)providerID;
- (float)repeatCount;
- (double)repeatDuration;
- (void)setAlpha:(double)arg1;
- (void)setAutoreverses:(bool)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setColorMap:(struct CGImage { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFillMode:(id)arg1;
- (void)setKeyTimes:(id)arg1;
- (void)setKeyframeIndexOverride:(int)arg1;
- (void)setKeyframesCount:(unsigned short)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setSpeed:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setVisibleKeyframeIndex:(unsigned int)arg1;
- (float)speed;
- (unsigned int)tileSize;
- (double)timeOffset;
- (unsigned int)visibleKeyframeIndex;

@end