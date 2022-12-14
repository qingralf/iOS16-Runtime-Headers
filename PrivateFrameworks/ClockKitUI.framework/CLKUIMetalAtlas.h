/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIMetalAtlas : CLKUIAtlas {
    NSObject<OS_dispatch_queue> * _loaderQueue;
    <MTLTexture> * _loaderQueue_prewarmedTexture;
    unsigned long long  _mainQueue_prewarmState;
    <MTLTexture> * _nilTexture;
    <MTLTexture> * _texture;
}

@property (nonatomic, readonly) <MTLTexture> *nilTexture;

+ (id)_createMTLTextureWithBacking:(id)arg1 device:(id)arg2 encoder:(id)arg3;

- (void).cxx_destruct;
- (void)bind:(id)arg1 slot:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithUuid:(id)arg1 nilTexture:(id)arg2;
- (id)nilTexture;
- (void)prewarm;
- (void)purge;

@end
