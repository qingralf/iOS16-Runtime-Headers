/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXUserEducationSuggestion : NSObject <ATXUserEducationSuggestion, NSSecureCoding> {
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRandomUUID;
- (id)initWithUUID:(id)arg1;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)logFeedback:(id)arg1;
- (Class)metricClass;
- (unsigned long long)readSuggestionState;
- (bool)suggestionWasAlreadyDismissed;
- (bool)suggestionWasAlreadyShown;
- (id)userDefaults;
- (id)userDefaultsKeyForTrackingSuggestionState;
- (void)writeSuggestionState:(unsigned long long)arg1;

@end