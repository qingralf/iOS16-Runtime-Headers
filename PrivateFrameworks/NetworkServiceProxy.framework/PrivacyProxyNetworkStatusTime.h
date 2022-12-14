/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface PrivacyProxyNetworkStatusTime : NSObject <NSCopying, NSSecureCoding> {
    PrivacyProxyNetworkStatus * _networkStatus;
    NSDate * _networkStatusEndTime;
    NSDate * _networkStatusStartTime;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
