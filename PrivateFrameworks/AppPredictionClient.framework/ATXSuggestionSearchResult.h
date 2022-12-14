/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXSuggestionSearchResult : SFSearchResult <ATXSuggestionSearchResultProtocol, NSCopying, NSSecureCoding> {
    NSUUID * _blendingModelUICacheUpdateUUID;
    ATXProactiveSuggestion * _proactiveSuggestion;
}

@property (nonatomic, retain) NSUUID *blendingModelUICacheUpdateUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ATXProactiveSuggestion *proactiveSuggestion;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendingModelUICacheUpdateUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)proactiveSuggestion;
- (void)setBlendingModelUICacheUpdateUUID:(id)arg1;
- (void)setProactiveSuggestion:(id)arg1;
- (void)setRequestedTopic:(id)arg1;

@end
