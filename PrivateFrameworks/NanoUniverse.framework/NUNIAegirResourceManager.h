/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

@interface NUNIAegirResourceManager : NSObject <CLKUIResourceProviderDelegate> {
    unsigned long long  _clients;
    _TtC12NanoUniverse22AegirCloudCoverService * _cloudsService;
    <MTLDevice> * _device;
    unsigned long long  _displayPixelFormat;
    <MTLLibrary> * _library;
    <MTLRenderPipelineState> * _pipelineStateDisplay;
    <MTLRenderPipelineState> * _pipelineStateLocationDot;
    <MTLRenderPipelineState> * _pipelineStatePost;
    <MTLRenderPipelineState> * _pipelineStateSpheroids;
    <MTLRenderPipelineState> * _pipelineStateStar;
    <MTLRenderPipelineState> * _pipelineStateStarfield;
    <MTLRenderPipelineState> * _pipelineStateThreshold;
    <MTLBuffer> * _rectVerticesBuffer;
    CLKUIResourceProviderKey * _resourceProviderKey;
    <MTLBuffer> * _starVerticesBuffer;
    NSMapTable * _textureGroupHashTable;
}

@property (nonatomic, readonly) _TtC12NanoUniverse22AegirCloudCoverService *cloudsService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_deallocInstance:(id)arg1;
+ (id)sharedInstanceWithDisplayPixelFormat:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (void)_deferredCloudDataFetchIfNeeded;
- (id)_generatePipelineVshName:(id)arg1 fshName:(id)arg2 config0:(unsigned long long)arg3 config1:(unsigned long long)arg4 pixelFormat0:(unsigned long long)arg5 pixelFormat1:(unsigned long long)arg6;
- (void)_handleCloudCoverTextureExpired;
- (void)_loadGeometry;
- (id)_provideEarthCloudsAtlasBacking:(id)arg1;
- (void)addClient;
- (id)cloudsService;
- (void)dealloc;
- (id)initWithDisplayPixelFormat:(unsigned long long)arg1;
- (id)provideAtlasBacking:(id)arg1;
- (void)purgeAllCloudCoverTextures;
- (id)rectVerticesBuffer;
- (void)removeClient;
- (id)renderDisplayPipeline;
- (id)renderOffscreenPipelineForLocationDot;
- (id)renderOffscreenPipelineForPost;
- (id)renderOffscreenPipelineForSpheroid:(unsigned long long)arg1;
- (id)renderOffscreenPipelineForStar;
- (id)renderOffscreenPipelineForStarfield;
- (id)renderOffscreenPipelineForThreshold;
- (id)resourceProviderKey;
- (id)starVerticesBuffer;
- (id)textureGroupWithSuffix:(id)arg1;

@end
