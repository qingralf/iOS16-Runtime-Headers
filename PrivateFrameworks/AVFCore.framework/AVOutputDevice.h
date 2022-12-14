/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVOutputDevice : NSObject <APKOutputDeviceProtocol> {
    AVOutputDeviceInternal * _outputDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (bool)canSyncController:(struct OpaqueAPSyncController { }*)arg1 supportRoute:(struct __CFDictionary { }*)arg2;
+ (void)initialize;
+ (void)localDeviceDidChange;
+ (void)localDeviceWithCompletion:(id /* block */)arg1;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1 routingContextFactory:(id)arg2;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1 volumeController:(struct OpaqueFigVolumeControllerState { }*)arg2;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { }*)arg1;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { }*)arg1 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { }*)arg2;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { }*)arg1 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { }*)arg2 syncController:(struct OpaqueAPSyncController { }*)arg3;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { }*)arg1 routingContextFactory:(id)arg2;
+ (id)outputDeviceWithRouteDescriptor:(const struct __CFDictionary { }*)arg1 syncController:(struct OpaqueAPSyncController { }*)arg2;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { }*)arg1 volumeController:(struct OpaqueFigVolumeControllerState { }*)arg2;
+ (bool)prefersRouteDescriptors;
+ (id)sharedLocalDevice;

- (long long)HAPConformance;
- (id)ID;
- (id)activatedDeviceClusterMembers;
- (id)airPlayProperties;
- (id)allClusterMembers;
- (bool)allowsHeadTrackedSpatialAudio;
- (bool)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (id)availableBluetoothListeningModes;
- (float)batteryLevel;
- (bool)canAccessAppleMusic;
- (bool)canAccessRemoteAssets;
- (bool)canAccessiCloudMusicLibrary;
- (bool)canBeGroupLeader;
- (bool)canBeGrouped;
- (bool)canCommunicateWithAllLogicalDeviceMembers;
- (bool)canFetchMediaDataFromSender;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (bool)canRelayCommunicationChannel;
- (bool)canSetVolume;
- (id)clusterID;
- (long long)clusterType;
- (id)clusteredDeviceDescriptions;
- (id)communicationChannelDelegate;
- (void)communicationChannelManager:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)communicationChannelManager:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
- (void)configureUsingBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)configureUsingBlock:(id /* block */)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)configuredClusterSize;
- (id)connectedPairedDevices;
- (id)currentBluetoothListeningMode;
- (void)dealloc;
- (void)decreaseVolumeByCount:(long long)arg1;
- (id)description;
- (id)deviceClusterMembers;
- (unsigned long long)deviceFeatures;
- (id)deviceID;
- (id)deviceName;
- (long long)deviceSubType;
- (long long)deviceType;
- (id)figEndpointOutputDeviceImpl;
- (id)firmwareVersion;
- (double)frecencyScore;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (bool)hasBatteryLevel;
- (unsigned long long)hash;
- (id)headTrackedSpatialAudioMode;
- (id)identifyingMACAddress;
- (id)impl;
- (void)increaseVolumeByCount:(long long)arg1;
- (id)init;
- (id)initWithOutputDeviceImpl:(id)arg1 commChannelManager:(id)arg2;
- (bool)isAppleAccessory;
- (bool)isClusterLeader;
- (bool)isEligibleToBePredictedOutputDevice;
- (bool)isEqual:(id)arg1;
- (bool)isGroupLeader;
- (bool)isHeadTrackedSpatialAudioActive;
- (bool)isInUseByPairedDevice;
- (bool)isLogicalDeviceLeader;
- (id)logicalDeviceID;
- (id)manufacturer;
- (id)modelID;
- (id)modelSpecificInformation;
- (id)name;
- (bool)onlyAllowsConnectionsFromPeersInHomeGroup;
- (void)openCommunicationChannelToDestination:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openCommunicationChannelWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)outputDeviceImplDidChangeCanChangeVolume:(id)arg1;
- (void)outputDeviceImplDidChangeProposedGroupID:(id)arg1;
- (void)outputDeviceImplDidChangeVolume:(id)arg1;
- (void)outputDeviceImplDidChangeVolumeControlType:(id)arg1;
- (bool)participatesInGroupPlayback;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (bool)producesLowFidelityAudio;
- (id)proposedGroupID;
- (bool)requiresAuthorization;
- (id)serialNumber;
- (bool)setAllowsHeadTrackedSpatialAudio:(bool)arg1 error:(id*)arg2;
- (void)setCommunicationChannelDelegate:(id)arg1;
- (void)setCurrentBluetoothListeningMode:(id)arg1;
- (bool)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2;
- (bool)setHeadTrackedSpatialAudioMode:(id)arg1 error:(id*)arg2;
- (void)setSecondDisplayEnabled:(bool)arg1;
- (void)setSecondDisplayMode:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setVolume:(float)arg1;
- (bool)supportsBluetoothSharing;
- (bool)supportsBufferedAirPlay;
- (bool)supportsFitnessDataDestination;
- (bool)supportsHeadTrackedSpatialAudio;
- (void)updateFrecencyScore;
- (float)volume;
- (long long)volumeControlType;

// Image: /System/Library/PrivateFrameworks/AirPlayKit.framework/AirPlayKit

- (void)openCommunicationChannelToDestination:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)supportsCommunicationChannelToDestination:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (bool)shouldRestrictConnectionWithUserPrivilege:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (bool)shouldRestrictConnectionWithUserPrivilege:(long long)arg1;

@end
