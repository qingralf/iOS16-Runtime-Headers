/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface ReadingListCompletionProvider : CompletionProvider {
    unsigned int  _maxResults;
    bool  _onlyIncludeAvailableOffline;
    NSString * _stringToComplete;
}

@property (nonatomic, readonly) bool onlyIncludeAvailableOffline;

- (void).cxx_destruct;
- (id)initWithMaximumNumberOfCompletions:(unsigned int)arg1 onlyIncludeAvailableOffline:(bool)arg2;
- (unsigned long long)maximumCachedCompletionCount;
- (bool)onlyIncludeAvailableOffline;
- (void)setQueryToComplete:(id)arg1;

@end
