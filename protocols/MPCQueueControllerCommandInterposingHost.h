/* Generated by RuntimeBrowser.
 */

@protocol MPCQueueControllerCommandInterposingHost <NSObject>

@required

- (void)autoPlayEnabledDidChange:(bool)arg1;
- (void)emitEventsForAddedSharedListeningContainerInfo:(MPCSharedListeningContainerInfo *)arg1;
- (void)emitEventsForParticipants:(NSArray *)arg1 localUserIdentifier:(NSString *)arg2;
- (void)emitSharedListeningEvent:(MPCSharedListeningEvent *)arg1;
- (void)explicitContentStateDidChange:(long long)arg1;
- (MPPropertySet *)requestedPropertySetForEvents;
- (void)sessionDidEnd;
- (void)sharedCurrentItemChangedToItem:(NSString *)arg1 inSection:(NSString *)arg2 byParticipant:(ICLiveLinkIdentity *)arg3;

@end
