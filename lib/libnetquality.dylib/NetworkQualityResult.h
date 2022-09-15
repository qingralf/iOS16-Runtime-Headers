/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetquality.dylib
 */

@interface NetworkQualityResult : NSObject <NSCopying> {
    NSNumber * _downlinkBytesTransferred;
    NetworkQualityValue * _downlinkCapacity;
    NSNumber * _downlinkFlows;
    NetworkQualityValue * _downlinkResponsiveness;
    NSNumber * _downloadCapacity;
    NSNumber * _downloadResponsiveness;
    long long  _downloadResponsivenessRating;
    NSError * _error;
    NSNumber * _idleLatency;
    NSDictionary * _idleLatencyValues;
    long long  _index;
    NSString * _interfaceName;
    NetworkQualityValue * _latency;
    NSDate * _timestamp;
    NSNumber * _uplinkBytesTransferred;
    NetworkQualityValue * _uplinkCapacity;
    NSNumber * _uplinkFlows;
    NetworkQualityValue * _uplinkResponsiveness;
    NSNumber * _uploadCapacity;
    NSNumber * _uploadResponsiveness;
    long long  _uploadResponsivenessRating;
    NSDictionary * _urlSessionMetrics;
    NSDictionary * _workingLatencyValues;
}

@property (copy) NSNumber *downlinkBytesTransferred;
@property (copy) NetworkQualityValue *downlinkCapacity;
@property (copy) NSNumber *downlinkFlows;
@property (copy) NetworkQualityValue *downlinkResponsiveness;
@property (copy) NSNumber *downloadCapacity;
@property (copy) NSNumber *downloadResponsiveness;
@property long long downloadResponsivenessRating;
@property (copy) NSError *error;
@property (copy) NSNumber *idleLatency;
@property (copy) NSDictionary *idleLatencyValues;
@property long long index;
@property (copy) NSString *interfaceName;
@property (copy) NetworkQualityValue *latency;
@property (copy) NSDate *timestamp;
@property (copy) NSNumber *uplinkBytesTransferred;
@property (copy) NetworkQualityValue *uplinkCapacity;
@property (copy) NSNumber *uplinkFlows;
@property (copy) NetworkQualityValue *uplinkResponsiveness;
@property (copy) NSNumber *uploadCapacity;
@property (copy) NSNumber *uploadResponsiveness;
@property long long uploadResponsivenessRating;
@property (copy) NSDictionary *urlSessionMetrics;
@property (copy) NSDictionary *workingLatencyValues;

+ (long long)ratingForResponsivenessScore:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)downlinkBytesTransferred;
- (id)downlinkCapacity;
- (id)downlinkFlows;
- (id)downlinkResponsiveness;
- (id)downloadCapacity;
- (id)downloadResponsiveness;
- (long long)downloadResponsivenessRating;
- (id)error;
- (void)finalizeResult;
- (id)idleLatency;
- (id)idleLatencyValues;
- (long long)index;
- (id)init;
- (id)interfaceName;
- (id)latency;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setDownlinkBytesTransferred:(id)arg1;
- (void)setDownlinkCapacity:(id)arg1;
- (void)setDownlinkFlows:(id)arg1;
- (void)setDownlinkResponsiveness:(id)arg1;
- (void)setDownloadCapacity:(id)arg1;
- (void)setDownloadResponsiveness:(id)arg1;
- (void)setDownloadResponsivenessRating:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setIdleLatency:(id)arg1;
- (void)setIdleLatencyValues:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setLatency:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUplinkBytesTransferred:(id)arg1;
- (void)setUplinkCapacity:(id)arg1;
- (void)setUplinkFlows:(id)arg1;
- (void)setUplinkResponsiveness:(id)arg1;
- (void)setUploadCapacity:(id)arg1;
- (void)setUploadResponsiveness:(id)arg1;
- (void)setUploadResponsivenessRating:(long long)arg1;
- (void)setUrlSessionMetrics:(id)arg1;
- (void)setWorkingLatencyValues:(id)arg1;
- (id)timestamp;
- (id)uplinkBytesTransferred;
- (id)uplinkCapacity;
- (id)uplinkFlows;
- (id)uplinkResponsiveness;
- (id)uploadCapacity;
- (id)uploadResponsiveness;
- (long long)uploadResponsivenessRating;
- (id)urlSessionMetrics;
- (id)workingLatencyValues;

@end