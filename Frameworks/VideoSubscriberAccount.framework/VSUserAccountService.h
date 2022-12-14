/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSUserAccountService : VSServiceListener {
    VSPreferences * _preferences;
    VSUserAccountRegistry * _registry;
}

@property (nonatomic, retain) VSPreferences *preferences;
@property (nonatomic, retain) VSUserAccountRegistry *registry;

- (void).cxx_destruct;
- (id)_securityTaskForCurrentConnection;
- (id)init;
- (void)performMigrationWithCompletion:(id /* block */)arg1;
- (id)preferences;
- (id)registry;
- (void)setPreferences:(id)arg1;
- (void)setRegistry:(id)arg1;

@end
