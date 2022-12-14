/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIVideoReframeAdjustmentController : PIAdjustmentController

@property (nonatomic, copy) NSArray *keyframes;
@property (nonatomic) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } stabCropRect;

+ (id)keyframesKey;
+ (id)stabCropRectKey;

- (id)copyKeyframesTrimmingToTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)isEqual:(id)arg1 forKeys:(id)arg2;
- (id)keyframes;
- (id)pasteKeysForMediaType:(long long)arg1;
- (void)setKeyframes:(id)arg1;
- (void)setStabCropRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })stabCropRect;

@end
