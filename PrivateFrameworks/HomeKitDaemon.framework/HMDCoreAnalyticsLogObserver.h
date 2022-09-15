/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDCoreAnalyticsLogObserver : HMFObject <HMFLogging, HMMLogEventObserver> {
    <HMDCoreAnalyticsLogObserverDataSource> * _dataSource;
    NSDictionary * _homeConfigurationCommonDimensions;
}

@property (nonatomic, readonly) <HMDCoreAnalyticsLogObserverDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *homeConfigurationCommonDimensions;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addAccessoryDetailsFromLogEvent:(id)arg1 toEventDictionary:(id)arg2;
- (void)addDeviceCapabilitiesAndEnablementsCommonDimensionsToEventDictionary:(id)arg1;
- (void)addErrorDetailsFromLogEvent:(id)arg1 toEventDictionary:(id)arg2;
- (void)addEventDurationInMillisecondsFromLogEvent:(id)arg1 toEventDictionary:(id)arg2;
- (void)addHistogrammedCommonConfigurationDimensionsForLogEvent:(id)arg1 toEventDictionary:(id)arg2;
- (void)addHomesCategorizationCommonDimensionToEventDictionary:(id)arg1;
- (id)dataSource;
- (id)dictionaryFromEvent:(id)arg1;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)homeConfigurationCommonDimensions;
- (id)initWithDataSource:(id)arg1;
- (void)setHomeConfigurationCommonDimensions:(id)arg1;

@end