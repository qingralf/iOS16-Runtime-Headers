/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUMediaSystemEditorViewController_legacy : HUItemTableViewController <HUMediaSystemEditorGridViewControllerDelegate, HUMediaSystemEditorHelperDelegate, HUNameAndIconEditorCellDelegate, HUPresentationDelegateHost> {
    UIBarButtonItem * _doneButtonBarItem;
    bool  _hasViewEverAppeared;
    HUMediaSystemEditorHelper * _helper;
    <HUMediaSystemEditorViewControllerDelegate_legacy> * _mediaSystemEditorDelegate;
    <HUPresentationDelegate> * _presentationDelegate;
    HUMediaSystemEditorGridViewController * _serviceGridViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButtonBarItem;
@property (nonatomic) bool hasViewEverAppeared;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUMediaSystemEditorHelper *helper;
@property (nonatomic, retain) HUMediaSystemEditorItemManager *itemManager;
@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;
@property (nonatomic) <HUMediaSystemEditorViewControllerDelegate_legacy> *mediaSystemEditorDelegate;
@property (nonatomic, readonly) UIViewController *mediaSystemHelperPresentingViewController;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic, readonly) HUMediaSystemEditorGridViewController *serviceGridViewController;
@property (readonly) Class superclass;

+ (bool)adoptsDefaultGridLayoutMargins;
+ (bool)wouldPairingAccessoriesNecessitateConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersToPreload;
- (id)createMediaSystem;
- (void)createMediaSystemWithAccessory:(id)arg1;
- (id)doneButtonBarItem;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (id)handleMediaSystemCreationFuture:(id)arg1;
- (bool)hasViewEverAppeared;
- (id)helper;
- (id)initForCreatingNewMediaSystemFromMediaAccessories:(id)arg1 home:(id)arg2;
- (id)initForEditingExistingMediaSystemBuilder:(id)arg1;
- (id)mediaSystemBuilder;
- (id)mediaSystemEditorDelegate;
- (id)mediaSystemEditorGrid:(id)arg1 didUpdateMediaSystemBuilder:(id)arg2;
- (void)mediaSystemEditorHelper:(id)arg1 didAbortForAccessoryNeedingUpdate:(id)arg2;
- (void)mediaSystemEditorHelper:(id)arg1 didModifyMediaSystemBuilder:(id)arg2;
- (void)mediaSystemEditorHelper:(id)arg1 needsToPresentViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)mediaSystemEditorHelperDidBeginCommitting:(id)arg1;
- (void)mediaSystemEditorHelperDidEndCommitting:(id)arg1;
- (id)mediaSystemHelperPresentingViewController;
- (id)presentationDelegate;
- (id)savedName;
- (id)serviceGridViewController;
- (void)setDoneButtonBarItem:(id)arg1;
- (void)setHasViewEverAppeared:(bool)arg1;
- (void)setHelper:(id)arg1;
- (void)setMediaSystemEditorDelegate:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (bool)shouldManageTextFieldForItem:(id)arg1;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end