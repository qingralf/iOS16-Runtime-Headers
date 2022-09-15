/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryServiceTombstone : WBSHistoryServiceObject {
    double  _endTime;
    long long  _generation;
    double  _startTime;
    NSString * _url;
    NSData * _urlHash;
    NSData * _urlSalt;
}

@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) long long generation;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSData *urlHash;
@property (nonatomic, readonly) NSData *urlSalt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (long long)generation;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabaseID:(long long)arg1 url:(id)arg2 urlHash:(id)arg3 urlSalt:(id)arg4 startTime:(double)arg5 endTime:(double)arg6 generation:(long long)arg7;
- (id)initWithTombstone:(id)arg1;
- (double)startTime;
- (id)url;
- (id)urlHash;
- (id)urlSalt;

@end