/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FamilyCircleUI.SubscriptionServicesDataLoader : NSObject {
    void FASharedServicesURLEndpoint;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _hasChanges;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _locationAllowed;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _services;
    void account;
    void didFirstLoad;
    void familyMembers;
    void lastError;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)firstLoad;
- (id)init;
- (id)initWithAccount:(id)arg1 familyMembers:(id)arg2;
- (void)updateNotification;

@end
