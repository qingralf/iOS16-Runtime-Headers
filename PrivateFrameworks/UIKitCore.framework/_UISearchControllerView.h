/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchControllerView : UIView {
    bool  __ensureSystemInputViewAboveSearchBarContainerView;
}

@property (nonatomic) bool _ensureSystemInputViewAboveSearchBarContainerView;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_ensureCarPlayLimitedUIIsOnTop;
- (void)_ensureContainerIsOnTop;
- (bool)_ensureSystemInputViewAboveSearchBarContainerView;
- (void)_ensureViewOfClassIsOnTop:(Class)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)sendSubviewToBack:(id)arg1;
- (void)set_ensureSystemInputViewAboveSearchBarContainerView:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
