/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ShazamKit.framework/ShazamKit
 */

@interface SHMatcherResponse : NSObject <NSSecureCoding> {
    NSError * _error;
    bool  _isStillRunningAssociatedRequest;
    SHMatch * _match;
    double  _recordingIntermission;
    double  _retrySeconds;
    SHSignature * _signature;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool isStillRunningAssociatedRequest;
@property (nonatomic, readonly) SHMatch *match;
@property (nonatomic, readonly) double recordingIntermission;
@property (nonatomic, readonly) long long result;
@property (nonatomic, readonly) double retrySeconds;
@property (nonatomic, readonly) SHSignature *signature;

+ (id)errorResponseForSignature:(id)arg1 error:(id)arg2;
+ (id)matchWithRecordingIntermission:(double)arg1 retrySeconds:(double)arg2 match:(id)arg3;
+ (id)noMatchWithRecordingIntermission:(double)arg1 retrySeconds:(double)arg2 signature:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordingIntermission:(double)arg1 retrySeconds:(double)arg2 match:(id)arg3 signature:(id)arg4 stillRunningAssociatedRequest:(bool)arg5 error:(id)arg6;
- (bool)isStillRunningAssociatedRequest;
- (id)match;
- (double)recordingIntermission;
- (long long)result;
- (double)retrySeconds;
- (id)signature;
- (void)validate;

@end