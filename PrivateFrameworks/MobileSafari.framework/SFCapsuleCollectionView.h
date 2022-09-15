/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFCapsuleCollectionView : UIView <SFBarAnimating, SFCapsuleContentViewSizeUpdating, SFStartPageScrollObserver, UIGestureRecognizerDelegate, _SFFluidProgressViewDelegate> {
    double  _alternateToolbarContentHeight;
    <SFCapsuleCollectionViewToolbarContentProviding> * _alternateToolbarContentProvider;
    UIView * _alternateToolbarContentView;
    double  _axisSwitchTime;
    long long  _backdropHeightAnimationCount;
    _UIVisualEffectBackdropView * _backgroundCaptureView;
    UIViewFloatAnimatableProperty * _bottomBackdropHeight;
    UIView * _bottomSeparator;
    NSMutableDictionary * _contentViewRegistrations;
    SFTransitionCoordinator * _currentTransitionCoordinator;
    <SFCapsuleCollectionViewDataSource> * _dataSource;
    bool  _deferSelectedItemContentViewRemovalUntilEndOfNextTransition;
    <SFCapsuleCollectionViewDelegate> * _delegate;
    UIPanGestureRecognizer * _dismissPanGestureRecognizer;
    double  _distanceToTopEdgeAtMinimizationBegan;
    SFCapsuleNavigationBarTheme * _effectiveMinimizedTheme;
    SFCapsuleNavigationBarTheme * _effectiveTheme;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    double  _focusedCapsuleTopOffset;
    NSHashTable * _gestureObservers;
    bool  _ignoreSetNeedsLayout;
    NSIndexSet * _indexesOfLoadedViews;
    SFCapsuleInputAccessorySpacerView * _inputAccessoryView;
    NSArray * _items;
    bool  _itemsAreHidden;
    UIKBVisualEffectView * _keyboardBackdropView;
    double  _keyboardHeight;
    long long  _layoutStyle;
    SFLockdownStatusBar * _lockdownStatusBar;
    unsigned long long  _minimizationFlags;
    double  _minimizationLastDragOffset;
    double  _minimizationStartingDragOffset;
    long long  _minimizationStyle;
    _SFFluidProgressView * _minimizedProgressView;
    _SFBarTheme * _minimizedTheme;
    SFNavigationBarItem * _navigationBarItem;
    unsigned long long  _numberOfItems;
    long long  _numberOfUpdates;
    double  _offsetForMinimization;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offsetForPan;
    unsigned long long  _panAxis;
    UIPanGestureRecognizer * _panGesture;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousMinimizationVelocity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousVelocity;
    NSString * _reusableContentViewIdentifier;
    UIView * _reuseableContentView;
    NSMutableDictionary * _selectedItemAccessoryViews;
    long long  _selectedItemIndex;
    long long  _selectedItemState;
    long long  _selectedItemStateBeforeShowingKeyboard;
    bool  _selectedItemUsesLiftedPreviewAppearance;
    long long  _selectionGestureState;
    double  _selectionThreshold;
    bool  _sendProgressMessageToObservers;
    bool  _showingAlternateToolbarContent;
    bool  _showingKeyboard;
    bool  _showingLockdownStatusBar;
    bool  _suppressesSelectedItemUnfocus;
    bool  _suppressingDataSourceCalls;
    UITapGestureRecognizer * _tapGestureRecognizer;
    _SFBarTheme * _theme;
    NSTimer * _timerToDiscardViewsForReuse;
    UIToolbar * _toolbar;
    long long  _toolbarAnimationCount;
    UIVisualEffectView * _toolbarBackdropView;
    bool  _toolbarDismissed;
    NSNumber * _toolbarOffsetForPinchTransition;
    _SFBarTheme * _toolbarTheme;
    UIAction * _topAction;
    UIViewFloatAnimatableProperty * _topBackdropHeight;
    double  _topBackdropHeightPresentationValue;
    UIAction * _trailingAction;
    SFCapsuleCollectionViewUpdate * _update;
    bool  _useFastDeceleration;
    double  _verticalSwipeThreshold;
    NSMutableSet * _viewsForReuse;
    long long  _visualEffectTransitionCount;
}

