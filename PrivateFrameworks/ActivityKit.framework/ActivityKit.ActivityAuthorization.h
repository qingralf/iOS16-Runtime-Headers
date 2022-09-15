/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityKit.framework/ActivityKit
 */

@interface ActivityKit.ActivityAuthorization : NSObject <ActivityKit.ActivityAuthorizationXPCClient> {
    void authorizationClient;
    void lock;
    void observer;
}

- (void).cxx_destruct;
- (void)activityAuthorizationWithDidChangeWith:(id)arg1;
- (bool)areActivitiesEnabledForBundleId:(id)arg1;
- (id)init;
- (bool)setActivitiesWithEnabled:(bool)arg1 forBundleId:(id)arg2 error:(id*)arg3;
- (bool)supportsActivitiesForBundleId:(id)arg1;

@end