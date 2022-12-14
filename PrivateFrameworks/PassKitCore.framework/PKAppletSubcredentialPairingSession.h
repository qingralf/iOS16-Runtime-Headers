/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAppletSubcredentialPairingSession : PKDASession <DAKeyPairingDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKAppletSubcredentialPairingSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DAKeyPairingSession *session;
@property (readonly) Class superclass;

+ (id)createSessionWithDelegate:(id)arg1;

- (void)didFinishFirstTransactionForSession:(id)arg1 error:(id)arg2;
- (void)didFinishPreWarmWithResult:(id)arg1;
- (void)didFinishProbingWithBrandCode:(unsigned long long)arg1 error:(id)arg2;
- (void)didStartPairing;
- (void)keyPairingSession:(id)arg1 didFinishPairingWithKey:(id)arg2 trackingRequest:(id)arg3 error:(id)arg4;
- (id)prewarmWithManufacturerIdentifier:(id)arg1;
- (id)probeTerminalForPairingStatus;
- (id)startPairingWithKeyDisplayName:(id)arg1 pairingPassword:(id)arg2 radioTechnologies:(unsigned long long)arg3;
- (id)trackSubcredential:(id)arg1 slotIdentifier:(id)arg2 confidentialMailboxData:(id)arg3 ephemeralPublicKey:(id)arg4 withReceipt:(id)arg5;

@end
