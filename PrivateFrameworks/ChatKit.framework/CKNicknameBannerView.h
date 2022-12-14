/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNicknameBannerView : CKUpdateBannerView <UITextViewDelegate> {
    <CKNicknameBannerViewDelegate> * _delegate;
    NSArray * _nicknameUpdates;
    UIButton * _updateButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKNicknameBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *nicknameUpdates;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIButton *updateButton;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (void).cxx_destruct;
- (bool)_allowUpdateForStyle:(unsigned long long)arg1;
- (id)_avatarContactForUpdate:(id)arg1;
- (void)_updateActionButton;
- (void)_updateAvatarView;
- (void)_updateCatalystActionButton;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (id)actionButtonString;
- (id)attributedSubtitleTextBasedOnBannerStyle:(unsigned long long)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (id)cancelGlyph;
- (id)catalystAttributedSubtitleTextBasedOnBannerStyle:(unsigned long long)arg1;
- (id)contactStore;
- (id)createContactForOutgoingShare;
- (id)createContactFromNickname:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(unsigned long long)arg2 updates:(id)arg3 useNamedTitles:(bool)arg4 inUpdatesMode:(bool)arg5;
- (bool)isLTR;
- (void)layoutSubviews;
- (double)maxLabelWidthForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)nicknameController;
- (id)nicknameUpdates;
- (void)setDelegate:(id)arg1;
- (void)setNicknameUpdates:(id)arg1;
- (void)setUpdateButton:(id)arg1;
- (void)setupViews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (double)titleLabelAlignmentX;
- (id)updateButton;
- (void)updateButtonTapped:(id)arg1;

// Image: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (bool)isAccessibilityElement;

@end
