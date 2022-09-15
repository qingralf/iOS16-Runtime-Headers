/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXWidgetLocationAuthorizationTracker : NSObject <CLLocationManagerDelegate> {
    NSNumber * _atomicNullableIsAuthorizedForWidgetUpdates;
    NSString * _containerBundleIdentifier;
    CLLocationManager * _manager;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _sem;
}

@property (retain) NSNumber *atomicNullableIsAuthorizedForWidgetUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)atomicNullableIsAuthorizedForWidgetUpdates;
- (id)initWithContainerBundleIdentifier:(id)arg1;
- (bool)isAuthorizedForWidgetUpdates;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)setAtomicNullableIsAuthorizedForWidgetUpdates:(id)arg1;

@end