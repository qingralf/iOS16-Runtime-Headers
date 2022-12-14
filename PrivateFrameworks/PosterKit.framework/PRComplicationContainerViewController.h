/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRComplicationContainerViewController : UIViewController <BSInvalidatable, PRGraphicComplicationContainerViewControllerDelegate, PRInlineComplicationContainerViewControllerDelegate> {
    <PRComplicationContainerViewControllerDelegate> * _delegate;
    long long  _focusedElement;
    PRGraphicComplicationContainerViewController * _graphicComplicationContainerViewController;
    PRInlineComplicationContainerViewController * _inlineComplicationContainerViewController;
    bool  _usesEditingLayout;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
}

@property (nonatomic, retain) NSArray *complicationDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRComplicationContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long focusedElement;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PRComplicationDescriptor *inlineComplicationDescriptor;
@property (readonly) Class superclass;
@property (nonatomic) bool usesEditingLayout;
@property (nonatomic, retain) BSUIVibrancyConfiguration *vibrancyConfiguration;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (void).cxx_destruct;
- (void)_updateFocusedWithAnimationSettings:(id)arg1;
- (void)cancelPrewarmComplicationDescriptor:(id)arg1;
- (id)complicationDescriptors;
- (id)delegate;
- (long long)focusedElement;
- (bool)graphicComplicationContainerViewController:(id)arg1 canAddComplication:(id)arg2;
- (void)graphicComplicationContainerViewController:(id)arg1 didCancelDropOperationForComplication:(id)arg2;
- (void)graphicComplicationContainerViewController:(id)arg1 didDropComplication:(id)arg2 atIndex:(long long)arg3;
- (void)graphicComplicationContainerViewController:(id)arg1 didRemoveComplication:(id)arg2;
- (void)graphicComplicationContainerViewController:(id)arg1 didTapComplication:(id)arg2;
- (void)graphicComplicationContainerViewControllerDidTapAdd:(id)arg1;
- (id)initWithInlineComplicationDescriptor:(id)arg1 graphicComplicationDescriptors:(id)arg2;
- (void)inlineComplicationContainerViewController:(id)arg1 didEditComplication:(id)arg2;
- (void)inlineComplicationContainerViewControllerDidTapAdd:(id)arg1;
- (id)inlineComplicationDescriptor;
- (void)invalidate;
- (void)loadView;
- (void)prewarmComplicationDescriptor:(id)arg1;
- (void)setComplicationDescriptors:(id)arg1;
- (void)setComplicationDescriptors:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFocusedElement:(long long)arg1;
- (void)setFocusedElement:(long long)arg1 animated:(bool)arg2;
- (void)setFocusedElement:(long long)arg1 animationSettings:(id)arg2;
- (void)setInlineComplicationDescriptor:(id)arg1;
- (void)setUsesEditingLayout:(bool)arg1;
- (void)setUsesEditingLayout:(bool)arg1 animated:(bool)arg2;
- (void)setUsesEditingLayout:(bool)arg1 animationSettings:(id)arg2;
- (void)setVibrancyConfiguration:(id)arg1;
- (bool)usesEditingLayout;
- (id)vibrancyConfiguration;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Image: /System/Library/AccessibilityBundles/PosterKit.axbundle/PosterKit

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;

@end
