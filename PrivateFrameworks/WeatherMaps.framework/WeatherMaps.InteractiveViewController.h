/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherMaps.framework/WeatherMaps
 */

@interface WeatherMaps.InteractiveViewController : UIViewController <MKMapViewDelegate, WeatherMaps.WeatherMKMapViewAccessibilityDelegate> {
    void $__lazy_storage_$_backgroundEffectManagerBlur;
    void $__lazy_storage_$_backgroundEffectManagerUltraThin;
    void $__lazy_storage_$_mapView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activeOverlay;
    void annotatedLocations;
    void annotationManager;
    void backdropLayerBlur;
    void backdropLayerUltraThin;
    void backgroundEffectView;
    void cameraFocusFactory;
    void configuration;
    void controlsAdded;
    void controlsView;
    void debugLabel;
    void delegate;
    void doNotForwardSelectedAnnotationToDelegate;
    void geocodeManager;
    void interaction;
    void isUserInteractionEnabled;
    void lastHoverLocation;
    void locationMetadataManager;
    void mapLocationAccessibilityModelManager;
    void overlayManager;
    void overlayProgressBar;
    void overlayProgressReporter;
    void presentingOverlayKind;
    void previousParent;
    void progressBarHeight;
    void scrubberObserver;
    void scrubberOverlayViewController;
    void scrubberStore;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  selectedLocation;
    void selectedLocationZoomLevel;
    void verticalSpacingAttributionToScrubber;
    void visibleMapRect;
}

@property (nonatomic, readonly) NSArray *keyCommands;

- (void).cxx_destruct;
- (id)accessibilityModelOverlayKeyForMapView:(id)arg1;
- (bool)accessibilityPerformEscape;
- (void)didHoverMap:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didTapMap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyCommands;
- (void)mapGestureDidChange;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapView:(id)arg1 requestedAccessibilityModelForLocation:(id)arg2 completion:(id /* block */)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (void)selectAirQualityOverlay;
- (void)selectPrecipitationOverlay;
- (void)selectTemperatureOverlay;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)zoomIn;
- (void)zoomOut;

@end
