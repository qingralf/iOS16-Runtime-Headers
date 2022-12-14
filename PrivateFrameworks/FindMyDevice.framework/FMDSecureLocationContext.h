/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDSecureLocationContext : NSObject <NSSecureCoding> {
    NSString * _findMyId;
    NSString * _mode;
}

@property (nonatomic, copy) NSString *findMyId;
@property (nonatomic, copy) NSString *mode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)findMyId;
- (id)initWithCoder:(id)arg1;
- (id)mode;
- (void)setFindMyId:(id)arg1;
- (void)setMode:(id)arg1;

@end
