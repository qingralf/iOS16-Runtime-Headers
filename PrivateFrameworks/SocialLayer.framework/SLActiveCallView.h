/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SocialLayer.framework/SocialLayer
 */

@interface SLActiveCallView : UIView <SLActiveCallViewDelegateSwift> {
    <SLActiveCallViewDelegate> * _delegate;
    SLActiveCallViewSwift * _representedObject;
}

@property (nonatomic) <SLActiveCallViewDelegate> *delegate;
@property (nonatomic, readonly) bool hasActiveCall;
@property (nonatomic) double maxWidth;
@property (nonatomic, readonly) bool remoteContentIsLoaded;
@property (nonatomic) bool remoteRenderingEnabled;
@property (nonatomic, retain) SLActiveCallViewSwift *representedObject;

- (void).cxx_destruct;
- (void)activeCallViewDidDetectActiveCallChange:(id)arg1;
- (void)activeCallViewDidLoadNewRemoteContent:(id)arg1;
- (id)delegate;
- (bool)hasActiveCall;
- (id)init;
- (id)initWithMaxWidth:(double)arg1;
- (double)maxWidth;
- (bool)remoteContentIsLoaded;
- (bool)remoteRenderingEnabled;
- (id)representedObject;
- (void)setDelegate:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setRemoteRenderingEnabled:(bool)arg1;
- (void)setRepresentedObject:(id)arg1;

@end