/* Generated by RuntimeBrowser.
 */

@protocol DDUIEndpointPairingSession <NSObject>

@required

- (void)cancelWithMessage:(DDUIPairCompleteMessage *)arg1;
- (void)invalidate;
- (<DDUIDevice> *)remoteDevice;
- (NSUUID *)sessionID;

@end