/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarSensorActivityView : UIView <_UIStatusBarDisplayable> {
    long long  _iconSize;
    _UIPortalView * _portalView;
    UIView * _sensorActivityView;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long iconSize;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, retain) _UIPortalView *portalView;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (nonatomic, retain) UIView *sensorActivityView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)applyStyleAttributes:(id)arg1;
- (void)configurePortalViewIfNeeded;
- (void)configureSensorViewWithoutPortalIfNeeded;
- (long long)iconSize;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)portalView;
- (id)sensorActivityView;
- (void)setIconSize:(long long)arg1;
- (void)setPortalView:(id)arg1;
- (void)setSensorActivityView:(id)arg1;

@end
