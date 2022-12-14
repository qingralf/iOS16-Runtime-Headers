/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIParallaxLayoutInactiveFrameRequest : NURenderRequest {
    PFParallaxLayout * _layout;
    <PISegmentationItem> * _segmentationItem;
}

@property (nonatomic, retain) PFParallaxLayout *layout;
@property (nonatomic, readonly) <PISegmentationItem> *segmentationItem;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1;
- (id)initWithSegmentationItem:(id)arg1;
- (id)layout;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)segmentationItem;
- (void)setLayout:(id)arg1;
- (void)submit:(id /* block */)arg1;

@end
