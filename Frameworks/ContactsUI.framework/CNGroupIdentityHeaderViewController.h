/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNGroupIdentityHeaderViewController : UIViewController <CNGroupIdentityHeaderContainerViewwDelegate, CNGroupIdentityInlineActionsViewControllerDelegate> {
    UIButton * _actionButton;
    NSString * _actionButtonTitle;
    NSLayoutConstraint * _actionButtonZeroHeightConstraint;
    CNGroupIdentityInlineActionsViewConfiguration * _actionsViewConfiguration;
    CNGroupIdentityInlineActionsViewController * _actionsViewController;
    double  _actionsViewTopMargin;
    UIImage * _avatarBadgeImage;
    CNBadgingAvatarBadgeStyleSettings * _avatarBadgeStyleSettings;
    CNContactFormatter * _contactFormatter;
    UILabel * _customSubtitleLabel;
    <CNGroupIdentityHeaderViewControllerDelegate> * _delegate;
    CNGroupIdentity * _group;
    CNGroupAvatarViewController * _groupAvatarViewController;
    NSArray * _horizontalTitleLabelConstraints;
    bool  _isMarkedForSyndication;
    CNAvatarAccessoryView * _mediaContextBadge;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousSize;
    bool  _shouldShowContactBusy;
    UIStackView * _titleBadgeStackView;
    UILabel * _titleLabel;
    UIFont * _titleLabelFont;
    UIStackView * _titleLabelStackView;
    UIFont * _titleLabelWrappedFont;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, retain) NSString *actionButtonTitle;
@property (nonatomic, retain) NSLayoutConstraint *actionButtonZeroHeightConstraint;
@property (nonatomic, readonly) CNGroupIdentityInlineActionsViewConfiguration *actionsViewConfiguration;
@property (nonatomic, retain) CNGroupIdentityInlineActionsViewController *actionsViewController;
@property (nonatomic) double actionsViewTopMargin;
@property (nonatomic, retain) UIImage *avatarBadgeImage;
@property (nonatomic, retain) CNBadgingAvatarBadgeStyleSettings *avatarBadgeStyleSettings;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) UILabel *customSubtitleLabel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNGroupIdentityHeaderViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNGroupIdentity *group;
@property (nonatomic, retain) CNGroupAvatarViewController *groupAvatarViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *horizontalTitleLabelConstraints;
@property (nonatomic) bool isMarkedForSyndication;
@property (nonatomic, retain) CNAvatarAccessoryView *mediaContextBadge;
@property (nonatomic) struct CGSize { double x1; double x2; } previousSize;
@property (nonatomic) bool shouldShowContactBusy;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIStackView *titleBadgeStackView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIFont *titleLabelFont;
@property (nonatomic, retain) UIStackView *titleLabelStackView;
@property (nonatomic, retain) UIFont *titleLabelWrappedFont;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)actionButton;
- (id)actionButtonTitle;
- (id)actionButtonZeroHeightConstraint;
- (id)actionsViewConfiguration;
- (id)actionsViewController;
- (double)actionsViewTopMargin;
- (id)avatarBadgeImage;
- (id)avatarBadgeStyleSettings;
- (id)contactFormatter;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)customSubtitleLabel;
- (id)delegate;
- (void)didTapActionButton;
- (id)displayNameForGroupIdentity;
- (struct CGSize { double x1; double x2; })estimatedSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)group;
- (id)groupAvatarViewController;
- (void)groupIdentityDidUpdate:(id)arg1;
- (void)groupIdentityInlineActionsViewController:(id)arg1 didPerformActionOfType:(id)arg2 fromDisambiguation:(bool)arg3;
- (void)groupIdentityInlineActionsViewController:(id)arg1 willPresentDisambiguationUIForActionType:(id)arg2;
- (void)hideTitleLabel:(bool)arg1;
- (id)horizontalTitleLabelConstraints;
- (id)initWithGroupIdentity:(id)arg1;
- (id)initWithGroupIdentity:(id)arg1 actionsViewConfiguration:(id)arg2;
- (id)initWithGroupIdentity:(id)arg1 actionsViewConfiguration:(id)arg2 avatarViewControllerSettings:(id)arg3;
- (bool)isMarkedForSyndication;
- (void)loadView;
- (id)mediaContextBadge;
- (bool)preferredContentSizeCategoryIsXL;
- (struct CGSize { double x1; double x2; })previousSize;
- (void)setActionButton:(id)arg1;
- (void)setActionButtonTitle:(id)arg1;
- (void)setActionButtonZeroHeightConstraint:(id)arg1;
- (void)setActionsViewController:(id)arg1;
- (void)setActionsViewTopMargin:(double)arg1;
- (void)setAvatarBadgeImage:(id)arg1;
- (void)setAvatarBadgeStyleSettings:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setCustomSubtitleLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setGroupAvatarViewController:(id)arg1;
- (void)setHorizontalTitleLabelConstraints:(id)arg1;
- (void)setIsMarkedForSyndication:(bool)arg1;
- (void)setMediaContextBadge:(id)arg1;
- (void)setPreviousSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldHideTitleLabel:(bool)arg1;
- (void)setShouldShowContactBusy:(bool)arg1;
- (void)setTitleBadgeStackView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleLabelFont:(id)arg1;
- (void)setTitleLabelStackView:(id)arg1;
- (void)setTitleLabelWrappedFont:(id)arg1;
- (void)setupActionButton;
- (void)setupActionsView;
- (void)setupAvatarView;
- (void)setupCustomSubtitleLabel;
- (void)setupEmptyActionsView;
- (void)setupPopulatedActionsView;
- (void)setupTitleLabel;
- (bool)shouldShowActionButton;
- (bool)shouldShowActionsView;
- (bool)shouldShowContactBusy;
- (bool)shouldUseTitleLabelWrappedFontGivenBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeForLayoutInContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)titleBadgeStackView;
- (id)titleLabel;
- (double)titleLabelBaselineOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleLabelBoundingRectForFont:(id)arg1 text:(id)arg2 maxWidth:(double)arg3 context:(id)arg4;
- (id)titleLabelFont;
- (id)titleLabelStackView;
- (id)titleLabelWrappedFont;
- (void)updateActionButtonFont;
- (void)updateTitleLabel;
- (void)updateTitleLabelFont;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForActionAtIndex:(unsigned long long)arg1;

// Image: /System/Library/AccessibilityBundles/ContactsUI.axbundle/ContactsUI

+ (Class)safeCategoryBaseClass;

- (void)updateActionButton;

@end
