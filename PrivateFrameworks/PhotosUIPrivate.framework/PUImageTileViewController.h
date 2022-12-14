/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUImageTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUBrowsingViewModelChangeObserver, PUImageRequesterObserver, PXVKImageAnalysisInteractionDelegate> {
    long long  __assetLoadingStage;
    NSDate * __assetLoadingStartDate;
    NSData * __fullsizeImageData;
    long long  __fullsizeImageOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  __fullsizeImageSize;
    NSURL * __fullsizeImageURL;
    struct CGSize { 
        double width; 
        double height; 
    }  __fullsizeImageUntransformedSize;
    CALayer<PLTileableLayer> * __fullsizeTiledLayer;
    PUImageRequester * __imageRequester;
    UIImageView * __imageView;
    bool  __isDisplayingFullQualityImage;
    bool  __needsUpdateFullsizeImageMetadata;
    bool  __needsUpdateFullsizeTiledLayer;
    bool  __needsUpdateImage;
    bool  __needsUpdateImageLayerModulator;
    bool  __needsUpdateImageLayerModulatorInput;
    bool  __needsUpdateImageView;
    struct CGSize { 
        double width; 
        double height; 
    }  __targetSize;
    bool  _animatesImageAppearance;
    <PUDisplayAsset> * _asset;
    PUAssetViewModel * _assetViewModel;
    PUBrowsingViewModel * _browsingViewModel;
    bool  _canUseFullsizeTiledLayer;
    struct { 
        bool respondsToPresentingViewController; 
        bool respondsToShouldShowVisualIntelligenceOverlay; 
    }  _delegateFlags;
    struct CGImage { } * _gainMapImage;
    float  _gainMapValue;
    UIImage * _image;
    <PXVKImageAnalysisInteraction> * _imageInteraction;
    bool  _imageIsFullQuality;
    PXImageLayerModulator * _imageLayerModulator;
    PXImageModulationManager * _imageModulationManager;
    PUMediaProvider * _mediaProvider;
    bool  _needsUpdateTargetSize;
    bool  _needsUpdateVisualIntelligenceOverlayContentsRect;
    UIColor * _placeholderColor;
    <PUImageTileViewControllerPresentingDelegate> * _presentingDelegate;
    bool  _preserveImageDuringReload;
    bool  _requiresFullQualityImage;
    bool  _shouldUseFullsizeImageData;
    bool  _shouldUsePenultimateVersionForNextImageUpdate;
    bool  _visualImageInteractionEnabled;
}

@property (setter=_setAssetLoadingStage:, nonatomic) long long _assetLoadingStage;
@property (setter=_setAssetLoadingStartDate:, nonatomic, retain) NSDate *_assetLoadingStartDate;
@property (setter=_setFullsizeImageData:, nonatomic, retain) NSData *_fullsizeImageData;
@property (setter=_setFullsizeImageOrientation:, nonatomic) long long _fullsizeImageOrientation;
@property (setter=_setFullsizeImageSize:, nonatomic) struct CGSize { double x1; double x2; } _fullsizeImageSize;
@property (setter=_setFullsizeImageURL:, nonatomic, retain) NSURL *_fullsizeImageURL;
@property (setter=_setFullsizeImageUntransformedSize:, nonatomic) struct CGSize { double x1; double x2; } _fullsizeImageUntransformedSize;
@property (setter=_setFullsizeTiledLayer:, nonatomic, retain) CALayer<PLTileableLayer> *_fullsizeTiledLayer;
@property (setter=_setImageRequester:, nonatomic, retain) PUImageRequester *_imageRequester;
@property (nonatomic, readonly) UIImageView *_imageView;
@property (setter=_setDisplayingFullQualityImage:, nonatomic) bool _isDisplayingFullQualityImage;
@property (setter=_setNeedsUpdateFullsizeImageMetadata:, nonatomic) bool _needsUpdateFullsizeImageMetadata;
@property (setter=_setNeedsUpdateFullsizeTiledLayer:, nonatomic) bool _needsUpdateFullsizeTiledLayer;
@property (setter=_setNeedsUpdateImage:, nonatomic) bool _needsUpdateImage;
@property (setter=_setNeedsUpdateImageLayerModulator:, nonatomic) bool _needsUpdateImageLayerModulator;
@property (setter=_setNeedsUpdateImageLayerModulatorInput:, nonatomic) bool _needsUpdateImageLayerModulatorInput;
@property (setter=_setNeedsUpdateImageView:, nonatomic) bool _needsUpdateImageView;
@property (setter=_setTargetSize:, nonatomic) struct CGSize { double x1; double x2; } _targetSize;
@property (nonatomic) bool animatesImageAppearance;
@property (nonatomic, retain) <PUDisplayAsset> *asset;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic) bool canUseFullsizeTiledLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGImage { }*gainMapImage;
@property (nonatomic, readonly) bool gainMapImageIsAvailable;
@property (nonatomic, readonly) float gainMapValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) <PXVKImageAnalysisInteraction> *imageInteraction;
@property (nonatomic, readonly) bool imageIsFullQuality;
@property (nonatomic, retain) PXImageLayerModulator *imageLayerModulator;
@property (nonatomic, retain) PXImageModulationManager *imageModulationManager;
@property (nonatomic, retain) PUMediaProvider *mediaProvider;
@property (nonatomic) bool needsUpdateTargetSize;
@property (nonatomic) bool needsUpdateVisualIntelligenceOverlayContentsRect;
@property (nonatomic, copy) UIColor *placeholderColor;
@property (nonatomic) <PUImageTileViewControllerPresentingDelegate> *presentingDelegate;
@property (nonatomic) bool preserveImageDuringReload;
@property (nonatomic) bool requiresFullQualityImage;
@property (nonatomic) bool shouldUseFullsizeImageData;
@property (setter=_setShouldUsePenultimateVersionForNextImageUpdate:, nonatomic) bool shouldUsePenultimateVersionForNextImageUpdate;
@property (readonly) Class superclass;
@property (nonatomic) bool visualImageInteractionEnabled;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)_supportedZoomImageFormats;

