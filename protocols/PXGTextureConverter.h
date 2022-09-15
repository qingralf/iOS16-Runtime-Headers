/* Generated by RuntimeBrowser.
 */

@protocol PXGTextureConverter <NSObject>

@required

- (PXGImageTexture *)applyAdjustment:(id <PXGDisplayAssetAdjustment>)arg1 toTexture:(PXGImageTexture *)arg2 options:(struct { unsigned int x1; })arg3;
- (PXGImageTexture *)createAtlasForTextureAtlasManager:(id <PXGTextureAtlasManager>)arg1;
- (PXGPayloadTexture *)createPayloadTextureFromPayload:(id <NSCopying>)arg1;
- (<PXGTextureAtlasManager> *)createTextureAtlasManagerForImageDataSpec:(struct { unsigned long long x1; struct __CFString {} *x2; unsigned short x3; unsigned short x4; })arg1;
- (PXGImageTexture *)createTextureFromCGImage:(void *)arg1 transform:(void *)arg2 options:(void *)arg3; // needs 3 arg types, found 2: struct CGImage { }*, struct { unsigned int x1; }
- (PXGImageTexture *)createTextureFromCVPixelBuffer:(void *)arg1 transform:(void *)arg2 options:(void *)arg3 error:(void *)arg4; // needs 4 arg types, found 3: struct __CVBuffer { }*, struct { unsigned int x1; }, id*
- (bool)lowMemoryMode;
- (int)presentationType;
- (NSObject<OS_dispatch_queue> *)processingQueue;
- (NSObject<OS_dispatch_queue> *)requestQueue;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setProcessingQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setRequestQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (unsigned long long)supportedContentTypes;
- (PXGImageTexture *)transparentTexture;

@end