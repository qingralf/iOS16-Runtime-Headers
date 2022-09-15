/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDAccessorySoftwareUpdateApplyEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _advertisedDuration;
    HMDAccessoryMetricVendorDetails * _metricVendorDetails;
    HMFSoftwareVersion * _stagedVersion;
    long long  _status;
    unsigned long long  _totalAllowedDuration;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (readonly) unsigned long long advertisedDuration;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool logEventWithAppendedCommonDimensions;
@property (readonly) HMDAccessoryMetricVendorDetails *metricVendorDetails;
@property (nonatomic, readonly) NSDictionary *serializedEvent;
@property (readonly) HMFSoftwareVersion *stagedVersion;
@property (readonly) long long status;
@property (readonly) unsigned long long totalAllowedDuration;

+ (id)eventWithMetricVendorDetails:(id)arg1 stagedVersion:(id)arg2 advertisedDuration:(unsigned long long)arg3 totalAllowedDuration:(unsigned long long)arg4 status:(long long)arg5;

- (void).cxx_destruct;
- (unsigned long long)advertisedDuration;
- (id)eventName;
- (id)initWithDetails:(id)arg1 stagedVersion:(id)arg2 advertisedDuration:(unsigned long long)arg3 totalAllowedDuration:(unsigned long long)arg4 status:(long long)arg5;
- (id)metricVendorDetails;
- (id)serializedEvent;
- (id)stagedVersion;
- (long long)status;
- (unsigned long long)totalAllowedDuration;

@end