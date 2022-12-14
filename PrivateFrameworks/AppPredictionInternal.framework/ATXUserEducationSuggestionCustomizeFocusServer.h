/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXUserEducationSuggestionCustomizeFocusServer : NSObject <ATXUserEducationSuggestionModeChangeObserver> {
    ATXUserEducationSuggestionConnector * _connector;
    ATXDNDModeConfigurationClient * _modeConfigurationClient;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithConnector:(id)arg1;
- (void)processModeChangeEvent:(id)arg1;
- (void)sendSuggestion:(id)arg1 eventType:(unsigned long long)arg2;

@end
