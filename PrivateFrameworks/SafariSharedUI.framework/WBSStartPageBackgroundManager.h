/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSStartPageBackgroundManager : NSObject <WBTabGroupManagerObserver> {
    long long  _appearance;
    NSMutableDictionary * _backgroundImageIdentifierToImage;
    NSMutableDictionary * _backgroundImageIdentifierToLuminance;
    struct RetainPtr<CGImage *> { 
        void *m_ptr; 
    }  _image;
    NSObject<OS_dispatch_queue> * _imageSavingQueue;
    NSURL * _imageURL;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _lastPrefetchedFilePath;
    struct RetainPtr<CGImage *> { 
        void *m_ptr; 
    }  _prefetchedImage;
    double  _prefetchedImageLuminance;
    struct RetainPtr<CGImage *> { 
        void *m_ptr; 
    }  _prefetchedImageThumbnail;
    NSURL * _prefetchedImageURL;
    _Atomic long long  _prefetchingCoalescingDelay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct RetainPtr<CGImage *> { void *x1; } image;
@property (nonatomic, readonly, copy) NSString *prefetchedImageName;
@property (nonatomic, readonly) struct RetainPtr<CGImage *> { void *x1; } prefetchedImageThumbnail;
@property (readonly) Class superclass;

+ (id)ciColorKernel;
+ (id)defaultManager;
+ (void)warmUp;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearPrefetchedImage;
- (void)_commitImage:(struct RetainPtr<CGImage *> { void *x1; })arg1 appearanceName:(long long)arg2 luminance:(double)arg3 forIdentifier:(id)arg4;
- (void)_deleteImageWithIdentifier:(id)arg1;
- (bool)_hasTabGroupSpecificBackgroundImage:(id)arg1;
- (void)_loadImageFromDiskForIdentifier:(id)arg1;
- (void)_prefetchImage:(id)arg1 luminance:(double)arg2 completion:(id /* block */)arg3 withNanoSecondDelay:(long long)arg4;
- (void)_processImageForIdentifier:(id)arg1;
- (void)_readImagePropertiesFromImageSource:(struct RetainPtr<CGImageSource> { void *x1; })arg1 forImageIdentifier:(id)arg2 isTabGroupSpecificBackgroundImage:(bool)arg3;
- (void)_saveImage:(struct RetainPtr<CGImage *> { void *x1; })arg1 appearance:(long long)arg2 luminance:(double)arg3 forIdentifier:(id)arg4 completion:(id /* block */)arg5;
- (void)_setExtendedAttributesOnBackgroundImage;
- (void)_setHasTabGroupSpecificBackgroundImage:(bool)arg1 forIdentifier:(id)arg2;
- (void)_setImage:(struct RetainPtr<CGImage *> { void *x1; })arg1 withAppearance:(long long)arg2 forIdentifier:(id)arg3;
- (void)_setImageOnAnyQueue:(struct RetainPtr<CGImage *> { void *x1; })arg1 withAppearance:(long long)arg2 forIdentifier:(id)arg3;
- (void)_updateThumbnailIfNeeded;
- (struct RetainPtr<CGImage *> { void *x1; })analyzeImageAndThresholdIfNecessary:(struct CGImage { }*)arg1 thumbnail:(struct CGImage { }*)arg2 precomputedLuminance:(double)arg3 getAppearance:(long long*)arg4 luminance:(double*)arg5;
- (long long)appearanceForImage:(struct RetainPtr<CGImage *> { void *x1; })arg1;
- (long long)appearanceForImageWithIdentifier:(id)arg1;
- (long long)appearanceForLuminance:(double)arg1;
- (long long)appearanceIfImageExists:(bool)arg1;
- (struct RetainPtr<CGImage *> { void *x1; })assignImage:(struct RetainPtr<CGImage *> { void *x1; })arg1 oldImage:(struct RetainPtr<CGImage *> { void *x1; })arg2;
- (void)cacheImageFromURL:(id)arg1 completion:(id /* block */)arg2;
- (id)ciContext;
- (void)clearImage;
- (void)clearImageWithIdentifier:(id)arg1;
- (void)clearPrefetchedImage;
- (void)commitPrefetchedImageWithLuminance:(double)arg1 forIdentifier:(id)arg2;
- (struct RetainPtr<CGImage *> { void *x1; })image;
- (struct RetainPtr<CGImage *> { void *x1; })imageForIdentifier:(id)arg1;
- (id)initWithImageURL:(id)arg1;
- (bool)isCorrectBackgroundImageLoadedForIdentifier:(id)arg1;
- (void)loadImageFromDiskForIdentifier:(id)arg1;
- (struct RetainPtr<CGImage *> { void *x1; })normalizeImage:(struct RetainPtr<CGImage *> { void *x1; })arg1 imageSource:(struct RetainPtr<CGImageSource> { void *x1; })arg2 properties:(id)arg3;
- (void)prefetchImage:(id)arg1 completion:(id /* block */)arg2;
- (void)prefetchImage:(id)arg1 luminance:(double)arg2 completion:(id /* block */)arg3;
- (id)prefetchedImageName;
- (struct RetainPtr<CGImage *> { void *x1; })prefetchedImageThumbnail;
- (void)processImageForIdentifier:(id)arg1;
- (void)reloadTabGroupSpecificBackgroundImageFromDisk:(id)arg1;
- (void)tabGroupManager:(id)arg1 didRemoveTabGroup:(id)arg2;
- (struct RetainPtr<CGImage *> { void *x1; })thresholdImage:(struct CGImage { }*)arg1 minValue:(double)arg2 maxValue:(double)arg3 multiplier:(double)arg4;

@end
