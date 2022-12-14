/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMentionSuggestionCell : UICollectionViewCell {
    CKAvatarView * _avatarView;
    CKLabel * _handleLabel;
    UIView * _hoverView;
    CKEntity * _suggestedEntity;
}

@property (nonatomic, retain) CKAvatarView *avatarView;
@property (nonatomic, retain) CKLabel *handleLabel;
@property (nonatomic, retain) UIView *hoverView;
@property (nonatomic, retain) CKEntity *suggestedEntity;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)avatarView;
- (void)didHoverOverCell:(id)arg1;
- (id)handleLabel;
- (id)hoverView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAvatarView:(id)arg1;
- (void)setHandleLabel:(id)arg1;
- (void)setHoverView:(id)arg1;
- (void)setSuggestedEntity:(id)arg1;
- (id)suggestedEntity;

// Image: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityShouldIncludeRowRangeInElementDescription;
- (id)accessibilityLabel;
- (bool)isAccessibilityElement;

@end
