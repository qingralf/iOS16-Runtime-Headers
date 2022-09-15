/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISiOSAppRecipe : NSObject <ISCompositorRecipe> {
    unsigned long long  _options;
    bool  _shouldDrawBorder;
    bool  _templateVariant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long options;
@property bool shouldApplyMask;
@property bool shouldDrawBorder;
@property (readonly) Class superclass;
@property (nonatomic) bool templateVariant;

- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (void)setShouldApplyMask:(bool)arg1;
- (void)setShouldDrawBorder:(bool)arg1;
- (void)setTemplateVariant:(bool)arg1;
- (bool)shouldApplyMask;
- (bool)shouldDrawBorder;
- (bool)templateVariant;

@end