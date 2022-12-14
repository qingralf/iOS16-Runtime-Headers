/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaSuggestionPreferences : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _disabledBundlesForContexts;
    NSMutableDictionary * _globalDisplayPreferencesForContexts;
    id /* block */  _userDisplayPreferencesDidChangeCallback;
}

@property (nonatomic, readonly) NSArray *allContexts;
@property (nonatomic, copy) id /* block */ userDisplayPreferencesDidChangeCallback;

- (void).cxx_destruct;
- (id)allContexts;
- (void)dealloc;
- (id)description;
- (id)disabledBundleIdentifiersInContext:(id)arg1;
- (id)init;
- (void)setUserDisplayPreferencesDidChangeCallback:(id /* block */)arg1;
- (bool)suggestionsDisabledInContext:(id)arg1;
- (id /* block */)userDisplayPreferencesDidChangeCallback;

@end
