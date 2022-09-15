/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRemoteVideoManager : NSObject <VCRemoteVideoManagerDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _queuesForStreamTokenDict;
    NSMutableDictionary * _stateCacheForStreamTokenDict;
    NSObject<OS_dispatch_queue> * _xpcCallbackQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultManager;

- (void)cleanupDictionaries;
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
- (id)contextIdForStreamTokenWithArguments:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
- (void)dispatchedConnectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
- (void)dispatchedDidReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
- (void)dispatchedNotifyCachedStateForStreamToken:(id)arg1;
- (void)dispatchedRemoteMediaDidStall:(bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoDidDegrade:(bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoDidPause:(bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoDidSuspend:(bool)arg1 streamToken:(long long)arg2;
- (bool)doesQueueExistForStreamToken:(id)arg1;
- (id)getQueueForStreamToken:(unsigned int)arg1 videoMode:(int)arg2;
- (id)init;
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2;
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2 imageQueueProtected:(bool)arg3;
- (void)notifyCachedStateForStreamToken:(id)arg1;
- (bool)queueExistsForStreamToken:(id)arg1;
- (void)registerBlocksForService;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (void)remoteMediaDidStall:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidSuspend:(bool)arg1 streamToken:(long long)arg2;
- (id)setLayerBoundsForStreamTokenWithArguments:(id)arg1 error:(id*)arg2;
- (unsigned int)slotForStreamToken:(long long)arg1 videoMode:(int)arg2;

@end