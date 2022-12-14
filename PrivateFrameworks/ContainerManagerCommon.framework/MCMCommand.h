/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMCommand : NSObject <MCMCommand, MCMCommand_Internal, MCMCommand_XPC> {
    MCMContext * _context;
    <MCMReply> * _reply;
    <MCMResultPromise> * _resultPromise;
}

@property (nonatomic, readonly) MCMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MCMReply> *reply;
@property (nonatomic, readonly) <MCMResultPromise> *resultPromise;
@property (readonly) Class superclass;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;
+ (void)relayToPrivilegedDaemonMessage:(id)arg1 reply:(id)arg2 context:(id)arg3;
+ (void)relayToPrivilegedDaemonMessage:(id)arg1 reply:(id)arg2 context:(id)arg3 resultPromise:(id)arg4;

- (void).cxx_destruct;
- (id)context;
- (void)execute;
- (id)initWithContext:(id)arg1 resultPromise:(id)arg2;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;
- (id)reply;
- (id)resultPromise;
- (id)userIdentityForContainerIdentifier:(id)arg1 containerClass:(unsigned long long)arg2 error:(unsigned long long*)arg3;

@end
