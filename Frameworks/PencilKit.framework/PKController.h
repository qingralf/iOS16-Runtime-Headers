/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKController : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSObject<PKControllerDelegate> * _delegate;
    PKDrawing * _drawing;
    NSObject<OS_dispatch_queue> * _interactQueue;
    NSObject<OS_dispatch_semaphore> * _interactSemaphore;
    bool  _invertColors;
    bool  _liveInteraction;
    PKMetalConfig * _metalConfig;
    NSMutableArray * _mutableRenderedStrokes;
    NSArray * _renderedStrokes;
    PKMetalRendererController * _rendererController;
    bool  _sixChannelBlending;
}

- (void).cxx_destruct;
- (id)init;

@end
