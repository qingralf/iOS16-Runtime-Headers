/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCUserEventHistoryTrackingConfiguration : NSObject {
    bool  _enabled;
    FCUserEventHistoryPruningPolicies * _pruningPolicies;
}

@property (nonatomic) bool enabled;
@property (nonatomic, retain) FCUserEventHistoryPruningPolicies *pruningPolicies;

- (void).cxx_destruct;
- (bool)enabled;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)pruningPolicies;
- (void)setEnabled:(bool)arg1;
- (void)setPruningPolicies:(id)arg1;

@end