/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPCABackupRecoveryReporter : CDPCAReporter {
    unsigned long long  _attemptedMethods;
    unsigned long long  _availableMethods;
    unsigned long long  _escrowDeviceCount;
    unsigned long long  _joinMethod;
}

@property (nonatomic, readonly) unsigned long long joinMethod;

- (void)backupRecoveryDidCancel;
- (void)backupRecoveryDidFailWithError:(id)arg1;
- (void)backupRecoveryDidReset;
- (void)backupRecoveryDidSucceed;
- (void)backupRecoveryDidSucceedWithoutLocalSecret;
- (void)backupRecoverySetAttemptedMethod:(unsigned long long)arg1;
- (void)backupRecoverySetJoinFromBundleID:(id)arg1;
- (id)initWithContext:(id)arg1;
- (unsigned long long)joinMethod;

@end
