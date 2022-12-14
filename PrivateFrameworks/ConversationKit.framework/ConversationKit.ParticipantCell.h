/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.ParticipantCell : UICollectionViewCell {
    void accessibilityDisplayName;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  participantIdentifier;
    void participantView;
}

@property (nonatomic, copy) NSString *accessibilityDisplayName;
@property (nonatomic, readonly) _TtC15ConversationKit15ParticipantView *participantView;

// Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit

- (void).cxx_destruct;
- (id)accessibilityDisplayName;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)participantView;
- (void)prepareForReuse;
- (void)setAccessibilityDisplayName:(id)arg1;

// Image: /System/Library/AccessibilityBundles/ConversationKit.axbundle/ConversationKit

+ (Class)safeCategoryBaseClass;

- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
