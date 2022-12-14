/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISwatchOSAppRecipe : NSObject <ISCompositorRecipe> {
    unsigned long long  _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long options;
@property (readonly) Class superclass;

- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;

@end