- (void).cxx_destruct;
- (void)_addVKImageInteractionToImageView;
- (long long)_assetLoadingStage;
- (id)_assetLoadingStartDate;
- (void)_cancelAllImageRequests;
- (id)_fullsizeImageData;
- (long long)_fullsizeImageOrientation;
- (struct CGSize { double x1; double x2; })_fullsizeImageSize;
- (id)_fullsizeImageURL;
- (struct CGSize { double x1; double x2; })_fullsizeImageUntransformedSize;
- (id)_fullsizeTiledLayer;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleBrowsingViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleShouldReloadAssetMediaNotification:(id)arg1;
- (id)_imageRequester;
- (id)_imageView;
- (void)_invalidate;
- (void)_invalidateFullsizeImageMetadata;
- (void)_invalidateFullsizeTiledLayer;
- (void)_invalidateImage;
- (void)_invalidateImageLayerModulator;
- (void)_invalidateImageLayerModulatorInput;
- (void)_invalidateImageView;
- (void)_invalidateTargetSize;
- (void)_invalidateVisualIntelligenceOverlayContentsRect;
- (bool)_isDisplayingFullQualityImage;
- (bool)_needsUpdate;
- (bool)_needsUpdateFullsizeImageMetadata;
- (bool)_needsUpdateFullsizeTiledLayer;
- (bool)_needsUpdateImage;
- (bool)_needsUpdateImageLayerModulator;
- (bool)_needsUpdateImageLayerModulatorInput;
- (bool)_needsUpdateImageView;
- (void)_removeVKImageInteractionFromImageView;
- (void)_setAssetLoadingStage:(long long)arg1;
- (void)_setAssetLoadingStartDate:(id)arg1;
- (void)_setAssetWithoutUpdateIfNeeded:(id)arg1;
- (void)_setDisplayingFullQualityImage:(bool)arg1;
- (void)_setFullsizeImageData:(id)arg1;
- (void)_setFullsizeImageOrientation:(long long)arg1;
- (void)_setFullsizeImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setFullsizeImageURL:(id)arg1;
- (void)_setFullsizeImageUntransformedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setFullsizeTiledLayer:(id)arg1;
- (void)_setImage:(id)arg1 isFullQuality:(bool)arg2;
- (void)_setImageRequester:(id)arg1;
- (void)_setNeedsUpdateFullsizeImageMetadata:(bool)arg1;
- (void)_setNeedsUpdateFullsizeTiledLayer:(bool)arg1;
- (void)_setNeedsUpdateImage:(bool)arg1;
- (void)_setNeedsUpdateImageLayerModulator:(bool)arg1;
- (void)_setNeedsUpdateImageLayerModulatorInput:(bool)arg1;
- (void)_setNeedsUpdateImageView:(bool)arg1;
- (void)_setShouldUsePenultimateVersionForNextImageUpdate:(bool)arg1;
- (void)_setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setVisualIntelligenceAnalyzingImageIfNeeded;
- (struct CGSize { double x1; double x2; })_targetSize;
- (void)_updateAssetLoadingStage;
- (void)_updateFullsizeImageMetadataIfNeeded;
- (void)_updateFullsizeTiledLayerIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateImageIfNeeded;
- (void)_updateImageLayerModulatorIfNeeded;
- (void)_updateImageLayerModulatorInputIfNeeded;
- (void)_updateImageViewIfNeeded;
- (void)_updateReadyForDisplay;
- (void)_updateTargetSizeIfNeeded;
- (void)_updateVKAnalysisAndDisplayMode;
- (void)_updateVisualIntelligenceOverlayContentsRectIfNeeded;
- (void)_updateVisualIntelligenceUnitContentsRect;
- (bool)animatesImageAppearance;
- (void)applyLayoutInfo:(id)arg1;
- (id)asset;
- (id)assetViewModel;
- (void)assetViewModelDidChange;
- (void)becomeReusable;
- (id)browsingViewModel;
- (bool)canUseFullsizeTiledLayer;
- (void)didChangeVisibleRect;
- (struct CGImage { }*)gainMapImage;
- (bool)gainMapImageIsAvailable;
- (float)gainMapValue;
- (id)generateAssetTransitionInfo;
- (id)image;
- (void)imageAnalysisInteraction:(id)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)imageAnalysisInteractionDidDismissVisualSearchController:(id)arg1;
- (id)imageInteraction;
- (bool)imageIsFullQuality;
- (id)imageLayerModulator;
- (id)imageModulationManager;
- (void)imageRequester:(id)arg1 didChange:(id)arg2;
- (id)loadView;
- (id)mediaProvider;
- (bool)needsUpdateTargetSize;
- (bool)needsUpdateVisualIntelligenceOverlayContentsRect;
- (id)placeholderColor;
- (id)presentingDelegate;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)arg1;
- (bool)preserveImageDuringReload;
- (bool)requiresFullQualityImage;
- (void)setAnimatesImageAppearance:(bool)arg1;
- (void)setAsset:(id)arg1;
- (void)setAssetViewModel:(id)arg1;
- (void)setBrowsingViewModel:(id)arg1;
- (void)setCanUseFullsizeTiledLayer:(bool)arg1;
- (void)setEdgeAntialiasingEnabled:(bool)arg1;
- (void)setGainMapImage:(struct CGImage { }*)arg1;
- (void)setGainMapValue:(float)arg1;
- (void)setImageInteraction:(id)arg1;
- (void)setImageLayerModulator:(id)arg1;
- (void)setImageModulationManager:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setNeedsUpdateTargetSize:(bool)arg1;
- (void)setNeedsUpdateVisualIntelligenceOverlayContentsRect:(bool)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setPreloadedImage:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)setPreserveImageDuringReload:(bool)arg1;
- (void)setRequiresFullQualityImage:(bool)arg1;
- (void)setShouldUseFullsizeImageData:(bool)arg1;
- (void)setVisualImageInteractionEnabled:(bool)arg1;
- (bool)shouldAvoidInPlaceSnapshottedFadeOut;
- (bool)shouldUseFullsizeImageData;
- (bool)shouldUsePenultimateVersionForNextImageUpdate;
- (struct CGSize { double x1; double x2; })targetSizeForProposedTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateModulator;
- (void)updateModulatorInputs;
- (void)updateMutableImageLayerModulator:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (bool)visualImageInteractionEnabled;
- (bool)vkViewExistsAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)vkVisualSearchExistsAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)wantsVisibleRectChanges;

// Image: /System/Library/AccessibilityBundles/PhotosUIFramework.axbundle/PhotosUIFramework

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axApplyAssetToView;
- (void)_axApplyCustomAction:(id)arg1;
- (bool)_axConformsToFullScreenTileControllerDelegate;
- (id)_axGetFaces;
- (id)_axImageView;
- (id)_axMainImageView;
- (void)_setAXFaces:(id)arg1;
- (void)assetDidChange;
- (void)dealloc;

@end
