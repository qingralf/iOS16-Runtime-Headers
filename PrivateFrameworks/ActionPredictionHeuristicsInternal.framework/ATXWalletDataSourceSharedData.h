/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

@interface ATXWalletDataSourceSharedData : NSObject {
    bool  _hasEmptyWalletPasses;
    NSDate * _lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_passesDidChange;
- (bool)hasEmptyWalletPasses;
- (id)init;
- (void)setHasEmptyWalletPasses:(bool)arg1;

@end
