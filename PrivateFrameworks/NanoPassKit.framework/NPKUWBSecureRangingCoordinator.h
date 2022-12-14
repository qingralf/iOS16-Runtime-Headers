/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKUWBSecureRangingCoordinator : NSObject {
    NSMutableSet * _rangingResumedSubcredentialIdentifiers;
    NSMutableSet * _rangingSuspendedSubcredentialIdentifiers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleCarKeyRangingDidResumeNotification:(id)arg1;
- (void)_handleCarKeyRangingDidSuspendNotification:(id)arg1;
- (void)_markRangingResumedForSubcredentialIdentifier:(id)arg1;
- (void)_markRangingSuspendedForSubcredentialIdentifier:(id)arg1;
- (void)_parseNearFieldNotificationObject:(id)arg1 outApplicationIdentifier:(id*)arg2 outApplicationKeyIdentifier:(id*)arg3;
- (id)init;
- (id)pauseRangingForPass:(id)arg1 durationInSeconds:(id)arg2;
- (id)resumeRangingForPass:(id)arg1;

@end
