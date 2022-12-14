/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SessionUIServices.framework/SessionUIServices
 */

@interface SessionUIServices.SessionSceneDescriptor : NSObject {
    void metricsRequest;
    void sceneOwnerBundleIdentifier;
    void sessionDescriptor;
    void sessionIdentifier;
    void sessionSceneType;
}

@property (nonatomic, readonly) _TtC17SessionUIServices19SessionSceneMetrics *metrics;
@property (nonatomic, retain) _TtC17SessionUIServices22ActivityMetricsRequest *metricsRequest;
@property (nonatomic, copy) NSString *sceneOwnerBundleIdentifier;
@property (nonatomic, retain) NSData *sessionDescriptor;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (nonatomic) long long sessionSceneType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSessionSceneType:(long long)arg1 sessionDescriptor:(id)arg2 sessionIdentifier:(id)arg3 sceneOwnerBundleIdentifier:(id)arg4 metricsRequest:(id)arg5;
- (id)metrics;
- (id)metricsRequest;
- (id)sceneOwnerBundleIdentifier;
- (id)sessionDescriptor;
- (id)sessionIdentifier;
- (long long)sessionSceneType;
- (void)setMetricsRequest:(id)arg1;
- (void)setSceneOwnerBundleIdentifier:(id)arg1;
- (void)setSessionDescriptor:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSessionSceneType:(long long)arg1;

@end
