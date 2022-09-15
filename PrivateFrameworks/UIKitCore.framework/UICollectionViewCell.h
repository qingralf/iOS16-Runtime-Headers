/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionViewCell : UICollectionReusableView <UIEditMenuInteractionDelegate, UIGestureRecognizerDelegate, _UISystemBackgroundViewContainer> {
    long long  __dropState;
    UIEditMenuInteraction * __editMenuInteraction;
    UIButton * __popupMenuButton;
    UIView * _backgroundView;
    id /* block */  _backgroundViewConfigurationProvider;
    struct { 
        unsigned int selected : 1; 
        unsigned int highlighted : 1; 
        unsigned int editing : 1; 
        unsigned int swiped : 1; 
        unsigned int reordering : 1; 
        unsigned int contextMenuGroupLocation : 3; 
        unsigned int usesAnyPlainListStyle : 1; 
        unsigned int needsConfigurationStateUpdate : 1; 
        unsigned int hasContentConfiguration : 1; 
        unsigned int hasCustomBackgroundColor : 1; 
        unsigned int hasCustomBackgroundView : 1; 
        unsigned int hasCustomSelectedBackgroundView : 1; 
        unsigned int hasCustomBackgroundViewConfigurationProvider : 1; 
        unsigned int hasCustomBackgroundViewConfiguration : 1; 
        unsigned int automaticallyUpdatesBackgroundViewConfiguration : 1; 
        unsigned int automaticallyUpdatesContentViewConfiguration : 1; 
        unsigned int clearSelectionWhenMenuDisappears : 1; 
        unsigned int waitingForSelectionAnimationHalfwayPoint : 1; 
        unsigned int contentViewWantsSystemLayoutSizeFittingSize : 1; 
        unsigned int selectionOrHighlightStateChangedSinceBackgroundUpdate : 1; 
        unsigned int allowsStateUpdatesWhenEvaluatingBackgroundAppearance : 1; 
        unsigned int needsFocusRingUpdateAfterLayout : 1; 
    }  _collectionCellFlags;
    id /* block */  _configurationUpdateHandler;
    UIView * _contentView;
    id /* block */  _contentViewConfigurationProvider;
    long long  _dragState;
    bool  _dragging;
    long long  _focusStyle;
    _UIFloatingContentView * _focusedFloatingContentView;
    bool  _highlighted;
    id  _highlightingSupport;
    <_UIBackgroundConfigurationInternal> * _lastNormalBackgroundViewConfiguration;
    UILongPressGestureRecognizer * _menuGesture;
    bool  _selected;
    UIView * _selectedBackgroundView;
    id  _selectionSegueTemplate;
    _UISystemBackgroundView * _systemBackgroundView;
    <_UIContentViewInternal> * _viewForContentConfiguration;
}

@property (nonatomic, readonly) bool _allowsHorizontalFocusMovement;
@property (getter=_backgroundFillIsCustomizedForSelectionOrHighlight, nonatomic, readonly) bool _backgroundFillIsCustomizedForSelectionOrHighlight;
@property (getter=_backgroundIsVerticallyInset, nonatomic, readonly) bool _backgroundIsVerticallyInset;
@property (nonatomic, readonly) UICellConfigurationState *_bridgedConfigurationState;
@property (getter=_contextMenuGroupLocation, setter=_setContextMenuGroupLocation:, nonatomic) long long _contextMenuGroupLocation;
@property (getter=_dragState, setter=_setDragState:, nonatomic) long long _dragState;
@property (getter=_dropState, setter=_setDropState:, nonatomic) long long _dropState;
@property (getter=_isDropTarget, setter=_setDropTarget:, nonatomic) bool _dropTarget;
@property (nonatomic, retain) UIEditMenuInteraction *_editMenuInteraction;
@property (nonatomic, readonly) UIView *_existingContentView;
@property (setter=_setPopupMenuButton:, nonatomic, retain) UIButton *_popupMenuButton;
@property (getter=_isReordering, setter=_setReordering:, nonatomic) bool _reordering;
@property (getter=_isSwiped, setter=_setSwiped:, nonatomic) bool _swiped;
@property (getter=_usesAnyPlainListStyle, setter=_setUsesAnyPlainListStyle:, nonatomic) bool _usesAnyPlainListStyle;
@property (nonatomic) bool automaticallyUpdatesBackgroundConfiguration;
@property (nonatomic) bool automaticallyUpdatesContentConfiguration;
@property (nonatomic, copy) UIBackgroundConfiguration *backgroundConfiguration;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) UICellConfigurationState *configurationState;
@property (nonatomic, copy) id /* block */ configurationUpdateHandler;
@property (nonatomic, copy) <UIContentConfiguration> *contentConfiguration;
@property (nonatomic, retain) UIView *contentView;
@property (getter=_contentViewInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentViewInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDragging, nonatomic) bool dragging;
@property (getter=_focusStyle, setter=_setFocusStyle:, nonatomic) long long focusStyle;
@property (getter=_focusedFloatingContentView, nonatomic, readonly) _UIFloatingContentView *focusedFloatingContentView;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) UIView *selectedBackgroundView;
@property (getter=_selectionAnimationDuration, nonatomic, readonly) double selectionAnimationDuration;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *vuiAccessibilityIdentifier;
@property (nonatomic, readonly) UIView *vuiCellView;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (Class)_contentViewClass;
+ (id)_createDefaultContentViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (bool)_isInternalCell;
+ (bool)_subclassOverridesContentViewClass;
+ (bool)_wantsLegacyMenuGesture;

