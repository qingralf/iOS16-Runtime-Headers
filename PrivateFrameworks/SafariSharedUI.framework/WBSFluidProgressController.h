/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSFluidProgressController : NSObject {
    <WBSFluidProgressControllerDelegate> * _delegate;
    NSHashTable * _observers;
    <WBSFluidProgressControllerWindowDelegate> * _windowDelegate;
}

@property (nonatomic) <WBSFluidProgressControllerDelegate> *delegate;
@property <WBSFluidProgressControllerWindowDelegate> *windowDelegate;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (void).cxx_destruct;
- (void)animationStepCompleted:(id)arg1;
- (void)cancelFluidProgressWithProgressStateSource:(id)arg1;
- (id)delegate;
- (void)frontmostTabDidChange;
- (id)init;
- (void)progressStateSourceDidCommitLoad:(id)arg1 loadingSingleResource:(bool)arg2;
- (void)registerObserver:(id)arg1;
- (void)sendProgressUpdateToObservers:(id)arg1 progressStateSource:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setWindowDelegate:(id)arg1;
- (void)startFluidProgressWithProgressStateSource:(id)arg1;
- (void)startRocketEffectWithProgressStateSource:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updateFluidProgressWithProgressStateSource:(id)arg1;
- (id)windowDelegate;

// Image: /System/Library/AccessibilityBundles/SafariSharedUI.axbundle/SafariSharedUI

+ (Class)safeCategoryBaseClass;

- (void)_axHandleProgressUpdate:(id)arg1;
- (void)_sendUpdateFluidProgressToObservers:(id)arg1 progressState:(id)arg2 source:(id)arg3 updateAnimationPhase:(bool)arg4;
- (void)_updateFluidProgressWithProgressStateSource:(id)arg1;
- (void)finishFluidProgressWithProgressStateSource:(id)arg1;

@end