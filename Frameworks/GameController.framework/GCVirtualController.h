/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCVirtualController : NSObject {
    GCControllerView * _controllerView;
}

@property (nonatomic, readonly) GCController *controller;

+ (id)virtualControllerWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)connectWithReplyHandler:(id /* block */)arg1;
- (id)controller;
- (void)dealloc;
- (void)disconnect;
- (id)findKeyWindow;
- (id)initWithConfiguration:(id)arg1;
- (void)refreshViewForKeyWindow;
- (void)updateConfigurationForElement:(id)arg1 configuration:(id /* block */)arg2;

@end
