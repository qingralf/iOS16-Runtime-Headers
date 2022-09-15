/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
 */

@interface SetRepeatStateIntent : INIntent

@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic, copy) NSArray *deviceQueries;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long repeatState;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end