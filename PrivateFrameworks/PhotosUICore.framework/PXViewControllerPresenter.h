/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXViewControllerPresenter : NSObject <PXPresentationEnvironment> {
    UIViewController * _baseViewController;
    <UIPopoverPresentationControllerSourceItem> * _sourceItem;
}

@property (nonatomic, retain) UIViewController *baseViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIPopoverPresentationControllerSourceItem> *sourceItem;
@property (readonly) Class superclass;

+ (id)defaultPresenterWithViewController:(id)arg1;
+ (id)popoverPresenterWithViewController:(id)arg1 sourceItem:(id)arg2;

- (void).cxx_destruct;
- (id)baseViewController;
- (void)dismissAlertWithToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dismissViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)presentAlertWithConfigurationHandler:(id /* block */)arg1;
- (void)presentViewController:(id)arg1;
- (void)setBaseViewController:(id)arg1;
- (void)setSourceItem:(id)arg1;
- (id)sourceItem;

@end
