/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUParallaxLayerStackViewManager : NSObject <PXChangeObserver> {
    PUParallaxLayerStackViewModel * _viewModel;
    NSMutableDictionary * _viewsByLayerIdentifier;
}

@property (nonatomic, readonly) NSArray *createdLayerViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PUParallaxLayerStackViewModel *viewModel;
@property (nonatomic, readonly) NSMutableDictionary *viewsByLayerIdentifier;

- (void).cxx_destruct;
- (void)_layoutLayerView:(id)arg1;
- (void)_layoutViews;
- (void)_updateViewContents;
- (id)createdLayerViews;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)viewForLayer:(id)arg1;
- (id)viewModel;
- (id)viewsByLayerIdentifier;

@end
