/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore
 */

@interface VKCVisualSearchResultItemView : VKPlatformView <CAAnimationDelegate, UIPointerInteractionDelegate> {
    bool  _automaticallyShowVisualSearchResults;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedDotSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentImageRectForLayerContents;
    NSString * _currentRVItemID;
    <VKCVisualSearchResultItemViewDelegate> * _delegate;
    bool  _didProcessResult;
    CALayer * _iconInLookupButtonLayer;
    long long  _interfaceOrientation;
    bool  _isShowingVisualResultsPane;
    VKCLookupButton * _lookupButton;
    bool  _observingInteractionDidFinish;
    CALayer * _pinLayer;
    bool  _pulsing;
    CALayer * _pulsingLayer;
    bool  _shouldShowDots;
    long long  _status;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIImage * _tintedImageForButton;
    NSData * _userReportPayload;
    VKCVisualSearchResultItem * _visualSearchResultItem;
}

@property (nonatomic) bool automaticallyShowVisualSearchResults;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedDotSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentImageRectForLayerContents;
@property (nonatomic, retain) NSString *currentRVItemID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKCVisualSearchResultItemViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didProcessResult;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CALayer *iconInLookupButtonLayer;
@property (nonatomic, readonly) UIImage *imageForButton;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) bool isShowingVisualResultsPane;
@property (nonatomic, retain) VKCLookupButton *lookupButton;
@property (nonatomic) bool observingInteractionDidFinish;
@property (nonatomic, retain) CALayer *pinLayer;
@property (nonatomic) bool pulsing;
@property (nonatomic, retain) CALayer *pulsingLayer;
@property (nonatomic) bool shouldShowDots;
@property (nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) UIImage *tintedImageForButton;
@property (nonatomic, retain) NSData *userReportPayload;
@property (nonatomic, retain) VKCVisualSearchResultItem *visualSearchResultItem;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (void).cxx_destruct;
- (void)_animatePin:(bool)arg1;
- (id)_defaultSymbolName;
- (void)_didDismissVisualResultsPane:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_initialDotAnimationTransform;
- (struct CGPoint { double x1; double x2; })_offsetForPinBubbleFrameWithDirection:(long long)arg1 pinBubbleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)_pinArrowDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pinButtonRect;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_pinEndTransform;
- (struct CGSize { double x1; double x2; })_pinSizeForViewScale;
- (id)_queryForProcessingResult;
- (id)_queryString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForViewSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_screenZoomScale;
- (id)_symbolNameForItem;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transformForButtonScale;
- (void)_updateLayout;
- (void)animateToVisualResultsPane:(bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (bool)automaticallyShowVisualSearchResults;
- (void)beginAnimatingDotAfterDelay:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsFromVisualSearchResult;
- (struct CGSize { double x1; double x2; })cachedDotSize;
- (id)circlePathForPinBubbleWithDirection:(long long)arg1 withRadius:(double)arg2;
- (bool)containsVisualSearchItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)contentSizeScaleFactor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentImageRectForLayerContents;
- (id)currentRVItemID;
- (void)dealloc;
- (id)delegate;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)didDismissViewController;
- (void)didDismissVisualResultsPane;
- (void)didFinishAnimatingDots;
- (bool)didProcessResult;
- (void)didTap:(id)arg1;
- (void)hideDots;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)iconInLookupButtonLayer;
- (id)imageForButton;
- (id)initWithVisualSearchResultItem:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isShowingVisualResultsPane;
- (void)layoutSubviews;
- (id)lookupButton;
- (double)lookupButtonSize;
- (bool)observingInteractionDidFinish;
- (void)performLookup;
- (id)pinLayer;
- (struct CGPoint { double x1; double x2; })pointForVisualSearchIcon;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (bool)pulsing;
- (id)pulsingLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForIndicatorDot;
- (void)removePulsing;
- (void)setAutomaticallyShowVisualSearchResults:(bool)arg1;
- (void)setCachedDotSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCurrentImageRectForLayerContents:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentRVItemID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidProcessResult:(bool)arg1;
- (void)setIconInLookupButtonLayer:(id)arg1;
- (void)setImageContentsInLayer:(id)arg1 withMaterialLayer:(id)arg2 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setImageContentsInLayer:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setIsShowingVisualResultsPane:(bool)arg1;
- (void)setLookupButton:(id)arg1;
- (void)setObservingInteractionDidFinish:(bool)arg1;
- (void)setPinLayer:(id)arg1;
- (void)setPulsing:(bool)arg1;
- (void)setPulsingLayer:(id)arg1;
- (void)setShouldShowDots:(bool)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setUserReportPayload:(id)arg1;
- (void)setVisualSearchResultItem:(id)arg1;
- (bool)shouldShowDots;
- (void)showLookupUIPaneForResultItem;
- (void)showPinForTappedDot;
- (void)showVisualResultsPane;
- (long long)status;
- (id)tapGestureRecognizer;
- (id)tintedImageForButton;
- (void)traitCollectionDidChange:(id)arg1;
- (id)trianglePathForPinBubbleWithDirection:(long long)arg1 withRadius:(double)arg2;
- (void)updateIndicatorDotForState;
- (void)updatePinLayerFrame;
- (void)updatePulsingLayer;
- (id)userReportPayload;
- (id)visualSearchResultItem;

// Image: /System/Library/AccessibilityBundles/VisionKitCore.axbundle/VisionKitCore

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityIncludeRoleDescription;
- (id)_accessibilityRoleDescription;
- (bool)_accessibilityShouldIncludeParentCustomActions;
- (bool)_accessibilityShouldIncludeParentCustomContent;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)axPositionInButtonsList;
- (bool)isAccessibilityElement;
- (void)setAxPositionInButtonsList:(id)arg1;

@end