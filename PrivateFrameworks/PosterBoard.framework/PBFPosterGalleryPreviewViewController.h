/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard
 */

@interface PBFPosterGalleryPreviewViewController : UIViewController <PREditingSceneViewControllerDelegate, PREditingSceneViewControllerObserver, UISheetPresentationControllerDelegate, UIViewControllerTransitioningDelegate> {
    _PBFGalleryCollectionViewController * _collectionViewController;
    PBFPosterGalleryDataProvider * _dataProvider;
    <PBFPosterGalleryPreviewViewControllerDelegate> * _delegate;
    <PREditingSceneViewControllerDelegate> * _editingSceneDelegate;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _environmentContainerContentInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _environmentContainerContentSize;
    NSTimer * _loadingHeroActivityIndicationTimer;
    PBFGalleryEditingSceneViewController * _loadingHeroEditingSceneViewController;
    PBFPosterGalleryPreviewView * _loadingHeroPreviewView;
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } itemSizeForType[4]; 
        unsigned long long maximumNumberOfHorizontalItems[4]; 
        struct NSDirectionalEdgeInsets { 
            double top; 
            double leading; 
            double bottom; 
            double trailing; 
        } sectionContentInsets[4]; 
        double standardSpacing; 
        double groupSpacing; 
    }  _metrics;
    UINavigationController * _navigationController;
    bool  _presentingPreview;
}

@property (nonatomic, retain) PBFPosterGalleryDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBFPosterGalleryPreviewViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PREditingSceneViewControllerDelegate> *editingSceneDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSTimer *loadingHeroActivityIndicationTimer;
@property (nonatomic, retain) PBFGalleryEditingSceneViewController *loadingHeroEditingSceneViewController;
@property (nonatomic, retain) PBFPosterGalleryPreviewView *loadingHeroPreviewView;
@property (getter=isPresentingPreview, nonatomic) bool presentingPreview;
@property (readonly) Class superclass;

+ (void)configureSheetPresentationController:(id)arg1;

- (void).cxx_destruct;
- (void)_closeButtonTapped:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)dataProvider;
- (void)dealloc;
- (id)delegate;
- (id)editingSceneDelegate;
- (void)editingSceneViewController:(id)arg1 userDidDismissWithAction:(long long)arg2 updatedConfiguration:(id)arg3 updatedConfiguredProperties:(id)arg4 completion:(id /* block */)arg5;
- (void)editingSceneViewControllerDidFinishShowingContent:(id)arg1;
- (bool)isPresentingPreview;
- (id)loadingHeroActivityIndicationTimer;
- (id)loadingHeroEditingSceneViewController;
- (id)loadingHeroPreviewView;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1[4]; unsigned long long x2[4]; struct NSDirectionalEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3[4]; double x4; double x5; })metricsForEnvironment:(id)arg1;
- (id)navigationControllerForPresentingSceneViewController:(id)arg1;
- (void)presentConfiguratorForPreview:(id)arg1 fromView:(id)arg2;
- (void)presentPreview:(id)arg1 withMode:(long long)arg2 fromView:(id)arg3;
- (void)presentRendererForPreview:(id)arg1 fromView:(id)arg2;
- (void)presentationControllerWillDismiss:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingSceneDelegate:(id)arg1;
- (void)setLoadingHeroActivityIndicationTimer:(id)arg1;
- (void)setLoadingHeroEditingSceneViewController:(id)arg1;
- (void)setLoadingHeroPreviewView:(id)arg1;
- (void)setPresentingPreview:(bool)arg1;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })topButtonLayoutForEditingSceneViewController:(id)arg1;
- (void)viewDidLoad;

@end