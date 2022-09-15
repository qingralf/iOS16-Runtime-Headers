/* Generated by RuntimeBrowser.
 */

@protocol HMDPrimaryResidentElectionAddOn <NSObject>

@required

- (<HMDPrimaryResidentElectionAddOnDelegate> *)delegate;
- (void)performElection;
- (void)performElectionWithReason:(unsigned long long)arg1;
- (void)primaryResidentChanged:(HMDResidentDevice *)arg1 previousResidentDevice:(HMDResidentDevice *)arg2;
- (void)registerForMessages;
- (void)setDelegate:(id <HMDPrimaryResidentElectionAddOnDelegate>)arg1;
- (void)start;
- (void)stop;

@end