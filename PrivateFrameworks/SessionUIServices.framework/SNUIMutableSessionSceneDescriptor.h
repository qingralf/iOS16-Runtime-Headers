/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SessionUIServices.framework/SessionUIServices
 */

@interface SNUIMutableSessionSceneDescriptor : SNUISessionSceneDescriptor {
    SNUIActivityMetricsRequest * metricsRequest;
    NSString * sessionIdentifier;
    long long  sessionSceneType;
}

@property (nonatomic, retain) SNUISessionSceneMetrics *metrics;
@property (nonatomic, retain) SNUIActivityMetricsRequest *metricsRequest;
@property (nonatomic, copy) NSString *sceneOwnerBundleIdentifier;
@property (nonatomic, copy) NSData *sessionDescriptor;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic) long long sessionSceneType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)metricsRequest;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sessionIdentifier;
- (long long)sessionSceneType;
- (void)setMetricsRequest:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSessionSceneType:(long long)arg1;

@end
