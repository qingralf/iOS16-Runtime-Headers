/* Generated by RuntimeBrowser.
 */

@protocol _TVRCCompanionLinkClientWrapperDelegate <NSObject>

@required

- (void)connectedToDevice:(TVRCRPCompanionLinkClientWrapper *)arg1;
- (void)deviceEncounteredAuthenticationChallenge:(TVRXDeviceAuthenticationChallenge *)arg1;
- (void)deviceUpdatedAttentionState;
- (void)deviceUpdatedSupportedButtons:(TVRCRPCompanionLinkClientWrapper *)arg1;
- (void)disconnectedFromDevice:(TVRCRPCompanionLinkClientWrapper *)arg1 error:(NSError *)arg2;

@end