/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosUI.UnifiedOverlayView : VUIBaseView <VUIImageSampling, VUIScorecardViewDelegate, VUISportsScoreboardManagerDelegate, VUITextBadgeViewDelegate> {
    void appImageView;
    void backgroundImageForMaterial;
    void backgroundImageHasChanged;
    void badgeView;
    void cornerRadius;
    void endingTimestamp;
    void forcesProtectionOnFocus;
    void gradientSizeHeightMultiplier;
    void isFilteredUpNext;
    void isOperationCancelledObserver;
    void isOperationFinishedObserver;
    void logoImageView;
    void logoSize;
    void originalScoreboardViewModel;
    void overlayLayout;
    void overlayUpdater;
    void pendingOperation;
    void progressView;
    void protectionView;
    void scoreboardViewModel;
    void scorecardView;
    void scorecardViewBackgroundImage;
    void startingTimestamp;
    void subtitleLabel;
    void textBadge;
    void textBadgeHasMaterial;
    void textLabel;
    void unfocusedProtectionView;
    void wantsUnfocusedCornerBlur;
}

@property (nonatomic, readonly) VUIImageView *accessibilityAppImageView;
@property (nonatomic, readonly) VUIBaseView *accessibilityBadgeView;
@property (nonatomic, readonly) VUIImageView *accessibilityLogoImageView;
@property (nonatomic, readonly) _TtC8VideosUI21StyledProgressBarView *accessibilityProgressView;
@property (nonatomic, readonly) VUIScorecardView *accessibilityScorecardView;
@property (nonatomic, readonly) VUILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) VUITextBadgeView *accessibilityTextBadge;
@property (nonatomic, readonly) VUILabel *accessibilityTextLabel;
@property (nonatomic, retain) VUILabel *textLabel;
@property (nonatomic, readonly) bool vuiDebugUI;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (void).cxx_destruct;
- (id)accessibilityAppImageView;
- (id)accessibilityBadgeView;
- (id)accessibilityLogoImageView;
- (id)accessibilityProgressView;
- (id)accessibilityScorecardView;
- (id)accessibilitySubtitleLabel;
- (id)accessibilityTextBadge;
- (id)accessibilityTextLabel;
- (int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;
- (id)backgroundImageForScorecardViewMaterial:(id)arg1;
- (void)dealloc;
- (id)getJSContextDictionary;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)maximumWidthForScorecardView:(id)arg1;
- (long long)numberOfRowsInScorecardView:(id)arg1;
- (long long)numberOfScoreValuesForScorecardView:(id)arg1 inRow:(long long)arg2;
- (void)sampleWithImage:(id)arg1;
- (id)scoreValue:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setTextLabel:(id)arg1;
- (long long)styleForScorecardView:(id)arg1;
- (void)textBadgeViewContentsUpdated:(id)arg1;
- (id)textLabel;
- (void)updateScoreboard:(id)arg1;
- (bool)vuiDebugUI;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)vui_willMoveToWindow:(id)arg1;

// Image: /System/Library/AccessibilityBundles/VideosUIFramework.axbundle/VideosUIFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;

@end