- (void).cxx_destruct;
- (bool)_allowsHorizontalFocusMovement;
- (bool)_allowsStateUpdatesWhenEvaluatingBackgroundAppearance;
- (bool)_appliesLayoutAttributesMaskingToBackgroundConfiguration;
- (bool)_appliesLayoutAttributesMaskingToReusableView;
- (void)_applyBackgroundViewConfiguration:(id)arg1 withState:(id)arg2;
- (void)_applyContentViewConfiguration:(id)arg1 withState:(id)arg2 usingSPI:(bool)arg3;
- (bool)_automaticallyUpdatesBackgroundViewConfiguration;
- (bool)_automaticallyUpdatesContentViewConfiguration;
- (bool)_backgroundFillIsCustomizedForSelectionOrHighlight;
- (bool)_backgroundIsVerticallyInset;
- (id)_backgroundViewConfiguration;
- (id /* block */)_backgroundViewConfigurationProvider;
- (bool)_canFocusProgrammatically;
- (bool)_canPerformActionForKey:(id)arg1;
- (void)_clearChangeHandlersForOldContentView:(id)arg1;
- (id)_configurationState;
- (void)_configureFocusedFloatingContentView:(id)arg1;
- (struct CGSize { double x1; double x2; })_contentTargetSizeForTargetSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 forUseWithSizeThatFits:(bool)arg4;
- (id)_contentViewConfiguration;
- (id /* block */)_contentViewConfigurationProvider;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentViewInset;
- (long long)_contextMenuGroupLocation;
- (id)_defaultBackgroundConfiguration;
- (id)_defaultBackgroundView;
- (id)_defaultFocusEffect;
- (id)_defaultFocusOutline;
- (id)_defaultSelectedBackgroundView;
- (bool)_descendantsShouldHighlight;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (long long)_dragState;
- (long long)_dropState;
- (id)_editMenuInteraction;
- (id)_effectiveDefaultBackgroundConfiguration;
- (unsigned long long)_effectiveMaskedCornersForSystemBackgroundView;
- (id)_effectivePopupMenuButton;
- (id)_encodableSubviews;
- (void)_ensureFocusedFloatingContentView;
- (id)_existingContentView;
- (long long)_focusItemDeferralMode;
- (long long)_focusStyle;
- (id)_focusedFloatingContentView;
- (void)_forcePopulateNormalStateConfiguration;
- (bool)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleMenuGesture:(id)arg1;
- (bool)_hasCustomSelectionAction;
- (bool)_highlightDescendantsWhenSelected;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (bool)_isDropTarget;
- (bool)_isReordering;
- (bool)_isSwiped;
- (bool)_isUsingOldStyleMultiselection;
- (void)_layoutContentView;
- (void)_layoutFocusedFloatingContentView;
- (void)_layoutSystemBackgroundView;
- (unsigned long long)_maskedCornersForSystemBackgroundView;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_notifyIsDisplaying:(bool)arg1;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (bool)_performActionForKey:(id)arg1;
- (void)_performConfigurationStateUpdate;
- (void)_performCustomSelectionAction;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_popupMenuButton;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_prepareForConfigurationStateUpdate;
- (bool)_removesHighlightedAndSelectedStatesForBackground;
- (void)_resetBackgroundViewConfiguration;
- (void)_resetBackgroundViewsAndColor;
- (double)_selectionAnimationDuration;
- (id)_selectionSegueTemplate;
- (void)_setAllowsStateUpdatesWhenEvaluatingBackgroundAppearance:(bool)arg1;
- (void)_setAutomaticIntrinsicContentSizeInvalidationEnabled:(bool)arg1;
- (void)_setAutomaticallyUpdatesBackgroundViewConfiguration:(bool)arg1;
- (void)_setAutomaticallyUpdatesContentViewConfiguration:(bool)arg1;
- (void)_setBackgroundViewConfiguration:(id)arg1;
- (void)_setBackgroundViewConfigurationProvider:(id /* block */)arg1;
- (void)_setContentView:(id)arg1 addToHierarchy:(bool)arg2;
- (void)_setContentViewConfiguration:(id)arg1;
- (void)_setContentViewConfigurationProvider:(id /* block */)arg1;
- (void)_setContextMenuGroupLocation:(long long)arg1;
- (void)_setDragState:(long long)arg1;
- (void)_setDropState:(long long)arg1;
- (void)_setDropTarget:(bool)arg1;
- (void)_setFocusStyle:(long long)arg1;
- (void)_setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_setNeedsConfigurationStateUpdate;
- (void)_setOpaque:(bool)arg1 forSubview:(id)arg2;
- (void)_setPopupMenuButton:(id)arg1;
- (void)_setReordering:(bool)arg1;
- (void)_setSelected:(bool)arg1 animated:(bool)arg2;
- (void)_setSelectionSegueTemplate:(id)arg1;
- (void)_setSwiped:(bool)arg1;
- (void)_setUsesAnyPlainListStyle:(bool)arg1;
- (void)_setupChangeHandlersForNewContentView:(id)arg1;
- (void)_setupHighlightingSupport;
- (bool)_shouldForwardMovementToFocusEngine:(long long)arg1;
- (bool)_shouldSaveOpaqueStateForView:(id)arg1;
- (id)_stateForUpdatingBackgroundConfigurationWithState:(id)arg1;
- (id)_systemBackgroundView;
- (long long)_systemDefaultFocusGroupPriority;
- (void)_teardownHighlightingSupportIfReady;
- (void)_updateBackgroundView;
- (void)_updateBackgroundViewConfigurationForState:(id)arg1;
- (void)_updateConfigurationUsingState:(id)arg1;
- (void)_updateContentViewConfigurationForState:(id)arg1;
- (void)_updateDefaultBackgroundAppearance;
- (void)_updateFocusedFloatingContentControlStateAnimated:(bool)arg1;
- (void)_updateFocusedFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(bool)arg3;
- (void)_updateGhostedAppearance;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (void)_updateHighlightColorsForView:(id)arg1 highlight:(bool)arg2;
- (void)_updatePopupMenuButtonFromContentView;
- (void)_updateUserInterfaceRenderingModeUsingAttributes:(id)arg1;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;
- (bool)_usesAnyPlainListStyle;
- (bool)_usingBackgroundConfigurationOrDefaultBackgroundConfiguration;
- (bool)_usingBackgroundViewConfiguration;
- (bool)_usingContentViewConfiguration;
- (unsigned long long)_viewConfigurationState;
- (id)_visiblePathForBackgroundConfiguration;
- (void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dealloc;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilityChildren;
- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)_accessibilityHitTestReverseOrder;
- (bool)_accessibilityImplementsDefaultRowRange;
- (id)_accessibilityIndexPath;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityIndexPathAsRange;
- (bool)_accessibilityIsInCollectionCell;
- (bool)_accessibilityIsOutsideParentBounds;
- (id)_accessibilityParentCollectionView;
- (bool)_accessibilityRespondsToUserInteractionForElement:(id)arg1;
- (id)_accessibilityUserTestingChildren;
- (bool)_isEligibleForFocusInteraction;
- (id)_privateAccessibilityCustomActions;
- (void)accessibilityClearInternalData;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityLabel;
- (void)accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityRowRange;
- (bool)accessibilityScrollToVisible;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)addSubview:(id)arg1;
- (id)axData;
- (bool)canBecomeFocused;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (bool)isAccessibilityElement;
- (void)prepareForReuse;
- (bool)shouldGroupAccessibilityChildren;
- (void)willRemoveSubview:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

