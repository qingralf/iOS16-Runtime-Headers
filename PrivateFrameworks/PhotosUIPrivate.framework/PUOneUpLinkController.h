/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUOneUpLinkController : NSObject <PUBrowsingViewModelChangeObserver> {
    PUBrowsingSession * _browsingSession;
    <PUOneUpLinkControllerDelegate> * _delegate;
    Class  _linkHelper;
    NSArray * _registeredAssetInteractions;
    NSArray * _registeredBrowsingSessionInteractions;
}

@property (nonatomic, retain) PUBrowsingSession *browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUOneUpLinkControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class linkHelper;
@property (nonatomic, retain) NSArray *registeredAssetInteractions;
@property (nonatomic, retain) NSArray *registeredBrowsingSessionInteractions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerInteractionsForCurrentBrowsingSession;
- (id)browsingSession;
- (id)delegate;
- (id)init;
- (Class)linkHelper;
- (void)registerInteractionsForCurrentAsset;
- (id)registeredAssetInteractions;
- (id)registeredBrowsingSessionInteractions;
- (void)setBrowsingSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRegisteredAssetInteractions:(id)arg1;
- (void)setRegisteredBrowsingSessionInteractions:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end