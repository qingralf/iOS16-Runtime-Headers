/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SessionCore.framework/SessionCore
 */

@interface _TtC11SessionCoreP33_4DC64229D2ABB0B5306670C4AE3A9EED34ProminenceObservationServiceClient : NSObject <ActivityKit.ActivityProminenceObservationServiceXPCServer> {
    void _lock_bufferedProminenceUpdate;
    void _lock_pendingAck;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lock_predicate;
    void connection;
    void delegate;
    void lock;
}

- (void).cxx_destruct;
- (id)init;
- (bool)subscribeToActivityProminenceMatching:(id)arg1 error:(id*)arg2;

@end