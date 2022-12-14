/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SessionUIServices.framework/SessionUIServices
 */

@interface SNUISessionController : NSObject {
    _TtC17SessionUIServices17SessionController * _sessionController;
    NSMapTable * _sessionProviders;
}

@property (nonatomic, readonly) bool isSessionEnabled;
@property (nonatomic, retain) _TtC17SessionUIServices17SessionController *sessionController;
@property (nonatomic, retain) NSMapTable *sessionProviders;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)endSessionForProvider:(id)arg1;
- (id)init;
- (bool)isSessionEnabled;
- (id)sessionController;
- (id)sessionProviderWrapping:(id)arg1;
- (id)sessionProviders;
- (void)setSessionController:(id)arg1;
- (void)setSessionProviders:(id)arg1;
- (void)setSystemProvidedMetrics:(id)arg1;
- (id)subscribeToSessionAlertStreamWithHandler:(id /* block */)arg1;
- (id)subscribeToSessionHostViewControllerProviderStreamWithHandler:(id /* block */)arg1;

@end
