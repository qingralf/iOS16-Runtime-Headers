/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDAWDLogEventObserver : HMFObject <HMMLogEventObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_submitAWDMetric:(id)arg1 type:(unsigned int)arg2;
+ (void)initialize;
+ (id)sharedAWDServerConnection;
+ (id)stringForAWDMetricType:(unsigned int)arg1;

- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)init;

@end
