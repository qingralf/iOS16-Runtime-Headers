/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.ParticipantInfoView : UIView {
    void audioMuteButton;
    void customCornerRadius;
    void delegate;
    void expandButton;
    void gradientView;
    void isExpanded;
    void isMomentsAvailable;
    void isMuted;
    void localParticipant;
    void nameLabel;
    void recordingLocalVideo;
    void shutterButton;
    void toggleVideoButton;
    void videoDisabled;
}

@property (nonatomic) bool isMomentsAvailable;
@property (nonatomic, readonly) _TtC15ConversationKit33ParticipantViewLabelContainerView *nameLabel;

// Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit

- (void).cxx_destruct;
- (void)buttonTouchCancelledWithSender:(id)arg1;
- (void)buttonTouchDownWithSender:(id)arg1;
- (void)didTapAudioMuteButton;
- (void)didTapExpandButton;
- (void)didTapShutterButton;
- (void)didTapToggleVideoButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMomentsAvailable;
- (void)layoutSubviews;
- (id)nameLabel;
- (void)setIsMomentsAvailable:(bool)arg1;
- (void)toggleAudioTouchUpWithSender:(id)arg1;
- (void)toggleVideoTouchUpWithSender:(id)arg1;

// Image: /System/Library/AccessibilityBundles/ConversationKit.axbundle/ConversationKit

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;

@end