@property (nonatomic) <SFCapsuleCollectionViewToolbarContentProviding> *alternateToolbarContentProvider;
@property (nonatomic, readonly) double capsuleBackgroundCornerRadius;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } capsuleFrame;
@property (nonatomic) <SFCapsuleCollectionViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultCapsuleHeight;
@property (nonatomic) <SFCapsuleCollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double focusedCapsuleHeight;
@property (nonatomic) double focusedCapsuleTopOffset;
@property (nonatomic, readonly) bool hasTrailingAction;
@property (readonly) unsigned long long hash;
@property (getter=_indexesOfAnimatingItems, nonatomic, readonly) NSIndexSet *indexesOfAnimatingItems;
@property (getter=_indexesOfLoadedViews, setter=_setIndexesOfLoadedViews:, nonatomic, retain) NSIndexSet *indexesOfLoadedViews;
@property (nonatomic, readonly) NSIndexSet *indexesOfVisibleItems;
@property (getter=_interCapsuleSpacing, nonatomic, readonly) double interCapsuleSpacing;
@property (nonatomic, readonly) bool isInteractivelySelectingItem;
@property (nonatomic, readonly) bool isTransitioningToNormalStateForTapInBottomRegion;
@property (getter=_items, nonatomic, readonly) NSArray *items;
@property (nonatomic) bool itemsAreHidden;
@property (getter=_keyboardHeight, setter=_setKeyboardHeight:, nonatomic) double keyboardHeight;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) SFLockdownStatusBar *lockdownStatusBar;
@property (nonatomic) long long minimizationStyle;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } minimizedCapsuleFrame;
@property (nonatomic, readonly) double minimizedCapsuleHeightAboveKeyboard;
@property (nonatomic, readonly) _SFFluidProgressView *minimizedProgressView;
@property (nonatomic, retain) _SFBarTheme *minimizedTheme;
@property (nonatomic, retain) SFNavigationBarItem *navigationBarItem;
@property (nonatomic, readonly) unsigned long long numberOfItems;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } obscuredInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } obscuredInsetsIgnoringKeyboard;
@property (getter=_offsetForMinimization, setter=_setOffsetForMinimization:, nonatomic) double offsetForMinimization;
@property (getter=_pageWidth, nonatomic, readonly) double pageWidth;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectedCapsuleFrame;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } selectedCapsuleOffset;
@property (nonatomic) long long selectedItemIndex;
@property (nonatomic, readonly) bool selectedItemIsMinimized;
@property (nonatomic, readonly) long long selectedItemState;
@property (nonatomic, readonly) bool selectedItemUsesLiftedPreviewAppearance;
@property (nonatomic, readonly) unsigned long long selectionGestureAxis;
@property (nonatomic, readonly) long long selectionGestureState;
@property (nonatomic) double selectionThreshold;
@property (getter=isShowingAlternateToolbarContent, nonatomic, readonly) bool showingAlternateToolbarContent;
@property (nonatomic) bool showingLockdownStatusBar;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressesSelectedItemUnfocus;
@property (getter=_suppressingDataSourceCalls, setter=_setSuppressingDataSourceCalls:, nonatomic) bool suppressingDataSourceCalls;
@property (nonatomic, retain) _SFBarTheme *theme;
@property (nonatomic, readonly) UIToolbar *toolbar;
@property (nonatomic, retain) NSNumber *toolbarOffsetForPinchTransition;
@property (nonatomic) bool useFastDeceleration;
@property (getter=_verticalOffsetForSelectedItem, nonatomic, readonly) double verticalOffsetForSelectedItem;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

