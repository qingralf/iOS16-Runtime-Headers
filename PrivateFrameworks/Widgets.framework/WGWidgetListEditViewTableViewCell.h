/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetListEditViewTableViewCell : UITableViewCell {
    UIImageView * _dotImageView;
    UIButton * _insertWidgetAccessoryButton;
    bool  _showsDot;
    bool  _widgetEnabled;
}

@property (nonatomic, readonly) UIButton *insertWidgetAccessoryButton;
@property (nonatomic) bool showsDot;
@property (getter=isWidgetEnabled, nonatomic) bool widgetEnabled;

// Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)insertWidgetAccessoryButton;
- (bool)isWidgetEnabled;
- (void)layoutSubviews;
- (void)setShowsDot:(bool)arg1;
- (void)setWidgetEnabled:(bool)arg1;
- (bool)showsDot;

// Image: /System/Library/AccessibilityBundles/Widgets.axbundle/Widgets

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilitySupportsActivateAction;
- (bool)_axIsAddCell;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

@end