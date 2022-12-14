/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface SearchSuggestionProvider : CompletionProvider <NSURLSessionDataDelegate> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    WBSCompletionQuery * _currentCompletionQuery;
    NSString * _currentSearchString;
    <LoadProgressObserver> * _loadProgressObserver;
    NSMutableSet * _pendingTasks;
    NSURLSession * _session;
    UniversalSearchSession * _universalSearchSession;
    NSString * _userAgentString;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <LoadProgressObserver> *loadProgressObserver;
@property (nonatomic, retain) NSMutableSet *pendingTasks;
@property (readonly) Class superclass;
@property (nonatomic) UniversalSearchSession *universalSearchSession;

- (void).cxx_destruct;
- (void)_didFinishSearchTask:(id)arg1;
- (void)_willStartSearchTask:(id)arg1;
- (id)completionsForQuery:(id)arg1;
- (id)connectionQueue;
- (void)dealloc;
- (id)init;
- (id)loadProgressObserver;
- (unsigned long long)maximumCachedCompletionCount;
- (id)pendingTasks;
- (void)setConnectionQueue:(id)arg1;
- (void)setLoadProgressObserver:(id)arg1;
- (void)setPendingTasks:(id)arg1;
- (void)setQueryToComplete:(id)arg1;
- (void)setUniversalSearchSession:(id)arg1;
- (void)stop;
- (id)suggestionStringsForData:(id)arg1;
- (id)universalSearchSession;

@end
