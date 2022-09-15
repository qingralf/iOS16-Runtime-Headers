/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRNetworkCommissioningClusterScanNetworksResponseParams : NSObject {
    NSString * _debugText;
    NSNumber * _networkingStatus;
    NSArray * _threadScanResults;
    NSNumber * _timedInvokeTimeoutMs;
    NSArray * _wiFiScanResults;
}

@property (nonatomic, retain) NSString *debugText;
@property (nonatomic, retain) NSNumber *networkingStatus;
@property (nonatomic, retain) NSArray *threadScanResults;
@property (nonatomic, retain) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, retain) NSArray *wiFiScanResults;

- (void).cxx_destruct;
- (id)debugText;
- (id)description;
- (id)init;
- (id)networkingStatus;
- (void)setDebugText:(id)arg1;
- (void)setNetworkingStatus:(id)arg1;
- (void)setThreadScanResults:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setWiFiScanResults:(id)arg1;
- (id)threadScanResults;
- (id)timedInvokeTimeoutMs;
- (id)wiFiScanResults;

@end