- (void)downcastWithCellHandler:(id /* block */)arg1 listCellHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

- (id)doc_tagsCollectionCellMenuTarget;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (bool)_accessibilityScrollToVisible;
- (bool)_accessibilityScrollToVisible;
- (id)ttriAccessibilityAXOutermostContainingViewOfType:(Class)arg1;
- (bool)ttriAccessibilityAdjustScrollOffsetForFocus;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (void)unloadExpensiveViews;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)makePrototypeCellWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void)setVuiAccessibilityIdentifier:(id)arg1;
- (id)vuiAccessibilityIdentifier;
- (id)vuiCellView;

// Image: /usr/lib/libMainThreadChecker.dylib

- (bool)automaticallyUpdatesBackgroundConfiguration;
- (bool)automaticallyUpdatesContentConfiguration;
- (id)backgroundConfiguration;
- (id)backgroundView;
- (bool)canBeEdited;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)configurationState;
- (id /* block */)configurationUpdateHandler;
- (id)contentConfiguration;
- (id)contentView;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (id)defaultBackgroundConfiguration;
- (void)dragStateDidChange:(long long)arg1;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)editMenuInteraction:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDragging;
- (bool)isEditing;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)layoutSubviews;
- (void)paste:(id)arg1;
- (id)selectedBackgroundView;
- (void)setAutomaticallyUpdatesBackgroundConfiguration:(bool)arg1;
- (void)setAutomaticallyUpdatesContentConfiguration:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundConfiguration:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setConfigurationUpdateHandler:(id /* block */)arg1;
- (void)setContentConfiguration:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDragging:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNeedsUpdateConfiguration;
- (void)setSelected:(bool)arg1;
- (void)setSelectedBackgroundView:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)set_editMenuInteraction:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConfigurationUsingState:(id)arg1;

// Image: /usr/lib/swift/libswiftUIKit.dylib

- (id)_bridgedConfigurationState;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (void)_invalidateConfiguration;

@end