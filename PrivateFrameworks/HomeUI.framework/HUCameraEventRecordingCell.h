/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraEventRecordingCell : UICollectionViewCell <HFCameraImageObserver> {
    CALayer * _badgeLayer;
    UIView * _dayBoundaryView;
    unsigned long long  _displayMode;
    HURecordingEventCellFamiliarFacesView * _familiarFacesView;
    bool  _hasFamiliarFaces;
    bool  _portraitMode;
    UIView * _posterFramesContainerView;
    HMCameraClip * _recordingEvent;
    HUClipScrubberTimeController * _timeController;
}

@property (nonatomic, retain) CALayer *badgeLayer;
@property (nonatomic, retain) UIView *dayBoundaryView;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic, retain) HURecordingEventCellFamiliarFacesView *familiarFacesView;
@property (nonatomic) bool hasFamiliarFaces;
@property (nonatomic) bool portraitMode;
@property (nonatomic, retain) UIView *posterFramesContainerView;
@property (nonatomic) HMCameraClip *recordingEvent;
@property (nonatomic) HUClipScrubberTimeController *timeController;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)backgroundColor;

- (void).cxx_destruct;
- (id)_badgeImageForSignificantEventReasons:(id)arg1;
- (void)_updateBadgeLayerWithImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)addDayBoundaryIfNeeded;
- (void)addPosterFrameViews;
- (id)badgeLayer;
- (id)dayBoundaryView;
- (unsigned long long)displayMode;
- (void)displayReachabilityErrorUI;
- (void)drawEventMarkers;
- (id)familiarFacesView;
- (bool)hasFamiliarFaces;
- (void)hideFamiliarFaces;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)numberOfFramesNeeded;
- (bool)portraitMode;
- (id)posterFramesContainerView;
- (void)prepareForReuse;
- (void)preparePosterFrameViewsForReuse;
- (id)recordingEvent;
- (void)setBadgeLayer:(id)arg1;
- (void)setDayBoundaryView:(id)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setFamiliarFacesView:(id)arg1;
- (void)setHasFamiliarFaces:(bool)arg1;
- (void)setPortraitMode:(bool)arg1;
- (void)setPosterFramesContainerView:(id)arg1;
- (void)setRecordingEvent:(id)arg1;
- (void)setTimeController:(id)arg1;
- (void)showFamiliarFacesWithMaxWidth:(double)arg1;
- (id)timeController;
- (void)updateBadgeLayerWithEvents:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)updateFamiliarFaces;
- (void)updateWithCameraClipEvent:(id)arg1 mode:(unsigned long long)arg2 portraitMode:(bool)arg3 timeController:(id)arg4;

// Image: /System/Library/AccessibilityBundles/HomeUI.axbundle/HomeUI

+ (Class)safeCategoryBaseClass;

- (id)_axStringForSignificantEvents;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end