/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface CNKScreenSharingStateMonitor : NSObject {
    void call;
    void conversationController;
    void conversationControllerProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentlySharingParticipant;
    void isBroadcastingScreenSharing;
    void observations;
}

@property (nonatomic, retain) TUCall *call;
@property (nonatomic) bool isBroadcastingScreenSharing;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)call;
- (id)init;
- (id)initWithActiveCall:(id)arg1;
- (bool)isBroadcastingScreenSharing;
- (void)removeObserver:(id)arg1;
- (void)setCall:(id)arg1;
- (void)setIsBroadcastingScreenSharing:(bool)arg1;

@end