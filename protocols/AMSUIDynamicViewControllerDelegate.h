/* Generated by RuntimeBrowser.
 */

@protocol AMSUIDynamicViewControllerDelegate <NSObject>

@optional

- (UIViewController *)dynamicViewController:(AMSUIDynamicViewController *)arg1 contentViewControllerWithDictionary:(NSDictionary *)arg2;
- (UIViewController *)dynamicViewController:(AMSUIDynamicViewController *)arg1 contentViewControllerWithDictionary:(NSDictionary *)arg2;
- (UIView<AMSUIDynamicContentViewProtocol> *)dynamicViewController:(AMSUIDynamicViewController *)arg1 contentViewWithDictionary:(NSDictionary *)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (UIView<AMSUIDynamicContentViewProtocol> *)dynamicViewController:(AMSUIDynamicViewController *)arg1 contentViewWithDictionary:(NSDictionary *)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)dynamicViewController:(AMSUIDynamicViewController *)arg1 didFinishCarrierLinkingWithResult:(AMSCarrierLinkResult *)arg2 error:(NSError *)arg3;
- (void)dynamicViewController:(AMSUIDynamicViewController *)arg1 didFinishCarrierLinkingWithResult:(AMSCarrierLinkResult *)arg2 error:(NSError *)arg3;
- (void)dynamicViewController:(AMSUIDynamicViewController *)arg1 didFinishPurchaseWithResult:(AMSPurchaseResult *)arg2 error:(NSError *)arg3;
- (void)dynamicViewController:(AMSUIDynamicViewController *)arg1 didFinishPurchaseWithResult:(AMSPurchaseResult *)arg2 error:(NSError *)arg3;
- (void)dynamicViewController:(AMSUIDynamicViewController *)arg1 didFinishWithPurchaseResult:(AMSPurchaseResult *)arg2 error:(NSError *)arg3;
- (void)dynamicViewController:(AMSUIDynamicViewController *)arg1 didFinishWithPurchaseResult:(AMSPurchaseResult *)arg2 error:(NSError *)arg3;
- (void)dynamicViewController:(AMSUIDynamicViewController *)arg1 didResolveWithResult:(NSDictionary *)arg2 error:(NSError *)arg3;
- (bool)dynamicViewControllerShouldDismiss:(AMSUIDynamicViewController *)arg1;

@end
