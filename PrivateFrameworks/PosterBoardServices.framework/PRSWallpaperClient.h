/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices
 */

@interface PRSWallpaperClient : NSObject <PRSWallpaperObserverInitializing> {
    unsigned long long  _changeVersions;
    BSServiceConnection<BSServiceConnectionHost> * _connection;
    NSString * _description;
    bool  _initialized;
    PRSServerPosterPath * _lastPaths;
    bool  _needsSandboxExtensions;
    unsigned long long  _observed;
    <PRSWallpaperObserving> * _proxy;
    PRSWallpaperPublisher * _publisher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)initializeWithKnownIdentities:(id)arg1;

@end
