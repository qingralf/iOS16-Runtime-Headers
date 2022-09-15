/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDMediaGroupsAggregator : HMFObject <HMDMediaGroupsAggregatorMessengerDelegate, HMDMediaRoomGroupsDataGeneratorDataSource, HMDMediaSystemsAggregateDataGeneratorDataSource, HMDTimerProvider, HMEEventConsumer, HMFLogging, HMFTimerDelegate> {
    HMDMediaGroupsAggregateData * _aggregateData;
    <HMDMediaGroupsAggregatorDataSource> * _dataSource;
    <HMDMediaGroupsAggregatorDelegate> * _delegate;
    NSMutableDictionary * _destinationControllersData;
    NSMutableDictionary * _destinations;
    <HMEEventForwarder> * _eventForwarder;
    <HMELastEventStoreReadHandle> * _eventStoreReadHandle;
    <HMDFeaturesDataSource> * _featuresDataSource;
    NSArray * _generators;
    HMDMediaGroupsLocalDataStorage * _groupLocalDataStorage;
    NSUUID * _identifier;
    bool  _isRunning;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDMediaGroupsAggregatorMessenger * _messenger;
    <HMESubscriptionProviding> * _subscriptionProvider;
    <HMDTimerProvider> * _timerProvider;
    HMFTimer * _warmUpTimer;
}

@property (retain) HMDMediaGroupsAggregateData *aggregateData;
@property <HMDMediaGroupsAggregatorDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaGroupsAggregatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) <HMEEventForwarder> *eventForwarder;
@property (readonly) <HMELastEventStoreReadHandle> *eventStoreReadHandle;
@property (readonly) <HMDFeaturesDataSource> *featuresDataSource;
@property (readonly) NSArray *generators;
@property (retain) HMDMediaGroupsLocalDataStorage *groupLocalDataStorage;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMDMediaGroupsAggregatorMessenger *messenger;
@property (readonly) <HMESubscriptionProviding> *subscriptionProvider;
@property (readonly) Class superclass;
@property <HMDTimerProvider> *timerProvider;
@property (retain) HMFTimer *warmUpTimer;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)aggregateData;
- (id)aggregateDataTopic;
- (id)appleMediaAccessories;
- (void)clearCachedData;
- (void)clearCachedDataForParticipantAccessoryUUID:(id)arg1;
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 primaryResidentChangeMonitor:(id)arg4;
- (id)createGenerators;
- (id)dataSource;
- (id)delegate;
- (id)destinationControllersData;
- (id)destinations;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (void)didReceiveUpdateAssociatedGroupRequestMessage:(id)arg1 withGroupIdentifier:(id)arg2 associatedGroupIdentifier:(id)arg3 messenger:(id)arg4;
- (id)eventForwarder;
- (id)eventSource;
- (id)eventStoreReadHandle;
- (id)featuresDataSource;
- (void)forwardAggregateData;
- (id)generators;
- (id)groupLocalDataStorage;
- (id)groups;
- (void)handleAccessoryChangedRoomNotification:(id)arg1;
- (void)handleHomeAddedAccessoryNotification:(id)arg1;
- (void)handleHomeRemovedAccessoryNotification:(id)arg1;
- (void)handleParticipantDataEvent:(id)arg1 accessoryUUID:(id)arg2;
- (void)handleParticipantDestinationControllerEventData:(id)arg1;
- (void)handleParticipantDestinationEventData:(id)arg1 backedUpGroupsEventData:(id)arg2 participantAccessoryUUID:(id)arg3;
- (void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 messenger:(id)arg2 eventForwarder:(id)arg3 subscriptionProvider:(id)arg4 eventStoreReadHandle:(id)arg5 groupsLocalDataStorage:(id)arg6;
- (id)initWithIdentifier:(id)arg1 messenger:(id)arg2 eventForwarder:(id)arg3 subscriptionProvider:(id)arg4 eventStoreReadHandle:(id)arg5 groupsLocalDataStorage:(id)arg6 timerProvider:(id)arg7 featuresDataSource:(id)arg8;
- (bool)isRunning;
- (id)localGroupWithIdentifier:(id)arg1;
- (id)logIdentifier;
- (id)messenger;
- (void)notifyOfStoppedState;
- (void)notifyOfUpdateAggregateData:(id)arg1;
- (id)participantAccessoryUUIDFromTopic:(id)arg1;
- (id)participantDataTopicForAccessory:(id)arg1;
- (void)refreshAggregateData;
- (void)refreshRunningStateUsingPrimaryResidentChangeMonitor:(id)arg1;
- (void)registerForEvents;
- (void)registerForEventsForAccessory:(id)arg1;
- (void)registerForNotificationsWithHome:(id)arg1 notificationCenter:(id)arg2 primaryResidentChangeMonitor:(id)arg3;
- (bool)removeDestinationControllerDataWithParentIdentifier:(id)arg1;
- (bool)removeDestinationWithParentIdentifier:(id)arg1;
- (void)removeGroupWithIdentifier:(id)arg1;
- (id)roomForAllDestinationParentIdentifiers:(id)arg1 mediaSystemsAggregateDataGenerator:(id)arg2;
- (id)roomForDestination:(id)arg1 mediaRoomGroupsDataGenerator:(id)arg2;
- (id)roomsForMediaRoomGroupsDataGenerator:(id)arg1;
- (void)run;
- (void)setAggregateData:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDestinationControllerData:(id)arg1;
- (void)setGroupLocalDataStorage:(id)arg1;
- (void)setTimerProvider:(id)arg1;
- (void)setWarmUpTimer:(id)arg1;
- (bool)shouldWarmUp;
- (void)startWarmUpTimer;
- (void)stop;
- (void)stopWarmUpTimer;
- (id)subscriptionProvider;
- (void)timerDidFire:(id)arg1;
- (id)timerProvider;
- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (void)unregisterForAllEvents;
- (void)unregisterForEventsForAccessory:(id)arg1;
- (bool)updateAssociatedGroupIdentifier:(id)arg1 forGroupIdentifier:(id)arg2 error:(id*)arg3;
- (void)updateGroup:(id)arg1;
- (void)updateGroup:(id)arg1 participantAccessoryUUIDs:(id)arg2;
- (id)warmUpTimer;

@end