/* Generated by RuntimeBrowser.
 */

@protocol CPParticipantDelegate <NSObject>

@required

- (void)didReceiveData:(NSData *)arg1 ofType:(unsigned char)arg2 from:(CPParticipant *)arg3;
- (void)participant:(CPParticipant *)arg1 didBecomeAvailable:(bool)arg2;

@end
