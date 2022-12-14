/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
 */

@interface DDSAssertionTracker : NSObject <DDSAssetTracking> {
    <DDSAssertionDataHandling> * _dataHandler;
    <DDSAssetTrackingDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _trackedAssertionSets;
    NSMutableArray * _trackedAssertions;
}

@property (nonatomic, readonly) <DDSAssertionDataHandling> *dataHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <DDSAssetTrackingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *trackedAssertionSets;
@property (nonatomic, readonly) NSMutableArray *trackedAssertions;

- (void).cxx_destruct;
- (void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
- (id)allAssertions;
- (id)assertionDueForUpdateFrom:(id)arg1 SinceDate:(id)arg2;
- (id)assertionDueForUpdateSinceDate:(id)arg1;
- (id)assertionIDsForClientID:(id)arg1;
- (id)dataHandler;
- (id)delegate;
- (void)didUpdateAssertion:(id)arg1 atDate:(id)arg2;
- (id)init;
- (id)initWithDataHandler:(id)arg1;
- (double)intervalForDownloadFrequency:(long long)arg1;
- (id)queue;
- (void)removeAssertionWithID:(id)arg1;
- (void)resetAssertionDueDates;
- (void)setDelegate:(id)arg1;
- (id)trackedAssertionSets;
- (id)trackedAssertions;
- (id)trackedAssetTypes;

@end
