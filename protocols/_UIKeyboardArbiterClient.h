/* Generated by RuntimeBrowser.
 */

@protocol _UIKeyboardArbiterClient

@required

- (void)addWindowHostingPID:(int)arg1;
- (void)assertIgnoreLayoutNotifications;
- (void)checkState;
- (UIInputWindowController *)existingInputWindowRootViewController;
- (void)finishWithHostedWindow;
- (bool)handlingRemoteEvent;
- (bool)hasAnyHostedViews;
- (bool)hasWindowHostingPID:(int)arg1;
- (double)iavHeight;
- (void)ignoreLayoutNotifications:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIInputWindowController *)inputWindowRootViewController;
- (bool)keyboardActive;
- (bool)keyboardVisible;
- (long long)lastEventSource;
- (void)peekApplicationEvent:(UIEvent *)arg1;
- (void)performOnControllers:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_UIRemoteKeyboardViewSource> *, void*
- (void)performOnDistributedControllers:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_UIRemoteKeyboardDistributedViewSource> *, void*
- (void)performOnExistingControllers:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_UIRemoteKeyboardViewSource> *, void*
- (UIWindow *)prepareForHostedWindowWithScene:(UIWindowScene *)arg1;
- (void)registerController:(id <_UIRemoteKeyboardViewSource>)arg1;
- (void)releaseIgnoreLayoutNotificationsAssertion;
- (bool)remoteKeyboardUndocked;
- (bool)remoteKeyboardUndocked:(bool)arg1;
- (void)removeWindowHostingPID:(int)arg1;
- (void)restorePreservedInputViewsIfNecessary;
- (void)sceneUpdated;
- (void)setShouldFence:(bool)arg1;
- (void)setSnapshotting:(bool)arg1;
- (void)setSuppressingKeyboard:(bool)arg1 forScene:(UIWindowScene *)arg2;
- (bool)shouldAllowInputViewsRestoredForId:(id <NSCopying>)arg1;
- (bool)shouldFence;
- (bool)snapshotting;
- (void)unregisterController:(id <_UIRemoteKeyboardViewSource>)arg1;
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2;
- (bool)updatingHeight;
- (<_UIAssertion> *)vendKeyboardSuppressionAssertionForReason:(NSString *)arg1;
- (<_UIAssertion> *)vendKeyboardSuppressionAssertionForReason:(NSString *)arg1 type:(unsigned long long)arg2;

@end
