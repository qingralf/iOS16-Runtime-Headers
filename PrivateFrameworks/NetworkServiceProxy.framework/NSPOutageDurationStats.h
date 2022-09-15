/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPOutageDurationStats : NSPProxyAnalytics {
    unsigned long long  _outageDurationSec;
    unsigned long long  _outageType;
}

@property (nonatomic) unsigned long long outageDurationSec;
@property (nonatomic) unsigned long long outageType;

- (id)analyticsDict;
- (id)eventName;
- (unsigned long long)outageDurationSec;
- (unsigned long long)outageType;
- (id)outageTypeToString;
- (void)setOutageDurationSec:(unsigned long long)arg1;
- (void)setOutageType:(unsigned long long)arg1;

@end