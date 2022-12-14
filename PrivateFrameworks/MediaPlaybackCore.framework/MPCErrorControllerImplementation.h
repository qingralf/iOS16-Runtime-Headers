/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCErrorControllerImplementation : NSObject <MFErrorController> {
    <MPCExternalPlaybackRouter> * _externalPlaybackRouter;
    NSMutableSet * _failedItemsIdentifiers;
    MPAVItem * _lastItemUsedForErrorResolution;
    MPCPlaybackEngine * _playbackEngine;
    MPCMediaFoundationTranslator * _translator;
    bool  itemsHavePlayed;
    NSString * preferredFirstContentItemID;
}

@property (nonatomic, retain) <MPCExternalPlaybackRouter> *externalPlaybackRouter;
@property (nonatomic, retain) NSMutableSet *failedItemsIdentifiers;
@property (nonatomic) bool itemsHavePlayed;
@property (nonatomic, retain) MPAVItem *lastItemUsedForErrorResolution;
@property (nonatomic) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, copy) NSString *preferredFirstContentItemID;
@property (nonatomic, readonly) MPCMediaFoundationTranslator *translator;

- (void).cxx_destruct;
- (void)_notifyObserversForError:(id)arg1 item:(id)arg2;
- (void)_playbackFailedWithError:(id)arg1 item:(id)arg2 canResolve:(bool)arg3 proposedResolution:(long long)arg4 completion:(id /* block */)arg5;
- (long long)_resolutionForPlaybackError:(id)arg1 item:(id)arg2;
- (bool)canHandleFirstItemFailure;
- (id)externalPlaybackRouter;
- (id)failedItemsIdentifiers;
- (id)initWithPlaybackEngine:(id)arg1 translator:(id)arg2 externalPlaybackRouter:(id)arg3;
- (bool)isAssetUnavailableFailure:(id)arg1;
- (bool)isFirstItemFailure:(id)arg1 item:(id)arg2;
- (bool)isLeaseTakenError:(id)arg1;
- (bool)isQueueLoadingFailure:(id)arg1;
- (bool)isUnrecoverableAssetLoadingError:(id)arg1;
- (bool)itemsHavePlayed;
- (id)lastItemUsedForErrorResolution;
- (id)playbackEngine;
- (id)preferredFirstContentItemID;
- (void)reportCriticalError:(id)arg1 forItem:(id)arg2;
- (void)reset;
- (void)resolveError:(id)arg1 forItem:(id)arg2 completion:(id /* block */)arg3;
- (void)setExternalPlaybackRouter:(id)arg1;
- (void)setFailedItemsIdentifiers:(id)arg1;
- (void)setItemsHavePlayed:(bool)arg1;
- (void)setLastItemUsedForErrorResolution:(id)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (void)setPreferredFirstContentItemID:(id)arg1;
- (bool)shouldHandleFirstItemFailure:(id)arg1 item:(id)arg2;
- (id)translator;

@end
