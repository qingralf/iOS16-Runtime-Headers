/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMCloudGadgetViewController : UIViewController <PXCMMCloudViewViewDelegate, PXGadget> {
    PXCMMCloudView * _cloudView;
    <PXCMMCloudGadgetViewControllerDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    NSString * _gadgetTitle;
    bool  _isCPLOn;
    long long  _priority;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, retain) PXCMMCloudView *cloudView;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMCloudGadgetViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableDismissAction;
@property (nonatomic, readonly) unsigned long long gadgetCapabilities;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, copy) NSString *gadgetTitle;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) long long priority;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;
@property (nonatomic, readonly) bool wantsMultilineTitle;

+ (id)_userDefaults;
+ (bool)didDismissCloudGadget;
+ (void)setDidDismissCloudGadget:(bool)arg1;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_updateCPLStatus;
- (void)_updateContentInsets;
- (id)cloudView;
- (void)completeMyMomentCloudPhotoViewDismissTapped:(id)arg1;
- (void)completeMyMomentCloudPhotoViewLearnMoreTapped:(id)arg1;
- (void)completeMyMomentCloudPhotoViewSizeThatFitsDidChange:(id)arg1;
- (id)contentViewController;
- (id)delegate;
- (bool)disableDismissAction;
- (unsigned long long)gadgetCapabilities;
- (id)gadgetSpec;
- (id)gadgetTitle;
- (unsigned long long)gadgetType;
- (id)initWithSourceType:(unsigned long long)arg1;
- (id)localizedTitle;
- (long long)priority;
- (void)setCloudView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableDismissAction:(bool)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setGadgetTitle:(id)arg1;
- (void)setPriority:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidLoad;

@end