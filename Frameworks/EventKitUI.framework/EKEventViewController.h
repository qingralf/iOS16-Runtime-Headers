/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventViewController : UIViewController <EKEventDetailItemDelegate, EKEventDetailTextCellDelegate, EKEventEditViewDelegatePrivate, EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, EKUIManagedViewController, EKUIPasteboardManagerCutDelegate, UIAlertViewDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  _ICSPreview;
    _UIAccessDeniedView * _accessDeniedView;
    EKEventEditViewController * _activeEventEditor;
    bool  _allowsEditing;
    bool  _allowsInviteResponses;
    bool  _allowsSubitems;
    bool  _autoPop;
    UIView * _blankFooterView;
    bool  _calendarPreviewIsInlineDayView;
    NSMutableDictionary * _cellHeights;
    NSDictionary * _context;
    bool  _countedAppearance;
    EKEventDetailItem * _currentEditItem;
    NSArray * _currentSections;
    EKCustomTitleView * _customTitle;
    bool  _dead;
    <EKEventViewDelegate> * _delegate;
    bool  _didAppear;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _disclosedTableRange;
    long long  _disclosedTableSection;
    EKEventEditViewController * _editViewControllerForPasteboard;
    int  _editorHideTransition;
    int  _editorShowTransition;
    EKEvent * _event;
    NSArray * _headerConstraints;
    UIView * _headerView;
    bool  _hidePreview;
    bool  _ignoreDBChanges;
    bool  _inlineDayViewRespectsSelectedCalendarsFilter;
    bool  _isLargeDayView;
    NSArray * _items;
    bool  _itemsNeedReload;
    long long  _lastAuthorizationStatus;
    double  _lastFooterLayoutWidth;
    long long  _lastOrientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    bool  _minimalMode;
    bool  _needsReload;
    bool  _noninteractivePlatterMode;
    long long  _pendingStatus;
    UIViewController * _presentationSourceViewController;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
    int  _scrollToSection;
    EKEventDetailItem * _selectedEditItem;
    bool  _showingBlankFooterView;
    bool  _showsAddToCalendarForICSPreview;
    bool  _showsDelegateMessage;
    bool  _showsDelegatorMessage;
    bool  _showsDeleteForICSPreview;
    bool  _showsDetectedConferenceItem;
    bool  _showsDoneButton;
    bool  _showsOutOfDateMessage;
    bool  _showsPreview;
    bool  _showsUpdateCalendarForICSPreview;
    SingleToolbarItemContainerView * _statusButtonsContainerView;
    EKUIEventStatusButtonsView * _statusButtonsView;
    double  _statusButtonsViewCachedFontSize;
    EKEventViewController * _strongSelf;
    bool  _tableIsBeingEdited;
    UITableView * _tableView;
    NSArray * _tableViewTopConstraints;
    EKEventTitleDetailItem * _titleItem;
    bool  _trustsStatus;
    bool  _viewIsVisible;
}

@property (getter=isICSPreview, nonatomic) bool ICSPreview;
@property (nonatomic) bool allowsCalendarPreview;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsInviteResponses;
@property (nonatomic) bool allowsSubitems;
@property (nonatomic) bool calendarPreviewIsInlineDayView;
@property (nonatomic, retain) NSDictionary *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKEventViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int editorHideTransition;
@property (nonatomic) int editorShowTransition;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, readonly) UIScrollView *eventDetailsScrollView;
@property (nonatomic, readonly) UIViewController *eventDetailsViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideCalendarPreview;
@property (nonatomic) bool inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic) bool isLargeDayView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (nonatomic) bool minimalMode;
@property (nonatomic) bool noninteractivePlatterMode;
@property (nonatomic) UIViewController *presentationSourceViewController;
@property (nonatomic) int scrollToSection;
@property (nonatomic) bool showsAddToCalendarForICSPreview;
@property (nonatomic) bool showsDelegateMessage;
@property (nonatomic) bool showsDelegatorMessage;
@property (nonatomic) bool showsDeleteForICSPreview;
@property (nonatomic) bool showsDetectedConferenceItem;
@property (nonatomic) bool showsDoneButton;
@property (nonatomic) bool showsOutOfDateMessage;
@property (nonatomic) bool showsUpdateCalendarForICSPreview;
@property (readonly) Class superclass;
@property bool viewIsVisible;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (id)_orderedActionsForMask:(long long)arg1;
+ (void)adjustLayoutForCell:(id)arg1 tableViewWidth:(double)arg2 numRowsInSection:(unsigned long long)arg3 cellRow:(unsigned long long)arg4 forceLayout:(bool)arg5;
+ (void)popViewControllersAfterAndIncluding:(id)arg1 fromNavigationController:(id)arg2 animated:(bool)arg3;
+ (void)setDefaultDatesForEvent:(id)arg1;

