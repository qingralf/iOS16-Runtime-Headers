/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenSharing.framework/ScreenSharing
 */

@interface SSAnnotationRenderer : NSObject <AXUIClientDelegate> {
    UIScreen * _mainScreen;
    NSMutableDictionary * _queuedMessage;
    AXUIClient * _uiClient;
    int  assistanceState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) UIScreen *mainScreen;
@property (retain) NSMutableDictionary *queuedMessage;
@property (readonly) Class superclass;
@property (nonatomic, retain) AXUIClient *uiClient;

+ (id)sharedRenderer;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })convertScaledCoordinates:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)drawPointerWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 flags:(unsigned int)arg2;
- (void)drawSafeViewSlateWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 flags:(unsigned int)arg2 orientation:(long long)arg3;
- (void)handleSafeViewAnnotation:(struct CGPoint { double x1; double x2; })arg1 flags:(unsigned int)arg2 orientation:(long long)arg3;
- (bool)hideAllPointers;
- (bool)hidePointerForUser:(id)arg1;
- (id)init;
- (id)mainScreen;
- (id)queuedMessage;
- (void)screenDidChange:(id)arg1;
- (void)setMainScreen:(id)arg1;
- (void)setQueuedMessage:(id)arg1;
- (void)setUiClient:(id)arg1;
- (bool)showAllPointers;
- (bool)showPointerForUser:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)stopAnnotation;
- (id)uiClient;

@end