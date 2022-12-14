/* Generated by RuntimeBrowser.
 */

@protocol MFQueueControlling

@required

- (bool)canSkipInDirection:(long long)arg1 fromItem:(id <MFQueuePlayerItem>)arg2;
- (<MFQueuePlayerItem> *)itemToFollowItem:(id <MFQueuePlayerItem>)arg1 direction:(long long)arg2 distance:(long long)arg3 reason:(long long)arg4;
- (<MFQueuePlayerItem> *)queueItemForPlayerItem:(id <MFPlayerItem>)arg1 allowReuse:(bool)arg2;
- (void)updatePlayerPlaybackCoordinator:(AVPlayerPlaybackCoordinator *)arg1;

@end
