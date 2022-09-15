/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSBlastDoorSupport.framework/IDSBlastDoorSupport
 */

@interface IDSBlastDoorInterface : NSObject {
    IDSBlastDoorInterfaceInternal * _interface;
}

@property (nonatomic, retain) IDSBlastDoorInterfaceInternal *interface;

- (void).cxx_destruct;
- (id)init;
- (id)interface;
- (void)setInterface:(id)arg1;
- (void)unpackCommandResponsePayload:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)unpackCommandWebTunnelResponsePayload:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)unpackGeneralCommandPayload:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)unpackPayloadDictionary:(id)arg1 resultHandler:(id /* block */)arg2;

@end