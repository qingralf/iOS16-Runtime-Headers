/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyShortcutHUDWindow : UIWindow {
    <_UIKeyShortcutHUDWindowDelegate> * _delegate;
    NSArray * _hudKeyCommands;
}

@property (nonatomic) <_UIKeyShortcutHUDWindowDelegate> *delegate;
@property (nonatomic, retain) NSArray *hudKeyCommands;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_isSystemWindow;

- (void).cxx_destruct;
- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (void)_hudWindowSceneDidResignTargetOfKeyboardEventDeferringEnvironment:(id)arg1;
- (id)_roleHint;
- (bool)_wantsFocusEngine;
- (id)delegate;
- (id)hudKeyCommands;
- (id)initWithWindowScene:(id)arg1;
- (id)keyCommands;
- (void)resignKeyWindow;
- (void)setDelegate:(id)arg1;
- (void)setHudKeyCommands:(id)arg1;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityIsIsolatedWindow;
- (bool)accessibilityViewIsModal;

@end