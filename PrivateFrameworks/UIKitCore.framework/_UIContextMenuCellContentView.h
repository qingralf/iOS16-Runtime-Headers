/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuCellContentView : UIView {
    UIButton * _accessoryButton;
    UIImageView * _decorationImageView;
    UILabel * _emphasizedTitleLabel;
    UIImageView * _emphasizediconImageView;
    UIImageView * _iconImageView;
    bool  _isEmphasized;
    UIStackView * _labelStackView;
    <_UIContextMenuCellLayout> * _layout;
    bool  _needsConstraintRebuild;
    NSLayoutConstraint * _nonSymbolImageHeight;
    NSLayoutConstraint * _nonSymbolImageWidth;
    unsigned long long  _options;
    unsigned long long  _overrideNumberOfTitleLines;
    UISPasteVariant * _pasteVariant;
    unsigned long long  _preferredLineLimit;
    _UISlotView * _securePasteButtonSlotView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIButton *accessoryButton;
@property (nonatomic, retain) UIImageView *decorationImageView;
@property (nonatomic, readonly) UIView *decorationView;
@property (nonatomic, retain) UILabel *emphasizedTitleLabel;
@property (nonatomic, retain) UIImageView *emphasizediconImageView;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, readonly) UIView *iconView;
@property (nonatomic) bool isEmphasized;
@property (nonatomic, readonly) UIStackView *labelStackView;
@property (nonatomic, readonly) <_UIContextMenuCellLayout> *layout;
@property (nonatomic, readonly) unsigned long long measuredNumberOfTitleLines;
@property (nonatomic) bool needsConstraintRebuild;
@property (nonatomic, retain) NSLayoutConstraint *nonSymbolImageHeight;
@property (nonatomic, retain) NSLayoutConstraint *nonSymbolImageWidth;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long overrideNumberOfTitleLines;
@property (nonatomic, retain) UISPasteVariant *pasteVariant;
@property (nonatomic) unsigned long long preferredLineLimit;
@property (nonatomic) _UISlotView *securePasteButtonSlotView;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_childIndicatorImage;
- (id)_contentImageViewForImage:(id)arg1;
- (void)_createLabelStackViewIfNeeded;
- (id)_decorationSymbolImageConfiguration;
- (bool)_hasTrailingAccessory;
- (void)_hideContents;
- (id)_iconSymbolConfigurationForCurrentTraitsUsingBoldFont:(bool)arg1;
- (void)_installSubtitleLabelIfNeeded;
- (void)_installTitleLabelIfNeeded;
- (struct CGSize { double x1; double x2; })_maxImageSize;
- (id)_mixedSelectionImage;
- (id)_primaryContentColorForCurrentState;
- (id)_primaryTitleLabel;
- (unsigned int)_secureName;
- (id)_selectionImage;
- (void)_setDecorationImage:(id)arg1;
- (void)_setNeedsConstraintRebuild;
- (id)_subtitleLabelFilterForCurrentTraits;
- (id)_subtitleTextColor;
- (void)_updateAppearanceForStateChange;
- (void)_updateAttachedConstraintsForViewHierarchyChange;
- (void)_updateForOptionsChangeFromPreviousOptions:(unsigned long long)arg1;
- (void)_updateSecureView;
- (void)_updateSubtitleLabelNumberOfLines;
- (void)_updateTitleLabelNumberOfLines;
- (id)accessoryButton;
- (id)decorationImageView;
- (id)decorationView;
- (id)emphasizedTitleLabel;
- (id)emphasizediconImageView;
- (id)iconImageView;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEmphasized;
- (id)labelStackView;
- (id)layout;
- (void)layoutSubviews;
- (unsigned long long)measuredNumberOfTitleLines;
- (bool)needsConstraintRebuild;
- (id)nonSymbolImageHeight;
- (id)nonSymbolImageWidth;
- (unsigned long long)options;
- (unsigned long long)overrideNumberOfTitleLines;
- (id)pasteVariant;
- (unsigned long long)preferredLineLimit;
- (void)prepareForReuse;
- (id)securePasteButtonSlotView;
- (void)setAccessoryAction:(id)arg1;
- (void)setAccessoryButton:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setDecorationImageView:(id)arg1;
- (void)setEmphasizedTitleLabel:(id)arg1;
- (void)setEmphasizediconImageView:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsEmphasized:(bool)arg1;
- (void)setLayoutClass:(Class)arg1;
- (void)setNeedsConstraintRebuild:(bool)arg1;
- (void)setNonSymbolImageHeight:(id)arg1;
- (void)setNonSymbolImageWidth:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setOverrideNumberOfTitleLines:(unsigned long long)arg1;
- (void)setPasteVariant:(id)arg1;
- (void)setPreferredLineLimit:(unsigned long long)arg1;
- (void)setSecurePasteButtonSlotView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (long long)_accessibilityExpandedStatus;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

@end
