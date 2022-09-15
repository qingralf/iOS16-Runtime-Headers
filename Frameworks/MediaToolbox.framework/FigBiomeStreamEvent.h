/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigBiomeStreamEvent : NSObject <BMStoreData, NSSecureCoding> {
    NSString * _bundleId;
    unsigned int  _dataVersion;
    NSDictionary * _payload;
    double  _timestamp;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *payload;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (id)bundleId;
- (unsigned int)dataVersion;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 bundleId:(id)arg2 payload:(id)arg3;
- (id)payload;
- (id)serialize;
- (double)timestamp;

@end