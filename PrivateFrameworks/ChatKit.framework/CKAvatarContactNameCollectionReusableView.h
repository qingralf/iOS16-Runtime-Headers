/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarContactNameCollectionReusableView : UICollectionReusableView {
    bool  _shouldDisplayTitle;
    long long  _style;
    UILabel * _titleLabel;
}

@property (nonatomic) bool shouldDisplayTitle;
@property (nonatomic) long long style;
@property (nonatomic, retain) UILabel *titleLabel;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (void).cxx_destruct;
- (void)configureWithEntity:(id)arg1;
- (void)layoutSubviews;
- (void)setShouldDisplayTitle:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)shouldDisplayTitle;
- (long long)style;
- (id)titleLabel;

// Image: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;

@end
