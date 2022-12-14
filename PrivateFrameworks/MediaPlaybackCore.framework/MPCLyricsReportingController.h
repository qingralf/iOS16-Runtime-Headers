/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCLyricsReportingController : NSObject <ICEnvironmentMonitorObserver> {
    MPCReportingPlaybackObserver * _reportingPlaybackObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPCReportingPlaybackObserver *reportingPlaybackObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (id)init;
- (void)recordLyricsViewEvent:(id)arg1;
- (id)reportingPlaybackObserver;
- (void)setReportingPlaybackObserver:(id)arg1;

@end
