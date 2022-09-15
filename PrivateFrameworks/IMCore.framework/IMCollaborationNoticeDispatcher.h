/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCollaborationNoticeDispatcher : NSObject {
    IMDaemonController<IMDaemonProtocol> * _daemon;
}

@property (nonatomic, retain) IMDaemonController<IMDaemonProtocol> *daemon;

- (void).cxx_destruct;
- (id)_listenerID;
- (id)daemon;
- (void)daemonConnectionLost;
- (void)daemonControllerDidDisconnect;
- (void)dealloc;
- (void)disconnectFromDaemon;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)sendNotice:(id)arg1 toHandles:(id)arg2 completion:(id /* block */)arg3;
- (void)setDaemon:(id)arg1;
- (void)setUpConnectionToDaemon;

@end