/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMOneTimeCodeAccelerator : NSObject {
    IMDaemonController<IMDaemonProtocol> * _daemon;
    bool  _requestedOneTimeCodeStatusForConnection;
    id /* block */  _updateBlock;
}

@property (nonatomic, retain) IMDaemonController<IMDaemonProtocol> *daemon;
@property (nonatomic) bool requestedOneTimeCodeStatusForConnection;
@property (nonatomic, copy) id /* block */ updateBlock;

- (void).cxx_destruct;
- (void)_incomingCodeUpdateFromDaemon:(id)arg1;
- (void)consumeCodeWithGuid:(id)arg1;
- (id)daemon;
- (void)daemonConnectionLost;
- (void)daemonControllerDidConnect;
- (void)daemonControllerDidDisconnect;
- (void)daemonControllerWillConnect;
- (void)dealloc;
- (id)initWithBlockForUpdates:(id /* block */)arg1;
- (id)initWithDaemon:(id)arg1 andBlock:(id /* block */)arg2;
- (bool)requestedOneTimeCodeStatusForConnection;
- (void)setDaemon:(id)arg1;
- (void)setRequestedOneTimeCodeStatusForConnection:(bool)arg1;
- (void)setUpConnectionToDaemaon;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id /* block */)updateBlock;

@end
