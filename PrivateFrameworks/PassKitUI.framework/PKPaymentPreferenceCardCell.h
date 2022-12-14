/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPreferenceCardCell : PKPaymentPreferenceCell {
    NSArray * _accessoryStackConstraints;
    UIView * _accessoryView;
    long long  _accessoryViewType;
    UISwitch * _actionSwitch;
    UIActivityIndicatorView * _activityIndicator;
    bool  _activityIndicatorActive;
    UIColor * _activityIndicatorColor;
    NSString * _availabilityString;
    UIImageView * _cardArtView;
    UILabel * _censoredPANLabel;
    <PKPaymentPreferenceCardCellAccessoryViewDelegate> * _delegate;
    bool  _dimCardArt;
    UIColor * _disabledMainLabelColor;
    UIColor * _disabledSubTextLabelColor;
    UILabel * _displayLabel;
    bool  _editing;
    bool  _isRightToLeft;
    NSLayoutConstraint * _labelStackTrailingAnchorToCell;
    UIStackView * _labelStackView;
    UIColor * _mainLabelColor;
    PKPaymentPass * _pass;
    PKPassSnapshotter * _passSnapshotter;
    bool  _showBillingAddress;
    unsigned int  _snapshotCounter;
    UIColor * _subTextLabelColor;
    UIColor * _subTextLabelColorOverride;
    NSString * _subTextOverrideString;
    PKTransitBalanceModel * _transitBalanceModel;
}

@property (nonatomic) long long accessoryViewType;
@property (nonatomic, readonly) UISwitch *actionSwitch;
@property (getter=isActivityIndicatorActive, nonatomic) bool activityIndicatorActive;
@property (nonatomic, retain) UIColor *activityIndicatorColor;
@property (nonatomic, copy) NSString *availabilityString;
@property (nonatomic, readonly) UIImageView *cardArtView;
@property (nonatomic, readonly) UILabel *censoredPANLabel;
@property (nonatomic) <PKPaymentPreferenceCardCellAccessoryViewDelegate> *delegate;
@property (nonatomic) bool dimCardArt;
@property (nonatomic, retain) UIColor *disabledMainLabelColor;
@property (nonatomic, retain) UIColor *disabledSubTextLabelColor;
@property (nonatomic, readonly) UILabel *displayLabel;
@property (nonatomic, retain) UIColor *mainLabelColor;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKPassSnapshotter *passSnapshotter;
@property (nonatomic) bool showBillingAddress;
@property (nonatomic, retain) UIColor *subTextLabelColor;
@property (nonatomic, copy) NSString *subTextOverrideString;
@property (nonatomic, retain) PKTransitBalanceModel *transitBalanceModel;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (double)textOffset;

- (void).cxx_destruct;
- (void)_performSwitchToggle:(id)arg1;
- (void)_setupConstraints;
- (void)_updateAccessoryView;
- (void)_updateCellContent;
- (void)_updateCensoredPANLabel;
- (void)_updateLabelTextColors;
- (long long)accessoryViewType;
- (id)actionSwitch;
- (id)activityIndicatorColor;
- (id)availabilityString;
- (id)cardArtView;
- (id)censoredPANLabel;
- (id)delegate;
- (bool)dimCardArt;
- (id)disabledMainLabelColor;
- (id)disabledSubTextLabelColor;
- (id)displayLabel;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isActivityIndicatorActive;
- (id)mainLabelColor;
- (id)pass;
- (id)passSnapshotter;
- (void)pk_applyAppearance:(id)arg1;
- (void)prepareForReuse;
- (void)setAccessoryViewType:(long long)arg1;
- (void)setActivityIndicatorActive:(bool)arg1;
- (void)setActivityIndicatorColor:(id)arg1;
- (void)setAvailabilityString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimCardArt:(bool)arg1;
- (void)setDisabledMainLabelColor:(id)arg1;
- (void)setDisabledSubTextLabelColor:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHasError:(bool)arg1;
- (void)setMainLabelColor:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setPassSnapshotter:(id)arg1;
- (void)setShowBillingAddress:(bool)arg1;
- (void)setSubTextLabelColor:(id)arg1;
- (void)setSubTextOverrideString:(id)arg1;
- (void)setTransitBalanceModel:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (bool)showBillingAddress;
- (id)subTextLabelColor;
- (id)subTextOverrideString;
- (id)transitBalanceModel;

// Image: /System/Library/AccessibilityBundles/PassKitUI.axbundle/PassKitUI

+ (Class)safeCategoryBaseClass;

- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
