/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Announce.framework/Announce
 */

@interface ANLocalPlaybackSession : NSObject <ANLocalPlaybackSessionServiceInterfaceDelegate> {
    NSXPCConnection * _connection;
    <ANLocalPlaybackSessionDelegate> * _delegate;
    NSUUID * _endpointIdentifier;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANLocalPlaybackSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *endpointIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *lastPlayedAnnouncementInfo;
@property (nonatomic, readonly) unsigned long long playbackState;
@property (readonly) Class superclass;

+ (id)stringForPlaybackState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_start;
- (void)announcementsStateUpdate:(unsigned long long)arg1;
- (void)announcementsWillStartPlaying:(unsigned long long)arg1;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveAnnouncement:(id)arg1 forGroupID:(id)arg2;
- (id)endpointIdentifier;
- (id)init;
- (id)initWithEndpointIdentifier:(id)arg1;
- (void)invalidate;
- (id)lastPlayedAnnouncementInfo;
- (void)lastPlayedAnnouncementInfoWithCompletion:(id /* block */)arg1;
- (void)nextAnnouncementWithCompletionHandler:(id /* block */)arg1;
- (void)playAnnouncements;
- (void)playAnnouncementsWithIDs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)playAnnouncementsWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)playAnnouncementsWithOptions:(unsigned long long)arg1 startingAt:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)playbackState;
- (void)previousAnnouncementWithCompletionHandler:(id /* block */)arg1;
- (void)sendPlaybackCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)stopPlayingAnnouncements;
- (void)stopPlayingAnnouncementsWithCompletionHandler:(id /* block */)arg1;

@end