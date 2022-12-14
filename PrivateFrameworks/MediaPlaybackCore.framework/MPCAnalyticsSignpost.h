/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCAnalyticsSignpost : NSObject {
    MSVBlockGuard * _guard;
    unsigned long long  _identifier;
}

@property (nonatomic, retain) MSVBlockGuard *guard;
@property (nonatomic) unsigned long long identifier;

+ (void)beginWithIdentifier:(unsigned long long)arg1;
+ (void)endWithIdentifier:(unsigned long long)arg1 error:(id)arg2;
+ (void)endWithIdentifier:(unsigned long long)arg1 item:(id)arg2 machContinuousTime:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)begin;
- (void)end;
- (void)endWithError:(id)arg1;
- (void)endWithItem:(id)arg1;
- (void)endWithItem:(id)arg1 machContinuousTime:(unsigned long long)arg2;
- (id)guard;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 timeout:(double)arg2;
- (void)setGuard:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;

@end
