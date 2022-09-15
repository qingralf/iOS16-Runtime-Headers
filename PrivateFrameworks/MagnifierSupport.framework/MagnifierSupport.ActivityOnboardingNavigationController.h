/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MagnifierSupport.framework/MagnifierSupport
 */

@interface MagnifierSupport.ActivityOnboardingNavigationController : OBNavigationController {
    void $__lazy_storage_$_activityControlsPresetController;
    void $__lazy_storage_$_activityCustomizeControlsController;
    void activityCreatedDelegate;
    void activityDoneController;
    void activityInfoController;
    void activityNameController;
    void commitActivityButton;
    void continueToActivityNameButton;
    void continueToCommitActivityButton;
    void continueToControlsCustomizationButton;
    void continueToControlsPresetsButton;
    void currentActivityName;
}

- (void).cxx_destruct;
- (void)_createActivityNamePane;
- (void)_createActivityReadyPane;
- (void)_createControlsCustomizationPane;
- (void)_createControlsPresetPane;
- (void)_dismissActivityCustomizationPane;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)viewDidLoad;

@end