- (void).cxx_destruct;
- (void)_acceptProposedTimeWithSourceViewForPopover:(id)arg1;
- (long long)_actionsMask;
- (void)_addToCalendarClicked:(id)arg1;
- (bool)_backingEventAllowsEditing;
- (bool)_canPerformEditKeyCommand;
- (void)_cancelProposedTime;
- (void)_clearCustomTitle;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)_deleteSuggestionTapped:(id)arg1;
- (id /* block */)_detachSheetHandler;
- (void)_didToggleMinimalMode;
- (void)_dismissEditor:(bool)arg1 deleted:(bool)arg2;
- (void)_doneButtonPressed:(id)arg1;
- (id)_footerLabelContainingText:(id)arg1;
- (struct CGSize { double x1; double x2; })_idealSize;
- (id)_indexPathForAttendeesDetailItem;
- (id)_indexPathForSection:(int)arg1;
- (bool)_isDisplayingDeletableEvent;
- (bool)_isDisplayingInvitation;
- (bool)_isDisplayingSelfOrganizedInvitation;
- (bool)_isDisplayingSuggestion;
- (id)_itemAtIndexPath:(id)arg1 section:(id*)arg2 subitemIndex:(unsigned long long*)arg3;
- (void)_keyboardWasHidden:(id)arg1;
- (void)_keyboardWasShown:(id)arg1;
- (void)_localeChanged;
- (bool)_navigationBarShouldBeHidden;
- (void)_notifyDetailItemsOfVisibilityOnScreen;
- (void)_performDelete:(long long)arg1 editor:(id)arg2;
- (void)_performEditKeyCommand;
- (bool)_performSave:(long long)arg1 animated:(bool)arg2;
- (void)_pop;
- (void)_prepareEventForEdit;
- (void)_presentDetachSheetFromBarButtonItem:(id)arg1;
- (void)_presentDetachSheetFromView:(id)arg1;
- (void)_presentValidationAlert:(id)arg1;
- (id)_proposedDate;
- (bool)_refreshEventAndReload;
- (void)_rejectProposedTime;
- (void)_reloadIfNeeded;
- (void)_saveStatus:(long long)arg1 sourceViewForPopover:(id)arg2;
- (void)_saveStatus:(long long)arg1 span:(long long)arg2;
- (id)_sectionAtIndex:(long long)arg1;
- (unsigned long long)_sectionForDetailItem:(id)arg1;
- (void)_setNeedsReloadIncludingItems:(bool)arg1;
- (void)_setObservesKeyboardNotifications:(bool)arg1;
- (void)_setUpForEvent;
- (bool)_shouldDisplayDelegateOrOutOfDateMessage;
- (bool)_shouldDisplayDoneButton;
- (bool)_shouldDisplayStatusButtons;
- (bool)_shouldPopSelf;
- (bool)_shouldShowEditButton;
- (bool)_shouldShowInlineButtonFromDelegate;
- (id)_statusButtons;
- (id)_statusButtonsContainerView;
- (id)_statusButtonsView;
- (void)_storeChanged:(id)arg1;
- (void)_teardownTableView;
- (void)_unsubscribeClicked:(id)arg1;
- (void)_updateHeaderAndFooterIfNeeded;
- (void)_updateNavBarAnimated:(bool)arg1;
- (void)_updateResponse;
- (void)_updateResponseVisibility;
- (void)_updateStatusButtonsActions;
- (void)_updateTableContentForSizeCategoryChange:(id)arg1;
- (void)_updateTableContentInsetForKeyboard:(id)arg1;
- (id)_viewControllerForEditorPresentation;
- (id)accessDeniedView;
- (id)activeEventEditor;
- (bool)allowContextProvider:(id)arg1;
- (bool)allowsCalendarPreview;
- (bool)allowsEditing;
- (bool)allowsInviteResponses;
- (bool)allowsSubitems;
- (bool)calendarPreviewIsInlineDayView;
- (bool)canBecomeFirstResponder;
- (bool)canManagePresentationStyle;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)completeWithAction:(long long)arg1;
- (id)context;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(id /* block */)arg3;
- (void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2;
- (void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)detailItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)doneButtonPressed;
- (void)editButtonPressed;
- (void)editEvent;
- (id)editorForEventDetailItem:(id)arg1;
- (id)editorForPasteboardManager:(id)arg1;
- (int)editorHideTransition;
- (int)editorShowTransition;
- (id)event;
- (void)eventDetailItemAccessoryButtonTapped:(id)arg1;
- (void)eventDetailItemWantsRefeshForHeightChange;
- (void)eventDetailItemWantsRefresh:(id)arg1;
- (id)eventDetailsScrollView;
- (id)eventDetailsViewController;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventItem:(id)arg1 wantsViewControllerPresented:(id)arg2;
- (void)eventItemDidCommit:(id)arg1;
- (void)eventItemDidEndEditing:(id)arg1;
- (void)eventItemDidSave:(id)arg1;
- (void)eventItemDidStartEditing:(id)arg1;
- (void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2;
- (void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ifCancelled:(id /* block */)arg3;
- (double)eventStatusButtonsViewButtonFontSize:(id)arg1;
- (id)getCurrentContext;
- (bool)hideCalendarPreview;
- (id)initWithContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)inlineDayViewRespectsSelectedCalendarsFilter;
- (void)invokeAction:(long long)arg1 eventStatusButtonsView:(id)arg2;
- (bool)isICSPreview;
- (bool)isLargeDayView;
- (id)items;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (bool)minimalMode;
- (bool)noninteractivePlatterMode;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)openAttendeesDetailItem;
- (id)optionalModel;
- (id)pasteboardManagerForEventEditViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)presentEditorAnimated:(bool)arg1;
- (id)presentationSourceViewController;
- (void)resetBackgroundColor;
- (int)scrollToSection;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setActiveEventEditor:(id)arg1;
- (void)setAllowsCalendarPreview:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsInviteResponses:(bool)arg1;
- (void)setAllowsSubitems:(bool)arg1;
- (void)setCalendarPreviewIsInlineDayView:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditorHideTransition:(int)arg1;
- (void)setEditorShowTransition:(int)arg1;
- (void)setEvent:(id)arg1;
- (void)setHideCalendarPreview:(bool)arg1;
- (void)setICSPreview:(bool)arg1;
- (void)setInlineDayViewRespectsSelectedCalendarsFilter:(bool)arg1;
- (void)setIsLargeDayView:(bool)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMinimalMode:(bool)arg1;
- (void)setNeedsReload;
- (void)setNoninteractivePlatterMode:(bool)arg1;
- (void)setPresentationSourceViewController:(id)arg1;
- (void)setScrollToSection:(int)arg1;
- (void)setShowsAddToCalendarForICSPreview:(bool)arg1;
- (void)setShowsDelegateMessage:(bool)arg1;
- (void)setShowsDelegatorMessage:(bool)arg1;
- (void)setShowsDeleteForICSPreview:(bool)arg1;
- (void)setShowsDetectedConferenceItem:(bool)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (void)setShowsOutOfDateMessage:(bool)arg1;
- (void)setShowsUpdateCalendarForICSPreview:(bool)arg1;
- (void)setTopInset:(double)arg1;
- (void)setViewIsVisible:(bool)arg1;
- (bool)shouldShowEditButtonInline;
- (bool)showsAddToCalendarForICSPreview;
- (bool)showsDelegateMessage;
- (bool)showsDelegatorMessage;
- (bool)showsDeleteForICSPreview;
- (bool)showsDetectedConferenceItem;
- (bool)showsDoneButton;
- (bool)showsOutOfDateMessage;
- (bool)showsUpdateCalendarForICSPreview;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableViewSectionContentWidth;
- (double)topInset;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitleWithScrollView:(id)arg1 animation:(bool)arg2;
- (id)viewControllerForEventItem:(id)arg1;
- (id)viewControllerToPresentAlertFromForPasteboardManager:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)viewIsVisible;
- (void)viewLayoutMarginsDidChange;
- (id)viewTitle;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsManagement;

// Image: /System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)loadView;

@end
