/* Generated by RuntimeBrowser.
 */

@protocol PXStoryViewLayoutSpec

@required

- (double)bottomLegibilityGradientHeight;
- (long long)browseChromeSubtitleNumberOfLines;
- (long long)browseChromeTitleNumberOfLines;
- (UIColor *)browseGridBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })browseGridLayoutMargins;
- (double)bufferingIndicatorCornerRadius;
- (bool)bufferingIndicatorWantsBackground;
- (bool)canShowCloseButton;
- (bool)canShowFullscreenToggleButton;
- (bool)canShowMuteToggleButton;
- (double)canShowRelatedNavigationButton;
- (struct CGSize { double x1; double x2; })chromeButtonPadding;
- (struct CGSize { double x1; double x2; })chromeButtonSize;
- (PXStoryChromeButtonSpec *)chromeButtonSpec;
- (NSAttributedString *)chromeSongAttributedStringWithTitle:(NSString *)arg1 artist:(NSString *)arg2;
- (NSDictionary *)chromeSubtitleAttributes;
- (NSDictionary *)chromeTitleAttributes;
- (double)distanceFromBottomChromeTextToGrid;
- (double)distanceFromLateralEdgesToTopButtonCenter;
- (double)distanceFromTopEdgeToTopButtonCenter;
- (double)edgeHighlightAlpha;
- (unsigned long long)fullsizePlayerDefaultChromeItems;
- (long long)generalChromeSubtitleNumberOfLines;
- (long long)generalChromeTitleNumberOfLines;
- (unsigned long long)hash;
- (double)infoPanelAnimationDistance;
- (double)infoPanelAssetAspectRatio;
- (double)infoPanelAssetToMetadataLabel;
- (double)infoPanelAssetToSymbolCenter;
- (double)infoPanelButtonHeight;
- (struct CGSize { double x1; double x2; })infoPanelButtonOffset;
- (double)infoPanelDistanceBetweenAssetAndTitleLabel;
- (double)infoPanelFooterLabelBaselineFromBottom;
- (double)infoPanelHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })infoPanelMargins;
- (double)infoPanelMetadataToMetadataBaselines;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })infoPanelPadding;
- (double)infoPanelTitleLabelBaselineFromTop;
- (double)infoPanelTitleToMetadataBaselines;
- (double)interChromeButtonSpacing;
- (double)interPlaybackEndButtonSpacing;
- (PXExtendedImageConfiguration *)legibilityGradientImageConfiguration;
- (double)maximumWidthForRelatedTitleAndSubtitle;
- (double)minimumWidthRequiredForChromeText;
- (bool)onlyShowReplayEndButtonAtTopOfTitle;
- (PXStoryPlayButtonSpec *)playButtonSpec;
- (struct CGSize { double x1; double x2; })playbackEndButtonPadding;
- (struct CGSize { double x1; double x2; })playbackEndButtonSize;
- (PXStoryChromeButtonSpec *)playbackEndButtonSpec;
- (double)playbackEndButtonSystemImagePointSize;
- (double)playbackEndButtonSystemImageWeight;
- (long long)playbackEndChromeSubtitleNumberOfLines;
- (long long)playbackEndChromeTitleNumberOfLines;
- (NSDictionary *)playbackEndSubtitleAttributes;
- (NSDictionary *)playbackEndTitleAttributes;
- (UIColor *)playerBackgroundColor;
- (double)predictedBrowseChromeTextHeight;
- (NSAttributedString *)relatedAttributedTitle;
- (PXStoryRelatedLayoutMetrics *)relatedLayoutMetrics;
- (double)relatedNavigationButtonFadeDuration;
- (struct CGSize { double x1; double x2; })relatedNavigationButtonSize;
- (double)relatedNavigationButtonSystemImagePointSize;
- (PXStoryChromeButtonSpec *)relatedNavigationChromeButtonSpec;
- (struct CGSize { double x1; double x2; })relatedTitleSize;
- (NSString *)replayButtonImageName;
- (PXExtendedImageConfiguration *)rightEdgeHighlightImageConfiguration;
- (struct CGSize { double x1; double x2; })rightEdgeHighlightImageSize;
- (unsigned short)rightEdgeHighlightImageVersion;
- (double)scrubberAssetCornerRadius;
- (double)scrubberCurrentAssetPadding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrubberFadeAreaInsets;
- (double)scrubberHorizontalLayoutMargin;
- (double)scrubberRegularAssetPadding;
- (struct CGSize { double x1; double x2; })scrubberRegularAssetSize;
- (bool)shouldHideChromeItemsWhenRelatedOverlayIsScrolledIntoView;
- (bool)shouldHorizontallyCenterPlayButton;
- (bool)shouldHorizontallyCenterPlaybackEndButtons;
- (bool)shouldUseAssetCollectionForTitleAndSubtitle;
- (bool)shouldUseUnifiedButtonLayout;
- (bool)shouldVerticallyCenterPlayButton;
- (double)spacingBetweenPlaybackEndButtonAndTitles;
- (double)spacingBetweenPlaybackEndTitleAndSubtitle;
- (double)spacingBetweenRelatedNavigationButtonAndRelated;
- (double)spacingBetweenRelatedTitleAndMainRelated;
- (double)spacingBetweenRelatedTitleAndUpNextCountDown;
- (bool)styleSwitcherCanShowEditButtons;
- (long long)styleSwitcherChromeArrangement;
- (UIImage *)styleSwitcherColorGradeNameGlyphImage;
- (NSDictionary *)styleSwitcherDetailsLabelAttributesA;
- (NSDictionary *)styleSwitcherDetailsLabelAttributesAAccessory;
- (NSDictionary *)styleSwitcherDetailsLabelAttributesB;
- (NSDictionary *)styleSwitcherDetailsLabelAttributesC;
- (double)styleSwitcherDetailsTitleAccessoryPadding;
- (double)styleSwitcherDistanceBetweenAlbumArtAndLabels;
- (double)styleSwitcherDistanceBetweenEditButtons;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tapNavigationAreaInsets;
- (double)tapNavigationAreaWidth;
- (double)topLegibilityGradientHeight;
- (long long)upNextAnimationStyle;
- (double)upNextCountDownAppearDelay;
- (NSDictionary *)upNextCountDownAttributes;
- (PXExtendedImageConfiguration *)upNextCountDownDecorationImageConfiguration;
- (double)upNextCountDownFadeOutDuration;
- (NSNumberFormatter *)upNextCountDownFormatter;
- (double)upNextCountDownInitialVisibleValue;
- (struct CGSize { double x1; double x2; })upNextCountDownSize;
- (double)upNextCountDownVerticalOffset;
- (long long)upNextCountdownPlacement;
- (unsigned long long)upNextTargetMemoryCount;

@end
