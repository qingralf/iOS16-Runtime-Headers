/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface SHSheetSceneViewController : UIViewController <FBSceneDelegate, FBSceneObserver, SHSheetContentView> {
    <SHSheetContentPresenter> * _presenter;
    FBScene * _scene;
    <UIScenePresenter> * _scenePresenter;
    UIView * _sceneView;
    FBSceneWorkspace * _sceneWorkspace;
    SHSheetUIServiceClient * _serviceClient;
    <SHSheetSession> * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) LPLinkMetadata *headerMetadata;
@property (nonatomic) <SHSheetContentPresenter> *presenter;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) <UIScenePresenter> *scenePresenter;
@property (nonatomic, readonly) UIView *sceneView;
@property (nonatomic, readonly) FBSceneWorkspace *sceneWorkspace;
@property (nonatomic, retain) SHSheetUIServiceClient *serviceClient;
@property (nonatomic, readonly) <SHSheetSession> *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupScene;
- (void)_tearDownScene;
- (void)dealloc;
- (void)didUpdateAirDropTransferWithChange:(id)arg1;
- (id)headerMetadata;
- (id)initWithSession:(id)arg1;
- (id)presenter;
- (void)reloadActivity:(id)arg1;
- (void)reloadContent;
- (id)scene;
- (void)scene:(id)arg1 clientDidConnect:(id)arg2;
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;
- (id)scenePresenter;
- (id)sceneView;
- (id)sceneWorkspace;
- (id)serviceClient;
- (id)session;
- (void)setPresenter:(id)arg1;
- (void)setServiceClient:(id)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