- (void).cxx_destruct;
- (double)_additionalHeightFromAuxiliaryBarAtMinimizationPercent:(double)arg1;
- (void)_applyEffectsForChangeType:(long long)arg1 update:(id)arg2;
- (void)_applyToolbarTheme;
- (double)_auxiliaryBarSquishedHeightDecrease;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bottomBackdropFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bottomBackdropFrameForAlternateContent;
- (id /* block */)_buttonPointerStyleProviderForContentView:(id)arg1;
- (bool)_canAnimateUpdates;
- (unsigned long long)_capsuleAlphaOptionsForSelectionGesture;
- (id)_coordinatorForUpdatingToCurrentSelectedItemStateFromState:(long long)arg1;
- (void)_createToolbarBackdropIfNeeded;
- (void)_decrementAnimationCountForItems:(id)arg1;
- (void)_dequeueOrCreateViewForItem:(id)arg1 atIndex:(long long)arg2;
- (void)_didEndBackdropHeightAnimation;
- (void)_didReceiveDismissPan:(id)arg1;
- (void)_didReceivePan:(id)arg1;
- (void)_didReceiveTap:(id)arg1;
- (void)_didReceiveTapOnPeekCapsule:(id)arg1;
- (void)_discardExcessViewsForReuse;
- (double)_distanceToTopEdgeIncludingDeceleration:(bool)arg1;
- (bool)_effectiveItemsAreHidden;
- (void)_fetchContentViewForItem:(id)arg1 atIndex:(long long)arg2;
- (bool)_hasReachedTrailingActionPullThreshold;
- (void)_incrementAnimationCountForItems:(id)arg1;
- (long long)_indexOfCentermostItemWithTranslation:(double)arg1;
- (long long)_indexOfTargetItemWithTranslation:(double)arg1 roundingThreshold:(double)arg2;
- (long long)_indexOfTargetItemWithTranslation:(double)arg1 roundingThreshold:(double)arg2 allowActionIndex:(bool)arg3 allowOutOfBounds:(bool)arg4;
- (id)_indexesOfAnimatingItems;
- (id)_indexesOfLoadedViews;
- (id)_indexesOfVisibleItemsIncludingAction:(bool)arg1;
- (id)_indexesOfVisibleItemsWithSelectedItemIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_inputAccessoryViewFrame;
- (double)_insetForCapsuleEdgeWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsByApplyingSelectedItemOffsetToInsetsForState:(long long)arg1 includeKeyboard:(bool)arg2;
- (double)_interCapsuleSpacing;
- (id)_items;
- (bool)_itemsShouldUsePlatterEffect;
- (long long)_keyboardBackdropStyle;
- (void)_keyboardDidHide:(id)arg1;
- (double)_keyboardHeight;
- (double)_keyboardHeightBelowCapsule;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_layOutItems:(id)arg1 atIndexes:(id)arg2 selectedItemIndex:(long long)arg3;
- (void)_layOutKeyboardBackdrop;
- (void)_layOutLockdownStatusBar;
- (void)_layOutMinimizedProgressView;
- (void)_layOutToolbar;
- (bool)_layoutStyleIsTop;
- (double)_lockdownIndicatorBottomVerticalSpacingAtMinimizationPercent:(double)arg1;
- (double)_lockdownIndicatorTopVerticalSpacingAtMinimizationPercent:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_lockdownIndicatorTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_minimizedCapsuleFrameIgnoringKeyboard:(bool)arg1;
- (double)_minimizedContentScale;
- (long long)_nextItemIndexForSelectionGesture;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_obscuredInsetsIgnoringAnimation;
- (double)_offsetForMinimization;
- (double)_overscrollDistanceForTopEdge;
- (double)_pageWidth;
- (struct CGPoint { double x1; double x2; })_panGestureTranslationConstrainedToPanAxis;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_passthroughRect;
- (double)_percentToActivatingTopActionWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_percentToSelectItemIndex:(long long)arg1;
- (void)_performVisualEffectTransitionWithCoordinator:(id)arg1;
- (void)_performWithoutSettingNeedsLayout:(id /* block */)arg1;
- (void)_reclaimViewForItem:(id)arg1;
- (void)_reloadDataWithoutLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedCapsuleFrame;
- (double)_selectedCapsuleHeightForWidth:(double)arg1 state:(long long)arg2 ignoringKeyboard:(bool)arg3;
- (double)_selectedItemBackgroundAlpha;
- (double)_selectedItemContentMinimizationPercent;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_selectedItemContentTransform;
- (double)_selectedItemMinimizationPercent;
- (bool)_selectedItemShouldUsePlatterEffect;
- (void)_sendMinimizationDidEndToObservers;
- (void)_sendMinimizationDidUpdateToObservers;
- (void)_setCapsuleSafeAreaInsetsFrozen:(bool)arg1;
- (void)_setIndexesOfLoadedViews:(id)arg1;
- (void)_setKeyboardHeight:(double)arg1;
- (void)_setOffsetForMinimization:(double)arg1;
- (id)_setSelectedItemStateWithoutPerformingTransition:(long long)arg1 options:(long long)arg2;
- (void)_setSuppressingDataSourceCalls:(bool)arg1;
- (void)_setUpdateRequestActive:(bool)arg1;
- (bool)_shouldDismissToolbar;
- (bool)_shouldDodgeKeyboard;
- (bool)_shouldInteractivelySquish;
- (bool)_shouldShowAlternateToolbarContent;
- (bool)_shouldToggleMinimizedWithTranslation:(double)arg1 velocity:(double)arg2 gestureEnded:(bool)arg3;
- (bool)_shouldUseNormalLayoutForMinimizedCapsule;
- (bool)_suppressingDataSourceCalls;
- (double)_swipeTranslationFactorWithPercentToTopAction:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tapToShowBarBottomRegion;
- (double)_toolbarBackdropAlpha;
- (id)_trailingActionContentView;
- (bool)_translationIsAlmostHorizontal:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateActions;
- (void)_updateBackdropHeight;
- (void)_updateCapsuleAlpha;
- (void)_updateDragWithOffset:(double)arg1 velocity:(double)arg2 ended:(bool)arg3;
- (void)_updateLayoutMargins;
- (void)_updateMinimizedProgressViewFillColor;
- (void)_updateOffsetForPan;
- (void)_updateRangeOfLoadedViews;
- (void)_updateShowsMinimizedProgressView;
- (void)_updateStateFlagsForContentViewAtIndex:(long long)arg1;
- (void)_updateToolbar;
- (void)_updateToolbarAlpha;
- (void)_updateToolbarTheme;
- (void)_updateTopAction;
- (bool)_updateTrailingAction;
- (void)_updateVisualEffectGroupName;
- (double)_verticalOffsetForBottomBackdropIncludingKeyboard:(bool)arg1;
- (double)_verticalOffsetForSelectedItem;
- (double)_verticalOffsetForSelectedItemWithMinimizationOffsetMultiplier:(double)arg1 includeKeyboard:(bool)arg2;
- (double)_verticalOverlapForLockdownStatusIndicatorAtMinimizationPercent:(double)arg1;
- (double)_verticalPanOffsetForToolbar;
- (double)_verticalPanOffsetForToolbarBackdrop;
- (id)_visualEffectGroupName;
- (void)_willBeginBackdropHeightAnimation;
- (void)addGestureObserver:(id)arg1;
- (id)alternateToolbarContentProvider;
- (void)beginDraggingWithOffset:(double)arg1;
- (void)beginUpdates;
- (void)beginVisualEffectTransition;
- (double)capsuleBackgroundCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })capsuleFrame;
- (id)contentViewForItemAtIndex:(long long)arg1;
- (id)createOrDequeueContentViewWithIdentifier:(id)arg1 atIndex:(long long)arg2;
- (id)dataSource;
- (double)defaultCapsuleHeight;
- (id)delegate;
- (void)deleteItemsAtIndexes:(id)arg1 animated:(bool)arg2;
- (id)detachViewForItemAtIndex:(long long)arg1;
- (void)didMoveToWindow;
- (void)endDraggingWithTargetOffset:(double)arg1 velocity:(double)arg2;
- (void)endScrolling;
- (void)endUpdates;
- (void)endVisualEffectTransition;
- (void)fluidProgressViewDidShowProgress:(id)arg1;
- (void)fluidProgressViewWillShowProgress:(id)arg1;
- (double)focusedCapsuleHeight;
- (double)focusedCapsuleTopOffset;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasTrailingAction;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forCapsuleFrameWithEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)indexesOfVisibleItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputAccessoryView;
- (void)insertItemsAtIndexes:(id)arg1 animated:(bool)arg2;
- (void)installAlternateToolbarContentIfNeeded;
- (void)invalidateHeightForCapsuleContentView:(id)arg1;
- (void)invalidateHeightForCapsuleContentView:(id)arg1 animated:(bool)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (bool)isInteractivelySelectingItem;
- (bool)isShowingAlternateToolbarContent;
- (bool)isTransitioningToNormalStateForTapInBottomRegion;
- (bool)itemsAreHidden;
- (void)layoutMarginsDidChange;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (id)lockdownStatusBar;
- (long long)minimizationStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimizedCapsuleFrame;
- (double)minimizedCapsuleHeightAboveKeyboard;
- (id)minimizedProgressView;
- (id)minimizedTheme;
- (id)navigationBarItem;
- (unsigned long long)numberOfItems;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })obscuredInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })obscuredInsetsForState:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })obscuredInsetsForState:(long long)arg1 ignoringKeyboard:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })obscuredInsetsIgnoringKeyboard;
- (void)reattachViewForItemAtIndex:(long long)arg1;
- (void)registerContentViewIdentifier:(id)arg1 block:(id /* block */)arg2;
- (void)relinquishAlternateToolbarContentIfNeeded;
- (void)reloadData;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)removeGestureObserver:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectedCapsuleFrame;
- (struct CGPoint { double x1; double x2; })selectedCapsuleOffset;
- (long long)selectedItemIndex;
- (bool)selectedItemIsMinimized;
- (long long)selectedItemState;
- (bool)selectedItemUsesLiftedPreviewAppearance;
- (unsigned long long)selectionGestureAxis;
- (long long)selectionGestureState;
- (double)selectionThreshold;
- (void)setAlternateToolbarContentProvider:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFocusedCapsuleTopOffset:(double)arg1;
- (void)setItemsAreHidden:(bool)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setMinimizationStyle:(long long)arg1;
- (void)setMinimizedTheme:(id)arg1;
- (void)setNavigationBarItem:(id)arg1;
- (void)setNeedsLayout;
- (void)setSelectedItemAccessoryView:(id)arg1 forState:(long long)arg2;
- (void)setSelectedItemIndex:(long long)arg1;
- (void)setSelectedItemIndex:(long long)arg1 animated:(bool)arg2;
- (void)setSelectedItemState:(long long)arg1 animated:(bool)arg2;
- (void)setSelectedItemState:(long long)arg1 options:(long long)arg2 animated:(bool)arg3;
- (void)setSelectedItemUsesLiftedPreviewAppearance:(bool)arg1 animator:(id)arg2;
- (void)setSelectionThreshold:(double)arg1;
- (void)setShowingAlternateToolbarContent:(bool)arg1 animated:(bool)arg2;
- (void)setShowingLockdownStatusBar:(bool)arg1;
- (void)setSuppressesSelectedItemUnfocus:(bool)arg1;
- (void)setTheme:(id)arg1;
- (void)setToolbarOffsetForPinchTransition:(id)arg1;
- (void)setUseFastDeceleration:(bool)arg1;
- (bool)showingLockdownStatusBar;
- (void)startPageViewControllerDidScroll:(id)arg1;
- (bool)suppressesSelectedItemUnfocus;
- (void)takeOwnershipOfDetachedViewForItemAtIndex:(long long)arg1;
- (id)theme;
- (id)toolbar;
- (id)toolbarOffsetForPinchTransition;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDraggingWithOffset:(double)arg1;
- (void)updateTrailingActionAnimated:(bool)arg1;
- (void)updateVerticalSwipeThreshold;
- (bool)useFastDeceleration;
- (id)viewForItemAtIndex:(long long)arg1;

// Image: /System/Library/AccessibilityBundles/MobileSafariFramework.axbundle/MobileSafariFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityCustomActions;
- (bool)accessibilityPerformEscape;
- (bool)accessibilityScroll:(long long)arg1;

@end