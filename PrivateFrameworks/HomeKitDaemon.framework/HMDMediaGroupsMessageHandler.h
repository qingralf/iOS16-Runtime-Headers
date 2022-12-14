/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDMediaGroupsMessageHandler : HMFObject <HMFLogging, HMFMessageReceiver> {
    <HMDMediaGroupsMessageHandlerDataSource> * _dataSource;
    <HMDMediaGroupsMessageHandlerDelegate> * _delegate;
    NSUUID * _messageTargetUUID;
}

@property <HMDMediaGroupsMessageHandlerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaGroupsMessageHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2;
- (id)dataSource;
- (id)delegate;
- (id)destinationIdentifiersInMessage:(id)arg1 error:(id*)arg2;
- (void)handleMediaGroupsControllerCreateGroupRequestMessage:(id)arg1;
- (void)handleMediaGroupsControllerRemoveGroupRequestMessage:(id)arg1;
- (void)handleMediaGroupsControllerUpdateGroupRequestMessage:(id)arg1;
- (id)identifierInMessage:(id)arg1;
- (id)initWithMessageTargetUUID:(id)arg1;
- (id)logIdentifier;
- (id)messageTargetUUID;
- (id)nameInMessage:(id)arg1 error:(id*)arg2;
- (void)registerForMessagesWithHome:(id)arg1 messageDispatcher:(id)arg2;
- (void)routeMediaGroupsControllerCreateGroupRequestMessage:(id)arg1;
- (void)routeMediaGroupsControllerRemoveGroupRequestMessage:(id)arg1;
- (void)routeMediaGroupsControllerUpdateGroupRequestMessage:(id)arg1;
- (void)routeMessage:(id)arg1 localHandler:(id /* block */)arg2;
- (id)router;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
