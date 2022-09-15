/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactHeaderEditView : CNContactHeaderView {
    bool  _allowsEditPhoto;
    UIButton * _editButton;
    NSLayoutConstraint * _editButtonHeightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxButtonSize;
}

@property (nonatomic) bool allowsEditPhoto;
@property (nonatomic, retain) UIButton *editButton;
@property (nonatomic, retain) NSLayoutConstraint *editButtonHeightConstraint;
@property (nonatomic) struct CGSize { double x1; double x2; } maxButtonSize;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)contactHeaderViewWithContact:(id)arg1 shouldAllowTakePhotoAction:(bool)arg2 monogramOnly:(bool)arg3 delegate:(id)arg4;
+ (id)contactHeaderViewWithContact:(id)arg1 shouldAllowTakePhotoAction:(bool)arg2 showingNavBar:(bool)arg3 monogramOnly:(bool)arg4 delegate:(id)arg5;
+ (id)makePhotoViewWithShouldAllowTakePhotoAction:(bool)arg1 shouldAllowImageDrops:(bool)arg2 monogramOnly:(bool)arg3;
+ (id)sizeAttributesShowingNavBar:(bool)arg1;

- (void).cxx_destruct;
- (bool)allowsEditPhoto;
- (void)calculateLabelSizesIfNeeded;
- (double)defaultMaxHeight;
- (void)didFinishUsing;
- (id)editButton;
- (id)editButtonHeightConstraint;
- (void)editButtonPressed;
- (bool)hasPhoto;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 shouldAllowTakePhotoAction:(bool)arg3 delegate:(id)arg4 showingNavBar:(bool)arg5 monogramOnly:(bool)arg6;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 shouldAllowTakePhotoAction:(bool)arg3 showingNavBar:(bool)arg4 monogramOnly:(bool)arg5 delegate:(id)arg6;
- (struct CGSize { double x1; double x2; })maxButtonSize;
- (double)maxHeight;
- (bool)photoIsModified;
- (void)presentAvatarPickerWithImageData:(id)arg1;
- (void)saveContactPhoto;
- (void)setAllowsEditPhoto:(bool)arg1;
- (void)setAllowsEditPhoto:(bool)arg1 preservingChanges:(bool)arg2;
- (void)setEditButton:(id)arg1;
- (void)setEditButtonHeightConstraint:(id)arg1;
- (void)setMaxButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;
- (void)updateContactWithEditedPropertyItem:(id)arg1;
- (void)updateEditButtonTitle;
- (void)updateFontSizes;
- (void)updateSizeDependentAttributes;
- (void)updateWithContacts:(id)arg1;

// Image: /System/Library/AccessibilityBundles/ContactsUI.axbundle/ContactsUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;

@end