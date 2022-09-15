/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface TabOverviewItemView : UIView {
    UIView * _attachedView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _attachedViewReferenceRect;
    double  _borrowedContentHeaderHeight;
    UIView * _borrowedContentView;
    TabThumbnailCloseButton * _closeButton;
    bool  _contentSizeIsAccessibilityCategory;
    UIView * _contentView;
    double  _cornerRadius;
    UIView * _dimmingView;
    UIView * _headerBackgroundView;
    unsigned long long  _mediaStateIcon;
    UIView * _participantsBackgroundView;
    SFAvatarStackView * _participantsView;
    bool  _pinned;
    UIView * _pinnedFillView;
    UIView * _placeholderView;
    long long  _preferredHeaderMode;
    bool  _recording;
    TabThumbnailRecordingIndicator * _recordingIndicatorView;
    UIView * _shadowView;
    bool  _showsCloseButton;
    UIView * _snapshotClipperView;
    TabSnapshotImageView * _snapshotView;
    long long  _tabLayout;
    double  _titleHeight;
    TabIconAndTitleView * _titleView;
    double  _topBackdropHeight;
    _SFBarTheme * _topBarTheme;
    double  _transitionProgress;
    bool  _wasUsedForPreviewing;
    struct CGSize { 
        double width; 
        double height; 
    }  _windowSize;
}

@property (nonatomic, retain) UIView *attachedView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } attachedViewReferenceRect;
@property (nonatomic, readonly) UIButton *closeButton;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIView *dimmingView;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic, readonly) UIView *previewView;
@property (getter=previewViewIsHidden, nonatomic) bool previewViewHidden;
@property (getter=isRecording, nonatomic) bool recording;
@property (nonatomic) double shadowOpacity;
@property (nonatomic, copy) NSArray *shareParticipants;
@property (nonatomic) bool showsCloseButton;
@property (nonatomic, retain) TabSnapshotImageView *snapshotView;
@property (nonatomic) long long tabLayout;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) double titleHeight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } titlePadding;
@property (nonatomic) double topBackdropHeight;
@property (nonatomic, retain) _SFBarTheme *topBarTheme;
@property (nonatomic) double transitionProgress;
@property (getter=isUnread, nonatomic) bool unread;
@property (nonatomic) bool wasUsedForPreviewing;
@property (nonatomic) struct CGSize { double x1; double x2; } windowSize;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

+ (void)initialize;

- (void).cxx_destruct;
- (id)_headerBackgroundColor;
- (void)_updateContentSizeCategory;
- (id)accessibilityIdentifier;
- (id)attachedView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachedViewReferenceRect;
- (bool)canBecomeFocused;
- (id)closeButton;
- (bool)containsBorrowedContentView:(id)arg1;
- (double)cornerRadius;
- (id)dimmingView;
- (long long)effectiveHeaderMode;
- (id)focusEffect;
- (id)icon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertBorrowedContentView:(id)arg1 headerHeight:(double)arg2;
- (bool)isPinned;
- (bool)isRecording;
- (bool)isUnread;
- (void)layoutSubviews;
- (unsigned long long)mediaStateIcon;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)previewView;
- (bool)previewViewIsHidden;
- (void)removeBorrowedContentView:(id)arg1;
- (void)setAttachedView:(id)arg1;
- (void)setAttachedViewReferenceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setMediaStateIcon:(unsigned long long)arg1;
- (void)setPinned:(bool)arg1;
- (void)setPreviewViewHidden:(bool)arg1;
- (void)setRecording:(bool)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShareParticipants:(id)arg1;
- (void)setShowsCloseButton:(bool)arg1;
- (void)setSnapshotView:(id)arg1;
- (void)setTabLayout:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopBackdropHeight:(double)arg1;
- (void)setTopBarTheme:(id)arg1;
- (void)setTransitionProgress:(double)arg1;
- (void)setUnread:(bool)arg1;
- (void)setWasUsedForPreviewing:(bool)arg1;
- (void)setWindowSize:(struct CGSize { double x1; double x2; })arg1;
- (double)shadowOpacity;
- (id)shareParticipants;
- (bool)showsCloseButton;
- (id)snapshotView;
- (long long)tabLayout;
- (id)title;
- (double)titleHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })titlePadding;
- (double)topBackdropHeight;
- (id)topBarTheme;
- (void)traitCollectionDidChange:(id)arg1;
- (double)transitionProgress;
- (void)updateSnapshotWithImage:(id)arg1;
- (bool)wasUsedForPreviewing;
- (struct CGSize { double x1; double x2; })windowSize;

// Image: /System/Library/AccessibilityBundles/MobileSafariUI.axbundle/MobileSafariUI

+ (Class)safeCategoryBaseClass;

- (unsigned int)_accessibilityMediaAnalysisOptions;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRowRange;
- (bool)_accessibilityScrollToVisible;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

@end