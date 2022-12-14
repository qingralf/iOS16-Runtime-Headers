/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackEngineEventStream : NSObject {
    NSCountedSet * _cacheHits;
    NSCountedSet * _cacheMisses;
    NSMutableArray * _cachedEvents;
    MSVSQLDatabase * _database;
    NSHashTable * _deferralAssertions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deferralAssertionsLock;
    NSString * _engineID;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _scheduledFlushes;
    NSMutableArray * _subscriptions;
    <MPCPlabackEngineEventStreamTestingDelegate> * _testingDelegate;
}

@property (nonatomic, readonly) NSString *engineID;
@property (nonatomic, readonly) MPCPlaybackEngineEvent *lastEvent;
@property (nonatomic) <MPCPlabackEngineEventStreamTestingDelegate> *testingDelegate;

- (void).cxx_destruct;
- (void)addConsumer:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)emitEventType:(id)arg1 payload:(id)arg2;
- (void)emitEventType:(id)arg1 payload:(id)arg2 atTime:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; double x5; })arg3;
- (id)engineID;
- (id)eventDeliveryDeferralAssertionForReason:(id)arg1;
- (id)eventDeliveryDeferralAssertionForReason:(id)arg1 timeout:(double)arg2;
- (void)flushEvents;
- (void)flushEventsWithConsumer:(id)arg1 fromTimestamp:(unsigned long long)arg2 untilTimestamp:(unsigned long long)arg3;
- (id)initWithDatabaseCreationBlock:(id /* block */)arg1;
- (id)initWithParameters:(id)arg1;
- (void)invalidate;
- (id)lastEvent;
- (id)lastEventsWithCount:(long long)arg1;
- (void)removeConsumer:(id)arg1;
- (void)resetConsumerEventDeliveryToTimestamp:(unsigned long long)arg1;
- (void)setMaximumEventDeliveryTimestamp:(unsigned long long)arg1;
- (void)setTestingDelegate:(id)arg1;
- (id)testingDelegate;

@end
