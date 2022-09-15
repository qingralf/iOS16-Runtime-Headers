/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetquality.dylib
 */

@interface CoreAnalyticsNetworkQualityReportImpl : NSObject <NetworkQualityReportImpl> {
    NetworkQualityConfiguration * config;
    NetworkQualityExecutionsReporter * ctx;
    NSMutableDictionary * dict;
    NSString * eventName;
}

- (void).cxx_destruct;
- (void)reportSummary:(id)arg1;
- (void)startReportWithContext:(id)arg1 withConfiguration:(id)arg2;
- (void)visitLatencyTestResult:(id)arg1 withLatencies:(id)arg2;

@end