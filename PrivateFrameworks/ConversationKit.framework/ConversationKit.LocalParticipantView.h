/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.LocalParticipantView : UIView {
    void blurEnabled;
    void controlsHiddenByViewModel;
    void controlsView;
    void delegate;
    void dragEnabled;
    void isInRoster;
    void participantView;
    void prefersControlsHidden;
}

@property (nonatomic, readonly) _TtC15ConversationKit28LocalParticipantControlsView *controlsView;

// Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit

- (void).cxx_destruct;
- (id)controlsView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

// Image: /System/Library/AccessibilityBundles/ConversationKit.axbundle/ConversationKit

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityIsExpanded;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_axConstraintsController;
- (id)_axGetParticipantView;
- (bool)_axIsShowingVideo;
- (id)_axParticipantView;
- (void)_axSetParticipantView:(id)arg1;
- (bool)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (bool)accessibilityPerformEscape;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
