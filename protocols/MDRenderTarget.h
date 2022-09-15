/* Generated by RuntimeBrowser.
 */

@protocol MDRenderTarget <NSObject>

@required

- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase {} *x1; struct __shared_weak_count {} *x2; })bitmapData;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)blitFormat;
- (void*)blitRenderTarget;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)contentScale;
- (void)createRenderTarget;
- (void)destroyRenderTarget;
- (void*)finalRenderTarget;
- (struct __IOSurface { }*)flipImage;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)format;
- (bool)hasRenderTarget;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)linearFormat;
- (void*)linearRenderTarget;
- (bool)multiSample;
- (<GGLRenderQueueSource> *)renderSource;
- (void)renderWithTimestamp:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 5: double, struct function<void ()>={__value_func<void ()>={type=[24C] {}, void*, /* Warning: Unrecognized filer type: '}' using 'void*' */ void*, void*
- (void*)renderer;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentScale:(double)arg1;
- (void)setRenderSource:(id <GGLRenderQueueSource>)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldRasterize;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (bool)supportsFramebufferFetch;

@optional

- (float)averageFPS;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(CALayer *)arg2;
- (void*)debugConsoleForId:(int)arg1;
- (void)didDrawView;
- (void)willDrawView;

@end