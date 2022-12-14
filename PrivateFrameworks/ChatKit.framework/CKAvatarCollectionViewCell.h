/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarCollectionViewCell : UICollectionViewCell {
    CKAvatarView * _avatarView;
}

@property (nonatomic, retain) CKAvatarView *avatarView;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)avatarView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAvatarView:(id)arg1;

// Image: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework

+ (Class)safeCategoryBaseClass;

- (id)_axCKEntity;
- (unsigned long long)_axCollectionViewLayoutMode;
- (id)_axLocalizedFormatStringForAcknowledgmentType:(long long)arg1;
- (void)_axSetCKEntity:(id)arg1;
- (id)_axTapbackContacts;
- (id)_axTapbackLabelWithTally:(id)arg1;
- (long long)_axTapbackType;
- (void)_setAXCKEntity:(id)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)configureWithEntity:(id)arg1;
- (bool)isAccessibilityElement;

@end
