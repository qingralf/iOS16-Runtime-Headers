/* Generated by RuntimeBrowser.
 */

@protocol HMDCoreAnalyticsLogObserverDataSource

@required

- (NSString *)PRKitDateString;
- (NSString *)PRKitUUIDString;
- (HMDConfigurationLogEvent *)cachedConfiguration;
- (HMDHomeConfigurationLogEvent *)cachedHomeConfigurationForHomeUUID:(NSUUID *)arg1;
- (NSArray *)homes;

@end