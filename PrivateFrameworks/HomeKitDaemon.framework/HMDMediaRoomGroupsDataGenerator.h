/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDMediaRoomGroupsDataGenerator : NSObject <HMDMediaGroupsAggregateDataGenerator, HMFLogging> {
    <HMDMediaRoomGroupsDataGeneratorDataSource> * _dataSource;
}

@property <HMDMediaRoomGroupsDataGeneratorDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)aggregateDataWithDestinations:(id)arg1 controllers:(id)arg2 groups:(id)arg3;
- (id)dataSource;
- (bool)destination:(id)arg1 isInRoom:(id)arg2;
- (id)destinationIdentifiersAssignedToRoom:(id)arg1 destinations:(id)arg2;
- (id)roomForDestination:(id)arg1;
- (id)roomGroupForRoom:(id)arg1 destinations:(id)arg2;
- (id)rooms;
- (void)setDataSource:(id)arg1;

@end