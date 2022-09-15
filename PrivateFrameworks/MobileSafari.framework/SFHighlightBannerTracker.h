/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFHighlightBannerTracker : NSObject {
    NSMutableDictionary * _blockedHighlights;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

+ (id)sharedTracker;

- (void).cxx_destruct;
- (void)_saveOnInteralQueue;
- (void)blockBannerForHighlight:(id)arg1;
- (void)clear;
- (id)init;
- (void)isBannerBlockedForHighlight:(id)arg1 completion:(id /* block */)arg2;
- (void)load;
- (void)unblockBannerForHighlight:(id)arg1;

@end