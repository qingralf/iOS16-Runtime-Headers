/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (nonatomic) double aperture;
@property (nonatomic, copy) NSDictionary *depthInfo;
@property (nonatomic, copy) NSNumber *glassesMatteAllowed;

+ (id)apertureKey;
+ (id)depthInfoKey;
+ (id)glassesMatteAllowedKey;

- (double)aperture;
- (bool)canAdjustApertureValue;
- (bool)canRenderDepth;
- (id)capturedAperture;
- (id)depthInfo;
- (id)glassesMatteAllowed;
- (id)initWithAdjustment:(id)arg1;
- (double)maximumAperture;
- (double)minimumAperture;
- (id)pasteKeysForMediaType:(long long)arg1;
- (void)setAperture:(double)arg1;
- (void)setDepthInfo:(id)arg1;
- (void)setGlassesMatteAllowed:(id)arg1;

@end